//*Main> icompile addRoundKey 

void test(struct s_2_arr_unsignedS32_arr_unsignedS8 * v0, struct s_2_arr_unsignedS32_arr_unsignedS8 * v1, struct s_2_arr_unsignedS32_arr_unsignedS8 * out)
{
  uint32_t v12;
  uint32_t v13;
  uint32_t v6;
  uint32_t v7;
  uint32_t len14;
  uint32_t v10;
  uint32_t v11;
  
  v12 = at(uint32_t,(*v0).member1,0);
  v13 = at(uint32_t,(*v1).member1,0);
  v6 = min(v12, v13);
  v7 = min(at(uint32_t,(*v0).member1,1), at(uint32_t,(*v1).member1,1));
  (*out).member1 = setLength((*out).member1, sizeof(uint32_t), 2);
  at(uint32_t,(*out).member1,0) = v6;
  at(uint32_t,(*out).member1,1) = v7;
  len14 = (v7 * v6);
  (*out).member2 = initArray((*out).member2, sizeof(uint8_t), len14);
  for (uint32_t v5 = 0; v5 < len14; v5 += 1)
  {
    v10 = (v5 / v6);
    v11 = (v5 % v6);
    at(uint8_t,(*out).member2,v5) = (at(uint8_t,(*v0).member2,((v10 * v12) + v11)) ^ at(uint8_t,(*v1).member2,((v10 * v13) + v11)));
  }
}

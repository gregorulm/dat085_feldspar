//*Main> icompile shiftRows

void test(struct s_2_arr_unsignedS32_arr_unsignedS8 * v0, struct s_2_arr_unsignedS32_arr_unsignedS8 * out)
{
  uint32_t v5;
  uint32_t v6;
  uint32_t len8;
  uint32_t v7;
  
  v5 = at(uint32_t,(*v0).member1,0);
  v6 = at(uint32_t,(*v0).member1,1);
  (*out).member1 = setLength((*out).member1, sizeof(uint32_t), 2);
  at(uint32_t,(*out).member1,0) = v5;
  at(uint32_t,(*out).member1,1) = v6;
  len8 = (v6 * v5);
  (*out).member2 = initArray((*out).member2, sizeof(uint8_t), len8);
  for (uint32_t v4 = 0; v4 < len8; v4 += 1)
  {
    v7 = (v4 / v5);
    at(uint8_t,(*out).member2,v4) = at(uint8_t,(*v0).member2,((v7 * v5) + (((v4 % v5) + v7) % 4)));
  }
}

// *Main> icompile subBytes

void test(struct s_2_arr_unsignedS32_arr_unsignedS8 * v0, struct s_2_arr_unsignedS32_arr_unsignedS8 * out)
{
  uint32_t v5;
  uint32_t v6;
  struct array * v7 = NULL;
  uint32_t len8;
  
  v5 = at(uint32_t,(*v0).member1,0);
  v6 = at(uint32_t,(*v0).member1,1);
  v7 = initArray(v7, sizeof(uint8_t), 256);
  at(uint8_t,v7,0) = 99;
  at(uint8_t,v7,1) = 124;
  at(uint8_t,v7,2) = 119;
  at(uint8_t,v7,3) = 123;
  at(uint8_t,v7,4) = 242;
  at(uint8_t,v7,5) = 107;
  at(uint8_t,v7,6) = 111;
  at(uint8_t,v7,7) = 197;
  at(uint8_t,v7,8) = 48;
  at(uint8_t,v7,9) = 1;
  at(uint8_t,v7,10) = 103;
  at(uint8_t,v7,11) = 43;
  at(uint8_t,v7,12) = 254;
  at(uint8_t,v7,13) = 215;
  at(uint8_t,v7,14) = 171;
  at(uint8_t,v7,15) = 118;
  at(uint8_t,v7,16) = 202;
  at(uint8_t,v7,17) = 130;
  at(uint8_t,v7,18) = 201;
  at(uint8_t,v7,19) = 125;
  at(uint8_t,v7,20) = 250;
  at(uint8_t,v7,21) = 89;
  at(uint8_t,v7,22) = 71;
  at(uint8_t,v7,23) = 240;
  at(uint8_t,v7,24) = 173;
  at(uint8_t,v7,25) = 212;
  at(uint8_t,v7,26) = 162;
  at(uint8_t,v7,27) = 175;
  at(uint8_t,v7,28) = 156;
  at(uint8_t,v7,29) = 164;
  at(uint8_t,v7,30) = 114;
  at(uint8_t,v7,31) = 192;
  at(uint8_t,v7,32) = 183;
  at(uint8_t,v7,33) = 253;
  at(uint8_t,v7,34) = 147;
  at(uint8_t,v7,35) = 38;
  at(uint8_t,v7,36) = 54;
  at(uint8_t,v7,37) = 63;
  at(uint8_t,v7,38) = 247;
  at(uint8_t,v7,39) = 204;
  at(uint8_t,v7,40) = 52;
  at(uint8_t,v7,41) = 165;
  at(uint8_t,v7,42) = 229;
  at(uint8_t,v7,43) = 241;
  at(uint8_t,v7,44) = 113;
  at(uint8_t,v7,45) = 216;
  at(uint8_t,v7,46) = 49;
  at(uint8_t,v7,47) = 21;
  at(uint8_t,v7,48) = 4;
  at(uint8_t,v7,49) = 199;
  at(uint8_t,v7,50) = 35;
  at(uint8_t,v7,51) = 195;
  at(uint8_t,v7,52) = 24;
  at(uint8_t,v7,53) = 150;
  at(uint8_t,v7,54) = 5;
  at(uint8_t,v7,55) = 154;
  at(uint8_t,v7,56) = 7;
  at(uint8_t,v7,57) = 18;
  at(uint8_t,v7,58) = 128;
  at(uint8_t,v7,59) = 226;
  at(uint8_t,v7,60) = 235;
  at(uint8_t,v7,61) = 39;
  at(uint8_t,v7,62) = 178;
  at(uint8_t,v7,63) = 117;
  at(uint8_t,v7,64) = 9;
  at(uint8_t,v7,65) = 131;
  at(uint8_t,v7,66) = 44;
  at(uint8_t,v7,67) = 26;
  at(uint8_t,v7,68) = 27;
  at(uint8_t,v7,69) = 110;
  at(uint8_t,v7,70) = 90;
  at(uint8_t,v7,71) = 160;
  at(uint8_t,v7,72) = 82;
  at(uint8_t,v7,73) = 59;
  at(uint8_t,v7,74) = 214;
  at(uint8_t,v7,75) = 179;
  at(uint8_t,v7,76) = 41;
  at(uint8_t,v7,77) = 227;
  at(uint8_t,v7,78) = 47;
  at(uint8_t,v7,79) = 132;
  at(uint8_t,v7,80) = 83;
  at(uint8_t,v7,81) = 209;
  at(uint8_t,v7,82) = 0;
  at(uint8_t,v7,83) = 237;
  at(uint8_t,v7,84) = 32;
  at(uint8_t,v7,85) = 252;
  at(uint8_t,v7,86) = 177;
  at(uint8_t,v7,87) = 91;
  at(uint8_t,v7,88) = 106;
  at(uint8_t,v7,89) = 203;
  at(uint8_t,v7,90) = 190;
  at(uint8_t,v7,91) = 57;
  at(uint8_t,v7,92) = 74;
  at(uint8_t,v7,93) = 76;
  at(uint8_t,v7,94) = 88;
  at(uint8_t,v7,95) = 207;
  at(uint8_t,v7,96) = 208;
  at(uint8_t,v7,97) = 239;
  at(uint8_t,v7,98) = 170;
  at(uint8_t,v7,99) = 251;
  at(uint8_t,v7,100) = 67;
  at(uint8_t,v7,101) = 77;
  at(uint8_t,v7,102) = 51;
  at(uint8_t,v7,103) = 133;
  at(uint8_t,v7,104) = 69;
  at(uint8_t,v7,105) = 249;
  at(uint8_t,v7,106) = 2;
  at(uint8_t,v7,107) = 127;
  at(uint8_t,v7,108) = 80;
  at(uint8_t,v7,109) = 60;
  at(uint8_t,v7,110) = 159;
  at(uint8_t,v7,111) = 168;
  at(uint8_t,v7,112) = 81;
  at(uint8_t,v7,113) = 163;
  at(uint8_t,v7,114) = 64;
  at(uint8_t,v7,115) = 143;
  at(uint8_t,v7,116) = 146;
  at(uint8_t,v7,117) = 157;
  at(uint8_t,v7,118) = 56;
  at(uint8_t,v7,119) = 245;
  at(uint8_t,v7,120) = 188;
  at(uint8_t,v7,121) = 182;
  at(uint8_t,v7,122) = 218;
  at(uint8_t,v7,123) = 33;
  at(uint8_t,v7,124) = 16;
  at(uint8_t,v7,125) = 255;
  at(uint8_t,v7,126) = 243;
  at(uint8_t,v7,127) = 210;
  at(uint8_t,v7,128) = 205;
  at(uint8_t,v7,129) = 12;
  at(uint8_t,v7,130) = 19;
  at(uint8_t,v7,131) = 236;
  at(uint8_t,v7,132) = 95;
  at(uint8_t,v7,133) = 151;
  at(uint8_t,v7,134) = 68;
  at(uint8_t,v7,135) = 23;
  at(uint8_t,v7,136) = 196;
  at(uint8_t,v7,137) = 167;
  at(uint8_t,v7,138) = 126;
  at(uint8_t,v7,139) = 61;
  at(uint8_t,v7,140) = 100;
  at(uint8_t,v7,141) = 93;
  at(uint8_t,v7,142) = 25;
  at(uint8_t,v7,143) = 115;
  at(uint8_t,v7,144) = 96;
  at(uint8_t,v7,145) = 129;
  at(uint8_t,v7,146) = 79;
  at(uint8_t,v7,147) = 220;
  at(uint8_t,v7,148) = 34;
  at(uint8_t,v7,149) = 42;
  at(uint8_t,v7,150) = 144;
  at(uint8_t,v7,151) = 136;
  at(uint8_t,v7,152) = 70;
  at(uint8_t,v7,153) = 238;
  at(uint8_t,v7,154) = 184;
  at(uint8_t,v7,155) = 20;
  at(uint8_t,v7,156) = 222;
  at(uint8_t,v7,157) = 94;
  at(uint8_t,v7,158) = 11;
  at(uint8_t,v7,159) = 219;
  at(uint8_t,v7,160) = 224;
  at(uint8_t,v7,161) = 50;
  at(uint8_t,v7,162) = 58;
  at(uint8_t,v7,163) = 10;
  at(uint8_t,v7,164) = 73;
  at(uint8_t,v7,165) = 6;
  at(uint8_t,v7,166) = 36;
  at(uint8_t,v7,167) = 92;
  at(uint8_t,v7,168) = 194;
  at(uint8_t,v7,169) = 211;
  at(uint8_t,v7,170) = 172;
  at(uint8_t,v7,171) = 98;
  at(uint8_t,v7,172) = 145;
  at(uint8_t,v7,173) = 149;
  at(uint8_t,v7,174) = 228;
  at(uint8_t,v7,175) = 121;
  at(uint8_t,v7,176) = 231;
  at(uint8_t,v7,177) = 200;
  at(uint8_t,v7,178) = 55;
  at(uint8_t,v7,179) = 109;
  at(uint8_t,v7,180) = 141;
  at(uint8_t,v7,181) = 213;
  at(uint8_t,v7,182) = 78;
  at(uint8_t,v7,183) = 169;
  at(uint8_t,v7,184) = 108;
  at(uint8_t,v7,185) = 86;
  at(uint8_t,v7,186) = 244;
  at(uint8_t,v7,187) = 234;
  at(uint8_t,v7,188) = 101;
  at(uint8_t,v7,189) = 122;
  at(uint8_t,v7,190) = 174;
  at(uint8_t,v7,191) = 8;
  at(uint8_t,v7,192) = 186;
  at(uint8_t,v7,193) = 120;
  at(uint8_t,v7,194) = 37;
  at(uint8_t,v7,195) = 46;
  at(uint8_t,v7,196) = 28;
  at(uint8_t,v7,197) = 166;
  at(uint8_t,v7,198) = 180;
  at(uint8_t,v7,199) = 198;
  at(uint8_t,v7,200) = 232;
  at(uint8_t,v7,201) = 221;
  at(uint8_t,v7,202) = 116;
  at(uint8_t,v7,203) = 31;
  at(uint8_t,v7,204) = 75;
  at(uint8_t,v7,205) = 189;
  at(uint8_t,v7,206) = 139;
  at(uint8_t,v7,207) = 138;
  at(uint8_t,v7,208) = 112;
  at(uint8_t,v7,209) = 62;
  at(uint8_t,v7,210) = 181;
  at(uint8_t,v7,211) = 102;
  at(uint8_t,v7,212) = 72;
  at(uint8_t,v7,213) = 3;
  at(uint8_t,v7,214) = 246;
  at(uint8_t,v7,215) = 14;
  at(uint8_t,v7,216) = 97;
  at(uint8_t,v7,217) = 53;
  at(uint8_t,v7,218) = 87;
  at(uint8_t,v7,219) = 185;
  at(uint8_t,v7,220) = 134;
  at(uint8_t,v7,221) = 193;
  at(uint8_t,v7,222) = 29;
  at(uint8_t,v7,223) = 158;
  at(uint8_t,v7,224) = 225;
  at(uint8_t,v7,225) = 248;
  at(uint8_t,v7,226) = 152;
  at(uint8_t,v7,227) = 17;
  at(uint8_t,v7,228) = 105;
  at(uint8_t,v7,229) = 217;
  at(uint8_t,v7,230) = 142;
  at(uint8_t,v7,231) = 148;
  at(uint8_t,v7,232) = 155;
  at(uint8_t,v7,233) = 30;
  at(uint8_t,v7,234) = 135;
  at(uint8_t,v7,235) = 233;
  at(uint8_t,v7,236) = 206;
  at(uint8_t,v7,237) = 85;
  at(uint8_t,v7,238) = 40;
  at(uint8_t,v7,239) = 223;
  at(uint8_t,v7,240) = 140;
  at(uint8_t,v7,241) = 161;
  at(uint8_t,v7,242) = 137;
  at(uint8_t,v7,243) = 13;
  at(uint8_t,v7,244) = 191;
  at(uint8_t,v7,245) = 230;
  at(uint8_t,v7,246) = 66;
  at(uint8_t,v7,247) = 104;
  at(uint8_t,v7,248) = 65;
  at(uint8_t,v7,249) = 153;
  at(uint8_t,v7,250) = 45;
  at(uint8_t,v7,251) = 15;
  at(uint8_t,v7,252) = 176;
  at(uint8_t,v7,253) = 84;
  at(uint8_t,v7,254) = 187;
  at(uint8_t,v7,255) = 22;
  (*out).member1 = setLength((*out).member1, sizeof(uint32_t), 2);
  at(uint32_t,(*out).member1,0) = v5;
  at(uint32_t,(*out).member1,1) = v6;
  len8 = (v6 * v5);
  (*out).member2 = initArray((*out).member2, sizeof(uint8_t), len8);
  for (uint32_t v4 = 0; v4 < len8; v4 += 1)
  {
    at(uint8_t,(*out).member2,v4) = at(uint8_t,v7,((uint32_t)(at(uint8_t,(*v0).member2,(((v4 / v5) * v5) + (v4 % v5))))));
  }
  freeArray(v7);
}
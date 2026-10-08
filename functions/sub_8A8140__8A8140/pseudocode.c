float *__cdecl sub_8A8140(char a1, float *a2)
{
  double v2; // st7
  float *result; // eax
  double v4; // st7
  double v5; // st7
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]

  switch ( a1 & 0x3F ) /*0x8a8156*/
  {
    case 1: /*0x8a8156*/
      v6 = 1.0; /*0x8a815f*/
      v2 = 0.0; /*0x8a8162*/
      v8 = 0.0; /*0x8a8164*/
      goto LABEL_3; /*0x8a8164*/
    case 2: /*0x8a8156*/
    case 0xA: /*0x8a8156*/
      v7 = flt_A37450; /*0x8a818d*/
      v9 = flt_A9792C; /*0x8a8196*/
      v4 = flt_A97928; /*0x8a819a*/
      goto LABEL_5; /*0x8a819a*/
    case 3: /*0x8a8156*/
      v5 = flt_A524B0; /*0x8a81cf*/
      *a2 = flt_A97924; /*0x8a81d5*/
      v10 = v5; /*0x8a81d7*/
      v13 = v5; /*0x8a81df*/
      a2[1] = v10; /*0x8a81e7*/
      a2[2] = v13; /*0x8a81ea*/
      return a2; /*0x8a81f0*/
    case 4: /*0x8a8156*/
      v7 = flt_A97920; /*0x8a81f7*/
      v9 = flt_A9791C; /*0x8a8200*/
      v4 = flt_A97918; /*0x8a8204*/
      goto LABEL_5; /*0x8a820a*/
    case 5: /*0x8a8156*/
      v6 = flt_A5247C; /*0x8a8212*/
      v8 = flt_A97914; /*0x8a821b*/
      v2 = flt_A73DE4; /*0x8a821f*/
      goto LABEL_3; /*0x8a8225*/
    case 6: /*0x8a8156*/
      v7 = flt_A37450; /*0x8a8230*/
      v9 = flt_A97910; /*0x8a8239*/
      v4 = flt_A9790C; /*0x8a823d*/
      goto LABEL_5; /*0x8a8243*/
    case 7: /*0x8a8156*/
      v6 = flt_A97908; /*0x8a824e*/
      v8 = kDistantLODNormalLimit_097; /*0x8a8257*/
      v2 = flt_A37450; /*0x8a825b*/
      goto LABEL_3; /*0x8a8261*/
    case 8: /*0x8a8156*/
      v4 = 0.0; /*0x8a8266*/
      v7 = 0.0; /*0x8a8268*/
      v9 = 1.0; /*0x8a826d*/
      goto LABEL_5; /*0x8a8271*/
    case 9: /*0x8a8156*/
      v6 = flt_A524B0; /*0x8a827c*/
      v8 = flt_A97904; /*0x8a8285*/
      v2 = flt_A63CA4; /*0x8a8289*/
      goto LABEL_3; /*0x8a828f*/
    case 0xB: /*0x8a8156*/
      v7 = flt_A97900; /*0x8a829a*/
      v4 = flt_A52A74; /*0x8a829d*/
      v9 = flt_A52A74; /*0x8a82a3*/
      goto LABEL_5; /*0x8a82a7*/
    case 0xC: /*0x8a8156*/
    case 0xE: /*0x8a8156*/
      v6 = flt_A97910; /*0x8a82b2*/
      v8 = flt_A978FC; /*0x8a82bb*/
      v2 = flt_A41328; /*0x8a82bf*/
      goto LABEL_3; /*0x8a82c5*/
    case 0xD: /*0x8a8156*/
    case 0x11: /*0x8a8156*/
      v6 = flt_A97924; /*0x8a82ee*/
      v8 = kDistantLODNormalLimit_097; /*0x8a82f7*/
      v2 = flt_A978F4; /*0x8a82fb*/
      goto LABEL_3; /*0x8a8301*/
    case 0x10: /*0x8a8156*/
      v7 = flt_A97910; /*0x8a82d0*/
      v9 = flt_A978F8; /*0x8a82d9*/
      v4 = flt_A41724; /*0x8a82dd*/
      goto LABEL_5; /*0x8a82e3*/
    case 0x12: /*0x8a8156*/
      v4 = 0.0; /*0x8a8306*/
      v7 = 0.0; /*0x8a8308*/
      v9 = flt_A41724; /*0x8a8311*/
      goto LABEL_5; /*0x8a8315*/
    case 0x14: /*0x8a8156*/
      v6 = 1.0; /*0x8a831c*/
      v8 = 1.0; /*0x8a831f*/
      v2 = 0.0; /*0x8a8323*/
LABEL_3:
      v11 = v2; /*0x8a8168*/
      *a2 = v6; /*0x8a8177*/
      a2[1] = v8; /*0x8a817d*/
      a2[2] = v11; /*0x8a8180*/
      result = a2; /*0x8a8168*/
      break; /*0x8a8186*/
    case 0x15: /*0x8a8156*/
      v7 = 1.0; /*0x8a832c*/
      v9 = flt_A524B0; /*0x8a8335*/
      v4 = 0.0; /*0x8a8339*/
LABEL_5:
      v12 = v4; /*0x8a81a0*/
      *a2 = v7; /*0x8a81af*/
      a2[1] = v9; /*0x8a81b5*/
      a2[2] = v12; /*0x8a81b8*/
      result = a2; /*0x8a81a0*/
      break; /*0x8a81be*/
    default:
      *a2 = stru_B25AC4.x; /*0x8a834a*/
      a2[1] = stru_B25AC4.y; /*0x8a8352*/
      a2[2] = stru_B25AC4.z; /*0x8a835b*/
      result = a2; /*0x8a8346*/
      break; /*0x8a8346*/
  }
  return result; /*0x8a8183*/
}

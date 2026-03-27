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

  switch ( a1 & 0x3F )
  {
    case 1:
      v6 = 1.0;
      v2 = 0.0;
      v8 = 0.0;
      goto LABEL_3;
    case 2:
    case 0xA:
      v7 = flt_A37450;
      v9 = flt_A9792C;
      v4 = flt_A97928;
      goto LABEL_5;
    case 3:
      v5 = flt_A524B0;
      *a2 = flt_A97924;
      v10 = v5;
      v13 = v5;
      a2[1] = v10;
      a2[2] = v13;
      return a2;
    case 4:
      v7 = flt_A97920;
      v9 = flt_A9791C;
      v4 = flt_A97918;
      goto LABEL_5;
    case 5:
      v6 = flt_A5247C;
      v8 = flt_A97914;
      v2 = flt_A73DE4;
      goto LABEL_3;
    case 6:
      v7 = flt_A37450;
      v9 = flt_A97910;
      v4 = flt_A9790C;
      goto LABEL_5;
    case 7:
      v6 = flt_A97908;
      v8 = flt_A34F5C;
      v2 = flt_A37450;
      goto LABEL_3;
    case 8:
      v4 = 0.0;
      v7 = 0.0;
      v9 = 1.0;
      goto LABEL_5;
    case 9:
      v6 = flt_A524B0;
      v8 = flt_A97904;
      v2 = flt_A63CA4;
      goto LABEL_3;
    case 0xB:
      v7 = flt_A97900;
      v4 = flt_A52A74;
      v9 = flt_A52A74;
      goto LABEL_5;
    case 0xC:
    case 0xE:
      v6 = flt_A97910;
      v8 = flt_A978FC;
      v2 = flt_A41328;
      goto LABEL_3;
    case 0xD:
    case 0x11:
      v6 = flt_A97924;
      v8 = flt_A34F5C;
      v2 = flt_A978F4;
      goto LABEL_3;
    case 0x10:
      v7 = flt_A97910;
      v9 = flt_A978F8;
      v4 = flt_A41724;
      goto LABEL_5;
    case 0x12:
      v4 = 0.0;
      v7 = 0.0;
      v9 = flt_A41724;
      goto LABEL_5;
    case 0x14:
      v6 = 1.0;
      v8 = 1.0;
      v2 = 0.0;
LABEL_3:
      v11 = v2;
      *a2 = v6;
      a2[1] = v8;
      a2[2] = v11;
      result = a2;
      break;
    case 0x15:
      v7 = 1.0;
      v9 = flt_A524B0;
      v4 = 0.0;
LABEL_5:
      v12 = v4;
      *a2 = v7;
      a2[1] = v9;
      a2[2] = v12;
      result = a2;
      break;
    default:
      *(_DWORD *)a2 = dword_B25AC4;
      *((_DWORD *)a2 + 1) = dword_B25AC8;
      *((_DWORD *)a2 + 2) = dword_B25ACC;
      result = a2;
      break;
  }
  return result;
}

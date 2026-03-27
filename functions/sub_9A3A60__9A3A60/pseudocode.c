signed int __stdcall sub_9A3A60(int a1, int a2, NiObjectNET *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  float *v9; // ecx
  float *v10; // eax
  signed int result; // eax
  float *v12; // ecx
  float *v13; // eax
  float *v14; // ecx
  float *v15; // eax
  float *v16; // ecx
  float *v17; // eax
  int v18; // ecx
  float *v19; // eax
  NiExtraData *ExtraData; // eax
  float *v21; // eax
  float *v22; // esi
  float v23; // [esp+8h] [ebp+4h]
  float v24; // [esp+8h] [ebp+4h]
  float v25; // [esp+8h] [ebp+4h]
  float v26; // [esp+18h] [ebp+14h]

  v8 = *(_DWORD *)(a2 + 0x10);
  switch ( v8 )
  {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      ExtraData = NiObjectNET_GetExtraData(a3, off_B329E4[0]);
      if ( ExtraData )
      {
        v26 = *(float *)&ExtraData[1].__vftable;
        switch ( v8 )
        {
          case 3:
            goto LABEL_15;
          case 4:
            v26 = sin(v26);
            goto LABEL_15;
          case 5:
            v26 = cos(v26);
            goto LABEL_15;
          case 6:
            v26 = tan(v26);
LABEL_15:
            v21 = (float *)(0x10 * a1);
            v21[0x2EAA9C] = v26;
            v21[0x2EAA9D] = v26;
            v21[0x2EAA9E] = v26;
            v21[0x2EAA9F] = v26;
            result = 7;
            break;
          case 7:
            v22 = (float *)(0x10 * a1);
            v22[0x2EAA9C] = v26;
            v23 = sin(v26);
            v22[0x2EAA9D] = v23;
            v24 = cos(v26);
            v22[0x2EAA9E] = v24;
            v25 = tan(v26);
            v22[0x2EAA9F] = v25;
            result = 7;
            break;
          default:
            goto LABEL_20;
        }
      }
      else
      {
        result = 0x80000010;
      }
      break;
    case 8:
      v9 = *(float **)(a5 + 0x10);
      if ( !v9 )
        goto LABEL_20;
      v10 = (float *)(0x10 * a1);
      v10[0x2EAA9C] = v9[0xA];
      v10[0x2EAA9D] = v9[0xB];
      v10[0x2EAA9E] = v9[0xC];
      v10[0x2EAA9F] = v9[0x14];
      result = 0xA;
      break;
    case 9:
      v12 = *(float **)(a5 + 0x10);
      if ( !v12 )
        goto LABEL_20;
      v13 = (float *)(0x10 * a1);
      v13[0x2EAA9C] = v12[7];
      v13[0x2EAA9D] = v12[8];
      v13[0x2EAA9E] = v12[9];
      v13[0x2EAA9F] = v12[0x14];
      result = 0xA;
      break;
    case 0xA:
      v14 = *(float **)(a5 + 0x10);
      if ( !v14 )
        goto LABEL_20;
      v15 = (float *)(0x10 * a1);
      v15[0x2EAA9C] = v14[0xD];
      v15[0x2EAA9D] = v14[0xE];
      v15[0x2EAA9E] = v14[0xF];
      v15[0x2EAA9F] = v14[0x14];
      result = 0xA;
      break;
    case 0xB:
      v16 = *(float **)(a5 + 0x10);
      if ( !v16 )
        goto LABEL_20;
      v17 = (float *)(0x10 * a1);
      v17[0x2EAA9C] = v16[0x10];
      v17[0x2EAA9D] = v16[0x11];
      v17[0x2EAA9E] = v16[0x12];
      v17[0x2EAA9F] = v16[0x14];
      result = 0xA;
      break;
    case 0xC:
      v18 = *(_DWORD *)(a5 + 0x10);
      if ( !v18 )
        goto LABEL_20;
      v19 = (float *)(0x10 * a1);
      v19[0x2EAA9C] = *(float *)(v18 + 0x4C);
      v19[0x2EAA9D] = *(float *)(v18 + 0x4C);
      v19[0x2EAA9E] = *(float *)(v18 + 0x4C);
      v19[0x2EAA9F] = *(float *)(v18 + 0x4C);
      result = 0xA;
      break;
    default:
LABEL_20:
      result = 0;
      break;
  }
  return result;
}

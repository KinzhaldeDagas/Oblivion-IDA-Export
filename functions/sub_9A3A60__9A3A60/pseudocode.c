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

  v8 = *(_DWORD *)(a2 + 0x10); /*0x9a3a65*/
  switch ( v8 ) /*0x9a3a74*/
  {
    case 3: /*0x9a3a74*/
    case 4: /*0x9a3a74*/
    case 5: /*0x9a3a74*/
    case 6: /*0x9a3a74*/
    case 7: /*0x9a3a74*/
      ExtraData = NiObjectNET_GetExtraData(a3, off_B329E4[0]); /*0x9a3bd4*/
      if ( ExtraData ) /*0x9a3bdb*/
      {
        v26 = *(float *)&ExtraData[1].__vftable; /*0x9a3bef*/
        switch ( v8 ) /*0x9a3bf9*/
        {
          case 3: /*0x9a3bf9*/
            goto LABEL_15;
          case 4: /*0x9a3bf9*/
            v26 = sin(v26); /*0x9a3c35*/
            goto LABEL_15; /*0x9a3c41*/
          case 5: /*0x9a3bf9*/
            v26 = cos(v26); /*0x9a3c4c*/
            goto LABEL_15; /*0x9a3c58*/
          case 6: /*0x9a3bf9*/
            v26 = tan(v26); /*0x9a3c63*/
LABEL_15:
            v21 = (float *)(0x10 * a1); /*0x9a3c00*/
            v21[0x2EAA9C] = v26; /*0x9a3c0b*/
            v21[0x2EAA9D] = v26; /*0x9a3c12*/
            v21[0x2EAA9E] = v26; /*0x9a3c18*/
            v21[0x2EAA9F] = v26; /*0x9a3c1e*/
            result = 7; /*0x9a3c24*/
            break; /*0x9a3c29*/
          case 7: /*0x9a3bf9*/
            v22 = (float *)(0x10 * a1); /*0x9a3c79*/
            v22[0x2EAA9C] = v26; /*0x9a3c7c*/
            v23 = sin(v26); /*0x9a3c87*/
            v22[0x2EAA9D] = v23; /*0x9a3c8f*/
            v24 = cos(v26); /*0x9a3c9e*/
            v22[0x2EAA9E] = v24; /*0x9a3ca6*/
            v25 = tan(v26); /*0x9a3cb5*/
            v22[0x2EAA9F] = v25; /*0x9a3cc2*/
            result = 7; /*0x9a3cbd*/
            break; /*0x9a3cc9*/
          default:
            goto LABEL_20;
        }
      }
      else
      {
        result = 0x80000010; /*0x9a3bdd*/
      }
      break; /*0x9a3be3*/
    case 8: /*0x9a3a74*/
      v9 = *(float **)(a5 + 0x10); /*0x9a3a7f*/
      if ( !v9 ) /*0x9a3a84*/
        goto LABEL_20; /*0x9a3a84*/
      v10 = (float *)(0x10 * a1); /*0x9a3a91*/
      v10[0x2EAA9C] = v9[0xA]; /*0x9a3a94*/
      v10[0x2EAA9D] = v9[0xB]; /*0x9a3a9e*/
      v10[0x2EAA9E] = v9[0xC]; /*0x9a3aa7*/
      v10[0x2EAA9F] = v9[0x14]; /*0x9a3ab0*/
      result = 0xA; /*0x9a3ab6*/
      break; /*0x9a3abb*/
    case 9: /*0x9a3a74*/
      v12 = *(float **)(a5 + 0x10); /*0x9a3ac2*/
      if ( !v12 ) /*0x9a3ac7*/
        goto LABEL_20; /*0x9a3ac7*/
      v13 = (float *)(0x10 * a1); /*0x9a3ad4*/
      v13[0x2EAA9C] = v12[7]; /*0x9a3ad7*/
      v13[0x2EAA9D] = v12[8]; /*0x9a3ae1*/
      v13[0x2EAA9E] = v12[9]; /*0x9a3aea*/
      v13[0x2EAA9F] = v12[0x14]; /*0x9a3af3*/
      result = 0xA; /*0x9a3af9*/
      break; /*0x9a3afe*/
    case 0xA: /*0x9a3a74*/
      v14 = *(float **)(a5 + 0x10); /*0x9a3b05*/
      if ( !v14 ) /*0x9a3b0a*/
        goto LABEL_20; /*0x9a3b0a*/
      v15 = (float *)(0x10 * a1); /*0x9a3b17*/
      v15[0x2EAA9C] = v14[0xD]; /*0x9a3b1a*/
      v15[0x2EAA9D] = v14[0xE]; /*0x9a3b24*/
      v15[0x2EAA9E] = v14[0xF]; /*0x9a3b2d*/
      v15[0x2EAA9F] = v14[0x14]; /*0x9a3b36*/
      result = 0xA; /*0x9a3b3c*/
      break; /*0x9a3b41*/
    case 0xB: /*0x9a3a74*/
      v16 = *(float **)(a5 + 0x10); /*0x9a3b48*/
      if ( !v16 ) /*0x9a3b4d*/
        goto LABEL_20; /*0x9a3b4d*/
      v17 = (float *)(0x10 * a1); /*0x9a3b5a*/
      v17[0x2EAA9C] = v16[0x10]; /*0x9a3b5d*/
      v17[0x2EAA9D] = v16[0x11]; /*0x9a3b67*/
      v17[0x2EAA9E] = v16[0x12]; /*0x9a3b70*/
      v17[0x2EAA9F] = v16[0x14]; /*0x9a3b79*/
      result = 0xA; /*0x9a3b7f*/
      break; /*0x9a3b84*/
    case 0xC: /*0x9a3a74*/
      v18 = *(_DWORD *)(a5 + 0x10); /*0x9a3b8b*/
      if ( !v18 ) /*0x9a3b90*/
        goto LABEL_20; /*0x9a3b90*/
      v19 = (float *)(0x10 * a1); /*0x9a3b9d*/
      v19[0x2EAA9C] = *(float *)(v18 + 0x4C); /*0x9a3ba0*/
      v19[0x2EAA9D] = *(float *)(v18 + 0x4C); /*0x9a3baa*/
      v19[0x2EAA9E] = *(float *)(v18 + 0x4C); /*0x9a3bb3*/
      v19[0x2EAA9F] = *(float *)(v18 + 0x4C); /*0x9a3bbc*/
      result = 0xA; /*0x9a3bc2*/
      break; /*0x9a3bc7*/
    default:
LABEL_20:
      result = 0; /*0x9a3ccc*/
      break; /*0x9a3ccc*/
  }
  return result; /*0x9a3be2*/
}

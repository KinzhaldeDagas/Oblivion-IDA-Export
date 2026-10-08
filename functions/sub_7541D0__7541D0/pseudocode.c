void __thiscall sub_7541D0(int this, float a2, int a3)
{
  int v4; // ecx
  unsigned __int16 i; // di
  float *v6; // esi
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // [esp+10h] [ebp-FCh]
  float v12; // [esp+14h] [ebp-F8h]
  float v13; // [esp+14h] [ebp-F8h]
  float v14; // [esp+18h] [ebp-F4h]
  float v15; // [esp+18h] [ebp-F4h]
  float v16; // [esp+1Ch] [ebp-F0h]
  float v17; // [esp+1Ch] [ebp-F0h]
  float v18; // [esp+20h] [ebp-ECh]
  float v19; // [esp+20h] [ebp-ECh]
  float v20; // [esp+24h] [ebp-E8h]
  float v21; // [esp+28h] [ebp-E4h]
  float v22; // [esp+2Ch] [ebp-E0h]
  NiTransform out; // [esp+3Ch] [ebp-D0h] BYREF
  float v24[13]; // [esp+70h] [ebp-9Ch] BYREF
  NiTransform local; // [esp+A4h] [ebp-68h] BYREF
  NiTransform parent; // [esp+D8h] [ebp-34h] BYREF

  if ( *(float *)(this + 0x38) > (double)a2 || *(float *)(this + 0x34) + *(float *)(this + 0x38) <= a2 ) /*0x7541f6*/
  {
    *(float *)(this + 0x38) = a2; /*0x7541fc*/
    if ( 0.0 != *(float *)(this + 0x1C) ) /*0x754209*/
    {
      if ( *(_WORD *)(a3 + 0x48) ) /*0x754217*/
      {
        v4 = *(_DWORD *)(this + 0x18); /*0x754222*/
        if ( v4 ) /*0x754227*/
        {
          if ( 0.0 == *(float *)(this + 0x20) ) /*0x754235*/
          {
            if ( *(_BYTE *)(this + 0x24) ) /*0x754237*/
              sub_753F80((float *)this, SLODWORD(a2), a3); /*0x754244*/
            else
              sub_753E20((float *)this, SLODWORD(a2), a3); /*0x754254*/
          }
          else
          {
            qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x754277*/
            qmemcpy(v24, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v24)); /*0x75428f*/
            sub_718A80(v24, &parent); /*0x754296*/
            NiTransform_Compose(&parent, &out, &local); /*0x7542af*/
            for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i ) /*0x7542b6*/
            {
              v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i); /*0x7542cf*/
              v7 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * i); /*0x7542dc*/
              v20 = *v7 - out.pos.x; /*0x7542f8*/
              v21 = v7[1] - out.pos.y; /*0x754304*/
              v22 = v7[2] - out.pos.z; /*0x754310*/
              v12 = v21 * v21 + v20 * v20 + v22 * v22; /*0x754330*/
              v13 = sqrt(v12); /*0x75433d*/
              if ( !*(_BYTE *)(this + 0x24) || *(float *)(this + 0x28) >= (double)v13 ) /*0x75435d*/
              {
                v8 = rand(); /*0x754363*/
                v14 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928; /*0x75437e*/
                v9 = rand(); /*0x754382*/
                v16 = ((double)v9 + (double)v9) / dbl_A3D5A8 - dbl_A2F928; /*0x75439d*/
                v10 = rand(); /*0x7543a1*/
                v18 = ((double)v10 + (double)v10) / dbl_A3D5A8 - 1.0; /*0x7543bc*/
                v11 = *(float *)(this + 0x1C) / (*(float *)(this + 0x20) * v13 + 1.0); /*0x7543cc*/
                v15 = v11 * v14; /*0x7543da*/
                v17 = v11 * v16; /*0x7543e4*/
                v19 = v11 * v18; /*0x7543ec*/
                *v6 = *v6 + v15; /*0x7543f6*/
                v6[1] = v6[1] + v17; /*0x7543ff*/
                v6[2] = v19 + v6[2]; /*0x754409*/
              }
            }
          }
        }
      }
    }
  }
}

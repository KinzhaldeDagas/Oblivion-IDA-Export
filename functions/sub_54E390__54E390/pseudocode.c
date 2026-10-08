char **__thiscall sub_54E390(char **this)
{
  int v1; // eax
  char **v2; // esi
  _DWORD *v3; // ecx
  NiSourceTexture *v4; // edi
  NiPixelData *pixelData; // eax
  int *v6; // ecx
  int v7; // ebx
  _DWORD *v8; // edx
  int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  int v12; // ebp
  unsigned __int8 *v13; // ebx
  char *v14; // ecx
  char *v15; // ecx
  char *v16; // ecx
  char *v17; // ecx
  int v19; // [esp+14h] [ebp-28h]
  unsigned int v20; // [esp+18h] [ebp-24h]
  NiSourceTexture *v21; // [esp+1Ch] [ebp-20h]
  int v22[4]; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v23; // [esp+38h] [ebp-4h]

  v1 = (int)*(this + 4); /*0x54e3b7*/
  v2 = this + 3; /*0x54e3bc*/
  if ( !v1 || !((int)&(*(this + 5))[-v1] >> 4) ) /*0x54e3c6*/
  {
    v3 = *(this + 2); /*0x54e3cf*/
    if ( v3 ) /*0x54e3d4*/
    {
      v4 = sub_480000(v3, &unk_B25E00); /*0x54e3e5*/
      v21 = v4; /*0x54e3ec*/
      if ( v4 ) /*0x54e3f0*/
        InterlockedIncrement((volatile LONG *)&v4->members); /*0x54e3f6*/
      v23 = 0; /*0x54e3fe*/
      if ( v4 ) /*0x54e406*/
      {
        pixelData = v4->members.pixelData; /*0x54e40c*/
        v6 = *((int **)pixelData + 0x17); /*0x54e411*/
        *(float *)&v22[3] = 0.0; /*0x54e414*/
        v7 = *v6; /*0x54e418*/
        *(float *)&v22[2] = 0.0; /*0x54e41a*/
        v8 = *((_DWORD **)pixelData + 0x15); /*0x54e41e*/
        *(float *)&v22[1] = 0.0; /*0x54e421*/
        v9 = *((_DWORD *)pixelData + 0x14) + v7; /*0x54e425*/
        *(float *)v22 = 0.0; /*0x54e428*/
        v10 = **((_DWORD **)pixelData + 0x16) * *v8; /*0x54e434*/
        v20 = v10; /*0x54e43e*/
        sub_54E230(v2, v10, v22); /*0x54e442*/
        v11 = 0; /*0x54e447*/
        if ( v10 ) /*0x54e44b*/
        {
          v12 = 0; /*0x54e451*/
          v13 = (unsigned __int8 *)(v9 + 2); /*0x54e453*/
          do /*0x54e50d*/
          {
            v14 = v2[1]; /*0x54e456*/
            if ( !v14 || v11 >= (v2[2] - v14) >> 4 ) /*0x54e467*/
              _invalid_parameter_noinfo(); /*0x54e469*/
            *(float *)&v2[1][v12] = (float)v13[0xFFFFFFFE]; /*0x54e47d*/
            v15 = v2[1]; /*0x54e480*/
            if ( !v15 || v11 >= (v2[2] - v15) >> 4 ) /*0x54e491*/
              _invalid_parameter_noinfo(); /*0x54e493*/
            *(float *)&v2[1][v12 + 4] = (float)v13[0xFFFFFFFF]; /*0x54e4a7*/
            v16 = v2[1]; /*0x54e4ab*/
            if ( !v16 || v11 >= (v2[2] - v16) >> 4 ) /*0x54e4bc*/
              _invalid_parameter_noinfo(); /*0x54e4be*/
            *(float *)&v2[1][v12 + 8] = (float)*v13; /*0x54e4d1*/
            v17 = v2[1]; /*0x54e4d5*/
            if ( !v17 || v11 >= (v2[2] - v17) >> 4 ) /*0x54e4e6*/
              _invalid_parameter_noinfo(); /*0x54e4e8*/
            v19 = v13[1]; /*0x54e4f4*/
            ++v11; /*0x54e4f8*/
            v13 += 4; /*0x54e4fb*/
            v12 += 0x10; /*0x54e502*/
            *(float *)&v2[1][v12 - 4] = (float)v19; /*0x54e509*/
          }
          while ( v11 < v20 ); /*0x54e50d*/
        }
        v23 = 0xFFFFFFFF; /*0x54e51b*/
        if ( !InterlockedDecrement((volatile LONG *)&v21->members) ) /*0x54e523*/
          v21->vtbl->super.super.super.Destructor((NiRefObject *)v21, 1); /*0x54e535*/
      }
    }
  }
  return v2; /*0x54e539*/
}

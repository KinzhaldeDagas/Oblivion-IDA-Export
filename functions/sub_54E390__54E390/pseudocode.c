_DWORD *__thiscall sub_54E390(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // esi
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
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v19; // [esp+14h] [ebp-28h]
  unsigned int v20; // [esp+18h] [ebp-24h]
  NiSourceTexture *v21; // [esp+1Ch] [ebp-20h]
  int v22[4]; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v23; // [esp+38h] [ebp-4h]

  v1 = *(this + 4);
  v2 = this + 3;
  if ( !v1 || !((*(this + 5) - v1) >> 4) )
  {
    v3 = (_DWORD *)*(this + 2);
    if ( v3 )
    {
      v4 = sub_480000(v3, &unk_B25E00);
      v21 = v4;
      if ( v4 )
        InterlockedIncrement((volatile LONG *)&v4->members);
      v23 = 0;
      if ( v4 )
      {
        pixelData = v4->members.pixelData;
        v6 = *((int **)pixelData + 0x17);
        *(float *)&v22[3] = 0.0;
        v7 = *v6;
        *(float *)&v22[2] = 0.0;
        v8 = *((_DWORD **)pixelData + 0x15);
        *(float *)&v22[1] = 0.0;
        v9 = *((_DWORD *)pixelData + 0x14) + v7;
        *(float *)v22 = 0.0;
        v10 = **((_DWORD **)pixelData + 0x16) * *v8;
        v20 = v10;
        sub_54E230(v2, v10, v22);
        v11 = 0;
        if ( v10 )
        {
          v12 = 0;
          v13 = (unsigned __int8 *)(v9 + 2);
          do
          {
            v14 = v2[1];
            if ( !v14 || v11 >= (v2[2] - v14) >> 4 )
              _invalid_parameter_noinfo();
            *(float *)(v2[1] + v12) = (float)v13[0xFFFFFFFE];
            v15 = v2[1];
            if ( !v15 || v11 >= (v2[2] - v15) >> 4 )
              _invalid_parameter_noinfo();
            *(float *)(v2[1] + v12 + 4) = (float)v13[0xFFFFFFFF];
            v16 = v2[1];
            if ( !v16 || v11 >= (v2[2] - v16) >> 4 )
              _invalid_parameter_noinfo();
            *(float *)(v2[1] + v12 + 8) = (float)*v13;
            v17 = v2[1];
            if ( !v17 || v11 >= (v2[2] - v17) >> 4 )
              _invalid_parameter_noinfo();
            v19 = v13[1];
            ++v11;
            v13 += 4;
            v12 += 0x10;
            *(float *)(v2[1] + v12 - 4) = (float)v19;
          }
          while ( v11 < v20 );
        }
        v23 = 0xFFFFFFFF;
        if ( !InterlockedDecrement((volatile LONG *)&v21->members) )
          v21->vtbl->super.super.super.Destructor((NiRefObject *)v21, 1);
      }
    }
  }
  return v2;
}

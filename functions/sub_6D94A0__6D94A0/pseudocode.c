void __thiscall sub_6D94A0(_DWORD *this, float *a2, float *a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  unsigned __int8 v6; // dl
  float *v7; // eax
  unsigned __int8 *v8; // esi
  float **v9; // ecx
  int v10; // ebp
  float v11; // [esp+4h] [ebp-Ch]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+Ch] [ebp-4h]

  v3 = *(this + 7);
  if ( v3
    && (v4 = *(_DWORD *)(v3 + 8), v5 = *(_DWORD *)(v3 + 0x10),
                                  v6 = *(_BYTE *)(v3 + 0x14),
                                  v7 = *(float **)(v3 + 0xC),
                                  v4) )
  {
    if ( v5 == 4 )
    {
      v13 = flt_A7DEB4;
      v14 = -v13;
      v8 = (unsigned __int8 *)(v7 + 0xB);
      v9 = (float **)(v7 + 0xC);
      v10 = 3;
      do
      {
        v11 = **v9;
        if ( v13 > (double)v11 )
          v13 = v11;
        v12 = *(float *)((char *)*v9 + *v8 * ((_DWORD)v9[0xFFFFFFF9] + 0xFFFFFFFF));
        if ( v14 < (double)v12 )
          v14 = v12;
        ++v9;
        ++v8;
        --v10;
      }
      while ( v10 );
      *a2 = v13;
      *a3 = v14;
    }
    else
    {
      *a2 = *v7;
      *a3 = *(float *)((char *)v7 + v6 * (v4 - 1));
    }
  }
  else
  {
    *a2 = 0.0;
    *a3 = 0.0;
  }
}

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

  v3 = *(this + 7); /*0x6d94a0*/
  if ( v3 /*0x6d94bd*/
    && (v4 = *(_DWORD *)(v3 + 8), v5 = *(_DWORD *)(v3 + 0x10),
                                  v6 = *(_BYTE *)(v3 + 0x14),
                                  v7 = *(float **)(v3 + 0xC),
                                  v4) )
  {
    if ( v5 == 4 ) /*0x6d94c6*/
    {
      v13 = flt_A7DEB4; /*0x6d94d3*/
      v14 = -v13; /*0x6d94db*/
      v8 = (unsigned __int8 *)(v7 + 0xB); /*0x6d94df*/
      v9 = (float **)(v7 + 0xC); /*0x6d94e2*/
      v10 = 3; /*0x6d94e5*/
      do /*0x6d9548*/
      {
        v11 = **v9; /*0x6d94f9*/
        if ( v13 > (double)v11 ) /*0x6d950c*/
          v13 = v11; /*0x6d950e*/
        v12 = *(float *)((char *)*v9 + *v8 * ((_DWORD)v9[0xFFFFFFF9] + 0xFFFFFFFF)); /*0x6d9522*/
        if ( v14 < (double)v12 ) /*0x6d9535*/
          v14 = v12; /*0x6d9537*/
        ++v9; /*0x6d953f*/
        ++v8; /*0x6d9542*/
        --v10; /*0x6d9545*/
      }
      while ( v10 ); /*0x6d9548*/
      *a2 = v13; /*0x6d9556*/
      *a3 = v14; /*0x6d955e*/
    }
    else
    {
      *a2 = *v7; /*0x6d9571*/
      *a3 = *(float *)((char *)v7 + v6 * (v4 - 1)); /*0x6d9581*/
    }
  }
  else
  {
    *a2 = 0.0; /*0x6d9593*/
    *a3 = 0.0; /*0x6d9595*/
  }
}

void __thiscall sub_7A5740(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int i; // edi
  float *v7; // eax
  int v8; // ecx
  float *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // ebp
  bool v14; // cc
  int v15; // edi
  int v16; // eax

  v3 = a2;
  v4 = 4 * *(this + 0xE);
  v5 = (unsigned __int64)(unsigned int)*(this + 0xE) >> 0x1E != 0;
  *(this + 0x10) = a2;
  *(this + 0x13) = FormHeapAlloc(v4 | -v5);
  sub_78EAF0(&a2);
  for ( i = 0; i < *(this + 0xE); ++i )
    *(float *)(*(this + 0x13) + 4 * i) = sub_78EA00(0.0, flt_A5A04C);
  v7 = (float *)FormHeapAlloc((unsigned __int64)(unsigned int)(0x10 * v3) >> 0x1E != 0 ? 0xFFFFFFFF : v3 << 6);
  v8 = 2 * v3;
  *(this + 0x12) = v7;
  if ( 2 * v3 > 0 )
  {
    do
    {
      *v7 = 0.0;
      v9 = v7 + 2;
      v9[0xFFFFFFFF] = 1.0;
      ++v9;
      v9[0xFFFFFFFF] = 1.0;
      ++v9;
      v9[0xFFFFFFFF] = 1.0;
      ++v9;
      v9[0xFFFFFFFF] = 1.0;
      v9 += 2;
      v9[0xFFFFFFFE] = 0.0;
      v7 = v9 + 1;
      --v8;
      v7[0xFFFFFFFE] = 0.0;
      v7[0xFFFFFFFF] = 0.0;
    }
    while ( v8 );
  }
  v10 = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 0xF) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *(this + 0xF));
  v11 = v3 * *(this + 0xE);
  v12 = 0;
  v13 = 0x20 * v11;
  v14 = *(this + 0xF) <= 0;
  *(this + 0x11) = v10;
  if ( !v14 )
  {
    v15 = 0;
    do
    {
      *(_DWORD *)(v15 + *(this + 0x11)) = FormHeapAlloc((unsigned __int64)(unsigned int)v13 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v13);
      v16 = 0;
      if ( v13 >= 4 )
      {
        do
        {
          *(float *)(*(_DWORD *)(*(this + 0x11) + v15) + 4 * v16) = 0.0;
          *(float *)(*(_DWORD *)(*(this + 0x11) + v15) + 4 * v16 + 4) = 0.0;
          *(float *)(*(_DWORD *)(*(this + 0x11) + v15) + 4 * v16 + 8) = 0.0;
          *(float *)(*(_DWORD *)(*(this + 0x11) + v15) + 4 * v16 + 0xC) = 0.0;
          v16 += 4;
        }
        while ( v16 < v13 - 3 );
      }
      for ( ; v16 < v13; ++v16 )
        *(float *)(*(_DWORD *)(*(this + 0x11) + v15) + 4 * v16) = 0.0;
      ++v12;
      v15 += 4;
    }
    while ( v12 < *(this + 0xF) );
  }
  TESTexture::ClearComponentReferences(&a2);
}

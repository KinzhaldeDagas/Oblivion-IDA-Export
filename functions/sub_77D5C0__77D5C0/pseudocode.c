void sub_77D5C0()
{
  int v0; // ebx
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  bool v6; // cf

  v0 = 0;
  if ( dword_B2AD48 )
  {
    do
    {
      v1 = FormHeapAlloc(0x44u);
      v2 = v1;
      if ( v1 )
      {
        *(_DWORD *)(v1 + 0x2C) = &NiTArray<NiVBChip *>::`vftable';
        *(_WORD *)(v1 + 0x34) = 0;
        *(_WORD *)(v1 + 0x3A) = 1;
        *(_WORD *)(v1 + 0x36) = 0;
        *(_WORD *)(v1 + 0x38) = 0;
        *(_DWORD *)(v1 + 0x30) = 0;
        sub_77D390((_DWORD *)v1);
      }
      else
      {
        v2 = 0;
      }
      v3 = *(_DWORD *)(v2 + 0x3C);
      v4 = *(_DWORD *)(v2 + 0x40);
      if ( v3 )
        *(_DWORD *)(v3 + 0x40) = v4;
      if ( v4 )
        *(_DWORD *)(v4 + 0x3C) = v3;
      v5 = dword_B4289C;
      if ( dword_B4289C )
      {
        *(_DWORD *)(v5 + 0x40) = v2;
        v5 = dword_B4289C;
      }
      *(_DWORD *)(v2 + 0x3C) = v5;
      *(_DWORD *)(v2 + 0x40) = 0;
      v6 = ++v0 < (unsigned int)dword_B2AD48;
      dword_B4289C = v2;
    }
    while ( v6 );
  }
}

void sub_77D5C0()
{
  int v0; // ebx
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  bool v6; // cf

  v0 = 0; /*0x77d5c4*/
  if ( dword_B2AD48 ) /*0x77d5c6*/
  {
    do /*0x77d641*/
    {
      v1 = FormHeapAlloc(0x44u); /*0x77d5d2*/
      v2 = v1; /*0x77d5d7*/
      if ( v1 ) /*0x77d5de*/
      {
        *(_DWORD *)(v1 + 0x2C) = &NiTArray<NiVBChip *>::`vftable'; /*0x77d5e2*/
        *(_WORD *)(v1 + 0x34) = 0; /*0x77d5e9*/
        *(_WORD *)(v1 + 0x3A) = 1; /*0x77d5ed*/
        *(_WORD *)(v1 + 0x36) = 0; /*0x77d5f3*/
        *(_WORD *)(v1 + 0x38) = 0; /*0x77d5f7*/
        *(_DWORD *)(v1 + 0x30) = 0; /*0x77d5fb*/
        sub_77D390((_DWORD *)v1); /*0x77d5fe*/
      }
      else
      {
        v2 = 0; /*0x77d605*/
      }
      v3 = *(_DWORD *)(v2 + 0x3C); /*0x77d607*/
      v4 = *(_DWORD *)(v2 + 0x40); /*0x77d60c*/
      if ( v3 ) /*0x77d60f*/
        *(_DWORD *)(v3 + 0x40) = v4; /*0x77d611*/
      if ( v4 ) /*0x77d616*/
        *(_DWORD *)(v4 + 0x3C) = v3; /*0x77d618*/
      v5 = unk_B4289C; /*0x77d61b*/
      if ( unk_B4289C ) /*0x77d61b*/
      {
        *(_DWORD *)(v5 + 0x40) = v2; /*0x77d624*/
        v5 = unk_B4289C; /*0x77d627*/
      }
      *(_DWORD *)(v2 + 0x3C) = v5; /*0x77d62c*/
      *(_DWORD *)(v2 + 0x40) = 0; /*0x77d62f*/
      v6 = ++v0 < (unsigned int)dword_B2AD48; /*0x77d635*/
      unk_B4289C = v2; /*0x77d63b*/
    }
    while ( v6 ); /*0x77d641*/
  }
}

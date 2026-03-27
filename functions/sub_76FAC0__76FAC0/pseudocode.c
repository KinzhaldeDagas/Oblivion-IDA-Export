char sub_76FAC0()
{
  unsigned int i; // esi
  _DWORD *v1; // eax
  unsigned __int16 *v2; // eax
  NiTArray_NiTexturingPropertyMap *v3; // edi
  unsigned int j; // edi
  unsigned int k; // esi
  int v7; // eax
  unsigned __int16 *v8; // [esp+0h] [ebp-4h] BYREF

  v7 = FormHeapAlloc(0x10u);
  if ( v7 )
  {
    *(_DWORD *)v7 = &NiTArray<NiD3DShaderDeclaration::NiPackerEntry *>::`vftable';
    *(_WORD *)(v7 + 8) = 0;
    *(_WORD *)(v7 + 0xE) = 1;
    *(_WORD *)(v7 + 0xA) = 0;
    *(_WORD *)(v7 + 0xC) = 0;
    *(_DWORD *)(v7 + 4) = 0;
    dword_B42700 = v7;
  }
  else
  {
    dword_B42700 = 0;
  }
  v8 = 0;
  if ( *(_WORD *)(dword_B42700 + 0xA) != 0x12 )
  {
    dword_B42708[0] = 4;
    dword_B4270C = 8;
    dword_B42710 = 0xC;
    dword_B42714 = 0x10;
    dword_B42718 = 4;
    dword_B4271C = 4;
    dword_B42720 = 4;
    dword_B42724 = 8;
    dword_B42728 = 4;
    dword_B4272C = 4;
    dword_B42730 = 8;
    dword_B42734 = 4;
    dword_B42738 = 8;
    dword_B4273C = 4;
    dword_B42740 = 4;
    dword_B42744 = 4;
    dword_B42748 = 8;
    for ( i = 0; i < 0x12; ++i )
    {
      v1 = (_DWORD *)FormHeapAlloc(0x14u);
      if ( v1 )
        v2 = (unsigned __int16 *)sub_76F520(v1);
      else
        v2 = 0;
      v8 = v2;
      *(_DWORD *)v2 = i;
      NiTArray_SetSize(v2 + 2, 0x26u);
      v3 = (NiTArray_NiTexturingPropertyMap *)dword_B42700;
      if ( i >= *(unsigned __int16 *)(dword_B42700 + 8) )
        NiTArray_SetSize((unsigned __int16 *)dword_B42700, i + *(unsigned __int16 *)(dword_B42700 + 0xE));
      NiTArray_SetAt(v3, i, &v8);
    }
    for ( j = 0; j < 0x12; ++j )
    {
      for ( k = 0; k < 0x21; ++k )
        sub_771300(j, k);
    }
  }
  return 1;
}

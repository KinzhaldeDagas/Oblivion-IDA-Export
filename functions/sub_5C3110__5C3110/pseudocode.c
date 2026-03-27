int __thiscall sub_5C3110(_DWORD *this, unsigned __int8 *a2, int a3)
{
  const unsigned __int8 *v4; // edi
  int v5; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi

  v4 = a2;
  if ( !_mbscmp(dword_B38F70, a2) )
  {
    v5 = *(this + 0x10);
    FormHeapFree((unsigned int)v4);
    return v5;
  }
  if ( !_mbscmp(v4, dword_B38F78) )
  {
    v7 = *(this + 0x11);
    FormHeapFree((unsigned int)v4);
    return v7;
  }
  if ( !_mbscmp(v4, dword_B38F88) )
  {
    v8 = *(this + 0x12);
    FormHeapFree((unsigned int)v4);
    return v8;
  }
  if ( !_mbscmp(v4, dword_B38F80) )
  {
    v9 = *(this + 0x13);
    FormHeapFree((unsigned int)v4);
    return v9;
  }
  if ( !_mbscmp(v4, dword_B38FE0) )
  {
    v10 = *(this + 0x14);
LABEL_11:
    BSStringT_Clear((unsigned int *)&a2);
    return v10;
  }
  if ( !_mbscmp(v4, dword_B38FE8) )
  {
    v10 = *(this + 0x15);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39000) )
  {
    v10 = *(this + 0x16);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39008) )
  {
    v10 = *(this + 0x17);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39010) )
  {
    v10 = *(this + 0x18);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39018) )
  {
    v10 = *(this + 0x19);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B38F90) )
  {
    v10 = *(this + 0x1A);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39020) )
  {
    v10 = *(this + 0x1B);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39028) )
  {
    v10 = *(this + 0x1C);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39030) )
  {
    v10 = *(this + 0x1D);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39038) )
  {
    v10 = *(this + 0x1E);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39040) )
  {
    v10 = *(this + 0x1F);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39050) )
  {
    v10 = *(this + 0x20);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39320) )
  {
    v10 = *(this + 0x21);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39058) )
  {
    v10 = *(this + 0x22);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39060) )
  {
    v10 = *(this + 0x23);
    goto LABEL_11;
  }
  if ( !_mbscmp(v4, dword_B39328) )
  {
    v10 = *(this + 0x24);
    goto LABEL_11;
  }
  BSStringT_Clear((unsigned int *)&a2);
  return 0;
}

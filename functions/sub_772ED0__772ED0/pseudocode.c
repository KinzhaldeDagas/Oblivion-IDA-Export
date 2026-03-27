void __thiscall sub_772ED0(unsigned int *this)
{
  unsigned int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  _DWORD *i; // edi
  unsigned int v8; // esi

  v2 = *this;
  if ( *this )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = v2 - 4;
    v5 = 5 * v3;
    v6 = v3 - 1;
    for ( i = (_DWORD *)(v2 + 4 * v5); v6 >= 0; --v6 )
    {
      i += 0xFFFFFFFB;
      sub_772BB0(i);
    }
    FormHeapFree(v4);
  }
  v8 = *(this + 2);
  if ( v8 )
  {
    sub_772ED0((_DWORD *)*(this + 2));
    FormHeapFree(v8);
  }
}

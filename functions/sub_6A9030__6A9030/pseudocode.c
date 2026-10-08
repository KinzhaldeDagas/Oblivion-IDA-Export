int __thiscall NiTMapBase_GetFirstNode(unsigned int *this)
{
  unsigned int v1; // edx
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *i; // ecx

  v1 = *(this + 1); /*0x6a9030*/
  v2 = 0; /*0x6a9033*/
  if ( !v1 ) /*0x6a9038*/
    return 0; /*0x6a904f*/
  v3 = (_DWORD *)*(this + 2); /*0x6a903a*/
  for ( i = v3; !*i; ++i ) /*0x6a903d*/
  {
    if ( ++v2 >= v1 ) /*0x6a904d*/
      return 0; /*0x6a904d*/
  }
  return v3[v2]; /*0x6a9051*/
}

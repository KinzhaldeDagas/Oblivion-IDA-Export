_DWORD **__thiscall sub_91F340(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  *this = a2; /*0x91f34d*/
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x91f352*/
  if ( v4 < a3 ) /*0x91f359*/
  {
    v5 = 2 * v4; /*0x91f35b*/
    if ( a3 >= v5 ) /*0x91f35f*/
      v5 = a3; /*0x91f361*/
    sub_8A6E40((const void **)a2, v5, 4); /*0x91f367*/
  }
  v6 = 0; /*0x91f36f*/
  for ( *(_DWORD *)(a2 + 4) = a3; v6 < a3; ++v6 ) /*0x91f376*/
    *(_DWORD *)(*(_DWORD *)*this + 4 * v6) = 0xFFFFFFFF; /*0x91f384*/
  return (_DWORD **)this; /*0x91f392*/
}

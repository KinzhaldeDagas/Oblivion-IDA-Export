BOOL __thiscall sub_4A3E20(_DWORD *this, BSStringT *a2)
{
  int v2; // eax
  const char *v4; // eax

  v2 = *(this + 2); /*0x4a3e20*/
  if ( !v2 ) /*0x4a3e25*/
    return BSStringT_Set(a2, EmptyString, 0); /*0x4a3e31*/
  v4 = *(const char **)(v2 + 4); /*0x4a3e39*/
  if ( !v4 ) /*0x4a3e3e*/
    v4 = EmptyString; /*0x4a3e40*/
  return BSStringT_Set(a2, v4, 0); /*0x4a3e36*/
}

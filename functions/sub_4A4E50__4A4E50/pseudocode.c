char __thiscall sub_4A4E50(BSStringT *this, const char **a2)
{
  BSStringT *v2; // esi
  int v3; // eax

  v2 = this + 1; /*0x4a4e5a*/
  if ( *a2 && v2->m_data ) /*0x4a4e5f*/
    v3 = CRT_StricmpLocaleDispatch(v2->m_data, *a2); /*0x4a4e67*/
  else
    v3 = 2 * (*a2 == 0) - 1; /*0x4a4e7c*/
  if ( !v3 ) /*0x4a4e80*/
    return 0; /*0x4a4e96*/
  BSStringT_Set(v2, *a2, 0); /*0x4a4e89*/
  return 1; /*0x4a4e8e*/
}

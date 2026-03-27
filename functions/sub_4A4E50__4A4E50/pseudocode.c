char __thiscall sub_4A4E50(BSStringT *this, char **a2)
{
  BSStringT *v2; // esi
  int v3; // eax

  v2 = this + 1;
  if ( *a2 && v2->m_data )
    v3 = _strcmp(v2->m_data, *a2);
  else
    v3 = 2 * (*a2 == 0) - 1;
  if ( !v3 )
    return 0;
  BSStringT_Set(v2, *a2, 0);
  return 1;
}

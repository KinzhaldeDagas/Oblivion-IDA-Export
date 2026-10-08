char __thiscall sub_74D710(NiTriBasedGeomData *this, int a2)
{
  __int16 m_pkNormal_high; // ax
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax

  if ( !sub_752CD0(this, a2) ) /*0x74d719*/
    return 0; /*0x74d719*/
  m_pkNormal_high = HIWORD(this->members.super.m_pkNormal); /*0x74d729*/
  if ( m_pkNormal_high != *(_WORD *)(a2 + 0x22) ) /*0x74d731*/
    return 0; /*0x74d726*/
  v5 = 0; /*0x74d734*/
  if ( !m_pkNormal_high ) /*0x74d739*/
    return 1; /*0x74d77c*/
  while ( 1 )
  {
    v6 = *((_DWORD *)&this->members.super.m_pkVertex->x + v5); /*0x74d749*/
    v7 = v5 >= *(unsigned __int16 *)(a2 + 0x22) ? 0 : *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 4 * v5);
    if ( v6 ) /*0x74d75a*/
      break; /*0x74d75a*/
    if ( v7 ) /*0x74d781*/
      return 0; /*0x74d781*/
LABEL_11:
    if ( ++v5 >= HIWORD(this->members.super.m_pkNormal) ) /*0x74d775*/
      return 1; /*0x74d775*/
  }
  if ( v7 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) ) /*0x74d766*/
    goto LABEL_11; /*0x74d76a*/
  return 0; /*0x74d722*/
}

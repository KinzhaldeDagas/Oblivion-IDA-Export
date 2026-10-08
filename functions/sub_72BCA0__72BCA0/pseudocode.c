char __thiscall sub_72BCA0(int *this, int *a2)
{
  int *v2; // ebp
  unsigned int v5; // edi
  int v6; // esi

  v2 = a2; /*0x72bca2*/
  if ( NiTMap_GetAt((_DWORD *)*a2, *(this + 4), &a2) ) /*0x72bcb4*/
    return 1; /*0x72bcbe*/
  v5 = *(_DWORD *)(*(this + 2) + 0x40); /*0x72bcc9*/
  v6 = 0; /*0x72bccc*/
  if ( !v5 ) /*0x72bcd0*/
    return 0; /*0x72bcf1*/
  while ( !NiTMap_GetAt((_DWORD *)*v2, *(_DWORD *)(*(this + 5) + 4 * v6), &a2) ) /*0x72bce8*/
  {
    if ( ++v6 >= v5 ) /*0x72bcef*/
      return 0; /*0x72bcef*/
  }
  return 1; /*0x72bcbd*/
}

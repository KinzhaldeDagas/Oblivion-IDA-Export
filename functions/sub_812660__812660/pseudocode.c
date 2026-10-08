_DWORD *__thiscall sub_812660(_DWORD *this, const void *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf

  result = this; /*0x812669*/
  if ( a2 ) /*0x81266b*/
    qmemcpy(this + 6, a2, 0x20u); /*0x812676*/
  v3 = *(this + 2); /*0x81267c*/
  if ( *((_BYTE *)result + 0x34) ) /*0x812679*/
    *(_DWORD *)(v3 + 0x1C) |= 0x400u; /*0x812682*/
  else
    *(_DWORD *)(v3 + 0x1C) &= ~0x400u; /*0x81268b*/
  *(_DWORD *)(v3 + 0x24) = 0; /*0x812692*/
  v4 = result[2]; /*0x812698*/
  if ( *((_BYTE *)result + 0x35) ) /*0x812695*/
    *(_DWORD *)(v4 + 0x1C) |= 0x800u; /*0x81269d*/
  else
    *(_DWORD *)(v4 + 0x1C) &= ~0x800u; /*0x8126a6*/
  *(_DWORD *)(v4 + 0x24) = 0; /*0x8126ad*/
  v5 = result[2]; /*0x8126b0*/
  v6 = *((_BYTE *)result + 0x36) == 0; /*0x8126b3*/
  *(_DWORD *)(v5 + 0x24) = 0; /*0x8126b6*/
  if ( v6 ) /*0x8126b9*/
    *(_DWORD *)(v5 + 0x1C) &= ~0x1000u; /*0x8126c5*/
  else
    *(_DWORD *)(v5 + 0x1C) |= 0x1000u; /*0x8126bb*/
  return result; /*0x81267f*/
}

// Pure doubly-linked-list move-after operation; no allocation, free, refcount, or count change.
int *__thiscall sub_7C5950(_DWORD *this, int *a2, int *a3)
{
  int *result; // eax
  _DWORD *v4; // ecx
  int v5; // ecx
  bool v6; // zf

  result = a2; /*0x7c5950*/
  if ( a2 != a3 ) /*0x7c595a*/
  {
    if ( (int *)*(this + 1) == a2 ) /*0x7c5960*/
      *(this + 1) = *a2; /*0x7c5964*/
    if ( (int *)*(this + 2) == a2 ) /*0x7c596a*/
      *(this + 2) = a2[1]; /*0x7c596f*/
    if ( (int *)*(this + 2) == a3 ) /*0x7c5975*/
      *(this + 2) = a2; /*0x7c5977*/
    if ( *a2 ) /*0x7c597a*/
      *(_DWORD *)(*a2 + 4) = a2[1]; /*0x7c5983*/
    v4 = (_DWORD *)a2[1]; /*0x7c5986*/
    if ( v4 ) /*0x7c598b*/
      *v4 = *a2; /*0x7c598f*/
    v5 = *a3; /*0x7c5991*/
    v6 = *a3 == 0; /*0x7c5993*/
    *a2 = *a3; /*0x7c5995*/
    a2[1] = (int)a3; /*0x7c5997*/
    if ( !v6 ) /*0x7c599b*/
      *(_DWORD *)(v5 + 4) = a2; /*0x7c599d*/
    *a3 = (int)a2; /*0x7c59a0*/
  }
  return result; /*0x7c59a2*/
}

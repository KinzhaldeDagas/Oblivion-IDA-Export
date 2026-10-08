bool *__thiscall sub_90D380(_DWORD *this, bool *a2)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)*(this + 1); i; i = (_DWORD *)i[1] ) /*0x90d385*/
    this = i; /*0x90d387*/
  *a2 = *(this + 3) != 0; /*0x90d39c*/
  return a2; /*0x90d39e*/
}

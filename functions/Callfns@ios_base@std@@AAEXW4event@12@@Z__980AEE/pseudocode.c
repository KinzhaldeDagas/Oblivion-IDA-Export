int __thiscall std::ios_base::_Callfns(int ***this, int a2)
{
  int **i; // esi
  int result; // eax

  for ( i = *(this + 8); i; i = (int **)*i ) /*0x980af2*/
    result = ((int (__cdecl *)(int, int ***, int *))i[2])(a2, this, i[1]); /*0x980aff*/
  return result; /*0x980b0b*/
}

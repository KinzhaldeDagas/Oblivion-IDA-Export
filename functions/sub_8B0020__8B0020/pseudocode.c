bool __thiscall sub_8B0020(int *this)
{
  int v2; // eax
  unsigned int *v3; // eax

  v2 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x8b002b*/
  if ( v2 ) /*0x8b002f*/
    v3 = *(unsigned int **)(v2 + 0x2B0); /*0x8b0031*/
  else
    v3 = 0; /*0x8b0039*/
  return v3 && sub_88B430(v3, *(this + 2)); /*0x8b0045*/
}

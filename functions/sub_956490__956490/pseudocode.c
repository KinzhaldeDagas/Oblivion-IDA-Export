_DWORD *__thiscall sub_956490(_DWORD *this, int a2)
{
  int v3; // eax

  *((_WORD *)this + 3) = 1; /*0x956498*/
  *this = &off_AA3558; /*0x95649e*/
  v3 = (**(int (__thiscall ***)(int, int, int))unk_BA7D98)(unk_BA7D98, a2, 0x25); /*0x9564af*/
  *(this + 2) = a2; /*0x9564b1*/
  *(this + 4) = v3; /*0x9564b4*/
  *(this + 3) = 0; /*0x9564b8*/
  return this; /*0x9564b7*/
}

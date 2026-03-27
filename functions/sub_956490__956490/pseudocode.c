_DWORD *__thiscall sub_956490(_DWORD *this, int a2)
{
  int v3; // eax

  *((_WORD *)this + 3) = 1;
  *this = &off_AA3558;
  v3 = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(dword_BA7D98, a2, 0x25);
  *(this + 2) = a2;
  *(this + 4) = v3;
  *(this + 3) = 0;
  return this;
}

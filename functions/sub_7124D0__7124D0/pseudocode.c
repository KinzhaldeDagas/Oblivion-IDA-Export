int __thiscall sub_7124D0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0x90); /*0x7124d0*/
  *(this + 0x90) = v1 + 1; /*0x7124d9*/
  return *(_DWORD *)(*(this + 0x8D) + 4 * v1); /*0x7124e8*/
}

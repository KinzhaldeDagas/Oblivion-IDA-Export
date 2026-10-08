int __thiscall sub_92A6B0(_DWORD **this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int))(**(this + 4) + 0x1C))(*(this + 4), a2); /*0x92a6bb*/
  *(_BYTE *)(a2 + 4) = 1; /*0x92a6be*/
  return result; /*0x92a6c2*/
}

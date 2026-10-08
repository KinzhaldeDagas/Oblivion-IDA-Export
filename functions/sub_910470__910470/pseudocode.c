int __thiscall sub_910470(_DWORD **this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD, int))(**(this + 3) + 0x20))(*(this + 3), a2); /*0x91047b*/
  result = *(_DWORD *)(a2 + 0xC) + 2; /*0x910487*/
  *(_DWORD *)(a2 + 8) += 0x40; /*0x91048a*/
  *(_DWORD *)(a2 + 0xC) = result; /*0x91048d*/
  return result; /*0x910490*/
}

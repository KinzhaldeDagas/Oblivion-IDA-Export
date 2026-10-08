int __thiscall sub_90A7E0(_DWORD **this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD, int))(**(this + 3) + 0x20))(*(this + 3), a2); /*0x90a7ee*/
  result = (int)*(this + 4); /*0x90a7f1*/
  if ( result ) /*0x90a7f6*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x20))(a2); /*0x90a7fd*/
  return result; /*0x90a800*/
}

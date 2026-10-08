int __thiscall sub_90A850(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4); /*0x90a850*/
  if ( result ) /*0x90a855*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x28))(a2); /*0x90a85b*/
  return result; /*0x90a85e*/
}

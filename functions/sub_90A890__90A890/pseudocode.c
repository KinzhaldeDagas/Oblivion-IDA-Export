int __thiscall sub_90A890(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4); /*0x90a890*/
  if ( result ) /*0x90a895*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x30))(a2); /*0x90a89b*/
  return result; /*0x90a89e*/
}

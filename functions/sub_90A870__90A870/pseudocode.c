int __thiscall sub_90A870(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4); /*0x90a870*/
  if ( result ) /*0x90a875*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 0x2C))(a2); /*0x90a87b*/
  return result; /*0x90a87e*/
}

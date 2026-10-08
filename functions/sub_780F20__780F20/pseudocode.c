int __thiscall sub_780F20(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 0xD); /*0x780f28*/
  if ( result != a2 ) /*0x780f2d*/
  {
    if ( result ) /*0x780f31*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x780f39*/
    *(this + 0xD) = a2; /*0x780f3d*/
    if ( a2 ) /*0x780f40*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x780f48*/
  }
  return result; /*0x780f4a*/
}

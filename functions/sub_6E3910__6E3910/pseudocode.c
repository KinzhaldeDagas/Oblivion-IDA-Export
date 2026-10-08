int __thiscall sub_6E3910(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 7); /*0x6e3910*/
  if ( result ) /*0x6e3915*/
    return *(_DWORD *)(result + 0x10); /*0x6e391a*/
  return result; /*0x6e3917*/
}

signed int __thiscall sub_533D00(_DWORD **this, int a2, int a3)
{
  signed int result; // eax

  result = 1; /*0x533d04*/
  if ( *(this + 2) ) /*0x533d00*/
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(this + 2) + 0xC))(*(this + 2), a2, a3); /*0x533d1d*/
    return 0; /*0x533d1f*/
  }
  return result; /*0x533d21*/
}

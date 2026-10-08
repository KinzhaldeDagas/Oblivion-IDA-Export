int __thiscall sub_8F5D90(int *this)
{
  int result; // eax

  sub_8F5C80(this); /*0x8f5d93*/
  result = *(this + 2); /*0x8f5d98*/
  if ( result ) /*0x8f5d9d*/
    return (*(int (**)(void))(*(_DWORD *)result + 0x10))(); /*0x8f5da4*/
  return result; /*0x8f5da7*/
}

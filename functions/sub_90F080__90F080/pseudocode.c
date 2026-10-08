_WORD *__thiscall sub_90F080(_WORD *this)
{
  *(this + 3) = 1; /*0x90f084*/
  *(_DWORD *)this = &off_A9CAA8; /*0x90f08a*/
  *((_DWORD *)this + 3) = 0; /*0x90f090*/
  *((_DWORD *)this + 4) = 0; /*0x90f093*/
  *((_DWORD *)this + 5) = 0x80000000; /*0x90f096*/
  *((_DWORD *)this + 2) = 0; /*0x90f09d*/
  return this; /*0x90f0a0*/
}

int __thiscall sub_6C63A0(unsigned __int16 *this)
{
  unsigned __int16 v1; // ax

  v1 = *(this + 3); /*0x6c63a0*/
  if ( v1 == 0xFFFF ) /*0x6c63a8*/
    return 0; /*0x6c63b3*/
  else
    return *(_DWORD *)(*(_DWORD *)this + 8) + v1; /*0x6c63af*/
}

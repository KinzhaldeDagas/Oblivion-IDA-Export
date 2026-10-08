int __thiscall sub_6C63E0(unsigned __int16 *this)
{
  unsigned __int16 v1; // ax

  v1 = *(this + 5); /*0x6c63e0*/
  if ( v1 == 0xFFFF ) /*0x6c63e8*/
    return 0; /*0x6c63f3*/
  else
    return *(_DWORD *)(*(_DWORD *)this + 8) + v1; /*0x6c63ef*/
}

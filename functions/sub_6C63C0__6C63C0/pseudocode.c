int __thiscall sub_6C63C0(unsigned __int16 *this)
{
  unsigned __int16 v1; // ax

  v1 = *(this + 4); /*0x6c63c0*/
  if ( v1 == 0xFFFF ) /*0x6c63c8*/
    return 0; /*0x6c63d3*/
  else
    return *(_DWORD *)(*(_DWORD *)this + 8) + v1; /*0x6c63cf*/
}

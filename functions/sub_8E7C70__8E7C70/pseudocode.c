int __thiscall sub_8E7C70(int (__stdcall ****this)(signed int))
{
  int (__stdcall ***v2)(signed int); // ecx
  int result; // eax
  int (__stdcall ***v4)(signed int); // ecx

  v2 = *(this + 6); /*0x8e7c73*/
  *this = (int (__stdcall ***)(signed int))&off_A9A77C; /*0x8e7c78*/
  if ( v2 ) /*0x8e7c7e*/
  {
    result = sub_8BC730(v2); /*0x8e7c80*/
    *(this + 6) = 0; /*0x8e7c85*/
  }
  v4 = *(this + 7); /*0x8e7c8c*/
  if ( v4 ) /*0x8e7c91*/
  {
    result = sub_8BC730(v4); /*0x8e7c93*/
    *(this + 7) = 0; /*0x8e7c98*/
  }
  *this = (int (__stdcall ***)(signed int))&hkBaseObject::`vftable'; /*0x8e7c9f*/
  return result; /*0x8e7ca5*/
}

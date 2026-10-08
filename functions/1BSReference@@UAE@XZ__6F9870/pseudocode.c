void __thiscall BSReference::~BSReference(BSReference *this)
{
  *(_DWORD *)this = &BSReference::`vftable'; /*0x6f9898*/
  sub_6FDF10((unsigned int *)this, 0); /*0x6f98a8*/
  NiRefObject_destr(this); /*0x6f98b7*/
}

void __thiscall BSReference::~BSReference(BSReference *this)
{
  *(_DWORD *)this = &BSReference::`vftable';
  sub_6FDF10(this, 0);
  NiRefObject_destr(this);
}

BSReference *__thiscall BSReference::BSReference(BSReference *this, const char *a2)
{
  NiObject_constr((NiObject *)this); /*0x6f9828*/
  *((_DWORD *)this + 2) = 0; /*0x6f9833*/
  *(_DWORD *)this = &BSReference::`vftable'; /*0x6f983d*/
  sub_6FDF10((unsigned int *)this, a2); /*0x6f9843*/
  return this; /*0x6f984a*/
}

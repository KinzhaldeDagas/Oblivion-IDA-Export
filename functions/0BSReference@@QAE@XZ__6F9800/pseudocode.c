BSReference *__thiscall BSReference::BSReference(BSReference *this, const char *a2)
{
  NiObject_constr((NiObject *)this);
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &BSReference::`vftable';
  sub_6FDF10(this, a2);
  return this;
}

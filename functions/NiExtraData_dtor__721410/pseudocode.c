LONG __thiscall NiExtraData_dtor(unsigned int *this)
{
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *(this + 2);
  *this = (unsigned int)&NiExtraData::`vftable';
  FormHeapFree(v3);
  *(this + 2) = 0;
  return NiRefObject_destr(this);
}

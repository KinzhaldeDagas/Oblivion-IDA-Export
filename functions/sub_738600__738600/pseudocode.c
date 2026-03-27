LONG __thiscall sub_738600(unsigned int *this)
{
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *(this + 2);
  *this = (unsigned int)&NiShader::`vftable';
  FormHeapFree(v3);
  *this = (unsigned int)&NiRefObject::`vftable';
  return InterlockedDecrement(&NiRefObject_objcount);
}

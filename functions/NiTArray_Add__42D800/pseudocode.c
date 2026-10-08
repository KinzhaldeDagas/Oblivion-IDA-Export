unsigned int __thiscall NiTArray_Add(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // edi

  v3 = *(this + 5); /*0x42d808*/
  if ( v3 >= *(this + 4) ) /*0x42d80e*/
    NiTArray_SetSize(this, v3 + *(this + 7)); /*0x42d819*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this, v3, a2); /*0x42d826*/
  return v3; /*0x42d82d*/
}

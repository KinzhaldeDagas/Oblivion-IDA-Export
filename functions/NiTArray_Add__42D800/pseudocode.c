unsigned int __thiscall NiTArray_Add(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // edi

  v3 = *(this + 5);
  if ( v3 >= *(this + 4) )
    NiTArray_SetSize(this, v3 + *(this + 7));
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this, v3, a2);
  return v3;
}

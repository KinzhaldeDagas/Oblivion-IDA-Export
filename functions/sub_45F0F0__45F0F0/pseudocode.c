NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **__thiscall sub_45F0F0(
        NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **this)
{
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *v2; // eax
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *Form; // eax
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *v4; // eax

  v2 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *)FormHeapAlloc(0x10u);
  if ( v2 )
    Form = NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>(
             v2,
             0x25u);
  else
    Form = 0;
  *this = Form;
  v4 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *)FormHeapAlloc(8u);
  if ( v4 )
  {
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
  }
  else
  {
    v4 = 0;
  }
  *(this + 1) = v4;
  return this;
}

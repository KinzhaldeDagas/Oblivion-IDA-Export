NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **__thiscall sub_45F0F0(
        NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **this)
{
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *v2; // eax
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *Form; // eax
  int v4; // eax

  v2 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *)FormHeapAlloc(0x10u); /*0x45f116*/
  if ( v2 ) /*0x45f12c*/
    Form = NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>( /*0x45f132*/
             v2,
             0x25u);
  else
    Form = 0; /*0x45f139*/
  *this = Form; /*0x45f145*/
  v4 = FormHeapAlloc(8u); /*0x45f147*/
  if ( v4 ) /*0x45f151*/
  {
    *(_DWORD *)v4 = 0; /*0x45f153*/
    *(_DWORD *)(v4 + 4) = 0; /*0x45f159*/
  }
  else
  {
    v4 = 0; /*0x45f162*/
  }
  *(this + 1) = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *)v4; /*0x45f164*/
  return this; /*0x45f169*/
}

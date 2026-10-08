void __thiscall NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'; /*0x45a728*/
  NiTMap_Clear(this); /*0x45a736*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'; /*0x45a745*/
  NiTMap_Clear(this); /*0x45a74b*/
  FormHeapFree(*(this + 2)); /*0x45a754*/
}

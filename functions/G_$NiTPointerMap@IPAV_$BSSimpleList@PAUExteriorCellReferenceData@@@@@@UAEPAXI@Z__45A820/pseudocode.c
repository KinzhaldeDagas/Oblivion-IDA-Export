unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>(this); /*0x45a823*/
  if ( (a2 & 1) != 0 ) /*0x45a82d*/
    FormHeapFree((unsigned int)this); /*0x45a830*/
  return this; /*0x45a83a*/
}

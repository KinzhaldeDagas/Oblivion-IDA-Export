unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

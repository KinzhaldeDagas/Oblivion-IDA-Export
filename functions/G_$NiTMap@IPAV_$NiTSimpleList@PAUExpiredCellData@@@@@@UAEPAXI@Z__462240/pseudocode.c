unsigned int *__thiscall NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

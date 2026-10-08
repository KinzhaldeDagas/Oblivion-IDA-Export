unsigned int *__thiscall NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(this); /*0x462243*/
  if ( (a2 & 1) != 0 ) /*0x46224d*/
    FormHeapFree((unsigned int)this); /*0x462250*/
  return this; /*0x46225a*/
}

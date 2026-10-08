TESModel *__thiscall TESModel::`scalar deleting destructor'(TESModel *this, char a2)
{
  TESModel::~TESModel(this); /*0x5201c3*/
  if ( (a2 & 1) != 0 ) /*0x5201cd*/
    FormHeapFree((unsigned int)this); /*0x5201d0*/
  return this; /*0x5201da*/
}

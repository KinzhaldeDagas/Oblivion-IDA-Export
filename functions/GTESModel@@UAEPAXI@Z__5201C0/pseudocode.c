TESModel *__thiscall TESModel::`scalar deleting destructor'(TESModel *this, char a2)
{
  TESModel::~TESModel(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

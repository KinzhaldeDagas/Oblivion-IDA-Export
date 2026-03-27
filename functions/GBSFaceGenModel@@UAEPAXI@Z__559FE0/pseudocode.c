BSFaceGenModel *__thiscall BSFaceGenModel::`scalar deleting destructor'(BSFaceGenModel *this, char a2)
{
  BSFaceGenModel::~BSFaceGenModel(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

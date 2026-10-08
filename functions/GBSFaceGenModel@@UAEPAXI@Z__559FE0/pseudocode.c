BSFaceGenModel *__thiscall BSFaceGenModel::`scalar deleting destructor'(BSFaceGenModel *this, char a2)
{
  BSFaceGenModel::~BSFaceGenModel(this); /*0x559fe3*/
  if ( (a2 & 1) != 0 ) /*0x559fed*/
    FormHeapFree((unsigned int)this); /*0x559ff0*/
  return this; /*0x559ffa*/
}

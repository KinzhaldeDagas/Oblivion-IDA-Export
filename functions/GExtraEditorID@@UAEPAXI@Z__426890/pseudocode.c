ExtraEditorID *__thiscall ExtraEditorID::`scalar deleting destructor'(ExtraEditorID *this, char a2)
{
  ExtraEditorID::~ExtraEditorID(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

ActiveEffect *__thiscall TelekinesisEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  TelekinesisEffect::~TelekinesisEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

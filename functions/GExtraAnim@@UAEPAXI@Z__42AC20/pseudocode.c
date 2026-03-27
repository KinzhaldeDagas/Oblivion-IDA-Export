ExtraAnim *__thiscall ExtraAnim::`scalar deleting destructor'(ExtraAnim *this, char a2)
{
  ExtraAnim::~ExtraAnim(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

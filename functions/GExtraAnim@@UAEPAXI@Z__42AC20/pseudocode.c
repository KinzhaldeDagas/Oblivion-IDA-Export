ExtraAnim *__thiscall ExtraAnim::`scalar deleting destructor'(ExtraAnim *this, char a2)
{
  ExtraAnim::~ExtraAnim(this); /*0x42ac23*/
  if ( (a2 & 1) != 0 ) /*0x42ac2d*/
    FormHeapFree((unsigned int)this); /*0x42ac30*/
  return this; /*0x42ac3a*/
}

unsigned int *__thiscall NiTMap<LowProcess *,LP_LOCK_DATA>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  sub_64AC60(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

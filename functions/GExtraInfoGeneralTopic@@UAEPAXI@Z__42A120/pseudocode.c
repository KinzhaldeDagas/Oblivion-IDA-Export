ExtraInfoGeneralTopic *__thiscall ExtraInfoGeneralTopic::`scalar deleting destructor'(
        ExtraInfoGeneralTopic *this,
        char a2)
{
  ExtraInfoGeneralTopic::~ExtraInfoGeneralTopic(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

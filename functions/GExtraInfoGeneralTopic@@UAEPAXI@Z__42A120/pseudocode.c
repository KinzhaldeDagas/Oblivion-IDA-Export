ExtraInfoGeneralTopic *__thiscall ExtraInfoGeneralTopic::`scalar deleting destructor'(
        ExtraInfoGeneralTopic *this,
        char a2)
{
  ExtraInfoGeneralTopic::Destructor((ExtraInfoGeneralTopicView *)this); /*0x42a123*/
  if ( (a2 & 1) != 0 ) /*0x42a12d*/
    FormHeapFree((unsigned int)this); /*0x42a130*/
  return this; /*0x42a13a*/
}

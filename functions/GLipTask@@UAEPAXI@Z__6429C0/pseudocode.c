LipTask *__thiscall LipTask::`scalar deleting destructor'(LipTask *this, char a2)
{
  LipTask::~LipTask(this); /*0x6429c3*/
  if ( (a2 & 1) != 0 ) /*0x6429cd*/
    FormHeapFree((unsigned int)this); /*0x6429d0*/
  return this; /*0x6429da*/
}

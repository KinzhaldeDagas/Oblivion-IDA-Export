SkyTask *__thiscall SkyTask::`scalar deleting destructor'(SkyTask *this, char a2)
{
  SkyTask::~SkyTask(this); /*0x544243*/
  if ( (a2 & 1) != 0 ) /*0x54424d*/
    FormHeapFree((unsigned int)this); /*0x544250*/
  return this; /*0x54425a*/
}

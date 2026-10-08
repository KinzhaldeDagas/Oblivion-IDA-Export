DistantLODLoaderTask *__thiscall DistantLODLoaderTask::`scalar deleting destructor'(
        DistantLODLoaderTask *this,
        char a2)
{
  DistantLODLoaderTask::~DistantLODLoaderTask(this); /*0x4bd8a3*/
  if ( (a2 & 1) != 0 ) /*0x4bd8ad*/
    FormHeapFree((unsigned int)this); /*0x4bd8b0*/
  return this; /*0x4bd8ba*/
}

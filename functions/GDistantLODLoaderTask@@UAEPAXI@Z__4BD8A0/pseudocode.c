DistantLODLoaderTask *__thiscall DistantLODLoaderTask::`scalar deleting destructor'(
        DistantLODLoaderTask *this,
        char a2)
{
  DistantLODLoaderTask::~DistantLODLoaderTask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

void __thiscall DistantLODLoaderTask::~DistantLODLoaderTask(DistantLODLoaderTask *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &DistantLODLoaderTask::`vftable'; /*0x4bd709*/
  v2 = *((_DWORD **)this + 0xB); /*0x4bd70f*/
  if ( v2 ) /*0x4bd71c*/
  {
    sub_4BD230(v2); /*0x4bd720*/
    FormHeapFree((unsigned int)v2); /*0x4bd726*/
  }
  LipTask::~LipTask(this); /*0x4bd738*/
}

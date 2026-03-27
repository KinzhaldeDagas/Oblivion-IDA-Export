void __thiscall DistantLODLoaderTask::~DistantLODLoaderTask(DistantLODLoaderTask *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &DistantLODLoaderTask::`vftable';
  v2 = *((_DWORD **)this + 0xB);
  if ( v2 )
  {
    sub_4BD230(v2);
    FormHeapFree((unsigned int)v2);
  }
  LipTask::~LipTask(this);
}

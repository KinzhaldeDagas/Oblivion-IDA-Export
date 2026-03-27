void __thiscall ExtraSavedMovementData::~ExtraSavedMovementData(ExtraSavedMovementData *this)
{
  void *v2; // eax

  *(_DWORD *)this = &ExtraSavedMovementData::`vftable';
  v2 = *((void **)this + 4);
  if ( v2 )
    MemoryHeap_Free_checked(v2);
  if ( *((_DWORD *)this + 5) )
    MemoryHeap_Free_checked(*((void **)this + 5));
  if ( *((_DWORD *)this + 6) )
    MemoryHeap_Free_checked(*((void **)this + 6));
  *(_DWORD *)this = &BSExtraData::`vftable';
}

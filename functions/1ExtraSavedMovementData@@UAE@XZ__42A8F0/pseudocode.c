void __thiscall ExtraSavedMovementData::~ExtraSavedMovementData(ExtraSavedMovementData *this)
{
  void *v2; // eax

  *(_DWORD *)this = &ExtraSavedMovementData::`vftable'; /*0x42a918*/
  v2 = *((void **)this + 4); /*0x42a91e*/
  if ( v2 ) /*0x42a92b*/
    MemoryHeap_Free_checked(v2); /*0x42a933*/
  if ( *((_DWORD *)this + 5) ) /*0x42a938*/
    MemoryHeap_Free_checked(*((void **)this + 5)); /*0x42a945*/
  if ( *((_DWORD *)this + 6) ) /*0x42a94a*/
    MemoryHeap_Free_checked(*((void **)this + 6)); /*0x42a957*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42a95c*/
}

// If saved-attached-animation data exists, frees it and replaces it with a six-byte initialized {4,0,0} word buffer. Observed in Oblivion door default-open/open/close paths.
void __thiscall ExtraDataList_ResetSavedAttachedAnimationData(ExtraDataList *this)
{
  char v1; // bp
  BSExtraData *ExtraData; // eax
  BSExtraData *v3; // esi
  FreeEntry *v4; // eax
  int v5; // [esp+0h] [ebp-4h]

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x4212f3*/
  v3 = ExtraData; /*0x4212f8*/
  if ( ExtraData ) /*0x4212fc*/
  {
    if ( ExtraData[1].members.next ) /*0x4212fe*/
    {
      MemoryHeap_Free_checked(ExtraData[1].members.next); /*0x42130b*/
      v4 = j_MemoryHeap_Alloc(&FormHeap, v1, 0x100000006uLL, v5); /*0x421319*/
      v3[1].members.next = (BSExtraData *)v4; /*0x42131e*/
      LOWORD(v4->prev) = 4; /*0x421321*/
      HIWORD(v4->prev) = 0; /*0x421326*/
      LOWORD(v4->next) = 0; /*0x42132c*/
    }
  }
}

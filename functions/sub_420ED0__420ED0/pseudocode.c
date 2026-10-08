// Returns the per-actor uint16 friend-hit count, or zero. Confirmed by the Oblivion console path '%s has hit %s ... times'.
unsigned int __thiscall ExtraDataList_GetFriendHitCount(ExtraDataList *this, void *actor)
{
  BSExtraData *ExtraData; // eax
  unsigned int result; // eax
  BSExtraDataVtbl *vtbl; // ecx
  void (__thiscall *Destructor)(BSExtraData *); // edx

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList); /*0x420ed5*/
  if ( !ExtraData ) /*0x420edc*/
    return 0; /*0x420ee6*/
  vtbl = ExtraData[1].vtbl; /*0x42aae0*/
  for ( result = 0; vtbl; vtbl = (BSExtraDataVtbl *)vtbl->CompareTo ) /*0x42aae7*/
  {
    Destructor = vtbl->Destructor; /*0x42aaf0*/
    if ( !vtbl->Destructor ) /*0x42aaf0*/
      break; /*0x42aaf0*/
    if ( *(void **)Destructor == actor ) /*0x42aaf8*/
      return *((unsigned __int16 *)Destructor + 2); /*0x42ab05*/
  }
  return result; /*0x420ede*/
}

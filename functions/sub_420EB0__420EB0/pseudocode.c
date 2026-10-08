// Removes the friend-hit list entry whose actor pointer matches the supplied actor.
void __thiscall ExtraDataList_RemoveFriendHit(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  int *vtbl; // ecx
  int *v4; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList); /*0x420eb2*/
  if ( ExtraData ) /*0x420eb9*/
  {
    vtbl = (int *)ExtraData[1].vtbl; /*0x42afc0*/
    v4 = vtbl; /*0x42afc3*/
    if ( vtbl ) /*0x42afc7*/
    {
      while ( *v4 ) /*0x42afd4*/
      {
        if ( *(_DWORD *)*v4 == a2 ) /*0x42afd8*/
        {
          BSSimpleList_Remove(vtbl, *v4); /*0x42afea*/
          return; /*0x42afea*/
        }
        v4 = (int *)v4[1]; /*0x42afda*/
        if ( !v4 ) /*0x42afdf*/
          return; /*0x42afdf*/
      }
    }
  }
}

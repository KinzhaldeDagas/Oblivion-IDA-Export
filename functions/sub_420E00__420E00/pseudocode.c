// Oblivion-specific friend-hit behavior: gets/creates ExtraFriendHitList and increments the hit count for the supplied actor, creating a {actor,count,timer} entry if needed.
void __thiscall ExtraDataList_AddFriendHit(ExtraDataList *this, int a2)
{
  int **ExtraData; // esi
  ExtraFriendHitList *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = (int **)BaseExtraList_GetExtraData(this, kExtraData_FriendHitList); /*0x420e2c*/
  if ( !ExtraData ) /*0x420e30*/
  {
    v4 = (ExtraFriendHitList *)FormHeapAlloc(0x10u); /*0x420e34*/
    if ( v4 ) /*0x420e46*/
      v5 = (BSExtraData *)ExtraFriendHitList::ExtraFriendHitList(v4); /*0x420e4a*/
    else
      v5 = 0; /*0x420e51*/
    ExtraData = (int **)v5; /*0x420e5e*/
    BaseExtraList_AddExtra(this, v5); /*0x420e60*/
  }
  ExtraFriendHitList_AddHit(ExtraData, a2); /*0x420e6c*/
}

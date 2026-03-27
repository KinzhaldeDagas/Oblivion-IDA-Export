void __thiscall sub_420E00(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // esi
  ExtraFriendHitList *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList);
  if ( !ExtraData )
  {
    v4 = (ExtraFriendHitList *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)ExtraFriendHitList::ExtraFriendHitList(v4);
    else
      v5 = 0;
    ExtraData = v5;
    BaseExtraList_AddExtra(this, v5);
  }
  sub_42AA70(ExtraData, a2);
}

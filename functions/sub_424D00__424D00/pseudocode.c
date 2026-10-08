// 3DTheft decode: Remove/unlink follower actor pointer from target ExtraFollower list.
char __thiscall sub_424D00(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Follower); /*0x424d02*/
  if ( ExtraData ) /*0x424d09*/
  {
    BSSimpleList_Remove((int *)ExtraData[1].vtbl, a2); /*0x424d13*/
    LOBYTE(ExtraData) = sub_45A500(g_TESSaveLoadGame); /*0x424d1e*/
  }
  return (char)ExtraData; /*0x424d23*/
}

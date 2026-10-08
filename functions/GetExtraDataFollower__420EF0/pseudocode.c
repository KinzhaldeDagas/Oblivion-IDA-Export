// Returns ExtraFollower (type 0x23) itself, or null.
int __cdecl ExtraDataList_GetFollowerExtra()
{
  ExtraDataList *v0; // ecx

  return (int)BaseExtraList_GetExtraData(v0, kExtraData_Follower); /*0x420ef7*/
}

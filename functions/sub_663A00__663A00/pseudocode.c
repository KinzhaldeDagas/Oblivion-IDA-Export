int sub_663A00()
{
  int v0; // ebp
  int FollowerExtra; // eax
  int v2; // eax
  int v3; // edi
  Actor *v4; // esi

  v0 = 0; /*0x663a0a*/
  FollowerExtra = ExtraDataList_GetFollowerExtra(); /*0x663a0c*/
  if ( !FollowerExtra ) /*0x663a13*/
    return 0; /*0x663a13*/
  v2 = *(_DWORD *)(FollowerExtra + 0xC); /*0x663a15*/
  if ( !v2 ) /*0x663a1a*/
    return 0; /*0x663a54*/
  v3 = v2; /*0x663a1d*/
  do /*0x663a4c*/
  {
    v4 = *(Actor **)v3; /*0x663a20*/
    if ( !*(_DWORD *)v3 ) /*0x663a20*/
      break; /*0x663a24*/
    if ( v4->members.super.process ) /*0x663a26*/
    {
      if ( Actor::GetCurrentPackage(*(Actor **)v3) ) /*0x663a2e*/
      {
        if ( Actor::GetCurrentPackage(v4)->members.type == kPackageType_Follow ) /*0x663a42*/
          ++v0; /*0x663a44*/
      }
    }
    v3 = *(_DWORD *)(v3 + 4); /*0x663a47*/
  }
  while ( v3 ); /*0x663a4c*/
  return v0; /*0x663a52*/
}

char __stdcall sub_663A60(int a1)
{
  int FollowerExtra; // eax
  _DWORD *v2; // eax

  FollowerExtra = ExtraDataList_GetFollowerExtra(); /*0x663a69*/
  if ( FollowerExtra ) /*0x663a70*/
  {
    v2 = *(_DWORD **)(FollowerExtra + 0xC); /*0x663a72*/
    if ( v2 ) /*0x663a77*/
    {
      while ( *v2 ) /*0x663a84*/
      {
        if ( *v2 == a1 ) /*0x663a88*/
          return 1; /*0x663a96*/
        v2 = (_DWORD *)v2[1]; /*0x663a8a*/
        if ( !v2 ) /*0x663a8f*/
          return 0; /*0x663a8f*/
      }
    }
  }
  return 0; /*0x663a93*/
}

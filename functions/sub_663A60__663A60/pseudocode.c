char __stdcall sub_663A60(int a1)
{
  int ExtraDataFollower; // eax
  _DWORD *v2; // eax

  ExtraDataFollower = GetExtraDataFollower();
  if ( ExtraDataFollower )
  {
    v2 = *(_DWORD **)(ExtraDataFollower + 0xC);
    if ( v2 )
    {
      while ( *v2 )
      {
        if ( *v2 == a1 )
          return 1;
        v2 = (_DWORD *)v2[1];
        if ( !v2 )
          return 0;
      }
    }
  }
  return 0;
}

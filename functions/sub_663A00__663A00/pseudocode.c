int sub_663A00()
{
  int v0; // ebp
  int ExtraDataFollower; // eax
  int v2; // eax
  int v3; // edi
  Actor *v4; // esi

  v0 = 0;
  ExtraDataFollower = GetExtraDataFollower();
  if ( !ExtraDataFollower )
    return 0;
  v2 = *(_DWORD *)(ExtraDataFollower + 0xC);
  if ( !v2 )
    return 0;
  v3 = v2;
  do
  {
    v4 = *(Actor **)v3;
    if ( !*(_DWORD *)v3 )
      break;
    if ( v4->members.super.process )
    {
      if ( sub_5E0380(*(Actor **)v3) )
      {
        if ( sub_5E0380(v4)->members.type == 1 )
          ++v0;
      }
    }
    v3 = *(_DWORD *)(v3 + 4);
  }
  while ( v3 );
  return v0;
}

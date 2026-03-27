// positive sp value has been detected, the output may be wrong!
int __userpurge ScriptEventList_AddEvent_::EventLoop2@<eax>(int a1@<edx>, int a2@<esi>, int a3, int a4)
{
  _DWORD *v4; // ecx
  int result; // eax

  while ( 1 )
  {
    v4 = *(_DWORD **)a1;
    if ( !*(_DWORD *)a1 )
      break;
    if ( !*v4 )
    {
      if ( v4 )
        v4[1] |= a2;
      return ScriptEventList_AddEvent_::Done(a3, a4);
    }
    a1 = *(_DWORD *)(a1 + 4);
    if ( !a1 )
      return result;
  }
  return ScriptEventList_AddEvent_::Done(a3, a4);
}

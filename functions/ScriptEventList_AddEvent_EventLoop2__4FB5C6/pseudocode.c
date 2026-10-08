// positive sp value has been detected, the output may be wrong!
void __userpurge ScriptEventList_AddEvent_::EventLoop2(int a1@<edx>, int a2@<esi>, int a3, int a4)
{
  _DWORD *v4; // ecx

  while ( 1 ) /*0x4fb5c6*/
  {
    v4 = *(_DWORD **)a1; /*0x4fb5c6*/
    if ( !*(_DWORD *)a1 ) /*0x4fb5c6*/
      break; /*0x4fb5c6*/
    if ( !*v4 ) /*0x4fb5cf*/
    {
      if ( v4 ) /*0x4fb5e1*/
        v4[1] |= a2; /*0x4fb5e3*/
      break; /*0x4fb5e3*/
    }
    a1 = *(_DWORD *)(a1 + 4); /*0x4fb5d1*/
    if ( !a1 ) /*0x4fb5d6*/
      return; /*0x4fb5d6*/
  }
  ScriptEventList_AddEvent_::Done(a3, a4); /*0x4fb5e7*/
}

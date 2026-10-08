void __stdcall sub_438300(int a1, int a2, unsigned __int8 a3)
{
  IOTask *v3; // eax
  IOTask *v4; // esi

  if ( a1 ) /*0x438328*/
  {
    if ( a2 ) /*0x438330*/
    {
      v3 = (IOTask *)FormHeapAlloc(0x28u); /*0x438334*/
      if ( v3 ) /*0x43833e*/
        v4 = sub_437760(v3, a1, a2, a3); /*0x43834e*/
      else
        v4 = 0; /*0x438352*/
      if ( v4 ) /*0x43835a*/
        InterlockedIncrement((volatile LONG *)&v4->members.unk08); /*0x438360*/
      (*((void (__thiscall **)(IOTask *))v4->vtbl + 8))(v4); /*0x438375*/
      if ( !InterlockedDecrement((volatile LONG *)&v4->members.unk08) ) /*0x438383*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x438395*/
    }
  }
}

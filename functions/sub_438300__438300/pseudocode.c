void __stdcall sub_438300(int a1, int a2, unsigned __int8 a3)
{
  IOTask *v3; // eax
  IOTask *v4; // esi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = (IOTask *)FormHeapAlloc(0x28u);
      if ( v3 )
        v4 = sub_437760(v3, a1, a2, a3);
      else
        v4 = 0;
      if ( v4 )
        InterlockedIncrement((volatile LONG *)&v4->members.unk08);
      (*((void (__thiscall **)(IOTask *))v4->vtbl + 8))(v4);
      if ( !InterlockedDecrement((volatile LONG *)&v4->members.unk08) )
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1);
    }
  }
}

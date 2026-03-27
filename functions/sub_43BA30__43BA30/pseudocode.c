IOTask **__stdcall sub_43BA30(IOTask **a1, UInt32 arg4, unsigned __int8 a2, volatile LONG *a4)
{
  IOTask *v4; // esi

  v4 = (IOTask *)FormHeapAlloc(0x30u);
  if ( v4 )
  {
    sub_436500(v4, a2);
    v4[1].vtbl = 0;
    v4[1].members.unk04 = 0;
    v4->vtbl = &QueuedHead::`vftable';
    v4[1].members.unk08 = arg4;
    v4[1].members.unk0C = 0;
    v4[1].members.unk10 = 0;
  }
  else
  {
    v4 = 0;
  }
  *a1 = v4;
  if ( v4 )
    InterlockedIncrement((volatile LONG *)&v4->members.unk08);
  sub_43AC40((QueuedChildren **)*a1, a4);
  (*((void (__thiscall **)(IOTask *))(*a1)->vtbl + 8))(*a1);
  return a1;
}

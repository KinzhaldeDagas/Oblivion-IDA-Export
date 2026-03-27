IOTask **__thiscall sub_43BAF0(_DWORD **this, IOTask **arg0, UInt32 a3, unsigned __int8 a2, volatile LONG *a5)
{
  IOTask *v5; // esi
  IOTask *v6; // esi
  IOTask *v8; // [esp-8h] [ebp-30h]

  v5 = (IOTask *)FormHeapAlloc(0x38u);
  if ( v5 )
  {
    sub_436500(v5, a2);
    v5[1].vtbl = 0;
    v5[1].members.unk08 = a3;
    v5[1].members.unk04 = 0;
    v5->vtbl = &QueuedHelmet::`vftable';
    v5[1].members.unk0C = 0;
    v5[1].members.unk10 = 0;
    v5[1].members.unk14 = 0;
    v5[2].vtbl = *(void **)(v5[1].members.unk08 + 0x150);
  }
  else
  {
    v5 = 0;
  }
  *arg0 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)&v5->members.unk08);
  v8 = *arg0;
  if ( *arg0 )
    InterlockedIncrement((volatile LONG *)&(*arg0)->members.unk08);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, IOTask *, _DWORD))(**(this + 4) + 0xC))(
         *(this + 4),
         *(_DWORD *)(a3 + 0x150),
         v8,
         0) )
  {
    sub_43AC40((QueuedChildren **)*arg0, a5);
    (*((void (__thiscall **)(IOTask *))(*arg0)->vtbl + 8))(*arg0);
  }
  else
  {
    v6 = *arg0;
    if ( *arg0 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members.unk08) )
      {
        if ( v6 )
          (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1);
      }
      *arg0 = 0;
    }
  }
  return arg0;
}

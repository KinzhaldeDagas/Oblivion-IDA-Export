char __stdcall sub_43B0D0(const char *a1, unsigned __int8 a2, volatile LONG *a3)
{
  int v3; // edi
  IOTask *v4; // eax
  IOTask *v5; // esi
  QueuedChildren *vtbl; // edx
  IOTask *v7; // ecx
  IOTask *v9; // eax
  IOTask *v10; // esi

  v3 = (*(int (__thiscall **)(UInt32, const char *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(dword_B35300, a1, 0);
  if ( !v3 )
  {
    v9 = (IOTask *)FormHeapAlloc(0x30u);
    if ( v9 )
      v10 = sub_437050(v9, a1, a2);
    else
      v10 = 0;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)&v10->members.unk08);
    sub_43AC40((QueuedChildren **)v10, a3);
    (*((void (__thiscall **)(IOTask *))v10->vtbl + 8))(v10);
    if ( InterlockedDecrement((volatile LONG *)&v10->members.unk08) )
      return 1;
    vtbl = (QueuedChildren *)v10->vtbl;
    v7 = v10;
    goto LABEL_22;
  }
  InterlockedIncrement((volatile LONG *)(v3 + 4));
  if ( a3 )
  {
    v4 = (IOTask *)FormHeapAlloc(0x30u);
    if ( v4 )
      v5 = sub_4371A0(v4, v3, a2);
    else
      v5 = 0;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members.unk08);
    sub_43AC40((QueuedChildren **)v5, a3);
    (*((void (__thiscall **)(IOTask *))v5->vtbl + 0xA))(v5);
    if ( !InterlockedDecrement((volatile LONG *)&v5->members.unk08) )
      (*(void (__thiscall **)(IOTask *, int))v5->vtbl)(v5, 1);
    if ( InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      return 1;
    vtbl = *(QueuedChildren **)v3;
    v7 = (IOTask *)v3;
LABEL_22:
    (*(void (__thiscall **)(IOTask *, int))vtbl)(v7, 1);
    return 1;
  }
  if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  return 0;
}

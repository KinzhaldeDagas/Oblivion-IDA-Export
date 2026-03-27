char __thiscall sub_43B840(_DWORD *this, const char *a2, unsigned __int8 a3, volatile LONG *a4)
{
  int v4; // ecx
  IOTask *v5; // eax
  IOTask *v6; // esi
  IOTask *v8; // eax
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+18h] [ebp-4h]

  v4 = *(this + 1);
  v9 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v4 + 4))(v4, a2, &v9) )
  {
    if ( !a4 )
      return 0;
    v5 = (IOTask *)FormHeapAlloc(0x30u);
    if ( v5 )
      v6 = sub_437890(v5, v9, a3);
    else
      v6 = 0;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)&v6->members.unk08);
    v10 = 0;
    sub_43AC40((QueuedChildren **)v6, a4);
    (*((void (__thiscall **)(IOTask *))v6->vtbl + 0xA))(v6);
  }
  else
  {
    v8 = (IOTask *)FormHeapAlloc(0x30u);
    v10 = 1;
    if ( v8 )
      v6 = sub_4377D0(v8, a2, a3);
    else
      v6 = 0;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)&v6->members.unk08);
    v10 = 2;
    sub_43AC40((QueuedChildren **)v6, a4);
    (*((void (__thiscall **)(IOTask *))v6->vtbl + 8))(v6);
  }
  v10 = 0xFFFFFFFF;
  if ( !InterlockedDecrement((volatile LONG *)&v6->members.unk08) )
    (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1);
  return 1;
}

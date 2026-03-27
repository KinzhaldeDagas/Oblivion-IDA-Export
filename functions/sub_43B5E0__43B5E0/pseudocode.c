IOTask **__thiscall sub_43B5E0(
        int *this,
        IOTask **a2,
        const char *a3,
        int a4,
        unsigned __int8 a5,
        volatile LONG *a6,
        void *a7,
        char a8,
        char a9,
        char a10)
{
  int v10; // ecx
  IOTask *v11; // eax
  IOTask *v12; // esi
  volatile LONG **v13; // ebx
  volatile LONG *p_unk08; // edi
  IOTask *v16; // eax
  int v17; // [esp+14h] [ebp-14h] BYREF
  int v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+24h] [ebp-4h]

  v18 = 0;
  v10 = *this;
  v17 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v10 + 4))(v10, a3, &v17) )
  {
    if ( a10 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
    if ( !a6 )
    {
      *a2 = 0;
      return a2;
    }
    v11 = (IOTask *)FormHeapAlloc(0x38u);
    if ( v11 )
      v12 = sub_437430(v11, v17, a5);
    else
      v12 = 0;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)&v12->members.unk08);
    v19 = 1;
    sub_43AC40((QueuedChildren **)v12, a6);
    (*((void (__thiscall **)(IOTask *))v12->vtbl + 0xA))(v12);
    v13 = (volatile LONG **)a2;
    p_unk08 = (volatile LONG *)&v12->members.unk08;
    *a2 = v12;
    InterlockedIncrement((volatile LONG *)&v12->members.unk08);
  }
  else
  {
    v16 = (IOTask *)FormHeapAlloc(0x38u);
    v19 = 2;
    if ( v16 )
      v12 = sub_437250(v16, a3, a5, a7, a8, a9, a10);
    else
      v12 = 0;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)&v12->members.unk08);
    v19 = 3;
    sub_43AC40((QueuedChildren **)v12, a6);
    (*((void (__thiscall **)(IOTask *, int))v12->vtbl + 0xC))(v12, a4);
    v13 = (volatile LONG **)a2;
    p_unk08 = (volatile LONG *)&v12->members.unk08;
    *a2 = v12;
    InterlockedIncrement((volatile LONG *)&v12->members.unk08);
  }
  LOBYTE(v19) = 0;
  v18 = 1;
  if ( !InterlockedDecrement(p_unk08) )
    (*(void (__thiscall **)(IOTask *, int))v12->vtbl)(v12, 1);
  return (IOTask **)v13;
}

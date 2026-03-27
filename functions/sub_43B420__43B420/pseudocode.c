volatile LONG **__thiscall sub_43B420(
        int *this,
        IOTask **a2,
        const char *a3,
        unsigned __int8 a4,
        volatile LONG *a5,
        void *a6,
        char a7,
        char a8,
        char a9)
{
  int v9; // ecx
  IOTask *v10; // eax
  IOTask *v11; // esi
  volatile LONG **v12; // ebx
  IOTask *v14; // eax
  int v15; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+24h] [ebp-4h]

  v16 = 0;
  v9 = *this;
  v15 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v9 + 4))(v9, a3, &v15) )
  {
    v14 = (IOTask *)FormHeapAlloc(0x38u);
    v17 = 2;
    if ( v14 )
      v11 = sub_437250(v14, a3, a4, a6, a7, a8, a9);
    else
      v11 = 0;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)&v11->members.unk08);
    v17 = 3;
    sub_43AC40((QueuedChildren **)v11, a5);
    (*((void (__thiscall **)(IOTask *))v11->vtbl + 8))(v11);
    v12 = (volatile LONG **)a2;
    *a2 = v11;
    InterlockedIncrement((volatile LONG *)&v11->members.unk08);
    v16 = 1;
    LOBYTE(v17) = 0;
    if ( InterlockedDecrement((volatile LONG *)&v11->members.unk08) )
      return v12;
    goto LABEL_19;
  }
  if ( a9 )
    InterlockedIncrement((volatile LONG *)(v15 + 4));
  if ( !a5 )
  {
    *a2 = 0;
    return (volatile LONG **)a2;
  }
  v10 = (IOTask *)FormHeapAlloc(0x38u);
  if ( v10 )
    v11 = sub_437430(v10, v15, a4);
  else
    v11 = 0;
  if ( v11 )
    InterlockedIncrement((volatile LONG *)&v11->members.unk08);
  v17 = 1;
  sub_43AC40((QueuedChildren **)v11, a5);
  (*((void (__thiscall **)(IOTask *))v11->vtbl + 0xA))(v11);
  v12 = (volatile LONG **)a2;
  *a2 = v11;
  InterlockedIncrement((volatile LONG *)&v11->members.unk08);
  v16 = 1;
  LOBYTE(v17) = 0;
  if ( !InterlockedDecrement((volatile LONG *)&v11->members.unk08) )
LABEL_19:
    (*(void (__thiscall **)(IOTask *, int))v11->vtbl)(v11, 1);
  return v12;
}

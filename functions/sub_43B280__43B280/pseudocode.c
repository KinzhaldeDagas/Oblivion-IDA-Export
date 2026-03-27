IOTask **__thiscall sub_43B280(
        int **this,
        IOTask **a2,
        int *a3,
        unsigned __int8 a4,
        volatile LONG *a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  int *v10; // eax
  int v11; // edx
  int v12; // ebp
  int v13; // eax
  IOTask *v14; // eax
  IOTask *v15; // esi
  volatile LONG **v16; // ebx
  volatile LONG *p_unk08; // edi
  IOTask *v19; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+24h] [ebp-4h]

  v21 = 0;
  v10 = *this;
  v11 = *a3;
  v20 = 0;
  v12 = *v10;
  v13 = (*(int (__thiscall **)(int *, int *))(v11 + 0x14))(a3, &v20);
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v12 + 4))(*this, v13) )
  {
    if ( a9 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
    if ( !a5 )
    {
      *a2 = 0;
      return a2;
    }
    v14 = (IOTask *)FormHeapAlloc(0x38u);
    if ( v14 )
      v15 = sub_437430(v14, v20, a4);
    else
      v15 = 0;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)&v15->members.unk08);
    v22 = 1;
    sub_43AC40((QueuedChildren **)v15, a5);
    (*((void (__thiscall **)(IOTask *))v15->vtbl + 0xA))(v15);
    v16 = (volatile LONG **)a2;
    p_unk08 = (volatile LONG *)&v15->members.unk08;
    *a2 = v15;
    InterlockedIncrement((volatile LONG *)&v15->members.unk08);
  }
  else
  {
    v19 = (IOTask *)FormHeapAlloc(0x38u);
    v22 = 2;
    if ( v19 )
      v15 = sub_437350(v19, (int)a3, a4, a6, a7, a8, a9);
    else
      v15 = 0;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)&v15->members.unk08);
    v22 = 3;
    sub_43AC40((QueuedChildren **)v15, a5);
    (*((void (__thiscall **)(IOTask *))v15->vtbl + 8))(v15);
    v16 = (volatile LONG **)a2;
    p_unk08 = (volatile LONG *)&v15->members.unk08;
    *a2 = v15;
    InterlockedIncrement((volatile LONG *)&v15->members.unk08);
  }
  LOBYTE(v22) = 0;
  v21 = 1;
  if ( !InterlockedDecrement(p_unk08) )
    (*(void (__thiscall **)(IOTask *, int))v15->vtbl)(v15, 1);
  return (IOTask **)v16;
}

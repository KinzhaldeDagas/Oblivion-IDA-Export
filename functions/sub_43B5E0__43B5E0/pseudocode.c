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
  IOTask **v13; // ebx
  volatile LONG *p_unk08; // edi
  IOTask *v16; // eax
  int v17; // [esp+14h] [ebp-14h] BYREF
  int v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+24h] [ebp-4h]

  v18 = 0; /*0x43b609*/
  v10 = *this; /*0x43b60d*/
  v17 = 0; /*0x43b617*/
  if ( (*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v10 + 4))(v10, a3, &v17) ) /*0x43b622*/
  {
    if ( a10 ) /*0x43b630*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x43b63a*/
    if ( !a6 ) /*0x43b646*/
    {
      *a2 = 0; /*0x43b6b2*/
      return a2; /*0x43b6b4*/
    }
    v11 = (IOTask *)FormHeapAlloc(0x38u); /*0x43b64a*/
    if ( v11 ) /*0x43b654*/
      v12 = sub_437430(v11, v17, a5); /*0x43b667*/
    else
      v12 = 0; /*0x43b66b*/
    if ( v12 ) /*0x43b673*/
      InterlockedIncrement((volatile LONG *)&v12->members.unk08); /*0x43b679*/
    v19 = 1; /*0x43b687*/
    sub_43AC40((volatile LONG **)v12, a6); /*0x43b68b*/
    (*((void (__thiscall **)(IOTask *))v12->vtbl + 0xA))(v12); /*0x43b697*/
    v13 = a2; /*0x43b699*/
    p_unk08 = (volatile LONG *)&v12->members.unk08; /*0x43b69d*/
    *a2 = v12; /*0x43b6a1*/
    InterlockedIncrement((volatile LONG *)&v12->members.unk08); /*0x43b6a3*/
  }
  else
  {
    v16 = (IOTask *)FormHeapAlloc(0x38u); /*0x43b6bb*/
    v19 = 2; /*0x43b6c9*/
    if ( v16 ) /*0x43b6d1*/
      v12 = sub_437250(v16, a3, a5, a7, a8, a9, a10); /*0x43b6f4*/
    else
      v12 = 0; /*0x43b6f8*/
    if ( v12 ) /*0x43b706*/
      InterlockedIncrement((volatile LONG *)&v12->members.unk08); /*0x43b70c*/
    v19 = 3; /*0x43b715*/
    sub_43AC40((volatile LONG **)v12, a6); /*0x43b71d*/
    (*((void (__thiscall **)(IOTask *, int))v12->vtbl + 0xC))(v12, a4); /*0x43b72e*/
    v13 = a2; /*0x43b730*/
    p_unk08 = (volatile LONG *)&v12->members.unk08; /*0x43b734*/
    *a2 = v12; /*0x43b738*/
    InterlockedIncrement((volatile LONG *)&v12->members.unk08); /*0x43b73a*/
  }
  LOBYTE(v19) = 0; /*0x43b742*/
  v18 = 1; /*0x43b747*/
  if ( !InterlockedDecrement(p_unk08) ) /*0x43b74b*/
    (*(void (__thiscall **)(IOTask *, int))v12->vtbl)(v12, 1); /*0x43b75c*/
  return v13; /*0x43b760*/
}

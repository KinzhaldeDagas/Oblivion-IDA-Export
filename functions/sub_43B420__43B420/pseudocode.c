IOTask **__thiscall sub_43B420(
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
  IOTask **v12; // ebx
  IOTask *v14; // eax
  int v15; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+24h] [ebp-4h]

  v16 = 0; /*0x43b449*/
  v9 = *this; /*0x43b44d*/
  v15 = 0; /*0x43b457*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v9 + 4))(v9, a3, &v15) ) /*0x43b466*/
  {
    v14 = (IOTask *)FormHeapAlloc(0x38u); /*0x43b520*/
    v17 = 2; /*0x43b52e*/
    if ( v14 ) /*0x43b536*/
      v11 = sub_437250(v14, a3, a4, a6, a7, a8, a9); /*0x43b559*/
    else
      v11 = 0; /*0x43b55d*/
    if ( v11 ) /*0x43b56b*/
      InterlockedIncrement((volatile LONG *)&v11->members.unk08); /*0x43b571*/
    v17 = 3; /*0x43b57a*/
    sub_43AC40((volatile LONG **)v11, a5); /*0x43b582*/
    (*((void (__thiscall **)(IOTask *))v11->vtbl + 8))(v11); /*0x43b58e*/
    v12 = a2; /*0x43b590*/
    *a2 = v11; /*0x43b598*/
    InterlockedIncrement((volatile LONG *)&v11->members.unk08); /*0x43b59a*/
    v16 = 1; /*0x43b5a2*/
    LOBYTE(v17) = 0; /*0x43b5a6*/
    if ( InterlockedDecrement((volatile LONG *)&v11->members.unk08) ) /*0x43b5ab*/
      return v12; /*0x43b5b3*/
    goto LABEL_19; /*0x43b5b3*/
  }
  if ( a9 ) /*0x43b470*/
    InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x43b47a*/
  if ( !a5 ) /*0x43b486*/
  {
    *a2 = 0; /*0x43b517*/
    return a2; /*0x43b519*/
  }
  v10 = (IOTask *)FormHeapAlloc(0x38u); /*0x43b48e*/
  if ( v10 ) /*0x43b498*/
    v11 = sub_437430(v10, v15, a4); /*0x43b4ab*/
  else
    v11 = 0; /*0x43b4af*/
  if ( v11 ) /*0x43b4b7*/
    InterlockedIncrement((volatile LONG *)&v11->members.unk08); /*0x43b4bd*/
  v17 = 1; /*0x43b4cb*/
  sub_43AC40((volatile LONG **)v11, a5); /*0x43b4cf*/
  (*((void (__thiscall **)(IOTask *))v11->vtbl + 0xA))(v11); /*0x43b4db*/
  v12 = a2; /*0x43b4dd*/
  *a2 = v11; /*0x43b4e5*/
  InterlockedIncrement((volatile LONG *)&v11->members.unk08); /*0x43b4e7*/
  v16 = 1; /*0x43b4ee*/
  LOBYTE(v17) = 0; /*0x43b4f2*/
  if ( !InterlockedDecrement((volatile LONG *)&v11->members.unk08) ) /*0x43b4f7*/
LABEL_19:
    (*(void (__thiscall **)(IOTask *, int))v11->vtbl)(v11, 1); /*0x43b5b5*/
  return v12; /*0x43b5c0*/
}

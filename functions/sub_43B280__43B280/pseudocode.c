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
  IOTask **v16; // ebx
  volatile LONG *p_unk08; // edi
  IOTask *v19; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+24h] [ebp-4h]

  v21 = 0; /*0x43b2ab*/
  v10 = *this; /*0x43b2af*/
  v11 = *a3; /*0x43b2b5*/
  v20 = 0; /*0x43b2bb*/
  v12 = *v10; /*0x43b2bf*/
  v13 = (*(int (__thiscall **)(int *, int *))(v11 + 0x14))(a3, &v20); /*0x43b2c7*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(v12 + 4))(*this, v13) ) /*0x43b2cf*/
  {
    if ( a9 ) /*0x43b2dd*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x43b2e7*/
    if ( !a5 ) /*0x43b2f3*/
    {
      *a2 = 0; /*0x43b35f*/
      return a2; /*0x43b361*/
    }
    v14 = (IOTask *)FormHeapAlloc(0x38u); /*0x43b2f7*/
    if ( v14 ) /*0x43b301*/
      v15 = sub_437430(v14, v20, a4); /*0x43b314*/
    else
      v15 = 0; /*0x43b318*/
    if ( v15 ) /*0x43b320*/
      InterlockedIncrement((volatile LONG *)&v15->members.unk08); /*0x43b326*/
    v22 = 1; /*0x43b334*/
    sub_43AC40((volatile LONG **)v15, a5); /*0x43b338*/
    (*((void (__thiscall **)(IOTask *))v15->vtbl + 0xA))(v15); /*0x43b344*/
    v16 = a2; /*0x43b346*/
    p_unk08 = (volatile LONG *)&v15->members.unk08; /*0x43b34a*/
    *a2 = v15; /*0x43b34e*/
    InterlockedIncrement((volatile LONG *)&v15->members.unk08); /*0x43b350*/
  }
  else
  {
    v19 = (IOTask *)FormHeapAlloc(0x38u); /*0x43b368*/
    v22 = 2; /*0x43b376*/
    if ( v19 ) /*0x43b37e*/
      v15 = sub_437350(v19, (int)a3, a4, a6, a7, a8, a9); /*0x43b3a1*/
    else
      v15 = 0; /*0x43b3a5*/
    if ( v15 ) /*0x43b3b3*/
      InterlockedIncrement((volatile LONG *)&v15->members.unk08); /*0x43b3b9*/
    v22 = 3; /*0x43b3c2*/
    sub_43AC40((volatile LONG **)v15, a5); /*0x43b3ca*/
    (*((void (__thiscall **)(IOTask *))v15->vtbl + 8))(v15); /*0x43b3d6*/
    v16 = a2; /*0x43b3d8*/
    p_unk08 = (volatile LONG *)&v15->members.unk08; /*0x43b3dc*/
    *a2 = v15; /*0x43b3e0*/
    InterlockedIncrement((volatile LONG *)&v15->members.unk08); /*0x43b3e2*/
  }
  LOBYTE(v22) = 0; /*0x43b3ea*/
  v21 = 1; /*0x43b3ef*/
  if ( !InterlockedDecrement(p_unk08) ) /*0x43b3f3*/
    (*(void (__thiscall **)(IOTask *, int))v15->vtbl)(v15, 1); /*0x43b404*/
  return v16; /*0x43b408*/
}

char __thiscall sub_6C8580(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // ebx
  int v12; // ebp
  int v13; // ecx
  int v14; // ebp
  int v15; // edi
  bool v16; // cf
  char *v17; // eax
  unsigned int v18; // ebx
  char *v19; // eax
  unsigned int v20; // ebx
  int v21; // [esp+14h] [ebp-24h]
  int *v22; // [esp+18h] [ebp-20h]
  int v24; // [esp+20h] [ebp-18h]
  int v25; // [esp+24h] [ebp-14h]

  v1 = this; /*0x6c85a7*/
  v2 = *(this + 4); /*0x6c85ad*/
  if ( !v2 ) /*0x6c85b4*/
    return 0; /*0x6c85b6*/
  v4 = v2 + *(this + 3); /*0x6c85cf*/
  v5 = FormHeapAlloc(
         __CFADD__((unsigned __int64)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4, 4)
       ? 0xFFFFFFFF
       : (unsigned __int64)v4 >> 0x1C != 0
       ? 3
       : 0x10 * v4 + 4);
  if ( v5 ) /*0x6c8602*/
  {
    v6 = v5 + 4; /*0x6c860f*/
    *(_DWORD *)v5 = v4; /*0x6c8615*/
    ArrayConstructor( /*0x6c8617*/
      (char *)(v5 + 4),
      0x10u,
      v4,
      (void (__thiscall *)(char *))sub_6C62E0,
      (void (__thiscall *)(void *))sub_6C64C0);
    v21 = v6; /*0x6c861c*/
  }
  else
  {
    v21 = 0; /*0x6c8622*/
  }
  v7 = (unsigned __int64)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4;
  v8 = FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
  if ( v8 ) /*0x6c8662*/
  {
    v9 = v8 + 4; /*0x6c866f*/
    *(_DWORD *)v8 = v4; /*0x6c8675*/
    ArrayConstructor( /*0x6c8677*/
      (char *)(v8 + 4),
      0x10u,
      v4,
      (void (__thiscall *)(char *))sub_6C6370,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    v22 = (int *)v9; /*0x6c867c*/
  }
  else
  {
    v22 = 0; /*0x6c8682*/
  }
  v10 = 0; /*0x6c868a*/
  v24 = 0; /*0x6c8692*/
  if ( v4 ) /*0x6c8696*/
  {
    v11 = v22; /*0x6c869c*/
    v12 = 0; /*0x6c86a4*/
    v13 = v21 - (_DWORD)v22; /*0x6c86a6*/
    v25 = 0; /*0x6c86a8*/
    while ( 1 ) /*0x6c86b9*/
    {
      if ( v10 >= v1[3] ) /*0x6c86b9*/
      {
        v14 = v1[0x19]; /*0x6c86d7*/
        v15 = *v11; /*0x6c86da*/
        if ( *v11 != v14 ) /*0x6c86de*/
        {
          if ( v15 ) /*0x6c86e2*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x6c86e8*/
              (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x6c86fe*/
          }
          *v11 = v14; /*0x6c8702*/
          if ( v14 ) /*0x6c8704*/
            InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x6c870a*/
        }
        v1 = this; /*0x6c8710*/
      }
      else
      {
        sub_6C6870((int *)((char *)v11 + v13), (int *)(v12 + v1[5])); /*0x6c86c3*/
        sub_6C67F0(v11, (int *)(v12 + v1[6])); /*0x6c86d0*/
      }
      v10 = v24 + 1; /*0x6c871c*/
      v12 = v25 + 0x10; /*0x6c871f*/
      v11 += 4; /*0x6c8722*/
      v16 = ++v24 < v4; /*0x6c8725*/
      v25 += 0x10; /*0x6c872b*/
      if ( !v16 ) /*0x6c872f*/
        break; /*0x6c872f*/
      v13 = v21 - (_DWORD)v22; /*0x6c86b2*/
    }
  }
  v17 = (char *)v1[5]; /*0x6c8731*/
  if ( v17 ) /*0x6c8736*/
  {
    v18 = (unsigned int)(v17 + 0xFFFFFFFC); /*0x6c873b*/
    _LN21(v17, 0x10u, *((_DWORD *)v17 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6C64C0); /*0x6c8747*/
    FormHeapFree(v18); /*0x6c874d*/
  }
  v19 = (char *)v1[6]; /*0x6c8755*/
  if ( v19 ) /*0x6c875a*/
  {
    v20 = (unsigned int)(v19 + 0xFFFFFFFC); /*0x6c875f*/
    _LN21(v19, 0x10u, *((_DWORD *)v19 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c876b*/
    FormHeapFree(v20); /*0x6c8771*/
  }
  v1[5] = v21; /*0x6c8781*/
  v1[3] = v4; /*0x6c8784*/
  v1[6] = v22; /*0x6c8787*/
  return 1; /*0x6c85b8*/
}

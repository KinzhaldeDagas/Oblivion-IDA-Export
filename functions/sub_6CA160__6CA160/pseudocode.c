char __thiscall sub_6CA160(unsigned int *this, char *Src, volatile LONG *a3)
{
  char *v3; // eax
  char *v4; // esi
  char *v5; // esi
  int v6; // ebx
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int v10; // eax
  unsigned int *v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  volatile LONG *v15; // esi
  _DWORD *v16; // edi
  int v18; // [esp+14h] [ebp-334h]
  unsigned int v19; // [esp+18h] [ebp-330h] BYREF
  unsigned __int16 v20; // [esp+1Ch] [ebp-32Ch]
  unsigned __int16 v21; // [esp+1Eh] [ebp-32Ah]
  unsigned int v22; // [esp+20h] [ebp-328h]
  __int16 v23; // [esp+24h] [ebp-324h]
  unsigned int *v24; // [esp+28h] [ebp-320h]
  char Str[260]; // [esp+2Ch] [ebp-31Ch] BYREF
  char Dst[260]; // [esp+130h] [ebp-218h] BYREF
  char v27[260]; // [esp+234h] [ebp-114h] BYREF
  int v28; // [esp+344h] [ebp-4h]

  v24 = this; /*0x6ca1b7*/
  strcpy_s(Dst, 0x104u, Src); /*0x6ca1bb*/
  Str[0] = 0; /*0x6ca1ca*/
  v27[0] = 0; /*0x6ca1cf*/
  v3 = strchr(Dst, 0xA); /*0x6ca1d7*/
  v4 = v3; /*0x6ca1dc*/
  if ( v3 ) /*0x6ca1e3*/
  {
    strcpy_s(Str, 0x104u, v3 + 1); /*0x6ca1f3*/
    *v4 = 0; /*0x6ca1ff*/
    v5 = strchr(Str, 0xA); /*0x6ca207*/
    strcpy_s(v27, 0x104u, v5 + 1); /*0x6ca21a*/
    *v5 = 0; /*0x6ca222*/
  }
  v18 = 0; /*0x6ca22d*/
  if ( !(*(unsigned __int16 (__thiscall **)(volatile LONG *))(*a3 + 0x74))(a3) ) /*0x6ca235*/
    return 1; /*0x6ca3e3*/
  while ( 1 )
  {
    v19 = v24[0x19]; /*0x6ca249*/
    v6 = v19; /*0x6ca244*/
    if ( v19 ) /*0x6ca24d*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x6ca253*/
    v20 = 0xFFFF; /*0x6ca25e*/
    v21 = 0xFFFF; /*0x6ca263*/
    v22 = 0xFFFFFFFF; /*0x6ca268*/
    v23 = 0xFFFF; /*0x6ca272*/
    v28 = 1; /*0x6ca281*/
    v20 = (unsigned __int16)sub_6C6270((const char **)v6, Dst); /*0x6ca2a3*/
    if ( !strcmp(Str, "PROP") ) /*0x6ca2a1*/
      v21 = (unsigned __int16)sub_6C6270((const char **)v6, v27); /*0x6ca2b9*/
    v7 = *(const char **)(*(int (__thiscall **)(volatile LONG *))(*a3 + 4))(a3); /*0x6ca2c8*/
    LOWORD(v22) = v7 ? (unsigned __int16)sub_6C6270((const char **)v6, v7) : 0xFFFF;
    v8 = (const char *)(*(int (__thiscall **)(volatile LONG *))(*a3 + 0x8C))(a3); /*0x6ca2f7*/
    HIWORD(v22) = v8 ? (unsigned __int16)sub_6C6270((const char **)v6, v8) : 0xFFFF;
    v9 = (const char *)(*(int (__thiscall **)(volatile LONG *, int))(*a3 + 0x78))(a3, v18); /*0x6ca31e*/
    v23 = v9 ? (unsigned __int16)sub_6C6270((const char **)v6, v9) : 0xFFFF;
    v10 = (*(int (__thiscall **)(volatile LONG *, int))(*a3 + 0x80))(a3, v18); /*0x6ca344*/
    v11 = v24; /*0x6ca346*/
    v12 = sub_6C94E0(v24, v10, (int *)&v19); /*0x6ca352*/
    if ( v12 == 0xFFFFFFFF ) /*0x6ca35a*/
      break; /*0x6ca35a*/
    v13 = v11[5]; /*0x6ca360*/
    v14 = 0x10 * v12; /*0x6ca363*/
    v15 = *(volatile LONG **)(v13 + v14 + 4); /*0x6ca366*/
    v16 = (_DWORD *)(v13 + v14 + 4); /*0x6ca36c*/
    if ( v15 != a3 ) /*0x6ca370*/
    {
      if ( v15 ) /*0x6ca374*/
      {
        if ( !InterlockedDecrement(v15 + 1) ) /*0x6ca37a*/
          (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1); /*0x6ca390*/
      }
      *v16 = a3; /*0x6ca396*/
      InterlockedIncrement(a3 + 1); /*0x6ca398*/
    }
    v28 = 0xFFFFFFFF; /*0x6ca3a0*/
    if ( v6 ) /*0x6ca3ab*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6ca3b1*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6ca3c3*/
    }
    if ( (unsigned __int16)++v18 >= (*(unsigned __int16 (__thiscall **)(volatile LONG *))(*a3 + 0x74))(a3) ) /*0x6ca3dd*/
      return 1; /*0x6ca3dd*/
  }
  v28 = 0xFFFFFFFF; /*0x6ca411*/
  if ( v6 ) /*0x6ca41c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6ca422*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6ca434*/
  }
  return 0; /*0x6ca3e5*/
}

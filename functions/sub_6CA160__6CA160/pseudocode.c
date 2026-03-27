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
  volatile LONG **v16; // edi
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

  v24 = this;
  strcpy_s(Dst, 0x104u, Src);
  Str[0] = 0;
  v27[0] = 0;
  v3 = strchr(Dst, 0xA);
  v4 = v3;
  if ( v3 )
  {
    strcpy_s(Str, 0x104u, v3 + 1);
    *v4 = 0;
    v5 = strchr(Str, 0xA);
    strcpy_s(v27, 0x104u, v5 + 1);
    *v5 = 0;
  }
  v18 = 0;
  if ( !(*(unsigned __int16 (__thiscall **)(volatile LONG *))(*a3 + 0x74))(a3) )
    return 1;
  while ( 1 )
  {
    v19 = v24[0x19];
    v6 = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
    v20 = 0xFFFF;
    v21 = 0xFFFF;
    v22 = 0xFFFFFFFF;
    v23 = 0xFFFF;
    v28 = 1;
    v20 = (unsigned __int16)sub_6C6270((const char **)v6, Dst);
    if ( !strcmp(Str, "PROP") )
      v21 = (unsigned __int16)sub_6C6270((const char **)v6, v27);
    v7 = *(const char **)(*(int (__thiscall **)(volatile LONG *))(*a3 + 4))(a3);
    LOWORD(v22) = v7 ? (unsigned __int16)sub_6C6270((const char **)v6, v7) : 0xFFFF;
    v8 = (const char *)(*(int (__thiscall **)(volatile LONG *))(*a3 + 0x8C))(a3);
    HIWORD(v22) = v8 ? (unsigned __int16)sub_6C6270((const char **)v6, v8) : 0xFFFF;
    v9 = (const char *)(*(int (__thiscall **)(volatile LONG *, int))(*a3 + 0x78))(a3, v18);
    v23 = v9 ? (unsigned __int16)sub_6C6270((const char **)v6, v9) : 0xFFFF;
    v10 = (*(int (__thiscall **)(volatile LONG *, int))(*a3 + 0x80))(a3, v18);
    v11 = v24;
    v12 = sub_6C94E0(v24, v10, (int *)&v19);
    if ( v12 == 0xFFFFFFFF )
      break;
    v13 = v11[5];
    v14 = 0x10 * v12;
    v15 = *(volatile LONG **)(v13 + v14 + 4);
    v16 = (volatile LONG **)(v13 + v14 + 4);
    if ( v15 != a3 )
    {
      if ( v15 )
      {
        if ( !InterlockedDecrement(v15 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1);
      }
      *v16 = a3;
      InterlockedIncrement(a3 + 1);
    }
    v28 = 0xFFFFFFFF;
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    if ( (unsigned __int16)++v18 >= (*(unsigned __int16 (__thiscall **)(volatile LONG *))(*a3 + 0x74))(a3) )
      return 1;
  }
  v28 = 0xFFFFFFFF;
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  return 0;
}

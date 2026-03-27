_DWORD *__thiscall sub_478A40(int **this)
{
  int *v2; // ecx
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int (__thiscall *v7)(int *); // edx
  const char *v8; // esi
  unsigned int v9; // eax
  char *v10; // edi
  unsigned int v12; // eax
  unsigned int v14; // [esp+10h] [ebp-11Ch] BYREF
  int v15; // [esp+14h] [ebp-118h] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-114h] BYREF
  char v17; // [esp+24h] [ebp-108h]
  unsigned int v18; // [esp+128h] [ebp-4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33E00, (int)&unk_A2F830);
  v2 = *(this + 0x18);
  v3 = 0;
  if ( v2 )
  {
    v14 = 0;
    v15 = 0;
    v4 = dword_A366D8;
    v16[0] = dword_A366D4;
    v5 = dword_A366DC;
    v16[1] = v4;
    LOBYTE(v4) = byte_A366E0;
    v16[2] = v5;
    v6 = *v2;
    v17 = v4;
    v7 = *(int (__thiscall **)(int *))(v6 + 0x14);
    v18 = 0;
    v8 = (const char *)v7(v2);
    v9 = strlen(v8) + 1;
    v10 = (char *)&v15 + 3;
    while ( *++v10 )
      ;
    qmemcpy(v10, v8, v9);
    v12 = sub_54FEB0(&v14, (char *)v16);
    v3 = sub_553620(v12, 0, 0, 0, 1, 0);
    v18 = 0xFFFFFFFF;
    FormHeapFree(v14);
    v14 = 0;
    v15 = 0;
  }
  NiLeaveCriticalSection_0(&stru_B33E00);
  return v3;
}

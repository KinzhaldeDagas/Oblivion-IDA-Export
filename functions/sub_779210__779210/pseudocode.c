int __userpurge sub_779210@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  int v6; // eax
  signed int v7; // ecx
  void *v8; // edx
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  signed int v13; // eax
  void *v14; // ecx
  int v15; // [esp-8h] [ebp-24h]
  int *v16; // [esp+4h] [ebp-18h]
  signed int v17[2]; // [esp+14h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+1Ch] [ebp+0h]

  if ( !a3 ) /*0x77921d*/
    return 0; /*0x779220*/
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x4C))(a3, a2); /*0x779231*/
  a1[0x16] = v6; /*0x779233*/
  a1[0x15] = v6; /*0x779236*/
  a1[0x17] = 1; /*0x779239*/
  v7 = *(_DWORD *)(a3 + 0x1C); /*0x779243*/
  v8 = *(void **)(a3 + 0x20); /*0x779246*/
  v17[0] = *(_DWORD *)(a3 + 0x18); /*0x779249*/
  v16 = (int *)(a1[2] + 0x7FC); /*0x779255*/
  v17[1] = v7; /*0x77925b*/
  retaddr = v8; /*0x77925f*/
  v9 = sub_773960(v17, v16); /*0x77926f*/
  v10 = *(_DWORD *)(v9 + 0xC); /*0x779271*/
  if ( *(_BYTE *)(a3 + 0x34) ) /*0x77926b*/
    v10 = *(_DWORD *)(a3 + 0x38); /*0x779276*/
  v11 = *(_DWORD *)(a1[2] + 0x280); /*0x77927c*/
  v15 = v10; /*0x77928b*/
  v12 = a1[0x15]; /*0x77928c*/
  a4 = 0; /*0x779293*/
  v13 = (*(int (__stdcall **)(int, int, int, int, int, _DWORD, int *))(*(_DWORD *)v11 + 0x64))( /*0x7792a2*/
          v11,
          v12,
          1,
          1,
          v15,
          0,
          &a4);
  if ( v13 >= 0 ) /*0x7792a6*/
  {
    a1[0x14] = a3; /*0x7792d2*/
    return v9; /*0x7792d5*/
  }
  else
  {
    D3D9_HResultToString(v13); /*0x7792a9*/
    Shared_NoOpVirtual_60D0A0(v14); /*0x7792b4*/
    a1[0x14] = 0; /*0x7792bd*/
    return 0; /*0x7792c5*/
  }
}

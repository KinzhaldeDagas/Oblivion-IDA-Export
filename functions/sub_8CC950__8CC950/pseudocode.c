int __cdecl sub_8CC950(int a1, int *a2)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi
  _DWORD *v5; // eax
  char *v6; // edi
  int v7; // edx
  int v8; // eax
  int (__thiscall ***v9)(_DWORD, int *, int, int); // eax
  _DWORD *v10; // ecx
  int result; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // [esp+14h] [ebp-34h]
  _DWORD *v15; // [esp+18h] [ebp-30h] BYREF
  int v16; // [esp+1Ch] [ebp-2Ch]
  signed int v17; // [esp+20h] [ebp-28h]
  int v18; // [esp+24h] [ebp-24h]
  _BYTE v19[32]; // [esp+28h] [ebp-20h] BYREF

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8cc965*/
  v3 = *(_DWORD **)(v2 + 0x19C); /*0x8cc968*/
  v4 = *(_DWORD *)(a1 + 0x2A4); /*0x8cc977*/
  v15 = 0; /*0x8cc97e*/
  v16 = 0; /*0x8cc982*/
  v17 = 0x80000000; /*0x8cc986*/
  v14 = v2; /*0x8cc98e*/
  if ( !v3 ) /*0x8cc992*/
    v3 = (_DWORD *)unk_BA7D9C; /*0x8cc994*/
  v5 = (_DWORD *)v3[8]; /*0x8cc99a*/
  v6 = (char *)v5 + ((8 * v4 + 0x10) & 0xFFFFFFF0); /*0x8cc9a7*/
  if ( (unsigned int)v6 > v3[0xB] ) /*0x8cc9ad*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 0xC))(v3, (8 * v4 + 0x10) & 0xFFFFFFF0); /*0x8cc9b7*/
  else
    v3[8] = v6; /*0x8cc9af*/
  v15 = v5; /*0x8cc9c0*/
  v17 = v4 | 0x80000000; /*0x8cc9c4*/
  v7 = *a2; /*0x8cc9cb*/
  v18 = (int)v5; /*0x8cc9cd*/
  (*(void (__thiscall **)(int *, _BYTE *))(v7 + 0x14))(a2, v19); /*0x8cc9d8*/
  (*(void (__thiscall **)(_DWORD, int *, _BYTE *, _DWORD **))(**(_DWORD **)(a1 + 0x64) + 8))( /*0x8cc9ee*/
    *(_DWORD *)(a1 + 0x64),
    a2 + 0xA,
    v19,
    &v15);
  if ( v16 ) /*0x8cc9f7*/
  {
    v8 = *(_DWORD *)(a1 + 0x78); /*0x8cc9f9*/
    if ( v8 ) /*0x8cc9fe*/
      v9 = (int (__thiscall ***)(_DWORD, int *, int, int))(v8 + 8); /*0x8cca00*/
    else
      v9 = 0; /*0x8cca05*/
    sub_8D8370(*(_DWORD ***)(a1 + 0x68), v15, v16, v9); /*0x8cca11*/
  }
  v10 = *(_DWORD **)(v14 + 0x19C); /*0x8cca1a*/
  result = v18; /*0x8cca22*/
  if ( !v10 ) /*0x8cca26*/
    v10 = (_DWORD *)unk_BA7D9C; /*0x8cca28*/
  v12 = v18 == v10[0xA]; /*0x8cca2e*/
  v10[8] = v18; /*0x8cca31*/
  if ( v12 ) /*0x8cca34*/
    result = (*(int (__thiscall **)(_DWORD *, int))(*v10 + 0x10))(v10, result); /*0x8cca39*/
  if ( v17 >= 0 ) /*0x8cca42*/
  {
    v13 = *(_DWORD *)(v14 + 0x19C); /*0x8cca44*/
    if ( !v13 ) /*0x8cca4c*/
      v13 = unk_BA7D9C; /*0x8cca4e*/
    return sub_8A75D0(v13, v15, 8 * v17, 0x14); /*0x8cca66*/
  }
  return result; /*0x8cca6b*/
}

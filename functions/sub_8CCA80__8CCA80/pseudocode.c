int __cdecl sub_8CCA80(int a1, int a2)
{
  int v2; // ebp
  _DWORD *v3; // ecx
  int v4; // esi
  _DWORD *v5; // edx
  char *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  int result; // eax
  bool v11; // zf
  int v12; // eax
  _DWORD *v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch]
  signed int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8cca96*/
  v3 = *(_DWORD **)(v2 + 0x19C); /*0x8cca99*/
  v4 = *(_DWORD *)(a1 + 0x2A4); /*0x8ccaa4*/
  v13 = 0; /*0x8ccaaa*/
  v14 = 0; /*0x8ccaae*/
  v15 = 0x80000000; /*0x8ccab2*/
  if ( !v3 ) /*0x8ccaba*/
    v3 = (_DWORD *)unk_BA7D9C; /*0x8ccabc*/
  v5 = (_DWORD *)v3[8]; /*0x8ccac2*/
  v6 = (char *)v5 + ((8 * v4 + 0x10) & 0xFFFFFFF0); /*0x8ccad0*/
  if ( (unsigned int)v6 > v3[0xB] ) /*0x8ccad6*/
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 0xC))(v3, (8 * v4 + 0x10) & 0xFFFFFFF0); /*0x8ccae2*/
  }
  else
  {
    v3[8] = v6; /*0x8ccad8*/
    v7 = v5; /*0x8ccadb*/
  }
  v13 = v7; /*0x8ccae5*/
  v16 = (int)v7; /*0x8ccae9*/
  v8 = *(_DWORD *)(a2 + 0x14); /*0x8ccaf1*/
  v15 = v4 | 0x80000000; /*0x8ccafc*/
  if ( v8 ) /*0x8ccb01*/
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD **))(**(_DWORD **)(a1 + 0x64) + 0x10))( /*0x8ccb11*/
      *(_DWORD *)(a1 + 0x64),
      a2 + 0x28,
      &v13);
    if ( v14 > 0 ) /*0x8ccb1a*/
      sub_8D83E0(*(_DWORD ***)(a1 + 0x68), v13, v14); /*0x8ccb25*/
  }
  v9 = *(_DWORD **)(v2 + 0x19C); /*0x8ccb2a*/
  result = v16; /*0x8ccb32*/
  if ( !v9 ) /*0x8ccb36*/
    v9 = (_DWORD *)unk_BA7D9C; /*0x8ccb38*/
  v11 = v16 == v9[0xA]; /*0x8ccb3e*/
  v9[8] = v16; /*0x8ccb41*/
  if ( v11 ) /*0x8ccb44*/
    result = (*(int (__thiscall **)(_DWORD *, int))(*v9 + 0x10))(v9, result); /*0x8ccb49*/
  if ( v15 >= 0 ) /*0x8ccb52*/
  {
    v12 = *(_DWORD *)(v2 + 0x19C); /*0x8ccb54*/
    if ( !v12 ) /*0x8ccb5c*/
      v12 = unk_BA7D9C; /*0x8ccb5e*/
    return sub_8A75D0(v12, v13, 8 * v15, 0x14); /*0x8ccb76*/
  }
  return result; /*0x8ccb7b*/
}

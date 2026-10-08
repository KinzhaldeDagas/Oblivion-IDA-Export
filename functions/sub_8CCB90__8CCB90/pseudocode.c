int __cdecl sub_8CCB90(int a1, int a2)
{
  int v2; // ebp
  _DWORD *v3; // ecx
  int v4; // esi
  _DWORD *v5; // eax
  char *v6; // edi
  int v7; // ecx
  _DWORD *v8; // ecx
  int result; // eax
  bool v10; // zf
  int v11; // eax
  _DWORD *v12; // [esp+10h] [ebp-10h] BYREF
  int v13; // [esp+14h] [ebp-Ch]
  signed int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ccba6*/
  v3 = *(_DWORD **)(v2 + 0x19C); /*0x8ccba9*/
  v4 = *(_DWORD *)(a1 + 0x2A4); /*0x8ccbb4*/
  v12 = 0; /*0x8ccbba*/
  v13 = 0; /*0x8ccbbe*/
  v14 = 0x80000000; /*0x8ccbc2*/
  if ( !v3 ) /*0x8ccbca*/
    v3 = (_DWORD *)unk_BA7D9C; /*0x8ccbcc*/
  v5 = (_DWORD *)v3[8]; /*0x8ccbd2*/
  v6 = (char *)v5 + ((8 * v4 + 0x10) & 0xFFFFFFF0); /*0x8ccbe0*/
  if ( (unsigned int)v6 > v3[0xB] ) /*0x8ccbe6*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 0xC))(v3, (8 * v4 + 0x10) & 0xFFFFFFF0); /*0x8ccbf0*/
  else
    v3[8] = v6; /*0x8ccbe8*/
  v7 = *(_DWORD *)(a1 + 0x64); /*0x8ccbf3*/
  v12 = v5; /*0x8ccbf6*/
  v15 = (int)v5; /*0x8ccbfa*/
  v14 = v4 | 0x80000000; /*0x8ccc10*/
  (*(void (__thiscall **)(int, int, _DWORD **))(*(_DWORD *)v7 + 0x10))(v7, a2 + 0x28, &v12); /*0x8ccc17*/
  if ( v13 ) /*0x8ccc21*/
    sub_8D83E0(*(_DWORD ***)(a1 + 0x68), v12, v13); /*0x8ccc2c*/
  v8 = *(_DWORD **)(v2 + 0x19C); /*0x8ccc31*/
  result = v15; /*0x8ccc39*/
  if ( !v8 ) /*0x8ccc3d*/
    v8 = (_DWORD *)unk_BA7D9C; /*0x8ccc3f*/
  v10 = v15 == v8[0xA]; /*0x8ccc45*/
  v8[8] = v15; /*0x8ccc48*/
  if ( v10 ) /*0x8ccc4b*/
    result = (*(int (__thiscall **)(_DWORD *, int))(*v8 + 0x10))(v8, result); /*0x8ccc50*/
  if ( v14 >= 0 ) /*0x8ccc59*/
  {
    v11 = *(_DWORD *)(v2 + 0x19C); /*0x8ccc5b*/
    if ( !v11 ) /*0x8ccc63*/
      v11 = unk_BA7D9C; /*0x8ccc65*/
    return sub_8A75D0(v11, v12, 8 * v14, 0x14); /*0x8ccc7d*/
  }
  return result; /*0x8ccc82*/
}

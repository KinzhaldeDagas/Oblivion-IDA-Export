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

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v3 = *(_DWORD **)(v2 + 0x19C);
  v4 = *(_DWORD *)(a1 + 0x2A4);
  v13 = 0;
  v14 = 0;
  v15 = 0x80000000;
  if ( !v3 )
    v3 = (_DWORD *)dword_BA7D9C;
  v5 = (_DWORD *)v3[8];
  v6 = (char *)v5 + ((8 * v4 + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v6 > v3[0xB] )
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 0xC))(v3, (8 * v4 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v3[8] = v6;
    v7 = v5;
  }
  v13 = v7;
  v16 = (int)v7;
  v8 = *(_DWORD *)(a2 + 0x14);
  v15 = v4 | 0x80000000;
  if ( v8 )
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD **))(**(_DWORD **)(a1 + 0x64) + 0x10))(
      *(_DWORD *)(a1 + 0x64),
      a2 + 0x28,
      &v13);
    if ( v14 > 0 )
      sub_8D83E0(*(_DWORD ***)(a1 + 0x68), v13, v14);
  }
  v9 = *(_DWORD **)(v2 + 0x19C);
  result = v16;
  if ( !v9 )
    v9 = (_DWORD *)dword_BA7D9C;
  v11 = v16 == v9[0xA];
  v9[8] = v16;
  if ( v11 )
    result = (*(int (__thiscall **)(_DWORD *, int))(*v9 + 0x10))(v9, result);
  if ( v15 >= 0 )
  {
    v12 = *(_DWORD *)(v2 + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    return sub_8A75D0(v12, v13, 8 * v15, 0x14);
  }
  return result;
}

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

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v3 = *(_DWORD **)(v2 + 0x19C);
  v4 = *(_DWORD *)(a1 + 0x2A4);
  v12 = 0;
  v13 = 0;
  v14 = 0x80000000;
  if ( !v3 )
    v3 = (_DWORD *)dword_BA7D9C;
  v5 = (_DWORD *)v3[8];
  v6 = (char *)v5 + ((8 * v4 + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v6 > v3[0xB] )
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 0xC))(v3, (8 * v4 + 0x10) & 0xFFFFFFF0);
  else
    v3[8] = v6;
  v7 = *(_DWORD *)(a1 + 0x64);
  v12 = v5;
  v15 = (int)v5;
  v14 = v4 | 0x80000000;
  (*(void (__thiscall **)(int, int, _DWORD **))(*(_DWORD *)v7 + 0x10))(v7, a2 + 0x28, &v12);
  if ( v13 )
    sub_8D83E0(*(_DWORD ***)(a1 + 0x68), v12, v13);
  v8 = *(_DWORD **)(v2 + 0x19C);
  result = v15;
  if ( !v8 )
    v8 = (_DWORD *)dword_BA7D9C;
  v10 = v15 == v8[0xA];
  v8[8] = v15;
  if ( v10 )
    result = (*(int (__thiscall **)(_DWORD *, int))(*v8 + 0x10))(v8, result);
  if ( v14 >= 0 )
  {
    v11 = *(_DWORD *)(v2 + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    return sub_8A75D0(v11, v12, 8 * v14, 0x14);
  }
  return result;
}

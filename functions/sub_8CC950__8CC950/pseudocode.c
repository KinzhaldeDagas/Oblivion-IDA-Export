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

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v3 = *(_DWORD **)(v2 + 0x19C);
  v4 = *(_DWORD *)(a1 + 0x2A4);
  v15 = 0;
  v16 = 0;
  v17 = 0x80000000;
  v14 = v2;
  if ( !v3 )
    v3 = (_DWORD *)dword_BA7D9C;
  v5 = (_DWORD *)v3[8];
  v6 = (char *)v5 + ((8 * v4 + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v6 > v3[0xB] )
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 0xC))(v3, (8 * v4 + 0x10) & 0xFFFFFFF0);
  else
    v3[8] = v6;
  v15 = v5;
  v17 = v4 | 0x80000000;
  v7 = *a2;
  v18 = (int)v5;
  (*(void (__thiscall **)(int *, _BYTE *))(v7 + 0x14))(a2, v19);
  (*(void (__thiscall **)(_DWORD, int *, _BYTE *, _DWORD **))(**(_DWORD **)(a1 + 0x64) + 8))(
    *(_DWORD *)(a1 + 0x64),
    a2 + 0xA,
    v19,
    &v15);
  if ( v16 )
  {
    v8 = *(_DWORD *)(a1 + 0x78);
    if ( v8 )
      v9 = (int (__thiscall ***)(_DWORD, int *, int, int))(v8 + 8);
    else
      v9 = 0;
    sub_8D8370(*(_DWORD ***)(a1 + 0x68), v15, v16, v9);
  }
  v10 = *(_DWORD **)(v14 + 0x19C);
  result = v18;
  if ( !v10 )
    v10 = (_DWORD *)dword_BA7D9C;
  v12 = v18 == v10[0xA];
  v10[8] = v18;
  if ( v12 )
    result = (*(int (__thiscall **)(_DWORD *, int))(*v10 + 0x10))(v10, result);
  if ( v17 >= 0 )
  {
    v13 = *(_DWORD *)(v14 + 0x19C);
    if ( !v13 )
      v13 = dword_BA7D9C;
    return sub_8A75D0(v13, v15, 8 * v17, 0x14);
  }
  return result;
}

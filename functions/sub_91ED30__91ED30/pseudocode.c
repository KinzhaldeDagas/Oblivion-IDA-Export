_DWORD *__cdecl sub_91ED30(int a1)
{
  unsigned int v2; // esi
  unsigned __int16 v3; // cx
  int v4; // eax
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // ebp
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *result; // eax
  int v11; // ecx
  int v12; // ecx
  _BYTE v13[16]; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x24);
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + 0x26) = 1;
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v2 + 0xC) + 0x20))(*(_DWORD *)(v2 + 0xC), v13);
  (*(void (__thiscall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(a1 + 8) + 0x10))(*(_DWORD *)(a1 + 8), a1, v13);
  *(_DWORD *)(a1 + 8) = 0;
  v3 = *(_WORD *)(v2 + 0x12);
  v4 = *(_DWORD *)(v2 + 4 * (2 - *(unsigned __int8 *)(v2 + 0x11)));
  v5 = *(_DWORD *)(v4 + 0x74);
  v6 = *(_DWORD *)(v5 + 4 * *(_DWORD *)(v4 + 0x78) - 4);
  *(_DWORD *)(v5 + 4 * v3) = v6;
  --*(_DWORD *)(v4 + 0x78);
  *(_WORD *)(*(_DWORD *)(v6 + 0x24) + 0x12) = v3;
  v7 = *(_DWORD **)(v2 + 4 * *(unsigned __int8 *)(v2 + 0x11) + 4);
  v8 = *(_DWORD *)(v2 + 0x18);
  v14 = 0;
  if ( v8 )
  {
    v14 = -*(unsigned __int16 *)(v2 + 0x14);
    j_unknown_libname_16(
      v8,
      *(unsigned __int16 *)(v2 + 0x14) + v8,
      v7[0x20] + v7[0x21] - (*(unsigned __int16 *)(v2 + 0x14) + v8));
    v7[0x21] -= *(unsigned __int16 *)(v2 + 0x14);
    *(_DWORD *)(v2 + 0x18) = 0;
  }
  *(_DWORD *)(a1 + 0x24) = 0;
  v9 = 0x1C * v7[0x1B] + v7[0x1A] - 0x1C;
  result = (_DWORD *)v2;
  if ( v2 < v9 )
  {
    do
    {
      qmemcpy(result, result + 7, 0x1Cu);
      *(_DWORD *)(*result + 0x24) = result;
      v11 = result[6];
      if ( v11 )
        v12 = v14 + v11;
      else
        v12 = 0;
      result[6] = v12;
      result += 7;
    }
    while ( (unsigned int)result < v9 );
  }
  --v7[0x1B];
  if ( *(_WORD *)(a1 + 4) )
  {
    if ( !--*(_WORD *)(a1 + 6) )
      return (**(_DWORD *(__thiscall ***)(int, int))a1)(a1, 1);
  }
  return result;
}

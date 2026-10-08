_DWORD *__cdecl sub_91ED30(int a1)
{
  unsigned int v2; // esi
  unsigned __int16 v3; // cx
  int v4; // eax
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // edx
  _DWORD *result; // eax
  int v11; // ecx
  int v12; // ecx
  _BYTE v13[16]; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x24); /*0x91ed3d*/
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + 0x26) = 1; /*0x91ed40*/
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v2 + 0xC) + 0x20))(*(_DWORD *)(v2 + 0xC), v13); /*0x91ed4f*/
  (*(void (__thiscall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(a1 + 8) + 0x10))(*(_DWORD *)(a1 + 8), a1, v13); /*0x91ed5d*/
  *(_DWORD *)(a1 + 8) = 0; /*0x91ed60*/
  v3 = *(_WORD *)(v2 + 0x12); /*0x91ed6b*/
  v4 = *(_DWORD *)(v2 + 4 * (2 - *(unsigned __int8 *)(v2 + 0x11))); /*0x91ed76*/
  v5 = *(_DWORD *)(v4 + 0x74); /*0x91ed79*/
  v6 = *(_DWORD *)(v5 + 4 * *(_DWORD *)(v4 + 0x78) - 4); /*0x91ed7f*/
  *(_DWORD *)(v5 + 4 * v3) = v6; /*0x91ed89*/
  --*(_DWORD *)(v4 + 0x78); /*0x91ed8c*/
  *(_WORD *)(*(_DWORD *)(v6 + 0x24) + 0x12) = v3; /*0x91ed92*/
  v7 = *(_DWORD **)(v2 + 4 * *(unsigned __int8 *)(v2 + 0x11) + 4); /*0x91ed9a*/
  v8 = *(_DWORD *)(v2 + 0x18); /*0x91ed9e*/
  v14 = 0; /*0x91eda5*/
  if ( v8 ) /*0x91eda9*/
  {
    v14 = -*(unsigned __int16 *)(v2 + 0x14); /*0x91edb3*/
    j_unknown_libname_16( /*0x91edcb*/
      v8,
      *(unsigned __int16 *)(v2 + 0x14) + v8,
      v7[0x20] + v7[0x21] - (*(unsigned __int16 *)(v2 + 0x14) + v8));
    v7[0x21] -= *(unsigned __int16 *)(v2 + 0x14); /*0x91eddf*/
    *(_DWORD *)(v2 + 0x18) = 0; /*0x91ede5*/
  }
  *(_DWORD *)(a1 + 0x24) = 0; /*0x91ede8*/
  v9 = 0x1C * v7[0x1B] + v7[0x1A] - 0x1C; /*0x91edf4*/
  result = (_DWORD *)v2; /*0x91edfa*/
  if ( v2 < v9 ) /*0x91edfc*/
  {
    do /*0x91ee2a*/
    {
      qmemcpy(result, result + 7, 0x1Cu); /*0x91ee0a*/
      *(_DWORD *)(*result + 0x24) = result; /*0x91ee0e*/
      v11 = result[6]; /*0x91ee11*/
      if ( v11 ) /*0x91ee16*/
        v12 = v14 + v11; /*0x91ee1c*/
      else
        v12 = 0; /*0x91ee20*/
      result[6] = v12; /*0x91ee22*/
      result += 7; /*0x91ee25*/
    }
    while ( (unsigned int)result < v9 ); /*0x91ee2a*/
  }
  --v7[0x1B]; /*0x91ee2e*/
  if ( *(_WORD *)(a1 + 4) ) /*0x91ee31*/
  {
    if ( !--*(_WORD *)(a1 + 6) ) /*0x91ee3b*/
      return (**(_DWORD *(__thiscall ***)(int, int))a1)(a1, 1); /*0x91ee47*/
  }
  return result; /*0x91ee49*/
}

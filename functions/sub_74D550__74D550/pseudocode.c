int __stdcall sub_74D550(int a1, int a2)
{
  int result; // eax
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  void (__thiscall *v11)(int, _DWORD, int); // edx
  int i; // [esp+20h] [ebp-34h]
  int v13; // [esp+24h] [ebp-30h]
  int v14; // [esp+28h] [ebp-2Ch]
  int v15; // [esp+2Ch] [ebp-28h]
  float v16[9]; // [esp+30h] [ebp-24h] BYREF
  int v17; // [esp+5Ch] [ebp+8h]
  float v18; // [esp+5Ch] [ebp+8h]
  float v19; // [esp+5Ch] [ebp+8h]

  v13 = *(_DWORD *)(a2 + 0x54); /*0x74d55e*/
  result = 0; /*0x74d562*/
  v14 = *(_DWORD *)(a2 + 0x58); /*0x74d568*/
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a2 + 0x48); ++i ) /*0x74d564*/
  {
    v4 = (unsigned __int16)result; /*0x74d580*/
    v5 = *(_DWORD *)(a2 + 0x5C) + 0x1C * (unsigned __int16)result; /*0x74d58f*/
    v6 = *(_DWORD *)(a2 + 0x68); /*0x74d592*/
    v15 = v5; /*0x74d59e*/
    if ( *(unsigned __int16 *)(v6 + 0xB6) > v4 ) /*0x74d5a2*/
    {
      v17 = *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * v4); /*0x74d5b5*/
      v7 = v17; /*0x74d5b9*/
    }
    else
    {
      v7 = 0; /*0x74d5a4*/
      v17 = 0; /*0x74d5a6*/
    }
    v8 = *(_DWORD *)(a2 + 0x1C); /*0x74d5bb*/
    v9 = *(_DWORD *)(v8 + 0xC * v4); /*0x74d5c5*/
    v10 = 0xC * v4 + v8; /*0x74d5c8*/
    *(_DWORD *)(v7 + 0x54) = v9; /*0x74d5ca*/
    *(_DWORD *)(v7 + 0x58) = *(_DWORD *)(v10 + 4); /*0x74d5d0*/
    *(_DWORD *)(v7 + 0x5C) = *(_DWORD *)(v10 + 8); /*0x74d5dc*/
    if ( v13 ) /*0x74d5df*/
    {
      if ( v14 ) /*0x74d5e7*/
      {
        sub_70FE20( /*0x74d60d*/
          v16,
          *(float *)(v13 + 4 * v4),
          *(float *)(0xC * v4 + v14),
          *(float *)(0xC * v4 + v14 + 4),
          *(float *)(0xC * v4 + v14 + 8));
        qmemcpy((void *)(v7 + 0x30), v16, 0x24u); /*0x74d61e*/
        v7 = v17; /*0x74d620*/
      }
    }
    v11 = *(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 0x60); /*0x74d636*/
    v18 = *(float *)(*(_DWORD *)(a2 + 0x4C) + 4 * v4) * *(float *)(*(_DWORD *)(a2 + 0x44) + 4 * v4); /*0x74d639*/
    v19 = fabs(v18); /*0x74d648*/
    *(float *)(v7 + 0x60) = v19; /*0x74d650*/
    v11(v7, *(float *)(v15 + 0xC), 1); /*0x74d659*/
    result = i + 1; /*0x74d65f*/
  }
  return result; /*0x74d673*/
}

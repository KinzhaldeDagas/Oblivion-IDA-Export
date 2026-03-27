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

  v13 = *(_DWORD *)(a2 + 0x54);
  result = 0;
  v14 = *(_DWORD *)(a2 + 0x58);
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a2 + 0x48); ++i )
  {
    v4 = (unsigned __int16)result;
    v5 = *(_DWORD *)(a2 + 0x5C) + 0x1C * (unsigned __int16)result;
    v6 = *(_DWORD *)(a2 + 0x68);
    v15 = v5;
    if ( *(unsigned __int16 *)(v6 + 0xB6) > v4 )
    {
      v17 = *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * v4);
      v7 = v17;
    }
    else
    {
      v7 = 0;
      v17 = 0;
    }
    v8 = *(_DWORD *)(a2 + 0x1C);
    v9 = *(_DWORD *)(v8 + 0xC * v4);
    v10 = 0xC * v4 + v8;
    *(_DWORD *)(v7 + 0x54) = v9;
    *(_DWORD *)(v7 + 0x58) = *(_DWORD *)(v10 + 4);
    *(_DWORD *)(v7 + 0x5C) = *(_DWORD *)(v10 + 8);
    if ( v13 )
    {
      if ( v14 )
      {
        sub_70FE20(
          v16,
          *(float *)(v13 + 4 * v4),
          *(float *)(0xC * v4 + v14),
          *(float *)(0xC * v4 + v14 + 4),
          *(float *)(0xC * v4 + v14 + 8));
        qmemcpy((void *)(v7 + 0x30), v16, 0x24u);
        v7 = v17;
      }
    }
    v11 = *(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 0x60);
    v18 = *(float *)(*(_DWORD *)(a2 + 0x4C) + 4 * v4) * *(float *)(*(_DWORD *)(a2 + 0x44) + 4 * v4);
    v19 = fabs(v18);
    *(float *)(v7 + 0x60) = v19;
    v11(v7, *(float *)(v15 + 0xC), 1);
    result = i + 1;
  }
  return result;
}

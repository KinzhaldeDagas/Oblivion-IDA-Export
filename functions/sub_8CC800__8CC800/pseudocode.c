int __cdecl sub_8CC800(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // esi
  unsigned int v6; // edx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int (__thiscall ***v11)(_DWORD, int *, int, int); // ecx
  _DWORD *v12; // ecx
  bool v13; // zf
  int v14; // eax
  float v15; // [esp+4h] [ebp-58h]
  _DWORD *v16; // [esp+24h] [ebp-38h]
  int v17; // [esp+28h] [ebp-34h]
  _DWORD *v18; // [esp+2Ch] [ebp-30h] BYREF
  int v19; // [esp+30h] [ebp-2Ch]
  signed int v20; // [esp+34h] [ebp-28h]
  int v21; // [esp+38h] [ebp-24h]
  _BYTE v22[32]; // [esp+3Ch] [ebp-20h] BYREF

  result = *(_DWORD *)(a2 + 0x14); /*0x8cc80d*/
  if ( result ) /*0x8cc816*/
  {
    v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8cc828*/
    v4 = *(_DWORD **)(v3 + 0x19C); /*0x8cc82b*/
    v5 = *(_DWORD *)(a1 + 0x2A4); /*0x8cc836*/
    v18 = 0; /*0x8cc83c*/
    v19 = 0; /*0x8cc840*/
    v20 = 0x80000000; /*0x8cc844*/
    v17 = v3; /*0x8cc84c*/
    if ( !v4 ) /*0x8cc850*/
      v4 = (_DWORD *)unk_BA7D9C; /*0x8cc852*/
    v6 = (8 * v5 + 0x10) & 0xFFFFFFF0; /*0x8cc862*/
    v16 = (_DWORD *)v4[8]; /*0x8cc865*/
    if ( (unsigned int)v16 + v6 > v4[0xB] ) /*0x8cc86e*/
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v4 + 0xC))(v4, (8 * v5 + 0x10) & 0xFFFFFFF0); /*0x8cc87c*/
    }
    else
    {
      v4[8] = (char *)v16 + v6; /*0x8cc870*/
      v7 = v16; /*0x8cc873*/
    }
    v8 = *(_DWORD *)(a2 + 0x14); /*0x8cc87f*/
    v18 = v7; /*0x8cc882*/
    v21 = (int)v7; /*0x8cc886*/
    v9 = *(_DWORD *)(a1 + 0x74); /*0x8cc88f*/
    v20 = v5 | 0x80000000; /*0x8cc898*/
    v15 = *(float *)(v9 + 8) * kHeadBodyNormalMatchRadius; /*0x8cc8ab*/
    (*(void (__stdcall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)v8 + 0xC))(*(_DWORD *)(a2 + 0x1C), LODWORD(v15), v22); /*0x8cc8af*/
    (*(void (__thiscall **)(_DWORD, int, _BYTE *, _DWORD **))(**(_DWORD **)(a1 + 0x64) + 8))( /*0x8cc8c5*/
      *(_DWORD *)(a1 + 0x64),
      a2 + 0x28,
      v22,
      &v18);
    if ( v19 > 0 ) /*0x8cc8ce*/
    {
      v10 = *(_DWORD *)(a1 + 0x78); /*0x8cc8d0*/
      if ( v10 ) /*0x8cc8d5*/
        v11 = (int (__thiscall ***)(_DWORD, int *, int, int))(v10 + 8); /*0x8cc8d7*/
      else
        v11 = 0; /*0x8cc8dc*/
      sub_8D8370(*(_DWORD ***)(a1 + 0x68), v18, v19, v11); /*0x8cc8e8*/
    }
    v12 = *(_DWORD **)(v17 + 0x19C); /*0x8cc8f1*/
    result = v21; /*0x8cc8f9*/
    if ( !v12 ) /*0x8cc8fd*/
      v12 = (_DWORD *)unk_BA7D9C; /*0x8cc8ff*/
    v13 = v21 == v12[0xA]; /*0x8cc905*/
    v12[8] = v21; /*0x8cc908*/
    if ( v13 ) /*0x8cc90b*/
      result = (*(int (__thiscall **)(_DWORD *, int))(*v12 + 0x10))(v12, result); /*0x8cc910*/
    if ( v20 >= 0 ) /*0x8cc919*/
    {
      v14 = *(_DWORD *)(v17 + 0x19C); /*0x8cc91b*/
      if ( !v14 ) /*0x8cc923*/
        v14 = unk_BA7D9C; /*0x8cc925*/
      return sub_8A75D0(v14, v18, 8 * v20, 0x14); /*0x8cc93d*/
    }
  }
  return result; /*0x8cc942*/
}

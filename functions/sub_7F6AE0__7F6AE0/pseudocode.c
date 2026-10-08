int __stdcall sub_7F6AE0(int a1, unsigned __int16 a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ebp
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  unsigned __int8 v14; // bl
  int result; // eax
  int v16; // [esp+8h] [ebp-8h]
  _DWORD *retaddr; // [esp+10h] [ebp+0h]

  v5 = *(_DWORD *)(4 * a2 + 0xB455A0); /*0x7f6aed*/
  v6 = **(_DWORD **)(v5 + 0x24); /*0x7f6afe*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a4 + 0x88))(a4, 0); /*0x7f6b09*/
  v8 = *(_DWORD *)(v6 + 4); /*0x7f6b0b*/
  v9 = v7; /*0x7f6b0e*/
  if ( v8 != v7 ) /*0x7f6b12*/
  {
    if ( v8 ) /*0x7f6b16*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7f6b1c*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7f6b32*/
    }
    retaddr[1] = v9; /*0x7f6b3a*/
    if ( v9 ) /*0x7f6b3d*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x7f6b43*/
  }
  v10 = *(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4); /*0x7f6b50*/
  v11 = sub_848FD0(a4, 0); /*0x7f6b56*/
  v12 = *(_DWORD *)(v10 + 4); /*0x7f6b5b*/
  v13 = v11; /*0x7f6b5e*/
  if ( v12 != v11 ) /*0x7f6b62*/
  {
    if ( v12 ) /*0x7f6b66*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7f6b6c*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7f6b82*/
    }
    *(_DWORD *)(v10 + 4) = v13; /*0x7f6b86*/
    if ( v13 ) /*0x7f6b89*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x7f6b8f*/
  }
  v14 = *(_BYTE *)(retaddr[2] + 0x1A); /*0x7f6ba0*/
  if ( !*(_DWORD *)(v5 + 0x30) ) /*0x7f6b95*/
    *(_DWORD *)(v5 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f6baa*/
  LOBYTE(result) = NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v5 + 0x30), 0x18u, v14, 0); /*0x7f6bb8*/
  if ( *(_DWORD *)(*(_DWORD *)(v16 + 0xB4) + 0x24) ) /*0x7f6bc7*/
    flt_B46638[0x14] = 1.0; /*0x7f6bd3*/
  else
    flt_B46638[0x14] = 0.0; /*0x7f6bde*/
  return result; /*0x7f6bd9*/
}

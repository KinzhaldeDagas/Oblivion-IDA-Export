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

  v5 = *(_DWORD *)(4 * a2 + 0xB455A0);
  v6 = **(_DWORD **)(v5 + 0x24);
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a4 + 0x88))(a4, 0);
  v8 = *(_DWORD *)(v6 + 4);
  v9 = v7;
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    retaddr[1] = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  v10 = *(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4);
  v11 = sub_848FD0(a4, 0);
  v12 = *(_DWORD *)(v10 + 4);
  v13 = v11;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(v10 + 4) = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  v14 = *(_BYTE *)(retaddr[2] + 0x1A);
  if ( !*(_DWORD *)(v5 + 0x30) )
    *(_DWORD *)(v5 + 0x30) = sub_772DF0();
  LOBYTE(result) = sub_772CD0(*(_DWORD **)(v5 + 0x30), 0x18, v14, 0);
  if ( *(_DWORD *)(*(_DWORD *)(v16 + 0xB4) + 0x24) )
    flt_B46688 = 1.0;
  else
    flt_B46688 = 0.0;
  return result;
}

__int16 __thiscall sub_651AD0(void *this, int a2)
{
  int v2; // ebx
  void (__thiscall ***v3)(_DWORD, int); // esi
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x18C))(this, &v8);
  if ( v8 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))v8;
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**v3)(v3, 1);
  }
  if ( !v2 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x198))(a2, 0) )
    return 0;
  v4 = 0xC;
  if ( (*(_DWORD *)(v2 + 0x1F4) & 0x800) != 0 )
    v4 = 0x18;
  v5 = v4 + 0x2C;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) )
    v6 = v5 + 0xC;
  else
    v6 = v5 + 8;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x77u )
    v6 += 8;
  return v6;
}

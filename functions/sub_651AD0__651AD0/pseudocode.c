__int16 __thiscall sub_651AD0(void *this, int a2)
{
  int v2; // ebx
  void (__thiscall ***v3)(_DWORD, int); // esi
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x18C))(this, &v8); /*0x651ae5*/
  if ( v8 ) /*0x651aed*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))v8; /*0x651aef*/
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x651af5*/
      (**v3)(v3, 1); /*0x651b0b*/
  }
  if ( !v2 ) /*0x651b0f*/
    return 0; /*0x651b74*/
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x198))(a2, 0) ) /*0x651b22*/
    return 0; /*0x651b7f*/
  v4 = 0xC; /*0x651b32*/
  if ( (*(_DWORD *)(v2 + 0x1F4) & 0x800) != 0 ) /*0x651b37*/
    v4 = 0x18; /*0x651b39*/
  v5 = v4 + 0x2C; /*0x651b48*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) ) /*0x651b4b*/
    v6 = v5 + 0xC; /*0x651b51*/
  else
    v6 = v5 + 8; /*0x651b56*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x77u ) /*0x651b63*/
    v6 += 8; /*0x651b65*/
  return v6; /*0x651b6c*/
}

int __thiscall sub_4B24F0(int this, _DWORD *a2)
{
  unsigned __int16 v3; // ax
  int v4; // ebx
  int v6; // ebp
  int v7; // edi
  unsigned __int16 v8; // ax

  if ( !*a2 ) /*0x4b251a*/
    return 0xFFFFFFFF; /*0x4b251a*/
  v3 = 0; /*0x4b2527*/
  if ( !*(_WORD *)(this + 0xA) ) /*0x4b2529*/
    return 0xFFFFFFFF; /*0x4b2543*/
  v4 = *(_DWORD *)(this + 4); /*0x4b252f*/
  while ( *(_DWORD *)(v4 + 4 * v3) != *a2 ) /*0x4b2538*/
  {
    if ( ++v3 >= *(_WORD *)(this + 0xA) ) /*0x4b2541*/
      return 0xFFFFFFFF; /*0x4b2541*/
  }
  v6 = v3; /*0x4b2560*/
  v7 = *(_DWORD *)(v4 + 4 * v3); /*0x4b2563*/
  if ( v7 ) /*0x4b256c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x4b2572*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4b2588*/
    *(_DWORD *)(v4 + 4 * v6) = 0; /*0x4b258a*/
  }
  v8 = *(_WORD *)(this + 0xA); /*0x4b2591*/
  --*(_WORD *)(this + 0xC); /*0x4b2595*/
  if ( v6 == v8 - 1 ) /*0x4b25a3*/
    *(_WORD *)(this + 0xA) = v8 - 1; /*0x4b25a8*/
  return v6; /*0x4b2546*/
}

char __thiscall sub_77C950(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  LONG v4; // eax
  int v5; // edi
  int v7; // [esp+10h] [ebp-4h] BYREF

  v3 = (_DWORD *)*(this + 8); /*0x77c95f*/
  v7 = 0; /*0x77c964*/
  LOBYTE(v4) = sub_4A1AB0(v3, a2, &v7); /*0x77c96c*/
  v5 = v7; /*0x77c973*/
  if ( (_BYTE)v4 && *(_DWORD *)(v7 + 4) == 2 ) /*0x77c980*/
  {
    NiTMap_RemoveAt((_DWORD *)*(this + 8), a2); /*0x77c986*/
    v4 = InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x77c98c*/
  }
  else
  {
    if ( !v7 ) /*0x77c990*/
      return v4; /*0x77c990*/
    v4 = InterlockedDecrement((volatile LONG *)(v7 + 4)); /*0x77c996*/
  }
  if ( !v4 ) /*0x77c99e*/
    LOBYTE(v4) = (**(char (__thiscall ***)(int, int))v5)(v5, 1); /*0x77c9a8*/
  return v4; /*0x77c9aa*/
}

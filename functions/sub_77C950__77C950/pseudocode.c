char __thiscall sub_77C950(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  LONG v4; // eax
  int v5; // edi
  int v7; // [esp+10h] [ebp-4h] BYREF

  v3 = (_DWORD *)*(this + 8);
  v7 = 0;
  LOBYTE(v4) = sub_4A1AB0(v3, a2, &v7);
  v5 = v7;
  if ( (_BYTE)v4 && *(_DWORD *)(v7 + 4) == 2 )
  {
    NiTMap_RemoveAt((_DWORD *)*(this + 8), a2);
    v4 = InterlockedDecrement((volatile LONG *)(v5 + 4));
  }
  else
  {
    if ( !v7 )
      return v4;
    v4 = InterlockedDecrement((volatile LONG *)(v7 + 4));
  }
  if ( !v4 )
    LOBYTE(v4) = (**(char (__thiscall ***)(int, int))v5)(v5, 1);
  return v4;
}

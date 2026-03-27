char __thiscall sub_56BB50(NiD3DPass *this)
{
  int v2; // esi

  v2 = *(_DWORD *)&this->Name[8];
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(_DWORD *)&this->Name[8] = 0;
  }
  sub_56BAF0(this);
  return 1;
}

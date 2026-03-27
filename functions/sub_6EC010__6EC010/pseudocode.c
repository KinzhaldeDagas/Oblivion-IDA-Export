char __thiscall sub_6EC010(NiD3DPass *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement;
  v3 = *(_DWORD *)&this->Name[8];
  if ( v3 )
  {
    if ( !v1((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(_DWORD *)&this->Name[8] = 0;
  }
  v4 = *(_DWORD *)&this->Name[0xC];
  if ( v4 )
  {
    if ( !v1((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(_DWORD *)&this->Name[0xC] = 0;
  }
  sub_6EBFB0(this);
  return 1;
}

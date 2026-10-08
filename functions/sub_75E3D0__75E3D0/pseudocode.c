char __thiscall sub_75E3D0(NiD3DPass *this)
{
  int v2; // esi

  v2 = *(_DWORD *)&this->Name[8]; /*0x75e3d4*/
  if ( v2 ) /*0x75e3d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x75e3df*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x75e3f5*/
    *(_DWORD *)&this->Name[8] = 0; /*0x75e3f7*/
  }
  sub_75E370(this); /*0x75e3ff*/
  return 1; /*0x75e407*/
}

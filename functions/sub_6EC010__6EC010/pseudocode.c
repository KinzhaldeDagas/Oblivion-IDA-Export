char __thiscall sub_6EC010(NiD3DPass *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement; /*0x6ec011*/
  v3 = *(_DWORD *)&this->Name[8]; /*0x6ec01b*/
  if ( v3 ) /*0x6ec020*/
  {
    if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x6ec026*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6ec038*/
    *(_DWORD *)&this->Name[8] = 0; /*0x6ec03a*/
  }
  v4 = *(_DWORD *)&this->Name[0xC]; /*0x6ec041*/
  if ( v4 ) /*0x6ec046*/
  {
    if ( !v1((volatile LONG *)(v4 + 4)) ) /*0x6ec04c*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6ec05e*/
    *(_DWORD *)&this->Name[0xC] = 0; /*0x6ec060*/
  }
  sub_6EBFB0(this); /*0x6ec068*/
  return 1; /*0x6ec070*/
}

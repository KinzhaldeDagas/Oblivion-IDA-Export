void __thiscall sub_5893F0(_DWORD *this)
{
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (_DWORD *)*(this + 0xD); /*0x5893f4*/
  while ( v2 ) /*0x5893f9*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))v2[2]; /*0x589400*/
    v2 = (_DWORD *)*v2; /*0x589408*/
    if ( v3 ) /*0x58940a*/
      (**v3)(v3, 1); /*0x589412*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0xC)); /*0x58941d*/
}

void __thiscall sub_890F70(_DWORD *this)
{
  int v2; // ecx
  int v3; // esi

  v2 = *(this + 0x24); /*0x890f98*/
  if ( v2 ) /*0x890fa8*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x890faa*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x890fb6*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x890fc5*/
    }
    *(this + 0x24) = 0; /*0x890fc7*/
  }
  v3 = *(this + 0x23); /*0x890fd1*/
  if ( v3 ) /*0x890fe1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x890fe7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x890ffd*/
  }
}

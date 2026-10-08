int __thiscall sub_6DA440(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // esi

  v5 = *(this + 6); /*0x6da444*/
  if ( v5 ) /*0x6da449*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6da44f*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6da465*/
    *(this + 6) = 0; /*0x6da467*/
  }
  *(this + 3) = a2; /*0x6da47a*/
  *(this + 4) = a3; /*0x6da47d*/
  *(this + 5) = a4; /*0x6da480*/
  return a4; /*0x6da483*/
}

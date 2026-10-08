int __thiscall sub_8BC730(int (__stdcall ***this)(signed int))
{
  int result; // eax

  if ( *((_WORD *)this + 2) ) /*0x8bc730*/
  {
    if ( !--*((_WORD *)this + 3) ) /*0x8bc73b*/
      return ((int (__thiscall *)(int (__stdcall ***)(signed int), int))**this)(this, 1); /*0x8bc746*/
  }
  return result; /*0x8bc748*/
}

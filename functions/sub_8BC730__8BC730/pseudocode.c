int __thiscall sub_8BC730(int (__thiscall ***this)(int (__stdcall ***)(signed int), int))
{
  int result; // eax

  if ( *((_WORD *)this + 2) )
  {
    if ( !--*((_WORD *)this + 3) )
      return (**this)((int (__stdcall ***)(signed int))this, 1);
  }
  return result;
}

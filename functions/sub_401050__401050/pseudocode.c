LONG __thiscall sub_401050(volatile LONG *this)
{
  LONG result; // eax

  result = InterlockedDecrement(this + 1); /*0x401057*/
  if ( !result ) /*0x40105f*/
  {
    if ( this ) /*0x401063*/
      return (**(LONG (__thiscall ***)(volatile LONG *, int))this)(this, 1); /*0x40106d*/
  }
  return result; /*0x40106f*/
}

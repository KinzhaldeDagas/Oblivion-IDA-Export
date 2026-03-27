LONG __thiscall sub_401050(volatile LONG *this)
{
  LONG result; // eax

  result = InterlockedDecrement(this + 1);
  if ( !result )
  {
    if ( this )
      return (**(LONG (__thiscall ***)(volatile LONG *, int))this)(this, 1);
  }
  return result;
}

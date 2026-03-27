void __thiscall LowProcess_SetCharProxy(HighProcess *this, volatile LONG *a2)
{
  volatile LONG *charProxy; // esi
  LONG (__stdcall *v4)(volatile LONG *); // ebp

  charProxy = (volatile LONG *)this->charProxy;
  v4 = InterlockedDecrement;
  if ( charProxy != a2 )
  {
    if ( charProxy )
    {
      if ( !v4(charProxy + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))charProxy)(charProxy, 1);
    }
    this->charProxy = (bhkCharacterProxy *)a2;
    if ( a2 )
      InterlockedIncrement(a2 + 1);
  }
  if ( a2 )
  {
    if ( !v4(a2 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))a2)(a2, 1);
  }
}

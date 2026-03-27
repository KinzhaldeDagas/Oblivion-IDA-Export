LONG __thiscall sub_6D1BC0(unsigned __int16 *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 *v6; // esi
  LONG result; // eax

  v4 = a3;
  if ( *(this + 0x25) <= a3 )
    sub_523B10(this + 0x20, a3 + 1);
  a3 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  v5 = *(this + 0x24);
  v6 = this + 0x20;
  if ( v4 >= v5 )
    sub_523B10(v6, v4 + v6[7]);
  result = sub_5254D0(v6, v4, (LONG *)&a3);
  if ( a2 )
  {
    result = InterlockedDecrement((volatile LONG *)(a2 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(unsigned int, int))a2)(a2, 1);
  }
  return result;
}

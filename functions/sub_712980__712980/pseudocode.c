LONG __thiscall sub_712980(unsigned int *this, int a2)
{
  int v3; // esi
  LONG result; // eax

  v3 = a2; /*0x7129a4*/
  if ( a2 ) /*0x7129ae*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7129b4*/
  result = sub_8BCD40(this + 0x7B, *(this + 0x9A), &a2); /*0x7129d4*/
  if ( v3 ) /*0x7129e3*/
  {
    result = InterlockedDecrement((volatile LONG *)(v3 + 4)); /*0x7129e9*/
    if ( !result ) /*0x7129f1*/
      return (**(LONG (__thiscall ***)(int, int))v3)(v3, 1); /*0x7129fb*/
  }
  return result; /*0x7129fd*/
}

void __thiscall sub_6DC720(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x12); /*0x6dc724*/
  if ( v3 != a2 ) /*0x6dc72e*/
  {
    if ( v3 ) /*0x6dc732*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6dc738*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6dc74e*/
    }
    *(this + 0x12) = a2; /*0x6dc752*/
    if ( a2 ) /*0x6dc755*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6dc75b*/
  }
}

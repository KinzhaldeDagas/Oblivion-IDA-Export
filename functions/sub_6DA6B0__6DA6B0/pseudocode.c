LONG __thiscall sub_6DA6B0(_DWORD *this, _DWORD *a2, _DWORD **a3)
{
  int v4; // ebx
  LONG result; // eax

  sub_6EC2A0(this, (int)a2, a3); /*0x6da6bf*/
  a2[3] = *(this + 3); /*0x6da6c7*/
  a2[4] = *(this + 4); /*0x6da6cd*/
  a2[5] = *(this + 5); /*0x6da6d3*/
  v4 = a2[6]; /*0x6da6d6*/
  if ( v4 == *(this + 6) ) /*0x6da6dc*/
  {
    result = *(this + 7); /*0x6da72a*/
    a2[7] = result; /*0x6da72d*/
  }
  else
  {
    if ( v4 ) /*0x6da6e0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6da6e6*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6da6fc*/
    }
    result = *(this + 6); /*0x6da6fe*/
    a2[6] = result; /*0x6da703*/
    if ( result ) /*0x6da706*/
      result = InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6da70c*/
    a2[7] = *(this + 7); /*0x6da715*/
  }
  return result; /*0x6da718*/
}

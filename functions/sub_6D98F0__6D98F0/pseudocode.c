int __thiscall sub_6D98F0(_DWORD *this, _DWORD *a2, _DWORD **a3)
{
  int result; // eax
  int v5; // ebx

  sub_6EC2A0(this, (int)a2, a3); /*0x6d98ff*/
  a2[3] = *(this + 3); /*0x6d9907*/
  a2[4] = *(this + 4); /*0x6d990d*/
  result = *(this + 5); /*0x6d9910*/
  a2[5] = result; /*0x6d9913*/
  a2[6] = *(this + 6); /*0x6d9919*/
  v5 = a2[7]; /*0x6d991c*/
  if ( v5 == *(this + 7) ) /*0x6d9922*/
  {
    a2[8] = *(this + 8); /*0x6d9973*/
  }
  else
  {
    if ( v5 ) /*0x6d9926*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6d992c*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6d9942*/
    }
    result = *(this + 7); /*0x6d9944*/
    a2[7] = result; /*0x6d9949*/
    if ( result ) /*0x6d994c*/
    {
      InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6d9952*/
      result = *(this + 8); /*0x6d9958*/
      a2[8] = result; /*0x6d995b*/
    }
    else
    {
      a2[8] = *(this + 8); /*0x6d9967*/
    }
  }
  return result; /*0x6d995e*/
}

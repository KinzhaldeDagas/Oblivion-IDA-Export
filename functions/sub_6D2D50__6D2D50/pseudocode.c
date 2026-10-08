LONG __thiscall sub_6D2D50(float *this, int a2, _DWORD **a3)
{
  int v4; // ebx
  LONG result; // eax

  sub_6EC2A0(this, a2, a3); /*0x6d2d5f*/
  *(float *)(a2 + 0xC) = *(this + 3); /*0x6d2d67*/
  v4 = *(_DWORD *)(a2 + 0x10); /*0x6d2d6a*/
  if ( v4 == *((_DWORD *)this + 4) ) /*0x6d2d70*/
  {
    result = *((_DWORD *)this + 5); /*0x6d2dbe*/
    *(_DWORD *)(a2 + 0x14) = result; /*0x6d2dc1*/
  }
  else
  {
    if ( v4 ) /*0x6d2d74*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6d2d7a*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d2d90*/
    }
    result = *((_DWORD *)this + 4); /*0x6d2d92*/
    *(_DWORD *)(a2 + 0x10) = result; /*0x6d2d97*/
    if ( result ) /*0x6d2d9a*/
      result = InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6d2da0*/
    *(float *)(a2 + 0x14) = *(this + 5); /*0x6d2da9*/
  }
  return result; /*0x6d2dac*/
}

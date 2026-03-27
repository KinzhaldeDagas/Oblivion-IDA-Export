LONG __thiscall sub_6D2D50(float *this, int a2, int a3)
{
  int v4; // ebx
  LONG result; // eax

  sub_6EC2A0(this, a2, a3);
  *(float *)(a2 + 0xC) = *(this + 3);
  v4 = *(_DWORD *)(a2 + 0x10);
  if ( v4 == *((_DWORD *)this + 4) )
  {
    result = *((_DWORD *)this + 5);
    *(_DWORD *)(a2 + 0x14) = result;
  }
  else
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    result = *((_DWORD *)this + 4);
    *(_DWORD *)(a2 + 0x10) = result;
    if ( result )
      result = InterlockedIncrement((volatile LONG *)(result + 4));
    *(float *)(a2 + 0x14) = *(this + 5);
  }
  return result;
}

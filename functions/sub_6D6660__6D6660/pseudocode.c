__int16 __thiscall sub_6D6660(_DWORD *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  __int16 result; // ax

  sub_6EC2A0(this, a2, a3);
  qmemcpy((void *)(a2 + 0xC), this + 3, 0x20u);
  v4 = *(_DWORD *)(a2 + 0x2C);
  if ( v4 != *(this + 0xB) )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = *(this + 0xB);
    *(_DWORD *)(a2 + 0x2C) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  *(_WORD *)(a2 + 0x30) = *((_WORD *)this + 0x18);
  *(_WORD *)(a2 + 0x32) = *((_WORD *)this + 0x19);
  result = *((_WORD *)this + 0x1A);
  *(_WORD *)(a2 + 0x34) = result;
  return result;
}

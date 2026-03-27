int __thiscall sub_6E82F0(_BYTE *this, int a2, int a3)
{
  int result; // eax
  int v5; // ebx

  result = sub_6EC2A0(this, a2, a3);
  *(_BYTE *)(a2 + 0xC) = *(this + 0xC);
  v5 = *(_DWORD *)(a2 + 0x10);
  if ( v5 == *((_DWORD *)this + 4) )
  {
    *(_DWORD *)(a2 + 0x14) = *((_DWORD *)this + 5);
  }
  else
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = *((_DWORD *)this + 4);
    *(_DWORD *)(a2 + 0x10) = result;
    if ( result )
    {
      InterlockedIncrement((volatile LONG *)(result + 4));
      result = *((_DWORD *)this + 5);
      *(_DWORD *)(a2 + 0x14) = result;
    }
    else
    {
      *(_DWORD *)(a2 + 0x14) = *((_DWORD *)this + 5);
    }
  }
  return result;
}

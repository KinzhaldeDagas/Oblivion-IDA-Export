int __thiscall sub_6E82F0(_BYTE *this, int a2, _DWORD **a3)
{
  int result; // eax
  int v5; // ebx

  result = sub_6EC2A0(this, a2, a3); /*0x6e82ff*/
  *(_BYTE *)(a2 + 0xC) = *(this + 0xC); /*0x6e8307*/
  v5 = *(_DWORD *)(a2 + 0x10); /*0x6e830a*/
  if ( v5 == *((_DWORD *)this + 4) ) /*0x6e8310*/
  {
    *(_DWORD *)(a2 + 0x14) = *((_DWORD *)this + 5); /*0x6e8361*/
  }
  else
  {
    if ( v5 ) /*0x6e8314*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6e831a*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6e8330*/
    }
    result = *((_DWORD *)this + 4); /*0x6e8332*/
    *(_DWORD *)(a2 + 0x10) = result; /*0x6e8337*/
    if ( result ) /*0x6e833a*/
    {
      InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6e8340*/
      result = *((_DWORD *)this + 5); /*0x6e8346*/
      *(_DWORD *)(a2 + 0x14) = result; /*0x6e8349*/
    }
    else
    {
      *(_DWORD *)(a2 + 0x14) = *((_DWORD *)this + 5); /*0x6e8355*/
    }
  }
  return result; /*0x6e834c*/
}

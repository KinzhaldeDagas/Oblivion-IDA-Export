LONG __thiscall sub_6AC3E0(_DWORD **this, int a2, LONG a3)
{
  LONG result; // eax
  int v5; // [esp-4h] [ebp-8h]
  int v6; // [esp+0h] [ebp-4h]

  result = a3;
  if ( a3 )
  {
    result = *(_DWORD *)(a3 + 0x3C);
    if ( result )
    {
      v5 = *(_DWORD *)(a3 + 0x3C);
      InterlockedIncrement((volatile LONG *)(result + 4));
      return sub_6AA3B0(*(this + 0xC1), a2, v5, v6);
    }
  }
  return result;
}

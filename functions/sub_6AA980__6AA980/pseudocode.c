LONG __thiscall sub_6AA980(_DWORD **this, int a2, LONG a3)
{
  LONG result; // eax
  int v5; // [esp+0h] [ebp-4h]

  result = a3;
  if ( a3 )
  {
    InterlockedIncrement((volatile LONG *)(a3 + 4));
    return sub_6AA3B0(*(this + 0xC1), a2, a3, v5);
  }
  return result;
}

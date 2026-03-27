int __thiscall sub_43C530(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // esi
  int v5[4]; // [esp-4h] [ebp-10h] BYREF

  v2 = *(this + 6);
  v5[3] = (int)v5;
  v5[0] = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 8));
  sub_43A5F0(*(_DWORD **)(v2 + 0x28), v5[0]);
  result = *(_DWORD *)(v2 + 0xC);
  v4 = v2 + 0xC;
  if ( !result )
  {
    InterlockedIncrement((volatile LONG *)v4);
    return ReleaseSemaphore(*(HANDLE *)(v4 + 8), 1, 0);
  }
  return result;
}

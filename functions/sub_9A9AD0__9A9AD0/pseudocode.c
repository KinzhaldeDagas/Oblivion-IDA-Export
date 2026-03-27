int __thiscall sub_9A9AD0(_DWORD *this, int a2)
{
  int v2; // esi
  bool v4; // bl

  v2 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  v4 = sub_9A9A00((int)(this + 3), &a2) == 0xFFFFFFFF;
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  if ( v4 )
    *(this + 9) = 0x80000030;
  return *(this + 9);
}

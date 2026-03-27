void __thiscall sub_7021B0(_DWORD *this)
{
  int v2; // esi

  v2 = *(this + 0xF);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 0xF) = 0;
  }
}

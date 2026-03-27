void __thiscall sub_6D5810(_DWORD *this, int a2)
{
  int v3; // edi

  v3 = *(this + 0x14);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(this + 0x14) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  *(this + 0xF) = 0;
  *(this + 0x11) = 0;
  *(this + 0x10) = 0;
  *(this + 0x12) = 0;
  sub_6D5300((int)this);
}

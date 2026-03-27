void __thiscall sub_68C9B0(NiDX92DBufferData **this)
{
  int v2; // esi

  sub_68C0F0(this, *this);
  if ( dword_B3C09C-- == 1 )
  {
    v2 = dword_B3C0A0;
    if ( dword_B3C0A0 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      {
        if ( v2 )
          (**(void (__thiscall ***)(int, int))v2)(v2, 1);
      }
      dword_B3C0A0 = 0;
    }
  }
}

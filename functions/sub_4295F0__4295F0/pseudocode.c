void __thiscall sub_4295F0(_DWORD *this, unsigned int a2, char a3)
{
  int v3; // eax

  if ( a2 < 0x1E )
  {
    v3 = 1 << a2;
    if ( a3 )
      *(this + 3) |= v3;
    else
      *(this + 3) &= ~v3;
  }
}

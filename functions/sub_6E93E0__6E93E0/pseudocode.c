char __thiscall sub_6E93E0(signed int *this, int a2)
{
  signed int v2; // eax
  int v3; // esi
  signed int v4; // edx

  v2 = dword_B24DC4;
  if ( dword_B24DC4 != 0xFFFFFFFF )
  {
    v3 = *(this + 0xF);
    if ( v2 != v3 )
    {
      v4 = *(this + 0x10);
      if ( v2 > v4 )
        v2 = v4 - 1;
      if ( v2 != v3 )
        LOBYTE(v2) = sub_6E8DD0((int)this, v2);
    }
  }
  return v2;
}

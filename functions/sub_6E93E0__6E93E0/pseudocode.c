char __thiscall sub_6E93E0(signed int *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // edx

  v2 = dword_B24DC4; /*0x6e93e0*/
  if ( dword_B24DC4 != 0xFFFFFFFF ) /*0x6e93e8*/
  {
    v3 = *(this + 0xF); /*0x6e93eb*/
    if ( v2 != v3 ) /*0x6e93f0*/
    {
      v4 = *(this + 0x10); /*0x6e93f2*/
      if ( v2 > v4 ) /*0x6e93f7*/
        v2 = v4 - 1; /*0x6e93f9*/
      if ( v2 != v3 ) /*0x6e93fe*/
        LOBYTE(v2) = sub_6E8DD0((int)this, v2); /*0x6e9405*/
    }
  }
  return v2; /*0x6e940b*/
}

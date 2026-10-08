void __thiscall sub_537580(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)(a2 + 0x30) & 0x3F; /*0x53758b*/
  if ( v2 == 0xE || v2 == 0x10 || v2 == 0x14 ) /*0x53759e*/
  {
    sub_536110(a2 + 0x14); /*0x5375a1*/
    if ( v4 ) /*0x5375ab*/
    {
      if ( v2 == 0xE || v2 == 0x10 ) /*0x5375b5*/
      {
        for ( i = (_DWORD *)*(this + 6); i; i = (_DWORD *)i[1] ) /*0x5375c9*/
        {
          if ( i[3] == v4 ) /*0x5375d3*/
            break; /*0x5375d3*/
        }
        sub_536D30(this, i); /*0x5375df*/
      }
      else
      {
        sub_5374F0(this, v4); /*0x5375ba*/
      }
    }
  }
}

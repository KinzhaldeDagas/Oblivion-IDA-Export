int __thiscall sub_9131D0(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax

  v2 = *(this + 0x11); /*0x9131d3*/
  v3 = 0; /*0x9131d7*/
  *this = (int)&off_A9CD6C; /*0x9131db*/
  if ( v2 > 0 ) /*0x9131e1*/
  {
    do /*0x913207*/
    {
      v4 = *(_DWORD *)(*(this + 0x10) + 4 * v3); /*0x9131e6*/
      if ( *(_WORD *)(v4 + 4) ) /*0x9131e9*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x9131f4*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x9131ff*/
      }
      ++v3; /*0x913204*/
    }
    while ( v3 < *(this + 0x11) ); /*0x913207*/
  }
  result = sub_9130B0(this + 3); /*0x91320c*/
  *this = (int)&hkBaseObject::`vftable'; /*0x913212*/
  return result; /*0x913211*/
}

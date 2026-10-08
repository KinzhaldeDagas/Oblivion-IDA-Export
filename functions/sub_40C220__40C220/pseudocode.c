char __thiscall sub_40C220(NiDX9Renderer *this, int a2)
{
  unsigned int end; // ecx
  unsigned int v4; // esi
  _DWORD *i; // eax

  end = this->member.unkA98.end; /*0x40c224*/
  v4 = 0; /*0x40c22b*/
  if ( !end ) /*0x40c22f*/
    return 0; /*0x40c22f*/
  for ( i = this->member.unkA98.data; *i != a2; ++i ) /*0x40c231*/
  {
    if ( ++v4 >= end ) /*0x40c24c*/
      return 0; /*0x40c252*/
  }
  if ( v4 == 0xFFFFFFFF ) /*0x40c258*/
    return 0; /*0x40c25b*/
  sub_405020((int)&this->member.unkA98, v4); /*0x40c268*/
  sub_405020((int)&this->member.unkAA8, v4); /*0x40c274*/
  return 1; /*0x40c24e*/
}

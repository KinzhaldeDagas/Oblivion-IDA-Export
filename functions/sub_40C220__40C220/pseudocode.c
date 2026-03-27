char __thiscall sub_40C220(NiDX9Renderer *this, int a2)
{
  unsigned int end; // ecx
  unsigned int v4; // esi
  _DWORD *i; // eax

  end = this->member.unkA98.end;
  v4 = 0;
  if ( !end )
    return 0;
  for ( i = this->member.unkA98.data; *i != a2; ++i )
  {
    if ( ++v4 >= end )
      return 0;
  }
  if ( v4 == 0xFFFFFFFF )
    return 0;
  sub_405020((int)&this->member.unkA98, v4);
  sub_405020((int)&this->member.unkAA8, v4);
  return 1;
}

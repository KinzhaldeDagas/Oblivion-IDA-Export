char __thiscall sub_40C2F0(NiDX9Renderer *this, int a2)
{
  unsigned int end; // ecx
  unsigned int v4; // esi
  _DWORD *i; // eax

  end = this->member.lostDeviceCallbacks.end;
  v4 = 0;
  if ( !end )
    return 0;
  for ( i = this->member.lostDeviceCallbacks.data; *i != a2; ++i )
  {
    if ( ++v4 >= end )
      return 0;
  }
  if ( v4 == 0xFFFFFFFF )
    return 0;
  sub_405020((int)&this->member.lostDeviceCallbacks, v4);
  sub_405020((int)&this->member.lostDeviceCallbacksRefcons, v4);
  return 1;
}

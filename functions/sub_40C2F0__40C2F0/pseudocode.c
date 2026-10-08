char __thiscall sub_40C2F0(NiDX9Renderer *this, int a2)
{
  unsigned int end; // ecx
  unsigned int v4; // esi
  _DWORD *i; // eax

  end = this->member.lostDeviceCallbacks.end; /*0x40c2f4*/
  v4 = 0; /*0x40c2fb*/
  if ( !end ) /*0x40c2ff*/
    return 0; /*0x40c2ff*/
  for ( i = this->member.lostDeviceCallbacks.data; *i != a2; ++i ) /*0x40c301*/
  {
    if ( ++v4 >= end ) /*0x40c31c*/
      return 0; /*0x40c322*/
  }
  if ( v4 == 0xFFFFFFFF ) /*0x40c328*/
    return 0; /*0x40c32b*/
  sub_405020((int)&this->member.lostDeviceCallbacks, v4); /*0x40c338*/
  sub_405020((int)&this->member.lostDeviceCallbacksRefcons, v4); /*0x40c344*/
  return 1; /*0x40c31e*/
}

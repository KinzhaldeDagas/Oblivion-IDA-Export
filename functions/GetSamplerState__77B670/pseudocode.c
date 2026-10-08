int __thiscall GetSamplerState(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v3; // ax

  v3 = *(_WORD *)(2 * a3 + 0xB427B0); /*0x77b674*/
  if ( v3 >= 5u ) /*0x77b680*/
    return 0; /*0x77b698*/
  else
    return *(this + 0xA * a2 + 2 * v3 + 0x348); /*0x77b692*/
}

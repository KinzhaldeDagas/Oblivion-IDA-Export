int __thiscall sub_6DAC40(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // ecx
  int result; // eax

  v4 = *(this + 6); /*0x6dac40*/
  result = 0; /*0x6dac43*/
  if ( v4 ) /*0x6dac47*/
  {
    *a2 = *(_DWORD *)(v4 + 8); /*0x6dac50*/
    *a3 = *(_DWORD *)(v4 + 0x10); /*0x6dac59*/
    *a4 = *(_BYTE *)(v4 + 0x14); /*0x6dac62*/
    return *(_DWORD *)(v4 + 0xC); /*0x6dac64*/
  }
  else
  {
    *a2 = 0; /*0x6dac72*/
    *a3 = 0; /*0x6dac78*/
    *a4 = 0; /*0x6dac7a*/
  }
  return result; /*0x6dac67*/
}

signed int __thiscall sub_7244C0(int this)
{
  signed int result; // eax
  int v2; // edx
  _DWORD *v3; // eax
  _DWORD *v4; // ecx

  if ( (*(_BYTE *)(this + 0xDC) & 1) == 0 ) /*0x7244c7*/
    return sub_70A360((NiNode *)this); /*0x724504*/
  result = *(_DWORD *)(this + 0xE0); /*0x7244c9*/
  if ( result >= 0 && (result = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * result)) != 0 ) /*0x7244de*/
  {
    v2 = *(_DWORD *)(result + 0x20); /*0x7244e0*/
    v3 = (_DWORD *)(result + 0x20); /*0x7244e3*/
    v4 = (_DWORD *)(this + 0x20); /*0x7244e6*/
    *v4 = v2; /*0x7244e9*/
    v4[1] = v3[1]; /*0x7244ee*/
    v4[2] = v3[2]; /*0x7244f4*/
    result = v3[3]; /*0x7244f7*/
    v4[3] = result; /*0x7244fa*/
  }
  else
  {
    *(float *)(this + 0x2C) = 0.0; /*0x724500*/
  }
  return result; /*0x7244fd*/
}

unsigned int __thiscall sub_88DF30(int this)
{
  unsigned int v1; // edx
  unsigned int result; // eax
  double v3; // st7

  v1 = *(_DWORD *)(this + 0xA4); /*0x88df30*/
  for ( result = 0; result < v1; ++result ) /*0x88df3d*/
    *(_DWORD *)(*(_DWORD *)(this + 0xA0) + 4 * result) = 0; /*0x88df46*/
  v3 = flt_A6D2D8; /*0x88df51*/
  *(_DWORD *)(this + 0xB4) = 0; /*0x88df57*/
  *(float *)(this + 0xB8) = v3; /*0x88df5d*/
  *(_DWORD *)(this + 0xBC) = 0; /*0x88df63*/
  *(float *)(this + 0xC0) = v3; /*0x88df69*/
  *(_DWORD *)(this + 0xC4) = 0; /*0x88df6f*/
  *(float *)(this + 0xC8) = v3; /*0x88df75*/
  *(_DWORD *)(this + 0xCC) = 0; /*0x88df7b*/
  *(float *)(this + 0xD0) = v3; /*0x88df81*/
  *(_DWORD *)(this + 0xD4) = 0; /*0x88df87*/
  *(float *)(this + 0xD8) = v3; /*0x88df8d*/
  *(_DWORD *)(this + 0xDC) = 0; /*0x88df93*/
  *(float *)(this + 0xE0) = v3; /*0x88df99*/
  *(_DWORD *)(this + 0xE4) = 0; /*0x88df9f*/
  *(float *)(this + 0xE8) = v3; /*0x88dfa5*/
  *(_DWORD *)(this + 0xEC) = 0; /*0x88dfab*/
  *(float *)(this + 0xF0) = v3; /*0x88dfb1*/
  *(_DWORD *)(this + 0xF4) = 0; /*0x88dfb7*/
  *(float *)(this + 0xF8) = v3; /*0x88dfbd*/
  return result; /*0x88dfc3*/
}

int __thiscall sub_54C5D0(float *this, __int128 a2)
{
  int result; // eax
  int v4; // edx

  if ( g_zeroNiPoint3.x == *(this + 0x5C) /*0x54c61b*/
    && g_zeroNiPoint3.y == *(this + 0x5D)
    && g_zeroNiPoint3.z == *(this + 0x5E)
    && NiPoint3__NotEqual((const NiPoint3 *)&a2, &g_zeroNiPoint3) )
  {
    *((_DWORD *)this + 0x70) = 1; /*0x54c626*/
    *(this + 0x71) = 0.0; /*0x54c630*/
  }
  if ( g_zeroNiPoint3.x == *(float *)&a2 /*0x54c66d*/
    && g_zeroNiPoint3.y == *((float *)&a2 + 1)
    && g_zeroNiPoint3.z == *((float *)&a2 + 2) )
  {
    *(this + 0x70) = 0.0; /*0x54c66f*/
  }
  result = a2; /*0x54c67d*/
  v4 = DWORD2(a2); /*0x54c681*/
  *((_QWORD *)this + 0x2E) = a2; /*0x54c685*/
  *((_DWORD *)this + 0x5E) = v4; /*0x54c691*/
  *((_BYTE *)this + 0x1D5) = 1; /*0x54c697*/
  return result; /*0x54c69e*/
}

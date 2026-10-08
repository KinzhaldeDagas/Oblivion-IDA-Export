_DWORD *__thiscall sub_723A20(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  Ni2DBuffer *v4; // eax

  result = sub_7416F0((unsigned __int16 *)this, a2); /*0x723a29*/
  if ( a2[0x36] >= 0xA00010Cu ) /*0x723a38*/
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2); /*0x723a3c*/
    return NiSmartPointer_Set__(this + 0x3F, v4); /*0x723a48*/
  }
  return result; /*0x723a4d*/
}

unsigned int __thiscall sub_47CA90(_WORD *this, float a2, int a3, NiAVObject *a4)
{
  unsigned int i; // esi
  unsigned int result; // eax
  NiAVObject *v7; // ecx

  for ( i = 0; i < (unsigned __int16)*(this + 0x5C); ++i ) /*0x47ca96*/
  {
    result = (unsigned __int16)*(this + 0x5B); /*0x47cab0*/
    if ( result > i ) /*0x47cab9*/
    {
      v7 = *(NiAVObject **)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x47cac1*/
      if ( v7 ) /*0x47cac6*/
      {
        if ( v7 != a4 ) /*0x47caca*/
          result = NiAVObject_UpdateNiAVObject(v7, a2, a3); /*0x47cad5*/
      }
    }
  }
  return result; /*0x47caea*/
}

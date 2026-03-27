unsigned int __thiscall sub_47CA90(_WORD *this, float a2, int a3, NiAVObject *a4)
{
  unsigned int i; // esi
  unsigned int result; // eax
  NiAVObject *v7; // ecx

  for ( i = 0; i < (unsigned __int16)*(this + 0x5C); ++i )
  {
    result = (unsigned __int16)*(this + 0x5B);
    if ( result > i )
    {
      v7 = *(NiAVObject **)(*((_DWORD *)this + 0x2C) + 4 * i);
      if ( v7 )
      {
        if ( v7 != a4 )
          result = NiAVObject_UpdateNiAVObject(v7, a2, a3);
      }
    }
  }
  return result;
}

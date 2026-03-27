unsigned __int16 __thiscall sub_75D660(unsigned __int16 *this)
{
  unsigned int v1; // esi
  unsigned int v2; // eax
  int v3; // edx
  int v4; // eax

  v1 = *(this + 0x33);
  v2 = v1;
  if ( (int)v2 < (int)(v2 + *(this + 0x32)) )
  {
    do
    {
      v3 = *((_DWORD *)this + 0x1A);
      if ( *(unsigned __int16 *)(v3 + 0xB6) > v2 )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB0) + 4 * v2);
        if ( v4 )
          *(_WORD *)(v4 + 0x18) &= ~1u;
      }
      v2 = (unsigned __int16)++v1;
    }
    while ( (unsigned __int16)v1 < *(this + 0x32) + *(this + 0x33) );
  }
  return sub_7598C0(this);
}

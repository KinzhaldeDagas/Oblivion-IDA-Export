void __thiscall sub_4CA210(int this, unsigned int a2, float *a3)
{
  if ( a2 < *(unsigned __int16 *)(this + 0xA) ) /*0x4ca221*/
  {
    if ( 0.0 == *a3 ) /*0x4ca255*/
    {
      if ( 0.0 != *(float *)(*(_DWORD *)(this + 4) + 4 * a2) ) /*0x4ca270*/
        --*(_WORD *)(this + 0xC); /*0x4ca272*/
    }
    else if ( 0.0 == *(float *)(*(_DWORD *)(this + 4) + 4 * a2) ) /*0x4ca25a*/
    {
      ++*(_WORD *)(this + 0xC); /*0x4ca25c*/
      *(float *)(*(_DWORD *)(this + 4) + 4 * a2) = *a3; /*0x4ca266*/
      return; /*0x4ca26a*/
    }
  }
  else
  {
    *(_WORD *)(this + 0xA) = a2 + 1; /*0x4ca226*/
    if ( 0.0 != *a3 ) /*0x4ca231*/
    {
      ++*(_WORD *)(this + 0xC); /*0x4ca233*/
      *(float *)(*(_DWORD *)(this + 4) + 4 * a2) = *a3; /*0x4ca23d*/
      return; /*0x4ca241*/
    }
  }
  *(float *)(*(_DWORD *)(this + 4) + 4 * a2) = *a3; /*0x4ca27d*/
}

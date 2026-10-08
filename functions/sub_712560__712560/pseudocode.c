unsigned int __thiscall sub_712560(int this, int a2)
{
  unsigned int v2; // edx
  unsigned int result; // eax
  _DWORD *i; // ecx

  v2 = *(unsigned __int16 *)(this + 0xD2); /*0x712560*/
  result = 0; /*0x712567*/
  if ( !*(_WORD *)(this + 0xD2) ) /*0x712560*/
    return 0; /*0x712586*/
  for ( i = *(_DWORD **)(this + 0xCC); a2 != *i; ++i ) /*0x71256e*/
  {
    if ( ++result >= v2 ) /*0x712584*/
      return 0; /*0x712584*/
  }
  return result; /*0x712588*/
}

int __thiscall sub_812630(int this, int a2)
{
  int i; // esi

  for ( i = *(unsigned __int16 *)(this + 0xE) - 1; i >= 0; --i ) /*0x812638*/
  {
    if ( a2 == *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * i) ) /*0x812646*/
      sub_812570(this, i); /*0x812649*/
  }
  return *(unsigned __int16 *)(this + 0xE); /*0x812658*/
}

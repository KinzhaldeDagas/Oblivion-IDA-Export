int __thiscall sub_614BB0(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 0x6C); /*0x614bb0*/
  if ( result != 4 && result != 7 && result != 9 && result != 8 && result != 0xC ) /*0x614bca*/
    *(_BYTE *)(this + 0x191) = 1; /*0x614bcc*/
  return result; /*0x614bd3*/
}

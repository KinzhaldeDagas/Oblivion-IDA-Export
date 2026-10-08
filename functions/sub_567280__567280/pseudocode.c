// RadiantAI: chooser current-package exclusion helper. Reads actor/process pointer at +0x58 and calls virtual method +0xC0; exact semantic name still unproven.
char __stdcall sub_567280(int a1)
{
  char result; // al
  int v2; // ecx

  result = 0; /*0x567284*/
  if ( a1 ) /*0x567288*/
  {
    v2 = *(_DWORD *)(a1 + 0x58); /*0x56728a*/
    if ( v2 ) /*0x56728f*/
      return (*(char (__thiscall **)(int))(*(_DWORD *)v2 + 0xC0))(v2); /*0x567299*/
  }
  return result; /*0x56729b*/
}

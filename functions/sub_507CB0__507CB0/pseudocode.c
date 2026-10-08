char sub_507CB0()
{
  TES *v0; // eax
  TESObjectCELL *currentInteriorCell; // ecx
  const char *v2; // eax
  unsigned int v4; // [esp-4h] [ebp-4h]

  v0 = MEMORY[0xB333A0]; /*0x507cb0*/
  BYTE1(dword_B361CC[0xC]) ^= 1u; /*0x507cb5*/
  if ( v0 ) /*0x507cbe*/
  {
    if ( BYTE1(dword_B361CC[0xC]) ) /*0x507cc0*/
    {
      v4 = 0; /*0x507cc9*/
    }
    else
    {
      currentInteriorCell = v0->currentInteriorCell; /*0x507ccd*/
      if ( currentInteriorCell ) /*0x507cd2*/
      {
        if ( !TESObjectCELL_HasFlag80(currentInteriorCell) ) /*0x507cdb*/
        {
          Sky__SetMode(MEMORY[0xB333A0]->sky, 1u); /*0x507cf1*/
          goto LABEL_10; /*0x507cf1*/
        }
        v0 = MEMORY[0xB333A0]; /*0x507cdd*/
        v4 = 2; /*0x507ce2*/
      }
      else
      {
        v4 = 3; /*0x507cf3*/
      }
    }
    Sky__SetMode(v0->sky, v4); /*0x507cf8*/
  }
LABEL_10:
  if ( MEMORY[0xB361AC] ) /*0x507cfd*/
  {
    v2 = (const char *)&aOff; /*0x507d0d*/
    if ( !BYTE1(dword_B361CC[0xC]) ) /*0x507d06*/
      v2 = "On"; /*0x507d14*/
    Interface_ConsolePrint("Sky -> %s", v2); /*0x507d1f*/
  }
  return 1; /*0x507d29*/
}

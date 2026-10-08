signed int __stdcall sub_5E8D90(int a1)
{
  char v1; // cl
  signed int result; // eax

  if ( !a1 || !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(a1 + 0xC)) ) /*0x5e8da6*/
    return 0; /*0x5e8dcb*/
  v1 = *(_BYTE *)(a1 + 0x20); /*0x5e8daf*/
  result = 0x20000; /*0x5e8db5*/
  if ( v1 == 0x13 || v1 == 0x11 ) /*0x5e8dbf*/
    return 0x30000; /*0x5e8dc2*/
  return result; /*0x5e8dc1*/
}

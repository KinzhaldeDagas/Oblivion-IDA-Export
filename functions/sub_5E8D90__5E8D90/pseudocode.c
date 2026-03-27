signed int __stdcall sub_5E8D90(int a1)
{
  char v1; // cl
  signed int result; // eax

  if ( !a1 || !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(a1 + 0xC)) )
    return 0;
  v1 = *(_BYTE *)(a1 + 0x20);
  result = 0x20000;
  if ( v1 == 0x13 || v1 == 0x11 )
    return 0x30000;
  return result;
}

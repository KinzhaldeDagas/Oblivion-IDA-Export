int __cdecl sub_6BC330(int a1, int a2)
{
  int result; // eax

  *(float *)a1 = *(float *)a2; /*0x6bc33a*/
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4); /*0x6bc33f*/
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8); /*0x6bc345*/
  *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x6bc34b*/
  *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a2 + 0x10); /*0x6bc351*/
  *(_DWORD *)(a1 + 0x14) = *(_DWORD *)(a2 + 0x14); /*0x6bc357*/
  *(_DWORD *)(a1 + 0x18) = *(_DWORD *)(a2 + 0x18); /*0x6bc35d*/
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x1C); /*0x6bc363*/
  *(_DWORD *)(a1 + 0x20) = *(_DWORD *)(a2 + 0x20); /*0x6bc369*/
  *(_DWORD *)(a1 + 0x24) = *(_DWORD *)(a2 + 0x24); /*0x6bc36f*/
  *(_DWORD *)(a1 + 0x28) = *(_DWORD *)(a2 + 0x28); /*0x6bc375*/
  *(_DWORD *)(a1 + 0x2C) = *(_DWORD *)(a2 + 0x2C); /*0x6bc37b*/
  *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a2 + 0x30); /*0x6bc381*/
  *(_DWORD *)(a1 + 0x34) = *(_DWORD *)(a2 + 0x34); /*0x6bc38d*/
  *(_DWORD *)(a1 + 0x38) = *(_DWORD *)(a2 + 0x38); /*0x6bc392*/
  result = *(_DWORD *)(a2 + 0x3C); /*0x6bc395*/
  *(_DWORD *)(a1 + 0x3C) = result; /*0x6bc398*/
  return result; /*0x6bc39b*/
}

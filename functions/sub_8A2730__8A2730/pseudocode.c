int __cdecl sub_8A2730(int a1, _DWORD *a2)
{
  int result; // eax

  *a2 = *(_DWORD *)(0xC * a1 + 0xB2E988); /*0x8a2749*/
  a2[1] = *(_DWORD *)(0xC * a1 + 0xB2E98C); /*0x8a274e*/
  result = *(_DWORD *)(0xC * a1 + 0xB2E990); /*0x8a2751*/
  a2[2] = result; /*0x8a2754*/
  return result; /*0x8a2757*/
}

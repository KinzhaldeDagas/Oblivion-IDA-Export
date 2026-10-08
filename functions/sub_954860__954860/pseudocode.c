unsigned int __stdcall sub_954860(int a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // ecx
  unsigned int result; // eax

  *(_DWORD *)(a3 + 0x34) = *(_DWORD *)(a2 + 0x34); /*0x954871*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x954878*/
  v4 = *(_DWORD *)(a3 + 0x38); /*0x95487b*/
  result = v3 + v4 - *(_DWORD *)(a2 + 0x34); /*0x954882*/
  if ( result >= 0x20 /*0x9548c0*/
    && (v4 > 2 || result >= 0x100)
    && (v4 < 0x20 && *(_DWORD *)(a2 + 0x38) >= 0x20u
     || v4 < 0x100 && *(_DWORD *)(a2 + 0x38) >= 0x100u
     || v4 < 0x10000 && *(_DWORD *)(a2 + 0x38) >= 0x10000u) )
  {
    *(_DWORD *)(a3 + 0x34) = v3; /*0x9548c2*/
  }
  return result; /*0x9548c5*/
}

int __cdecl sub_90FA00(int a1)
{
  int result; // eax

  result = a1; /*0x90fa00*/
  if ( a1 ) /*0x90fa08*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x90fa0a*/
    *(_DWORD *)(a1 + 0x28) = 0; /*0x90fa10*/
    *(_DWORD *)(a1 + 0x38) = 0; /*0x90fa13*/
    *(_DWORD *)(a1 + 0x3C) = 0; /*0x90fa16*/
    *(_DWORD *)(a1 + 0x40) = 0x80000000; /*0x90fa1e*/
    *(_DWORD *)(a1 + 0x50) = 0; /*0x90fa21*/
    *(_DWORD *)(a1 + 0x54) = 0; /*0x90fa24*/
    *(_DWORD *)(a1 + 0x58) = 0x80000000; /*0x90fa27*/
    *(_DWORD *)(a1 + 0x5C) = 0; /*0x90fa2a*/
    *(_DWORD *)(a1 + 0x60) = 0; /*0x90fa2d*/
    *(_DWORD *)(a1 + 0x64) = 0x80000000; /*0x90fa30*/
    *(_DWORD *)a1 = &off_A9CAB8; /*0x90fa33*/
    *(_DWORD *)(a1 + 0x120) = 0; /*0x90fa39*/
    *(_DWORD *)(a1 + 0x124) = 0; /*0x90fa3f*/
    *(_DWORD *)(a1 + 0x128) = 0x80000000; /*0x90fa45*/
  }
  return result; /*0x90fa4b*/
}

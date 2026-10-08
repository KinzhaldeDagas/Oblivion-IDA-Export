// Sets symmetric collision-layer interaction bit in global layer matrix at 0xBA7DB0. 0x69A490 temporarily configures layer 0x1C ray probes with this helper.
int __cdecl bhkCollisionLayer_SetInteraction(int a1, int a2, char a3)
{
  int result; // eax
  int v4; // esi

  result = a1; /*0x8a7f24*/
  v4 = 1 << a2; /*0x8a7f30*/
  if ( a3 ) /*0x8a7f39*/
  {
    *(_DWORD *)(4 * a1 + 0xBA7DB0) |= v4;       // TES4 authoritative: collision layer matrix write at global 0xBA7DB0. Sets both row a1->a2 and symmetric row a2->a1; no save/restore. /*0x8a7f3b*/
    *(_DWORD *)(4 * a2 + 0xBA7DB0) |= 1 << a1; /*0x8a7f49*/
  }
  else
  {
    *(_DWORD *)(4 * a1 + 0xBA7DB0) &= ~v4; /*0x8a7f54*/
    *(_DWORD *)(4 * a2 + 0xBA7DB0) &= ~(1 << a1); /*0x8a7f64*/
  }
  return result; /*0x8a7f50*/
}

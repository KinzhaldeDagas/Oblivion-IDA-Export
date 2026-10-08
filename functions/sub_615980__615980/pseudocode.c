// Returns CombatController cached target surface distance at +0x184, computing it once when negative. The inherited EDI low-byte input belongs to this private compiler ABI and is deliberately retained.
double __usercall sub_615980@<st0>(int a1@<ecx>, char a2@<dil>)
{
  int *v3; // edi
  TESObjectREFR *v4; // eax

  if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x615990*/
  {
    v3 = *(int **)(a1 + 0x3C); /*0x615993*/
    v4 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x615998*/
    *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v3, (TESObjectREFR *)v3, v4, 0, a2); /*0x6159a4*/
  }
  return *(float *)(a1 + 0x184); /*0x6159b4*/
}

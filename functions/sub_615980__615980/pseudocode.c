double __usercall sub_615980@<st0>(int a1@<ecx>, char a2@<dil>)
{
  int *v3; // edi
  TESObjectREFR *v4; // eax

  if ( *(float *)(a1 + 0x184) < 0.0 )
  {
    v3 = *(int **)(a1 + 0x3C);
    v4 = (TESObjectREFR *)sub_6135F0(a1);
    *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(v3, (TESObjectREFR *)v3, v4, 0, a2);
  }
  return *(float *)(a1 + 0x184);
}

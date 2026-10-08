char __usercall sub_4B6260@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  char result; // al

  result = sub_578D70(); /*0x4b6260*/
  if ( result == 1 ) /*0x4b6267*/
  {
    result = ActivateRef((TESObjectREFR *)unk_B35B1C, a1, a2, a3, (TESObjectREFR *)reference, 0, 0, 1); /*0x4b627b*/
    unk_B35B1C = 0; /*0x4b6280*/
  }
  return result; /*0x4b628a*/
}

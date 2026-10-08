NiObjectNET *__usercall sub_607710@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  NiObjectNET *result; // eax
  NiObjectNET *v5; // esi

  result = (NiObjectNET *)MobileObject_GenerateNiNode(a1, a2, a3, a4); /*0x607711*/
  v5 = result; /*0x607716*/
  if ( result ) /*0x60771a*/
  {
    NiObjectNET_SetName(result, "Arrow"); /*0x607723*/
    return v5; /*0x607728*/
  }
  return result; /*0x60772a*/
}

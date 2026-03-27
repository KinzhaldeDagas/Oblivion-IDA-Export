NiObjectNET *__usercall sub_607710@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  NiObjectNET *result; // eax
  NiObjectNET *v5; // esi

  result = (NiObjectNET *)MobileObject_GenerateNiNode(a1, a2, a3, a4);
  v5 = result;
  if ( result )
  {
    NiObjectNET_SetName(result, "Arrow");
    return v5;
  }
  return result;
}

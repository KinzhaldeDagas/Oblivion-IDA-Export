bool __usercall sub_501E40@<al>(
        int esi0@<esi>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        int a8,
        UInt32 *a3)
{
  bool result; // al
  double v10; // st7
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF
  float retaddr; // [esp+Ch] [ebp+0h]

  *(float *)v11 = 0.0; /*0x501e4b*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v11); /*0x501e6f*/
  if ( result ) /*0x501e79*/
  {
    if ( a4 ) /*0x501e80*/
    {
      retaddr = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetScale)(a4, esi0) + retaddr; /*0x501e92*/
      v10 = fConstant_2; /*0x501e96*/
      if ( retaddr > v10 || (v10 = kHeadBodyNormalMatchRadius, v10 > retaddr) ) /*0x501ec2*/
        retaddr = v10; /*0x501eab*/
      sub_4DB520((MobileObject *)a4, retaddr); /*0x501ed0*/
      a4->vtbl->super.SetFromActiveFile((TESForm *)a4, 1); /*0x501ee1*/
    }
    return 1; /*0x501ee3*/
  }
  return result; /*0x501e7d*/
}

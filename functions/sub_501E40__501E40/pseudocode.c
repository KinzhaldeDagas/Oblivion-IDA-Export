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

  *(float *)v11 = 0.0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v11);
  if ( result )
  {
    if ( a4 )
    {
      retaddr = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetScale)(a4, esi0) + retaddr;
      v10 = fConstant_2;
      if ( retaddr > v10 || (v10 = flt_A3D65C, v10 > retaddr) )
        retaddr = v10;
      sub_4DB520((MobileObject *)a4, retaddr);
      a4->vtbl->super.SetFromActiveFile((TESForm *)a4, 1);
    }
    return 1;
  }
  return result;
}

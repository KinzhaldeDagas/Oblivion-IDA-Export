bool __cdecl sub_5093B0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  MobileObject *v9; // eax
  bhkCharacterProxy *CharProxy; // edi
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(float *)v11 = 0.0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    if ( a4 )
    {
      if ( *(float *)v11 <= (double)fConstant_2 )
      {
        if ( flt_A3D65C > (double)*(float *)v11 )
          *(float *)v11 = flt_A3D65C;
      }
      else
      {
        *(float *)v11 = fConstant_2;
      }
      sub_4DB520((MobileObject *)a4, *(float *)v11);
      v9 = (MobileObject *)OblivionDynamicCast(
                             a4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &MobileObject `RTTI Type Descriptor',
                             0);
      if ( v9 )
      {
        CharProxy = MobileObject_GetCharProxy(v9);
        if ( CharProxy )
          *((float *)CharProxy + 0xCD) = a4->vtbl->GetScale(a4);
      }
      a4->vtbl->super.SetFromActiveFile((TESForm *)a4, 1);
    }
    return 1;
  }
  return result;
}

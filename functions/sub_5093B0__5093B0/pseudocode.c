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

  *(float *)v11 = 0.0; /*0x5093bb*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x5093df*/
  if ( result ) /*0x5093e9*/
  {
    if ( a4 ) /*0x5093f0*/
    {
      if ( *(float *)v11 <= (double)fConstant_2 ) /*0x509407*/
      {
        if ( kHeadBodyNormalMatchRadius > (double)*(float *)v11 ) /*0x509422*/
          *(float *)v11 = kHeadBodyNormalMatchRadius; /*0x509424*/
      }
      else
      {
        *(float *)v11 = fConstant_2; /*0x50940b*/
      }
      sub_4DB520((MobileObject *)a4, *(float *)v11); /*0x509436*/
      v9 = (MobileObject *)OblivionDynamicCast( /*0x50944a*/
                             a4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &MobileObject `RTTI Type Descriptor',
                             0);
      if ( v9 ) /*0x509454*/
      {
        CharProxy = MobileObject_GetCharProxy(v9); /*0x50945e*/
        if ( CharProxy ) /*0x509462*/
          *((float *)CharProxy + 0xCD) = a4->vtbl->GetScale(a4); /*0x509470*/
      }
      a4->vtbl->super.SetFromActiveFile((TESForm *)a4, 1); /*0x509483*/
    }
    return 1; /*0x509485*/
  }
  return result; /*0x5093ed*/
}

TESObjectREFR *__cdecl sub_4B76A0(int a1)
{
  TESObjectREFR *result; // eax
  TESObjectREFR *v2; // esi

  result = (TESObjectREFR *)sub_4DC270(a1); /*0x4b76a6*/
  v2 = result; /*0x4b76ab*/
  if ( result ) /*0x4b76b2*/
  {
    result = (TESObjectREFR *)result->vtbl->GetBaseForm(result); /*0x4b76be*/
    if ( result->member.super.type == kFormType_Door && (v2->member.super.flags & 0x2000) == 0 ) /*0x4b76cf*/
    {
      result = (TESObjectREFR *)OblivionDynamicCast( /*0x4b76e9*/
                                  reference->super.super.super.process,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                                  &HighProcess `RTTI Type Descriptor',
                                  0);
      if ( result ) /*0x4b76f3*/
      {
        result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))result->vtbl[2].SetTemplateForm)(result); /*0x4b76ff*/
        if ( result != (TESObjectREFR *)4 ) /*0x4b7704*/
          reference->ObjectToActivate = v2; /*0x4b770c*/
      }
    }
  }
  return result; /*0x4b7712*/
}

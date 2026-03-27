TESObjectREFR *__cdecl sub_4B76A0(int a1)
{
  TESObjectREFR *result; // eax
  TESObjectREFR *v2; // esi

  result = (TESObjectREFR *)sub_4DC270(a1);
  v2 = result;
  if ( result )
  {
    result = (TESObjectREFR *)result->vtbl->GetBaseForm(result);
    if ( result->member.super.type == kFormType_Door && (v2->member.super.flags & 0x2000) == 0 )
    {
      result = (TESObjectREFR *)OblivionDynamicCast(
                                  TESDataHandler_g_PlayerRef->super.super.super.process,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                                  &HighProcess `RTTI Type Descriptor',
                                  0);
      if ( result )
      {
        result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))result->vtbl[2].SetTemplateForm)(result);
        if ( result != (TESObjectREFR *)4 )
          TESDataHandler_g_PlayerRef->ObjectToActivate = v2;
      }
    }
  }
  return result;
}

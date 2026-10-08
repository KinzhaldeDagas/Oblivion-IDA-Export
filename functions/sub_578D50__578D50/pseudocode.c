void __cdecl sub_578D50(TESObjectREFR *a1)
{
  signed int v1; // ebx
  TESObjectREFR *v2; // edi

  if ( reference )
  {
    if ( reference->vtbl->super.super.super.GetNiNode(reference) )
    {
      if ( byte_B13238
        || !a1
        || ((v1 = sub_4DE980((PlayerCharacter *)a1),
             v2 = a1->vtbl->GetBaseForm(a1)->member.type != kFormType_NPC ? 0 : a1,
             v1 == 7)
         || v1 == 0xA)
        && (Actor_IsInDialogueProcedure(reference)
         || v2 && ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v2->vtbl[1].GetSleepState)(v2, 1))
        || v1 == 1
        && v2
        && (((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v2->vtbl[1].GetSleepState)(v2, 1)
         || (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v2[1].vtbl->super.super.InitializeComponent + 0x2B))(v2[1].vtbl)) )
      {
        sub_5A8BC0(0); /*0x5a8dad*/
      }
      else
      {
        sub_5A8BC0(v1); /*0x5a8d36*/
        if ( dword_B3B0B4[0xA7] ) /*0x5a8d3e*/
        {
          if ( v1 != 7 ) /*0x5a8d4a*/
          {
            if ( v1 ) /*0x5a8d4e*/
            {
              if ( IsOffLimitToThePlayer(a1) /*0x5a8d6a*/
                && !OblivionDynamicCast(
                      a1,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &ArrowProjectile `RTTI Type Descriptor',
                      0) )
              {
                Tile_SetFloat((Tile *)dword_B3B0B4[0xA7], 0xFAFu, fConstant_2); /*0x5a8d8b*/
              }
            }
          }
        }
      }
    }
  }
}

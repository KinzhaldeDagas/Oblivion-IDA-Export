char __cdecl sub_508340(int a1, int a2, void *a3)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // esi
  TESObjectREFR *HeadingTarget; // eax
  char *v6; // eax
  char *v8; // eax
  char *Name; // [esp-4h] [ebp-8h]

  v3 = (TESObjectREFR *)OblivionDynamicCast( /*0x508354*/
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v4 = v3; /*0x508359*/
  if ( v3 ) /*0x508360*/
  {
    HeadingTarget = (TESObjectREFR *)ExtraDataList_GetHeadingTarget(&v3->member.baseExtraList); /*0x508365*/
    if ( MEMORY[0xB361AC] ) /*0x50836a*/
    {
      if ( HeadingTarget ) /*0x508375*/
      {
        Name = TESObjectREFR_GetName(HeadingTarget); /*0x50837e*/
        v6 = TESObjectREFR_GetName(v4); /*0x508381*/
        Interface_ConsolePrint("%s set to look at %s", v6, Name); /*0x50838c*/
        return 1; /*0x508397*/
      }
      v8 = TESObjectREFR_GetName(v4); /*0x50839a*/
      Interface_ConsolePrint("%s set to not look at anyone", v8); /*0x5083a5*/
    }
  }
  return 1; /*0x508396*/
}

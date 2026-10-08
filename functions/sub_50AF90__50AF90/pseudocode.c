char __usercall sub_50AF90@<al>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        void *a9)
{
  TESObjectREFR *v9; // eax
  TESForm::FormFlags flags; // edx

  v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x50afa3*/
                          a9,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  if ( v9 ) /*0x50afad*/
  {
    flags = v9->member.super.flags; /*0x50afaf*/
    if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 ) /*0x50afc2*/
      EvaluatePackage(v9, a1, a2, a3, a6, a4, a5); /*0x50afc6*/
  }
  return 1; /*0x50afcd*/
}

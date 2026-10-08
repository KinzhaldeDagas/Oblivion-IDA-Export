void __userpurge TelekinesisEffect_PostLink(
        volatile LONG ***a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        NiObject *a4@<ebp>,
        double a5@<st0>,
        int a6)
{
  UInt32 v7; // eax
  TESForm *v8; // eax

  ValueModifierEffect_PostLink(a1, a6); /*0x6a7a38*/
  v7 = (UInt32)a1[0x12]; /*0x6a7a3d*/
  if ( v7 ) /*0x6a7a42*/
  {
    v8 = TESForm_LookupByFormID(v7); /*0x6a7a53*/
    a1[0x12] = (volatile LONG **)OblivionDynamicCast( /*0x6a7a64*/
                                   v8,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                   0);
  }
  if ( a1[0x12] ) /*0x6a7a67*/
    sub_6A7560((int)a1, a2, a3, a4, a5); /*0x6a7a6f*/
  *((_BYTE *)a1 + 0x4D) = 1; /*0x6a7a74*/
}

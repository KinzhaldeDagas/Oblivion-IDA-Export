void __usercall TelekinesisEffect_Apply(
        int a1@<ecx>,
        NiObject *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  float v6; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply((float *)a1, v6); /*0x6a7aa3*/
  *(_DWORD *)(a1 + 0x48) = InterfaceManager_GetTargetREFR_(); /*0x6a7aaf*/
  sub_6A7560(a1, a3, a4, a2, a5); /*0x6a7ab2*/
  *(_BYTE *)(a1 + 0x4D) = 0; /*0x6a7ab7*/
}

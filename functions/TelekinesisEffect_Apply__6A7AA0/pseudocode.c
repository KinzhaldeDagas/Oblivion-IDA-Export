void __usercall TelekinesisEffect_Apply(
        int a1@<ecx>,
        NiObject *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  float v6; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply((float *)a1, v6);
  *(_DWORD *)(a1 + 0x48) = InterfaceManager_GetTargetREFR_();
  sub_6A7560(a1, a3, a4, a2, a5);
  *(_BYTE *)(a1 + 0x4D) = 0;
}

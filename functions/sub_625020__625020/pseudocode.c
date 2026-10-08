void __userpurge sub_625020(
        TESObjectREFR *a1@<ecx>,
        int ebp0@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        NiAVObject *a2)
{
  TESObjectREFR *v7; // eax

  if ( a1->vtbl->GetNiNode(a1) ) /*0x62502b*/
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1) ) /*0x62503b*/
    {
      v7 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1); /*0x62504b*/
      sub_5F0410(v7, ebp0); /*0x62504f*/
    }
  }
  TESObjectREFR_Set3D(a1, a3, a4, a5, a2); /*0x62505b*/
}

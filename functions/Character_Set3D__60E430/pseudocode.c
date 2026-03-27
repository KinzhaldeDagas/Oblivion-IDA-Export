void __userpurge Character_Set3D(
        TESObjectREFR *a1@<ecx>,
        int ebp0@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        NiAVObject *a2)
{
  if ( a1->vtbl->GetNiNode(a1) )
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) )
      sub_5F0410(a1, ebp0);
  }
  TESObjectREFR_Set3D(a1, a3, a4, a5, a2);
}

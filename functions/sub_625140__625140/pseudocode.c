int __usercall sub_625140@<eax>(
        TESObjectREFR *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  float y; // ecx
  TESObjectREFR *v7; // eax

  a1->vtbl = (TESObjectREFRVtbl *)&Creature::`vftable'{for `Creature'}; /*0x625168*/
  a1->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Creature::`vftable'{for `TESChildCell'}; /*0x62516e*/
  *(_DWORD *)&a1[1].member.super.type = &Creature::`vftable'{for `MagicCaster'}; /*0x625175*/
  a1[1].member.super.modlist.data = (Data *)&Creature::`vftable'{for `MagicTarget'}; /*0x62517c*/
  if ( (a1->member.super.flags & 0x4000) == 0 ) /*0x625193*/
  {
    y = a1[2].member.rot.y; /*0x625195*/
    if ( y != 0.0 ) /*0x62519d*/
    {
      (*(void (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(y) + 0x384))(COERCE_FLOAT(LODWORD(y)), 0); /*0x6251a9*/
      a1[2].member.rot.y = 0.0; /*0x6251ab*/
    }
    if ( a1->vtbl->GetNiNode(a1) ) /*0x6251bf*/
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1) ) /*0x6251cf*/
      {
        v7 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1); /*0x6251df*/
        sub_5F0410(v7, a2); /*0x6251e3*/
      }
    }
    TESObjectREFR_Set3D(a1, a3, a4, a5, 0); /*0x6251ec*/
  }
  return sub_5F13D0((Actor *)a1, a2, a3, a4, a5); /*0x625200*/
}

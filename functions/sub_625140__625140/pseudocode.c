int __usercall sub_625140@<eax>(
        TESObjectREFR *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  float y; // ecx
  TESObjectREFR *v7; // eax

  a1->vtbl = (TESObjectREFRVtbl *)&Creature::`vftable'{for `Creature'};
  a1->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Creature::`vftable'{for `TESChildCell'};
  *(_DWORD *)&a1[1].member.super.type = &Creature::`vftable'{for `MagicCaster'};
  a1[1].member.super.modlist.data = (Data *)&Creature::`vftable'{for `MagicTarget'};
  if ( (a1->member.super.flags & 0x4000) == 0 )
  {
    y = a1[2].member.rot.y;
    if ( y != 0.0 )
    {
      (*(void (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(y) + 0x384))(COERCE_FLOAT(LODWORD(y)), 0);
      a1[2].member.rot.y = 0.0;
    }
    if ( a1->vtbl->GetNiNode(a1) )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1) )
      {
        v7 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1);
        sub_5F0410(v7, a2);
      }
    }
    TESObjectREFR_Set3D(a1, a3, a4, a5, 0);
  }
  return sub_5F13D0((Actor *)a1, a2, a3, a4, a5);
}

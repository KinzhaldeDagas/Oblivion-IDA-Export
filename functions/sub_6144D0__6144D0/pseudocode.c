int __thiscall sub_6144D0(Actor ****this, TESObjectREFR *a2, TESObjectREFR **a3)
{
  Actor ***v5; // ebx
  TESObjectREFR *v6; // esi
  int v7; // edi
  int i; // [esp+8h] [ebp+4h]

  if ( !a2 ) /*0x6144d7*/
    return 0; /*0x6144d9*/
  v5 = *(this + 0x10); /*0x6144e0*/
  for ( i = 0; v5; v5 = (Actor ***)v5[1] ) /*0x6144ed*/
  {
    if ( !v5[1] && !*v5 ) /*0x6144f7*/
      break; /*0x6144fa*/
    v6 = (TESObjectREFR *)**v5; /*0x6144fe*/
    v7 = 0; /*0x614500*/
    if ( v6 == a2 ) /*0x614504*/
    {
      v7 = 0x64; /*0x614506*/
    }
    else if ( sub_5E9D40(a2, **v5) ) /*0x614510*/
    {
      v7 = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a2->vtbl[1].super.Unk_1F)(a2, v6); /*0x614527*/
    }
    if ( v7 > i ) /*0x61452d*/
    {
      i = v7; /*0x614533*/
      *a3 = v6; /*0x614537*/
    }
  }
  return i; /*0x6144db*/
}

int __thiscall sub_6144D0(Actor ****this, TESObjectREFR *a2, TESObjectREFR **a3)
{
  Actor ***v5; // ebx
  TESObjectREFR *v6; // esi
  int v7; // edi
  int i; // [esp+8h] [ebp+4h]

  if ( !a2 )
    return 0;
  v5 = *(this + 0x10);
  for ( i = 0; v5; v5 = (Actor ***)v5[1] )
  {
    if ( !v5[1] && !*v5 )
      break;
    v6 = (TESObjectREFR *)**v5;
    v7 = 0;
    if ( v6 == a2 )
    {
      v7 = 0x64;
    }
    else if ( sub_5E9D40(a2, **v5) )
    {
      v7 = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a2->vtbl[1].super.Unk_1F)(a2, v6);
    }
    if ( v7 > i )
    {
      i = v7;
      *a3 = v6;
    }
  }
  return i;
}

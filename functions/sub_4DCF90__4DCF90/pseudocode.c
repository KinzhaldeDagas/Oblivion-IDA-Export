void __userpurge sub_4DCF90(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5@<ebp>,
        int a6)
{
  int v7; // eax

  if ( this->member.niNode )
  {
    v7 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl->Unk_5A)(this);
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      v7 = sub_6600D0(TESDataHandler_g_PlayerRef, 0);
    if ( v7 )
      sub_47B9A0(v7, st5_0, a3, a4, a6);
    else
      PrintError("Creatures are not allowed to wear amulets.");
    if ( this->vtbl->IsActor(this) )
      sub_5EA1A0((int)this, a5, (_DWORD *)this->member.niNode);
  }
}

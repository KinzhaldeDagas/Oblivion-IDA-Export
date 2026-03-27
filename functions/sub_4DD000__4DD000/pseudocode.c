void __usercall sub_4DD000(TESObjectREFR *this@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  char *v6; // eax
  PlayerCharacter *v7; // ecx

  if ( this->member.niNode )
  {
    v6 = (char *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->Unk_5A)(this);
    v7 = TESDataHandler_g_PlayerRef;
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v6 )
      {
        sub_478EA0(v6, a2, a3, a4, a5);
        v7 = TESDataHandler_g_PlayerRef;
      }
      v6 = (char *)sub_6600D0(v7, v7->isThirdPerson);
    }
    if ( v6 )
      sub_478EA0(v6, a2, a3, a4, a5);
    if ( this->vtbl->IsActor(this) )
      sub_5EA1A0((int)this, a2, (_DWORD *)this->member.niNode);
  }
}

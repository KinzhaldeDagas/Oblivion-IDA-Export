void __userpurge sub_4DCF10(
        TESObjectREFR *this@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  char *v7; // eax
  PlayerCharacter *v8; // ecx

  if ( this->member.niNode )
  {
    v7 = (char *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->Unk_5A)(this);
    v8 = TESDataHandler_g_PlayerRef;
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v7 )
      {
        sub_478E80(v7, bp0, a3, a4, a5, a6);
        v8 = TESDataHandler_g_PlayerRef;
      }
      v7 = (char *)sub_6600D0(v8, v8->isThirdPerson);
    }
    if ( v7 )
      sub_478E80(v7, bp0, a3, a4, a5, a6);
    if ( this->vtbl->IsActor(this) )
      sub_5EA1A0((int)this, bp0, (_DWORD *)this->member.niNode);
  }
}

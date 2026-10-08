void __thiscall TESQuest::LinkForm(TESForm *this)
{
  char *v2; // ecx
  char **EventList; // eax
  char *v4; // edi
  TESForm *v5; // edi

  if ( (this->member.flags & 8) == 0 ) /*0x52986b*/
  {
    TESScriptableForm_Link((int)(this + 1), this); /*0x529875*/
    v2 = *((char **)this + 7); /*0x52987a*/
    if ( v2 ) /*0x52987f*/
    {
      EventList = Script_CreateEventList(v2); /*0x529881*/
      *((_DWORD *)this + 0x16) = EventList; /*0x529888*/
      if ( EventList ) /*0x52988b*/
        ((void (__thiscall *)(TESForm *, int))this->vtbl->Unk_12)(this, 0x8000000); /*0x529899*/
      if ( byte_B10CA0 ) /*0x52989b*/
      {
        *((_BYTE *)this + 0x3C) |= 1u; /*0x5298a4*/
        this->vtbl->MarkAsModified(this, 4); /*0x5298b1*/
      }
    }
    if ( this != (TESForm *)0xFFFFFFB0 ) /*0x5298b8*/
      sub_56A480((UInt32 *)this + 0x14, this); /*0x5298bb*/
    v4 = (char *)this + 0x40; /*0x5298c1*/
    if ( this != (TESForm *)0xFFFFFFC0 ) /*0x5298c6*/
    {
      do /*0x5298e0*/
      {
        if ( !*((_DWORD *)v4 + 1) && !*(_DWORD *)v4 ) /*0x5298ce*/
          break; /*0x5298d1*/
        sub_52B160(*(char **)v4, this); /*0x5298d6*/
        v4 = *((char **)v4 + 1); /*0x5298db*/
      }
      while ( v4 ); /*0x5298e0*/
    }
    v5 = this + 3; /*0x5298e2*/
    if ( this != (TESForm *)0xFFFFFFB8 ) /*0x5298e7*/
    {
      do /*0x529908*/
      {
        if ( !*(_DWORD *)&v5->member.type && !v5->vtbl ) /*0x5298f6*/
          break; /*0x5298f9*/
        sub_52B340((UInt32 *)v5->vtbl, this); /*0x5298fe*/
        v5 = *(TESForm **)&v5->member.type; /*0x529903*/
      }
      while ( v5 ); /*0x529908*/
    }
    TESForm_SetIsLinked(this, 1); /*0x52990e*/
  }
}

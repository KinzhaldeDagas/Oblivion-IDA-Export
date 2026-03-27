void __thiscall sub_529860(TESForm *this)
{
  char *v2; // ecx
  char **EventList; // eax
  char *v4; // edi
  TESForm *v5; // edi

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)(this + 1), this);
    v2 = *((char **)this + 7);
    if ( v2 )
    {
      EventList = Script_CreateEventList(v2);
      *((_DWORD *)this + 0x16) = EventList;
      if ( EventList )
        ((void (__thiscall *)(TESForm *, int))this->vtbl->Unk_12)(this, 0x8000000);
      if ( byte_B10CA0 )
      {
        *((_BYTE *)this + 0x3C) |= 1u;
        this->vtbl->MarkAsModified(this, 4);
      }
    }
    if ( this != (TESForm *)0xFFFFFFB0 )
      sub_56A480((UInt32 *)this + 0x14, this);
    v4 = (char *)this + 0x40;
    if ( this != (TESForm *)0xFFFFFFC0 )
    {
      do
      {
        if ( !*((_DWORD *)v4 + 1) && !*(_DWORD *)v4 )
          break;
        sub_52B160(*(char **)v4, this);
        v4 = *((char **)v4 + 1);
      }
      while ( v4 );
    }
    v5 = this + 3;
    if ( this != (TESForm *)0xFFFFFFB8 )
    {
      do
      {
        if ( !*(_DWORD *)&v5->member.type && !v5->vtbl )
          break;
        sub_52B340(&v5->vtbl->super.InitializeComponent, this);
        v5 = *(TESForm **)&v5->member.type;
      }
      while ( v5 );
    }
    TESForm_SetIsLinked(this, 1);
  }
}

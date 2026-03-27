unsigned __int16 __userpurge sub_5E7D00@<ax>(TESObjectREFR *this@<ecx>, double st7_0@<st0>, int a3)
{
  __int16 v5; // si
  unsigned __int16 v6; // bp
  __int16 v7; // si
  TESForm *v8; // eax
  TESObjectREFR *v9; // eax
  int v10; // ecx
  TESObjectREFR *v11; // eax
  __int16 v12; // si
  __int16 v13; // cx
  unsigned __int16 v14; // si
  TESSaveLoad *v15; // ecx
  unsigned __int8 next; // al
  unsigned __int8 v17; // al
  UInt32 *v18; // esi
  TESForm *v19; // eax
  const char *v20; // eax
  int v22; // [esp-Ch] [ebp-1Ch]
  int v23; // [esp-8h] [ebp-18h]
  const char *v24; // [esp-4h] [ebp-14h]
  unsigned __int16 v25; // [esp+14h] [ebp+4h]

  v5 = MobileObject_ModifiedFormSize(this, st7_0, a3);
  v6 = v5;
  if ( sub_45A170() )
    v5 += 6;
  v7 = v5 + 7;
  if ( (a3 & 0x40) != 0 )
    ++v7;
  if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature )
  {
    v8 = this->vtbl->GetBaseForm(this);
    if ( v8 )
    {
      if ( LOBYTE(v8[0xA].member.modlist.next) == 4 )
      {
        ++v7;
        if ( *((_DWORD *)this + 0x35) )
          v7 += 4;
      }
    }
  }
  if ( (a3 & 0x8000) != 0 )
  {
    v9 = (TESObjectREFR *)((char *)this + 0xA4);
    v7 += 2;
    if ( this != (TESObjectREFR *)0xFFFFFF5C )
    {
      do
      {
        v10 = *(_DWORD *)&v9->member.super.type;
        if ( !v10 && !v9->vtbl )
          break;
        if ( v9->vtbl->super.super.ClearComponentReferences )
          v7 += 8;
        v9 = *(TESObjectREFR **)&v9->member.super.type;
      }
      while ( v10 );
    }
  }
  if ( (a3 & 0x20000000) != 0 )
    v7 += 4;
  v11 = (TESObjectREFR *)((char *)this + 0x9C);
  v12 = v7 + 2;
  v13 = 0;
  if ( this != (TESObjectREFR *)0xFFFFFF64 )
  {
    do
    {
      if ( v11->vtbl )
        ++v13;
      v11 = *(TESObjectREFR **)&v11->member.super.type;
    }
    while ( v11 );
  }
  v14 = v12 + 8 * v13;
  v15 = SaveLoad_CurrentSavegame;
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v25 = v14;
  if ( next >= 0x32u )
  {
    v14 += 4;
    v25 = v14;
  }
  if ( next >= 0x3Cu )
    v25 = v14 + 4;
  if ( next >= 0x44u && (a3 & 0x200000) != 0 )
  {
    v25 += AVCollection_GetSaveSize((_DWORD *)this + 0x22);
    v15 = SaveLoad_CurrentSavegame;
  }
  v17 = (unsigned __int8)v15[1].createdObjectList.next;
  if ( v17 >= 0x45u )
    v25 += 5;
  if ( v17 >= 0x61u )
    v25 += 4;
  if ( v17 >= 0x65u )
    v25 += 4;
  if ( v17 >= 0x71u )
    v25 += 0xE;
  if ( v17 >= 0x73u )
    ++v25;
  if ( v17 >= 0x7Bu )
    ++v25;
  if ( !Global_DebugSaveBuffer )
    return v25;
  v18 = (UInt32 *)v15[1].unk030[1];
  if ( v18 )
  {
    v19 = TESForm_LookupByFormID(*v18);
    v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v19->vtbl->GetEditorName)(
                          v19,
                          *(UInt32 *)((char *)v18 + 5),
                          0x4323,
                          ".\\AI\\Actor.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v25 - v6,
      *v18,
      v20,
      v22,
      v23,
      v24);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v25 - v6, 0x4323, ".\\AI\\Actor.cpp");
  }
  return v25;
}

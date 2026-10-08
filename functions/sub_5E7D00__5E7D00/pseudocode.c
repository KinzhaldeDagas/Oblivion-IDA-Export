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
  TESSaveLoadGame_SerializationView *v15; // ecx
  unsigned __int8 currentVersion; // al
  unsigned __int8 v17; // al
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v19; // eax
  const char *v20; // eax
  int v22; // [esp-Ch] [ebp-1Ch]
  int v23; // [esp-8h] [ebp-18h]
  const char *v24; // [esp-4h] [ebp-14h]
  unsigned __int16 v25; // [esp+14h] [ebp+4h]

  v5 = MobileObject_ModifiedFormSize(this, st7_0, a3); /*0x5e7d16*/
  v6 = v5; /*0x5e7d1d*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5e7d20*/
    v5 += 6; /*0x5e7d29*/
  v7 = v5 + 7; /*0x5e7d2c*/
  if ( (a3 & 0x40) != 0 ) /*0x5e7d32*/
    ++v7; /*0x5e7d34*/
  if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature ) /*0x5e7d47*/
  {
    v8 = this->vtbl->GetBaseForm(this); /*0x5e7d53*/
    if ( v8 ) /*0x5e7d57*/
    {
      if ( LOBYTE(v8[0xA].member.modlist.next) == 4 ) /*0x5e7d60*/
      {
        ++v7; /*0x5e7d62*/
        if ( *((_DWORD *)this + 0x35) ) /*0x5e7d65*/
          v7 += 4; /*0x5e7d6e*/
      }
    }
  }
  if ( (a3 & 0x8000) != 0 ) /*0x5e7d77*/
  {
    v9 = (TESObjectREFR *)((char *)this + 0xA4); /*0x5e7d79*/
    v7 += 2; /*0x5e7d7f*/
    if ( this != (TESObjectREFR *)0xFFFFFF5C ) /*0x5e7d84*/
    {
      do /*0x5e7da0*/
      {
        v10 = *(_DWORD *)&v9->member.super.type; /*0x5e7d86*/
        if ( !v10 && !v9->vtbl ) /*0x5e7d8d*/
          break; /*0x5e7d8f*/
        if ( v9->vtbl->super.super.ClearComponentReferences ) /*0x5e7d93*/
          v7 += 8; /*0x5e7d99*/
        v9 = *(TESObjectREFR **)&v9->member.super.type; /*0x5e7d9c*/
      }
      while ( v10 ); /*0x5e7da0*/
    }
  }
  if ( (a3 & 0x20000000) != 0 ) /*0x5e7da8*/
    v7 += 4; /*0x5e7daa*/
  v11 = (TESObjectREFR *)((char *)this + 0x9C); /*0x5e7dad*/
  v12 = v7 + 2; /*0x5e7db3*/
  v13 = 0; /*0x5e7db6*/
  if ( this != (TESObjectREFR *)0xFFFFFF64 ) /*0x5e7dba*/
  {
    do /*0x5e7dcd*/
    {
      if ( v11->vtbl ) /*0x5e7dc0*/
        ++v13; /*0x5e7dc5*/
      v11 = *(TESObjectREFR **)&v11->member.super.type; /*0x5e7dc8*/
    }
    while ( v11 ); /*0x5e7dcd*/
  }
  v14 = v12 + 8 * v13; /*0x5e7dcf*/
  v15 = g_TESSaveLoadGame; /*0x5e7dd2*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x5e7dd8*/
  v25 = v14; /*0x5e7ddd*/
  if ( currentVersion >= 0x32u ) /*0x5e7de1*/
  {
    v14 += 4; /*0x5e7de3*/
    v25 = v14; /*0x5e7de6*/
  }
  if ( currentVersion >= 0x3Cu ) /*0x5e7dec*/
    v25 = v14 + 4; /*0x5e7df1*/
  if ( currentVersion >= 0x44u && (a3 & 0x200000) != 0 ) /*0x5e7dff*/
  {
    v25 += AVCollection_GetSaveSize((AVCollection *)((char *)this + 0x88)); /*0x5e7e0c*/
    v15 = g_TESSaveLoadGame; /*0x5e7e11*/
  }
  v17 = v15->currentVersion; /*0x5e7e17*/
  if ( v17 >= 0x45u ) /*0x5e7e1c*/
    v25 += 5; /*0x5e7e1e*/
  if ( v17 >= 0x61u ) /*0x5e7e25*/
    v25 += 4; /*0x5e7e27*/
  if ( v17 >= 0x65u ) /*0x5e7e2e*/
    v25 += 4; /*0x5e7e30*/
  if ( v17 >= 0x71u ) /*0x5e7e37*/
    v25 += 0xE; /*0x5e7e39*/
  if ( v17 >= 0x73u ) /*0x5e7e40*/
    ++v25; /*0x5e7e42*/
  if ( v17 >= 0x7Bu ) /*0x5e7e49*/
    ++v25; /*0x5e7e4b*/
  if ( !Global_DebugSaveBuffer ) /*0x5e7e50*/
    return v25; /*0x5e7ee4*/
  currentlySavingFormHeader = (UInt32 *)v15->currentlySavingFormHeader; /*0x5e7e5d*/
  if ( currentlySavingFormHeader )
  {
    v19 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x5e7e6a*/
    v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v19->vtbl->GetEditorName)( /*0x5e7e8a*/
                          v19,
                          *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                          0x4323,
                          ".\\AI\\Actor.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v25 - v6,
      *currentlySavingFormHeader,
      v20,
      v22,
      v23,
      v24);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v25 - v6, 0x4323, ".\\AI\\Actor.cpp");
  }
  return v25; /*0x5e7eab*/
}

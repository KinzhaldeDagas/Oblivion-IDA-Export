unsigned __int16 __userpurge sub_632370@<ax>(char *this@<ecx>, double st7_0@<st0>, int a3, void *a4)
{
  __int16 v7; // si
  unsigned __int8 next; // al
  __int16 v9; // si
  __int16 v10; // si
  _DWORD *v11; // eax
  __int16 v12; // si
  __int16 i; // cx
  __int16 v14; // si
  unsigned __int8 v15; // al
  UInt32 *v16; // esi
  TESForm *v17; // eax
  const char *v18; // eax
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-8h] [ebp-18h]
  const char *v22; // [esp-4h] [ebp-14h]
  unsigned __int16 v23; // [esp+14h] [ebp+4h]
  __int16 v24; // [esp+18h] [ebp+8h]
  unsigned __int16 v25; // [esp+18h] [ebp+8h]

  v7 = sub_650F50(this, st7_0, a3, a4);
  v23 = v7;
  if ( sub_45A170() )
    v7 += 6;
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v9 = v7 + 0x36;
  if ( next >= 0x32u )
    v9 += 4;
  v10 = v9 + 0x2D;
  if ( next >= 0x3Fu )
    v10 += 5;
  if ( next >= 0x42u )
    v10 += 5;
  v11 = *((_DWORD **)this + 0x63);
  v12 = v10 + 0xE;
  for ( i = 0; v11; v11 = (_DWORD *)v11[1] )
  {
    if ( *v11 )
      ++i;
  }
  v14 = 0xD * i + v12;
  v24 = v14;
  if ( (a3 & 0x2000000) != 0 )
    v24 = v14 + 1;
  v25 = sub_651AD0(this, (int)a4) + 2 + v24;
  v15 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( v15 >= 0x5Au )
    v25 += 0x1E;
  if ( v15 >= 0x5Du )
    v25 += 8;
  if ( v15 >= 0x6Au )
    v25 += 4;
  if ( v15 >= 0x71u )
    v25 += 0x18;
  if ( !Global_DebugSaveBuffer )
    return v25;
  v16 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v16 )
  {
    v17 = TESForm_LookupByFormID(*v16);
    v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v17->vtbl->GetEditorName)(
                          v17,
                          *(UInt32 *)((char *)v16 + 5),
                          0x2AEE,
                          ".\\AI\\HighProcess.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v25 - v23,
      *v16,
      v18,
      v20,
      v21,
      v22);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v25 - v23, 0x2AEE, ".\\AI\\HighProcess.cpp");
  }
  return v25;
}

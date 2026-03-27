unsigned __int16 __usercall sub_625EF0@<ax>(_DWORD *this@<ecx>, double a2@<st0>)
{
  unsigned __int16 v3; // si
  unsigned __int16 v4; // bx
  __int16 v5; // si
  const char ****v6; // ecx
  unsigned __int16 v7; // si
  unsigned __int16 v8; // di
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  int v13; // [esp-Ch] [ebp-1Ch]
  int v14; // [esp-8h] [ebp-18h]
  const char *v15; // [esp-4h] [ebp-14h]

  v3 = sub_567D20(this);
  v4 = v3;
  if ( sub_45A170() )
    v3 += 6;
  v5 = v3 + 4;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Au )
    ++v5;
  v6 = (const char ****)*(this + 0x14);
  v7 = v5 + 0x12;
  if ( v6 )
    v8 = sub_6B75B0(v6, a2) + 4 + v7;
  else
    v8 = v7;
  if ( Global_DebugSaveBuffer )
  {
    v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v9 )
    {
      v10 = TESForm_LookupByFormID(*v9);
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)(
                            v10,
                            *(UInt32 *)((char *)v9 + 5),
                            0x13D,
                            ".\\AI\\DialoguePackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v8 - v4,
        *v9,
        v11,
        v13,
        v14,
        v15);
      return v8;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v8 - v4, 0x13D, ".\\AI\\DialoguePackage.cpp");
  }
  return v8;
}

unsigned __int16 __userpurge TESObjectREFR_GetModifiedSize@<ax>(TESChildCELL *this@<ecx>, double st7_0@<st0>, int a3)
{
  unsigned __int16 v5; // di
  unsigned __int16 v6; // bp
  int *ContainerChanges; // eax
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-1Ch]
  int v13; // [esp-8h] [ebp-18h]
  const char *v14; // [esp-4h] [ebp-14h]
  unsigned __int16 v15; // [esp+14h] [ebp+4h]

  v5 = TESForm_ModifiedFormSize(a3);
  v15 = v5;
  v6 = v5;
  if ( sub_45A170() )
  {
    v15 = v5 + 6;
    v5 += 6;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    ContainerChanges = (int *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x11));
    v5 += sub_488580(ContainerChanges, st7_0);
    v15 = v5;
  }
  if ( (a3 & 0x177577E0) != 0 || (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
  {
    v5 += ExtraDataList_GetSaveSize((_DWORD *)this + 0x11, st7_0, a3, (TESObjectREFR *)this);
    v15 = v5;
  }
  if ( (a3 & 0x2000000) != 0 && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
  {
    v5 += sub_4E0840(this) + 2;
    v15 = v5;
  }
  if ( (a3 & 8) != 0 )
  {
    v5 += sub_4E0970(this, 0) + 2;
    v15 = v5;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x43u && (a3 & 0x10) != 0 )
    v5 = v15 + 4;
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x6E2,
                            "..\\TES Shared\\TESObjectREFR.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v5 - v6,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v5;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v5 - v6, 0x6E2, "..\\TES Shared\\TESObjectREFR.cpp");
  }
  return v5;
}

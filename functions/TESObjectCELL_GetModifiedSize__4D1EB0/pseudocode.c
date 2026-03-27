unsigned __int16 __userpurge TESObjectCELL_GetModifiedSize@<ax>(ExtraDataList *this@<ecx>, double st7_0@<st0>, int a3)
{
  unsigned __int16 v4; // si
  unsigned __int16 v5; // bp
  BSExtraDataVtbl *v6; // eax
  const char *v7; // eax
  UInt32 *v8; // edi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-20h]
  int v13; // [esp-8h] [ebp-1Ch]
  const char *v14; // [esp-4h] [ebp-18h]
  __int16 v15; // [esp+10h] [ebp-4h]
  unsigned __int16 v16; // [esp+10h] [ebp-4h]
  __int16 v17; // [esp+10h] [ebp-4h]

  v15 = 0;
  if ( (a3 & 0x8000000) != 0 )
    v15 = 4;
  v4 = TESForm_ModifiedFormSize(a3) + v15;
  v16 = v4;
  v5 = v4;
  if ( sub_45A170() )
  {
    v16 = v4 + 6;
    v4 += 6;
  }
  if ( (a3 & 8) != 0 )
    v4 = ++v16;
  if ( (a3 & 0x10000000) != 0 )
  {
    v6 = sub_420B50(this + 2);
    v4 += (*((int (__thiscall **)(BSExtraDataVtbl *, _DWORD))v6->Destructor + 2))(v6, 0);
    v16 = v4;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v7 = *((const char **)this + 7);
    v17 = v16 + 1;
    if ( !v7 )
      v7 = EmptyString;
    v16 = strlen(v7) + v17;
    v4 = v16;
  }
  if ( (a3 & 0x20) != 0 )
    v4 = v16 + 4;
  if ( (a3 & 0x1000000) != 0 )
    v4 += sub_4E5A40(*((_DWORD **)this + 0x11), st7_0);
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x313A,
                            "..\\TES Shared\\TESObjectCELL.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v4 - v5,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v4;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v4 - v5, 0x313A, "..\\TES Shared\\TESObjectCELL.cpp");
  }
  return v4;
}

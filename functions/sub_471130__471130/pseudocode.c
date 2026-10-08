// Computes variable AnimIdle serialized size, including optional idle form/phase data and optional BSAnimGroupSequence state with version-dependent payload size.
unsigned __int16 __cdecl AnimIdle_GetSaveStateSize(int a1, int a2)
{
  __int16 v2; // si
  unsigned __int16 v3; // si
  __int16 v4; // si
  __int16 v5; // dx
  UInt32 *v6; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  int v10; // [esp-10h] [ebp-14h]
  int v11; // [esp-Ch] [ebp-10h]
  const char *v12; // [esp-8h] [ebp-Ch]

  v2 = 0; /*0x471137*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x471139*/
    v2 = 6; /*0x471142*/
  v3 = v2 + 4; /*0x47114b*/
  if ( a2 ) /*0x471150*/
  {
    if ( *(_DWORD *)(a2 + 0x24) ) /*0x471152*/
    {
      v4 = v3 + 2; /*0x47115b*/
      v5 = 0xD; /*0x471160*/
      if ( *(_DWORD *)(a2 + 0x10) ) /*0x471158*/
        v5 = BSAnimGroupSequence_GetSaveStateSize() + 0xE; /*0x471170*/
      v3 = v5 + v4; /*0x471173*/
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    v6 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x471184*/
    if ( v6 )
    {
      v7 = TESForm_LookupByFormID(*v6); /*0x471191*/
      v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v7->vtbl->GetEditorName)( /*0x4711b1*/
                           v7,
                           *(UInt32 *)((char *)v6 + 5),
                           0xF57,
                           "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v3,
        *v6,
        v8,
        v10,
        v11,
        v12);
      return v3; /*0x4711cd*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v3, 0xF57, "..\\TES Shared\\Animation.cpp");
  }
  return v3; /*0x4711cc*/
}

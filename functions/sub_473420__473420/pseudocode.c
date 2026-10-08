// Computes ActorAnimData serialized size from fixed slot/key/action fields plus variable active sequence and current/queued idle state.
unsigned __int16 __thiscall ActorAnimData_GetSaveStateSize(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  _WORD *v4; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  NiObject *v12; // eax
  unsigned __int16 v13; // di
  UInt32 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  int v18; // [esp-Ch] [ebp-1Ch]
  int v19; // [esp-8h] [ebp-18h]
  const char *v20; // [esp-4h] [ebp-14h]
  __int16 v21; // [esp+Ch] [ebp-4h]
  __int16 v22; // [esp+Ch] [ebp-4h]
  unsigned __int16 v23; // [esp+Ch] [ebp-4h]

  v21 = 0; /*0x47342c*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x473434*/
    v21 = 6; /*0x47343d*/
  v22 = v21 + 0x1A; /*0x473445*/
  v3 = this + 0x28; /*0x47344b*/
  v4 = this + 0xF; /*0x473451*/
  v5 = 5; /*0x473454*/
  do /*0x47348d*/
  {
    if ( *v4 != 0xFF && *v4 != 0xFFFF ) /*0x47346d*/
    {
      v22 += 0x11; /*0x473471*/
      if ( *v3 ) /*0x47346f*/
        v22 += BSAnimGroupSequence_GetSaveStateSize(); /*0x47347f*/
    }
    ++v4; /*0x473484*/
    ++v3; /*0x473487*/
    --v5; /*0x47348a*/
  }
  while ( v5 ); /*0x47348d*/
  v6 = a2; /*0x47348f*/
  v7 = 0; /*0x473493*/
  if ( a2 ) /*0x473498*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) ) /*0x4734a4*/
      v7 = v6; /*0x4734aa*/
  }
  v8 = *(this + 0x34); /*0x4734ac*/
  if ( !v8 ) /*0x4734b4*/
    v8 = *(this + 0x33); /*0x4734b6*/
  v23 = AnimIdle_GetSaveStateSize(v7, v8) + v22 + 1; /*0x4734d3*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x40u ) /*0x4734de*/
    ++v23; /*0x4734e0*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 0x5C) + 0x30))(v7 + 0x5C) /*0x473564*/
    && (v9 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 0x26) + 0x7C) + 0x4C))(
               *(_DWORD *)(*(this + 0x26) + 0x7C),
               "magicNode")) != 0
    && (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9)) != 0
    && *(_WORD *)(v10 + 0xB6)
    && (v11 = **(_DWORD **)(v10 + 0xB0)) != 0
    && (v12 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v11 + 0xC))) != 0
    && NiTMap_GetAt(&v12[0xB].__vftable, (int)"SpecialIdle_Cast", &a2)
    && a2 )
  {
    v13 = BSAnimGroupSequence_GetSaveStateSize() + 4 + v23; /*0x473574*/
  }
  else
  {
    v13 = v23; /*0x473579*/
  }
  if ( Global_DebugSaveBuffer )
  {
    v14 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x47358c*/
    if ( v14 )
    {
      v15 = TESForm_LookupByFormID(*v14); /*0x473599*/
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x4735b9*/
                            v15,
                            *(UInt32 *)((char *)v14 + 5),
                            0x11E6,
                            "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13,
        *v14,
        v16,
        v18,
        v19,
        v20);
      return v13; /*0x4735d7*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v13, 0x11E6, "..\\TES Shared\\Animation.cpp");
  }
  return v13; /*0x4735d3*/
}

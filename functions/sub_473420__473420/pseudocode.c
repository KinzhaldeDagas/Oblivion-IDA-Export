unsigned __int16 __thiscall sub_473420(_DWORD *this, int a2)
{
  _DWORD *v4; // esi
  _WORD *v5; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  NiObject *v13; // eax
  unsigned __int16 v14; // di
  UInt32 *v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  int v19; // [esp-Ch] [ebp-1Ch]
  int v20; // [esp-8h] [ebp-18h]
  const char *v21; // [esp-4h] [ebp-14h]
  __int16 v22; // [esp+Ch] [ebp-4h]
  __int16 v23; // [esp+Ch] [ebp-4h]
  unsigned __int16 v24; // [esp+Ch] [ebp-4h]

  v22 = 0;
  if ( sub_45A170() )
    v22 = 6;
  v23 = v22 + 0x1A;
  v4 = this + 0x28;
  v5 = this + 0xF;
  v6 = 5;
  do
  {
    if ( *v5 != 0xFF && *v5 != 0xFFFF )
    {
      v23 += 0x11;
      if ( *v4 )
        v23 += sub_49F550();
    }
    ++v5;
    ++v4;
    --v6;
  }
  while ( v6 );
  v7 = a2;
  v8 = 0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x190))(a2) )
      v8 = v7;
  }
  v9 = *(this + 0x34);
  if ( !v9 )
    v9 = *(this + 0x33);
  v24 = sub_471130(v8, v9) + v23 + 1;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u )
    ++v24;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 0x5C) + 0x30))(v8 + 0x5C)
    && (v10 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 0x26) + 0x7C) + 0x4C))(
                *(_DWORD *)(*(this + 0x26) + 0x7C),
                "magicNode")) != 0
    && (v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10)) != 0
    && *(_WORD *)(v11 + 0xB6)
    && (v12 = **(_DWORD **)(v11 + 0xB0)) != 0
    && (v13 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v12 + 0xC))) != 0
    && NiTMap_GetAt(&v13[0xB].__vftable, (int)"SpecialIdle_Cast", &a2)
    && a2 )
  {
    v14 = sub_49F550() + 4 + v24;
  }
  else
  {
    v14 = v24;
  }
  if ( Global_DebugSaveBuffer )
  {
    v15 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v15 )
    {
      v16 = TESForm_LookupByFormID(*v15);
      v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v16->vtbl->GetEditorName)(
                            v16,
                            *(UInt32 *)((char *)v15 + 5),
                            0x11E6,
                            "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14,
        *v15,
        v17,
        v19,
        v20,
        v21);
      return v14;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v14, 0x11E6, "..\\TES Shared\\Animation.cpp");
  }
  return v14;
}

char __thiscall sub_69E890(void *this)
{
  char v2; // bl
  TESForm *v3; // eax
  TESObjectREFR *v4; // eax
  void *v5; // edi
  void (__thiscall *v6)(void *, _DWORD, int, int, int); // edx
  size_t v8; // [esp-Ch] [ebp-20h]
  size_t v9; // [esp-Ch] [ebp-20h]
  int v10; // [esp-Ch] [ebp-20h]
  int v11; // [esp-8h] [ebp-1Ch]
  size_t v12; // [esp-4h] [ebp-18h]
  int v13; // [esp-4h] [ebp-18h]
  int v14; // [esp+4h] [ebp-10h] BYREF
  int a1; // [esp+8h] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-8h]
  _BYTE v17[4]; // [esp+10h] [ebp-4h] BYREF

  LODWORD(v12) = 4;
  v2 = 1;
  SaveLoad_LoadFormID(v17, v12, v14, a1, v16);
  v3 = TESForm_LookupByFormID(a1);
  v4 = (TESObjectREFR *)OblivionDynamicCast(
                          v3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  *((_DWORD *)this + 7) = v4;
  if ( !v4
    || !TESObjectREFR_GetParentCell(v4)
    || TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 7))->members.cellProcessLevel != 6 )
  {
    v2 = 0;
  }
  LODWORD(v8) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v14 + 3, v8);
  v5 = (void *)FormHeapAlloc(HIBYTE(v14) + 1);
  _memset(v5, 0, HIBYTE(v14) + 1);
  LODWORD(v9) = HIBYTE(v14);
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v5, v9);
  v6 = *(void (__thiscall **)(void *, _DWORD, int, int, int))(*(_DWORD *)this + 0x7C);
  v10 = *((_DWORD *)this + 7);
  *((_BYTE *)this + 0x28) = 1;
  v6(this, 0, v10, v11, v13);
  if ( v2 )
  {
    (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 0x80))(this, 0, *((_DWORD *)this + 7));
    (*(void (__thiscall **)(void *, _DWORD, _DWORD, void *))(*(_DWORD *)this + 0x84))(
      this,
      0,
      *((_DWORD *)this + 7),
      v5);
  }
  return v2;
}

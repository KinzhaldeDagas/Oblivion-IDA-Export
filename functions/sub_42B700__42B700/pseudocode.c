char __thiscall sub_42B700(int *this, TESForm *a2)
{
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *v5; // eax
  int v7; // edi
  int v8; // ebx
  const char *v9; // eax
  int v10; // [esp+8h] [ebp-44h]
  char ArgList[4]; // [esp+44h] [ebp-8h] BYREF
  int v12; // [esp+48h] [ebp-4h]

  *(_DWORD *)ArgList = *this;
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
  v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
  v5 = OblivionDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  *this = (int)v5;
  if ( v5 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x170))(v5) + 4) == 0x18 )
    {
      if ( !_finite(*((float *)this + 1))
        || !_finite(*((float *)this + 2))
        || !_finite(*((float *)this + 3))
        || _isnan(*((float *)this + 1))
        || _isnan(*((float *)this + 2))
        || _isnan(*((float *)this + 3)) )
      {
        PrintError("Corrupt location found in teleport data, setting to (0, 0, 0).");
        *(_QWORD *)(this + 1) = *(_QWORD *)&Vector3_InitValue_;
        *(this + 3) = LODWORD(dword_B3F9B0);
      }
      if ( !_finite(*((float *)this + 4))
        || !_finite(*((float *)this + 5))
        || !_finite(*((float *)this + 6))
        || _isnan(*((float *)this + 4))
        || _isnan(*((float *)this + 5))
        || _isnan(*((float *)this + 6)) )
      {
        PrintError("Corrupt angle found in teleport data, setting to (0, 0, 0).");
        *((_QWORD *)this + 2) = *(_QWORD *)&Vector3_InitValue_;
        *(this + 6) = LODWORD(dword_B3F9B0);
      }
      return 1;
    }
    else
    {
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x170))(*this);
      v12 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x170))(*this) + 0xC);
      v8 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x170))(*this) + 4);
      v9 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0xD4))(v7, v12);
      PrintError(
        "Linked door (%08X) in teleport data points to invalid object (%s %s(%08X)).",
        *(_DWORD *)ArgList,
        *(const char **)&off_B05E04[0xC * v8],
        v9,
        v10);
      *this = 0;
      return 0;
    }
  }
  else
  {
    PrintError("Could not find linked door (%08X) in teleport data init.", *(_DWORD *)ArgList);
    return 0;
  }
}

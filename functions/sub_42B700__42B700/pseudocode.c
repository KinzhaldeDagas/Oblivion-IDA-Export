// 0x42B700: CELL XTEL runtime proof: owner is used for override-file namespace only, not owner-kind validation. Destination must cast TESObjectREFR at0x42B748 and have base type0x18 DOOR at0x42B783. On successful destination link, any nonfinite/NaN position component zeros the full XYZ triple (0x42B868..0x42B884); rotation triple is independently sanitized (0x42B90D..0x42B929). These are post-link effects, not raw bounded-load values.
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

  *(_DWORD *)ArgList = *this; /*0x42b715*/
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x42b719*/
  TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x42b724*/
  v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x42b73f*/
  v5 = OblivionDynamicCast( /*0x42b748*/
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  *this = (int)v5; /*0x42b752*/
  if ( v5 ) /*0x42b754*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x170))(v5) + 4) == 0x18 ) /*0x42b783*/
    {
      if ( !_finite(*((float *)this + 1)) /*0x42b868*/
        || !_finite(*((float *)this + 2))
        || !_finite(*((float *)this + 3))
        || _isnan(*((float *)this + 1))
        || _isnan(*((float *)this + 2))
        || _isnan(*((float *)this + 3)) )
      {
        PrintError("Corrupt location found in teleport data, setting to (0, 0, 0)."); /*0x42b879*/
        *(NiPoint3 *)(this + 1) = g_zeroNiPoint3; /*0x42b884*/
      }
      if ( !_finite(*((float *)this + 4)) /*0x42b90d*/
        || !_finite(*((float *)this + 5))
        || !_finite(*((float *)this + 6))
        || _isnan(*((float *)this + 4))
        || _isnan(*((float *)this + 5))
        || _isnan(*((float *)this + 6)) )
      {
        PrintError("Corrupt angle found in teleport data, setting to (0, 0, 0)."); /*0x42b91e*/
        *(NiPoint3 *)(this + 4) = g_zeroNiPoint3; /*0x42b929*/
      }
      return 1; /*0x42b942*/
    }
    else
    {
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x170))(*this); /*0x42b795*/
      v12 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x170))(*this) + 0xC); /*0x42b7a2*/
      v8 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x170))(*this) + 4); /*0x42b7b8*/
      v9 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0xD4))(v7, v12); /*0x42b7c5*/
      PrintError( /*0x42b7dd*/
        "Linked door (%08X) in teleport data points to invalid object (%s %s(%08X)).",
        *(_DWORD *)ArgList,
        *(const char **)&off_B05E04[0xC * v8],
        v9,
        v10);
      *this = 0; /*0x42b7e5*/
      return 0; /*0x42b7eb*/
    }
  }
  else
  {
    PrintError("Could not find linked door (%08X) in teleport data init.", *(_DWORD *)ArgList); /*0x42b760*/
    return 0; /*0x42b768*/
  }
}

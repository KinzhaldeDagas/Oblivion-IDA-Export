char __thiscall sub_6A0610(TESObjectREFR **this)
{
  char v2; // bl
  TESForm *v3; // eax
  TESObjectREFR *v4; // eax
  TESForm *v5; // eax
  void *v6; // edi
  int v8; // [esp-10h] [ebp-24h]
  size_t v9; // [esp-Ch] [ebp-20h]
  int v10; // [esp-Ch] [ebp-20h]
  int v11; // [esp-8h] [ebp-1Ch]
  size_t v12; // [esp-4h] [ebp-18h]
  int v13; // [esp-4h] [ebp-18h]
  int v14; // [esp-4h] [ebp-18h]
  int v15; // [esp+0h] [ebp-14h]
  UInt32 v16; // [esp+0h] [ebp-14h]
  int a1; // [esp+4h] [ebp-10h]
  int a1a; // [esp+4h] [ebp-10h]
  int v19; // [esp+8h] [ebp-Ch] BYREF
  int Dst; // [esp+Ch] [ebp-8h] BYREF

  LODWORD(v12) = 4;
  v2 = 1;
  SaveLoad_LoadFormID(&Dst, v12, a1, v19, Dst);
  v3 = TESForm_LookupByFormID(a1a);
  v4 = (TESObjectREFR *)OblivionDynamicCast(
                          v3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  *(this + 7) = v4;
  if ( !v4
    || !TESObjectREFR_GetParentCell(v4)
    || TESObjectREFR_GetParentCell(*(this + 7))->members.cellProcessLevel != 6 )
  {
    v2 = 0;
  }
  LODWORD(v9) = 4;
  SaveLoad_LoadFormID(&v19, v9, v13, v15, a1a);
  v5 = TESForm_LookupByFormID(v16);
  v6 = OblivionDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEffectShader `RTTI Type Descriptor',
         0);
  if ( !v6 )
    v2 = 0;
  ((void (__thiscall *)(TESObjectREFR **, _DWORD, _DWORD, int, int, int, int))LODWORD((*this)[1].member.rot.y))(
    this,
    0,
    *(this + 7),
    v8,
    v10,
    v11,
    v14);
  if ( v2 )
  {
    ((void (__thiscall *)(TESObjectREFR **, _DWORD, _DWORD))LODWORD((*this)[1].member.rot.z))(this, 0, *(this + 7));
    ((void (__thiscall *)(TESObjectREFR **, _DWORD, _DWORD, void *))LODWORD((*this)[1].member.pos[0]))(
      this,
      0,
      *(this + 7),
      v6);
  }
  return v2;
}

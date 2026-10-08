char __thiscall sub_6A0610(TESObjectREFR **this)
{
  char v2; // bl
  TESForm *v3; // eax
  TESObjectREFR *v4; // eax
  TESForm *v5; // eax
  void *v6; // edi
  int v8; // [esp-10h] [ebp-24h]
  int v9; // [esp-Ch] [ebp-20h]
  int v10; // [esp-8h] [ebp-1Ch]
  int v11; // [esp-4h] [ebp-18h]
  UInt32 v12; // [esp+0h] [ebp-14h]
  UInt32 a1; // [esp+4h] [ebp-10h]
  unsigned int destination; // [esp+8h] [ebp-Ch] BYREF
  unsigned int Dst; // [esp+Ch] [ebp-8h] BYREF

  v2 = 1; /*0x6a0625*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dst, 4u); /*0x6a0627*/
  v3 = TESForm_LookupByFormID(a1); /*0x6a063f*/
  v4 = (TESObjectREFR *)OblivionDynamicCast( /*0x6a0648*/
                          v3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  *(this + 7) = v4; /*0x6a0652*/
  if ( !v4 || !Shared_GetDwordAtOffset40(v4) || *(_BYTE *)(Shared_GetDwordAtOffset40(*(this + 7)) + 0x26) != 6 ) /*0x6a066e*/
    v2 = 0; /*0x6a0670*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &destination, 4u); /*0x6a067f*/
  v5 = TESForm_LookupByFormID(v12); /*0x6a0697*/
  v6 = OblivionDynamicCast( /*0x6a06a5*/
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEffectShader `RTTI Type Descriptor',
         0);
  if ( !v6 ) /*0x6a06ac*/
    v2 = 0; /*0x6a06ae*/
  ((void (__thiscall *)(TESObjectREFR **, _DWORD, _DWORD, int, int, int, int))LODWORD((*this)[1].member.rot.y))( /*0x6a06bd*/
    this,
    0,
    *(this + 7),
    v8,
    v9,
    v10,
    v11);
  if ( v2 ) /*0x6a06c1*/
  {
    ((void (__thiscall *)(TESObjectREFR **, _DWORD, _DWORD))LODWORD((*this)[1].member.rot.z))(this, 0, *(this + 7)); /*0x6a06d3*/
    ((void (__thiscall *)(TESObjectREFR **, _DWORD, _DWORD, void *))LODWORD((*this)[1].member.pos[0]))( /*0x6a06e6*/
      this,
      0,
      *(this + 7),
      v6);
  }
  return v2; /*0x6a06e8*/
}

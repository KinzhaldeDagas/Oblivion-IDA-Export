void __thiscall sub_61C9A0(float *this, _DWORD **a2)
{
  double v3; // st7
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bool v7; // c0
  double v8; // st7
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+8h] [ebp-4h]

  sub_5E02B0(*((_DWORD ***)this + 0xF)); /*0x61c9a7*/
  v3 = kTerrainLODQuadRayDirectionZ; /*0x61c9ac*/
  v4 = *((_DWORD *)this + 0x1B); /*0x61c9b2*/
  if ( v4 != 0xC ) /*0x61c9b8*/
  {
    if ( v4 == 4 ) /*0x61c9bd*/
      *(this + 0x33) = kTerrainLODQuadRayDirectionZ; /*0x61c9bf*/
    if ( v4 == 6 ) /*0x61c9c8*/
      *(this + 0x4B) = 0.0; /*0x61c9ca*/
    if ( v4 == 4 ) /*0x61c9d7*/
    {
      v9 = g_GameSettingStringPointers_B36CD8[0xA6]; /*0x61c9df*/
      *(this + 0x3B) = *(this + 0x11); /*0x61c9e6*/
      *(this + 0x3C) = v9; /*0x61c9f0*/
      *(this + 0x3D) = v3; /*0x61c9f6*/
    }
    v5 = *((_DWORD *)this + 0x1B); /*0x61ca00*/
    if ( v5 != 4 && v5 != 7 && v5 != 9 && v5 != 8 && v5 != 0xC ) /*0x61ca1a*/
      *((_BYTE *)this + 0x191) = 1; /*0x61ca1c*/
  }
  v6 = *((_DWORD *)this + 0xF); /*0x61ca27*/
  *((_DWORD *)this + 0x1B) = 0xC; /*0x61ca2a*/
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v6 + 0x58) + 0x2C4))(*(_DWORD *)(v6 + 0x58), 0x101, 1); /*0x61ca43*/
  v7 = kHeadBodyNormalMatchRadius < sub_5E5850((TESObjectREFR *)*((_DWORD *)this + 0xF), 3); /*0x61ca55*/
  v8 = kHeadBodyNormalMatchRadius; /*0x61ca59*/
  if ( v7 ) /*0x61ca5e*/
    v8 = sub_5E5850((TESObjectREFR *)*((_DWORD *)this + 0xF), 3); /*0x61ca67*/
  v10 = v8; /*0x61ca70*/
  *(this + 0x3B) = *(this + 0x11); /*0x61ca77*/
  *(this + 0x3C) = v10; /*0x61ca81*/
  *(this + 0x3D) = kTerrainLODQuadRayDirectionZ; /*0x61ca8d*/
  *((_DWORD *)this + 0x47) = a2; /*0x61ca93*/
}

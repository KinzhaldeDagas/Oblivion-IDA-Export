void __thiscall sub_61D320(int this)
{
  int v2; // eax
  TESObjectREFR *v3; // ecx
  bool v4; // c0
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  float v9; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)(this + 0x6C); /*0x61d324*/
  if ( v2 != 0xE /*0x61d344*/
    && v2 != 0x10
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x3C) + 0x25C))(*(_DWORD *)(this + 0x3C)) )
  {
    sub_619920(this, 4); /*0x61d352*/
    if ( *(float *)(this + 0xF0) >= *(float *)(this + 0x44) - *(float *)(this + 0xEC) /*0x61d372*/
      || sub_5E05B0(*(_DWORD **)(this + 0x3C)) )
    {
      v7 = *(float *)(this + 0x44); /*0x61d3bf*/
      *(_DWORD *)(this + 0xD0) = 0x201; /*0x61d3c2*/
      *(float *)(this + 0xEC) = v7; /*0x61d3cc*/
      v6 = 0.0; /*0x61d3d2*/
    }
    else
    {
      v3 = *(TESObjectREFR **)(this + 0x3C); /*0x61d37b*/
      *(_DWORD *)(this + 0xD0) = 0x101; /*0x61d380*/
      v4 = kHeadBodyNormalMatchRadius < sub_5E5850(v3, 3); /*0x61d395*/
      v5 = kHeadBodyNormalMatchRadius; /*0x61d399*/
      if ( v4 ) /*0x61d39e*/
        v5 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(this + 0x3C), 3); /*0x61d3a7*/
      v9 = v5; /*0x61d3ac*/
      *(float *)(this + 0xEC) = *(float *)(this + 0x44); /*0x61d3b3*/
      v6 = v9; /*0x61d3b9*/
    }
    *(float *)(this + 0xF0) = v6; /*0x61d3d4*/
    v8 = kTerrainLODQuadRayDirectionZ; /*0x61d3da*/
    *(float *)(this + 0xF4) = kTerrainLODQuadRayDirectionZ; /*0x61d3e0*/
    *(float *)(this + 0xD4) = *(float *)(this + 0x44); /*0x61d3e9*/
    *(float *)(this + 0xD8) = *(float *)&dword_A46C30; /*0x61d3f5*/
    *(float *)(this + 0xDC) = v8; /*0x61d3fb*/
  }
}

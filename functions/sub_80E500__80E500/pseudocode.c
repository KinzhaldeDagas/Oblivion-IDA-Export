void __thiscall sub_80E500(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax

  v2 = (Ni2DBuffer **)(this + 0xC);
  if ( !*(this + 0xC) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5));
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      0,
      4,
      0,
      0,
      0,
      0,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "Ambient Color",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46498,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "Diff Color 0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B464A8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "Diff Color 1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B464B8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "DirectronalLightDir",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2A,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "PointLightPos",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x26,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "LightRadius",
      0x10000007,
      0,
      0xA,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B465A8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "FogParam | ShadowVolumeFatness",
      0x10000007,
      0,
      0xE,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46638,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "FogColor | ShadowVolumeExtrudeDistance",
      0x10000007,
      0,
      0xF,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46648,
      0);
    if ( UseHDR )
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
       + 6))(
        *v2,
        "Tree Dimmer",
        0x10000004,
        0,
        0x10,
        1,
        EmptyString,
        4,
        4,
        &flt_B42EA8,
        0);
    sub_7F16F0((int)*v2, 0x11);
  }
}

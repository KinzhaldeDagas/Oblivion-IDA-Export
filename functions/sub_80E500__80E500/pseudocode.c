//
//
// [2026-10-03 compiled frond audit] Verified installed STFROND002/003 vertex bytecode consumes c9 as object-space point position and c10.x as radius: length(c9-position)/c10.x then 1-saturate(distance/radius)^2. Constant map binds c9 shader+98, c10 generic light-data slot0, while c7 diffuse uses slot1. Together with transform 0x80DDA0 and sun/local pass ordering this establishes an inconsistent point-light binding for restored sun+local frond passes. Correct slot1 position/radius, including world-to-object radius scale, remains unimplemented. Local SDK Frond.fx is reimplemented and not stock bytecode authority.
//
// [2026-10-03 implemented correction] Verified PUSH at 0x80E668 has pointer operand 0x80E669=B465A8 (generic data slot0). Plugin redirects this frond c10 binding to a persistent float4 containing the object-scaled slot1 radius written by its transform callback. Install must precede definition5 creation because the map retains the pointer. HDR flag B43070 controls native c16 TreeDimmer binding and embedded VS selection.
//
// [2026-10-03 material scalar correction] Verified pointer operands80E598=B46498 for c5 Ambient,80E5C1=B464A8 for c6 Diff0,80E5EA=B464B8 for c7 Diff1. Plugin redirects these three bindings to private per-draw float4 copies. Current tracked frond asset scales RGB ambient by retained30006 and both diffuse sources by30003*30005. Alpha components and shared source globals remain untouched. RT4.1 reference SpeedTreeForest::RenderFronds uses frond*global diffuse scalar; SpeedTreeWrapper scales material ambient separately. Legacy assets without30000 retain identity factors.
// [2026-10-03 shadow motion constant] Native map uses c0..3,5..10,14..33 (c11 shader literal). Plugin wraps vtable+88 to add c12 float4 Frond Self Shadow Motion via AddConstant virtual+18, flags10000007, register12,count1,bytes16,type4, persistent pointer,extra0. The ten-stack-word ABI is verified in9A8660. The added XY offset affects only projected-shadow texture coordinates.
void __thiscall OB_SpeedTreeFrondShader_BuildConstantMap_010201A0(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax

  v2 = (Ni2DBuffer **)(this + 0xC); /*0x80e529*/
  if ( !*(this + 0xC) ) /*0x80e525*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x80e534*/
    if ( v3 ) /*0x80e54a*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5)); /*0x80e552*/
    else
      v4 = 0; /*0x80e559*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x80e566*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable /*0x80e58c*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x80e5b5*/
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
      &unk_B46498,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x80e5de*/
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
      &flt_B464A0[2],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x80e607*/
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
      &flt_B464A0[6],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x80e632*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x80e65d*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x80e686*/
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
      &flt_B464A0[0x42],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x80e6af*/
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
      flt_B46638,
      0);                                       // Fog constant-map decode: SpeedTree frond vertex map declares FogParam | ShadowVolumeFatness at vs c14 from shared B46638.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x80e6d8*/
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
      &flt_B46638[4],
      0);                                       // Fog constant-map decode: SpeedTree frond vertex map declares FogColor | ShadowVolumeExtrudeDistance at vs c15 from shared B46648.
    if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x80e6da*/
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _BYTE *, _DWORD))(*v2)->__vftable /*0x80e70a*/
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
        &OB_RendererGlobalState_010201A0[0xF],
        0);
    OB_SpeedTreeShader_RegisterTreeAndWindConstants_010201A0(*v2, 0x11); /*0x80e711*/
  }
}

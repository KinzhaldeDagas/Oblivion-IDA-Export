// Pass230: SpeedTree leaf vertex map uses shared FogParam/ShadowVolumeFatness 0x00B46638 and FogColor/ShadowVolumeExtrudeDistance 0x00B46648.
void __thiscall sub_7F07D0(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax

  v2 = (Ni2DBuffer **)(this + 0xC); /*0x7f07f9*/
  if ( !*(this + 0xC) ) /*0x7f07f5*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7f0804*/
    if ( v3 ) /*0x7f081a*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5)); /*0x7f0822*/
    else
      v4 = 0; /*0x7f0829*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x7f0836*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable /*0x7f085c*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7f0885*/
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
      &OB_ShaderConstantStorage_010201A0[0x1A1],
      0);                                       // Leaf VS c5 AmbientColor comes from shared constant bank B46498; a zero ambient term contributes no texture RGB.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7f08ae*/
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
      &OB_ShaderConstantStorage_010201A0[0x1A5],
      0);                                       // Leaf VS c6 DiffColor comes from shared constant bank B464A8; lit RGB is derived from this plus ambient, not vertex color.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7f08d7*/
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
      &OB_ShaderConstantStorage_010201A0[0x1A9],
      0);                                       // Leaf VS c7 point-light DiffColorPt comes from shared constant bank B464B8 for point-light variants.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7f0900*/
     + 6))(
      *v2,
      "FogParam | ShadowVolumeFatness",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x209],
      0);                                       // Fog constant-map decode: SpeedTree leaf vertex map declares FogParam | ShadowVolumeFatness at vs c8 from shared B46638.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7f0929*/
     + 6))(
      *v2,
      "FogColor | ShadowVolumeExtrudeDistance",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x20D],
      0);                                       // Fog constant-map decode: SpeedTree leaf vertex map declares FogColor | ShadowVolumeExtrudeDistance at vs c9 from shared B46648.
    if ( OB_RendererGlobalState_010201A0[0x1D7] )// Register leaf VS c10 Tree Dimmer only in HDR mode. Non-HDR STLEAF shader omits c10; HDR variants name c10 SunDimmer. /*0x7f092b*/
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _BYTE *, _DWORD))(*v2)->__vftable /*0x7f095b*/
       + 6))(
        *v2,
        "Tree Dimmer",
        0x10000004,
        0,
        0xA,
        1,
        EmptyString,
        4,
        4,
        &OB_RendererGlobalState_010201A0[0xF],
        0);                                     // Leaf VS c10 maps to B42EA8 fTreeDimmer. It scales directional diffuse only, not ambient and not sampled alpha.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7f0984*/
     + 6))(
      *v2,
      "grouped constants",
      0x10000009,
      0,
      0xB,
      6,
      EmptyString,
      0x60,
      4,
      &OB_ShaderConstantStorage_010201A0[0x249],
      0);                                       // Registers c11..c16: object-space light vector/position, billboard axes, rock and rustle parameters. c11 drives N.L; there is no per-vertex color stream.
    OB_SpeedTreeShader_RegisterTreeAndWindConstants_010201A0((int)*v2, 0x11); /*0x7f098b*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7f09bc*/
     + 6))(
      *v2,
      "leaf data",
      0x10000009,
      0,
      0x22,
      0x30,
      EmptyString,
      0x300,
      4,
      this + 0x1F,
      0);
  }
}

// Load Oblivion Lighting30 pixel shaders. SM3023 is lighting\3x\SM3SimpleShadow.p.hlsl compiled with SOFTSHADOW=4 and DEPTHBIAS=-2. Stock SM3023 consumes s0 BaseMap, s2 ShadowMap, c5 ToggleADTS, c9 LightColor, c10 LightData. It computes projected UV=(0.5*v2.xy/v2.w+0.5) with Y flipped, receiverDepth=v2.z/c10.w, and d=saturate(2*length(v1.xyz-c10.xyz)/c10.w). It makes 17 bilinear R32F shadow fetches (center plus 16 offsets), explicitly saturates coordinates, and manually classifies each as lit when receiverDepth < sampledDepth + 1/256. Visibility V=saturate(sum(lit)/15), intentionally normalizing 17 comparisons by 15. Shadow amount A=c9.w*(1-V). Pixel RGB is 1-(1-fog)*(1-d*d)*0.6*A*c9.rgb; output alpha is min((c5.w>0 ? BaseMap.a : 1), A). With the SimpleShadow DESTCOLOR/ZERO pass blend, framebuffer RGB is multiplied by this pixel RGB. c7 is unused.
void __thiscall Lighting30Shader__LoadPixelShaders(void *this)
{
  const char *PixelShaderTargetName; // eax
  __int16 v2; // cx
  char *v3; // ebp
  char v4; // dl
  __int16 **v5; // edi
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // edi
  NiD3DShaderProgram *PixelShader; // eax
  volatile LONG *v10; // ebp
  NiD3DShaderProgram *v11; // eax
  volatile LONG *v12; // edi
  NiD3DShaderProgram *v13; // ebp
  int v14; // [esp-8h] [ebp-DE4h]
  int v15; // [esp-4h] [ebp-DE0h]
  NiD3DShaderProgram *v16; // [esp+10h] [ebp-DCCh]
  __int16 **i; // [esp+18h] [ebp-DC4h]
  __int16 v18; // [esp+1Ch] [ebp-DC0h] BYREF
  char v19; // [esp+1Eh] [ebp-DBEh]
  __int16 v20; // [esp+20h] [ebp-DBCh] BYREF
  char v21; // [esp+22h] [ebp-DBAh]
  __int16 v22; // [esp+24h] [ebp-DB8h] BYREF
  char v23; // [esp+26h] [ebp-DB6h]
  __int16 v24; // [esp+28h] [ebp-DB4h] BYREF
  char v25; // [esp+2Ah] [ebp-DB2h]
  __int16 v26; // [esp+2Ch] [ebp-DB0h] BYREF
  char v27; // [esp+2Eh] [ebp-DAEh]
  __int16 v28; // [esp+30h] [ebp-DACh] BYREF
  char v29; // [esp+32h] [ebp-DAAh]
  __int16 v30; // [esp+34h] [ebp-DA8h] BYREF
  char v31; // [esp+36h] [ebp-DA6h]
  char *Str1; // [esp+38h] [ebp-DA4h]
  const char *v33; // [esp+3Ch] [ebp-DA0h]
  const char *v34; // [esp+40h] [ebp-D9Ch]
  _DWORD v35[739]; // [esp+44h] [ebp-D98h] BYREF
  char v36[260]; // [esp+BD0h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+CD4h] [ebp-108h] BYREF

  v33 = "lighting\\3x\\SM3Lighting.p.hlsl";     // DeferredRendering overbright fidelity: SM3Lighting output alpha is material alpha (BaseMap.a * MatAlpha.x in decoded bytecode). Replacement resolve preserves native backbuffer alpha blending; invented luminance clamps remain removed. /*0x7fde10*/
  v34 = "MAXLIGHTS"; /*0x7fde14*/
  v35[0] = "9"; /*0x7fde18*/
  memset(&v35[1], 0, 0x40); /*0x7fde20*/
  v35[0x11] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fde39*/
  v35[0x12] = "MAXLIGHTS"; /*0x7fde40*/
  v35[0x13] = "8"; /*0x7fde47*/
  v35[0x14] = "SPECULAR";                       // DeferredRendering near-wall fix: specular-family Lighting30 pixel routes bind EyePosition c1. Plugin copies c1 to scratch c222 for these material routes so G-buffer position is camera-relative only when the native eye constant is valid. /*0x7fde4e*/
  memset(&v35[0x15], 0, 0x3C); /*0x7fde59*/
  v35[0x24] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fde77*/
  v35[0x25] = "MAXLIGHTS"; /*0x7fde7e*/
  v35[0x26] = "8"; /*0x7fde85*/
  v35[0x27] = "HAIR";                           // DeferredRendering hair material contract: B46ED8[2] = SM3002 HAIR, MAXLIGHTS 8, LayerMap s5 + HairTint c2 + MatAlpha c3. Implemented as hair G-buffer albedo tint/layer capture. /*0x7fde8c*/
  v35[0x28] = "1"; /*0x7fde97*/
  memset(&v35[0x29], 0, 0x38); /*0x7fdea2*/
  v35[0x37] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fdeb9*/
  v35[0x38] = "MAXLIGHTS"; /*0x7fdec0*/
  v35[0x39] = "7"; /*0x7fdec7*/
  v35[0x3A] = "HAIR";                           // DeferredRendering hair fidelity: B46ED8[3] = SM3003 HAIR+SPECULAR with AnisoMap s4 plus LayerMap s5/HairTint c2. Not an exact deferred replacement in the current four-MRT payload; material indices 3/13 are forward-native. /*0x7fded2*/
  v35[0x3B] = "1"; /*0x7fdedd*/
  v35[0x3C] = "SPECULAR"; /*0x7fdee8*/
  memset(&v35[0x3D], 0, 0x34); /*0x7fdef3*/
  v35[0x4C] = "8"; /*0x7fdf08*/
  v35[0x4A] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fdf1d*/
  v35[0x4B] = "MAXLIGHTS"; /*0x7fdf24*/
  v35[0x4D] = "PARALLAX";                       // DeferredRendering material edge: B46ED8[4..5] PARALLAX variants. Forward-native until parallax depth/UV behavior is represented. /*0x7fdf2b*/
  v35[0x4E] = EmptyString; /*0x7fdf36*/
  memset(&v35[0x4F], 0, 0x38); /*0x7fdf3d*/
  v35[0x5D] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fdf54*/
  v35[0x5E] = "MAXLIGHTS"; /*0x7fdf5b*/
  v35[0x5F] = "8"; /*0x7fdf62*/
  v35[0x60] = "PARALLAX"; /*0x7fdf6d*/
  v35[0x61] = EmptyString; /*0x7fdf78*/
  v35[0x62] = "SPECULAR"; /*0x7fdf7f*/
  memset(&v35[0x63], 0, 0x34); /*0x7fdf8a*/
  v35[0x70] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fdfa0*/
  v35[0x71] = "MAXLIGHTS"; /*0x7fdfa7*/
  v35[0x72] = "8"; /*0x7fdfb9*/
  v35[0x73] = "FACEGENBLEND";                   // DeferredRendering material edge: B46ED8[6..7] FACEGENBLEND variants. Forward-native until blend payload is represented. /*0x7fdfc4*/
  v35[0x74] = EmptyString; /*0x7fdfcf*/
  memset(&v35[0x75], 0, 0x38); /*0x7fdfd6*/
  v35[0x83] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fdfed*/
  v35[0x84] = "MAXLIGHTS"; /*0x7fdff4*/
  v35[0x85] = "8"; /*0x7fdffb*/
  v35[0x86] = "FACEGENBLEND"; /*0x7fe006*/
  v35[0x87] = EmptyString; /*0x7fe011*/
  v35[0x88] = "SPECULAR"; /*0x7fe018*/
  memset(&v35[0x89], 0, 0x34); /*0x7fe023*/
  v35[0x96] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe041*/
  v35[0x97] = "MAXLIGHTS"; /*0x7fe048*/
  v35[0x98] = "8"; /*0x7fe04f*/
  v35[0x99] = "GLOW";                           // DeferredRendering material edge: B46ED8[8..9] GLOW variants. Forward-native until glow/emissive payload is represented. /*0x7fe05a*/
  v35[0x9A] = EmptyString; /*0x7fe065*/
  memset(&v35[0x9B], 0, 0x38); /*0x7fe06c*/
  v35[0xA9] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe083*/
  v35[0xAA] = "MAXLIGHTS"; /*0x7fe08a*/
  v35[0xAB] = "8"; /*0x7fe091*/
  v35[0xAC] = "GLOW"; /*0x7fe09c*/
  v35[0xAD] = EmptyString; /*0x7fe0a7*/
  v35[0xAE] = "SPECULAR"; /*0x7fe0ae*/
  memset(&v35[0xAF], 0, 0x34); /*0x7fe0b9*/
  v35[0xBC] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe0d7*/
  v35[0xBD] = "MAXLIGHTS"; /*0x7fe0de*/
  v35[0xBE] = "8"; /*0x7fe0e5*/
  v35[0xBF] = "PROJSHADOW";                     // DeferredRendering projection contract: B46ED8[10] is SM3Lighting.p.hlsl + PROJSHADOW. Deferred path supports this plain projected material by sampling ShadowMap s2 / ShadowMask s3 in the G-buffer shader. /*0x7fe0f0*/
  v35[0xC0] = EmptyString; /*0x7fe0fb*/
  memset(&v35[0xC1], 0, 0x38); /*0x7fe102*/
  v35[0xCF] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe119*/
  v35[0xD0] = "MAXLIGHTS"; /*0x7fe120*/
  v35[0xD1] = "8"; /*0x7fe127*/
  v35[0xD2] = "SPECULAR";                       // DeferredRendering projected white/hair fix: projected low-light routes are the active runtime replacements; directional diffuse must use the native normalized direction contract before projected shadow modulation. /*0x7fe132*/
  v35[0xD3] = 0; /*0x7fe13d*/
  v35[0xD4] = "PROJSHADOW";                     // DeferredRendering projection contract: B46ED8[11] is SPECULAR + PROJSHADOW. Deferred path supports it with projected-shadow G-buffer plus normal-alpha specular mask and EyePosition c1 in resolve. /*0x7fe144*/
  v35[0xD5] = EmptyString; /*0x7fe14f*/
  memset(&v35[0xD6], 0, 0x30); /*0x7fe156*/
  v35[0xE2] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe167*/
  v35[0xE3] = "MAXLIGHTS"; /*0x7fe16e*/
  v35[0xE4] = "8"; /*0x7fe175*/
  v35[0xE5] = "HAIR";                           // DeferredRendering projected hair contract: B46ED8[12] = SM3012 HAIR+PROJSHADOW, ShadowMap s2/ShadowMask s3 plus LayerMap s5/HairTint c2. Implemented as projected hair G-buffer route. /*0x7fe180*/
  v35[0xE6] = "1"; /*0x7fe18b*/
  v35[0xE7] = "PROJSHADOW"; /*0x7fe196*/
  v35[0xE8] = EmptyString; /*0x7fe1a1*/
  memset(&v35[0xE9], 0, 0x30); /*0x7fe1a8*/
  v35[0xFC] = "PROJSHADOW"; /*0x7fe1c6*/
  v35[0x10D] = "PROJSHADOW"; /*0x7fe1cd*/
  v35[0xF5] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe1dd*/
  v35[0xF6] = "MAXLIGHTS"; /*0x7fe1e4*/
  v35[0xF7] = "7"; /*0x7fe1eb*/
  v35[0xF8] = "HAIR";                           // DeferredRendering projected hair specular contract: B46ED8[13] = SM3013 HAIR+SPECULAR+PROJSHADOW. Deferred route preserves tint/layer/shadow inputs; native AnisoMap specular remains the known fidelity limit. /*0x7fe1f6*/
  v35[0xF9] = "1"; /*0x7fe201*/
  v35[0xFA] = "SPECULAR"; /*0x7fe20c*/
  v35[0xFB] = 0; /*0x7fe217*/
  v35[0xFD] = EmptyString; /*0x7fe21e*/
  memset(&v35[0xFE], 0, 0x28); /*0x7fe225*/
  v35[0x108] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe26b*/
  v35[0x109] = "MAXLIGHTS"; /*0x7fe272*/
  v35[0x10A] = "8"; /*0x7fe279*/
  v35[0x10B] = "PARALLAX";                      // DeferredRendering projected parallax boundary: material index 14 remains a primary Lighting30 wrapper table entry with PARALLAX. Active shaderpackage019 SM3014/SM3LL014 bytecode confirms EyePosition c1, one-step BaseMap.a parallax UV, ShadowMap s2/ShadowMask s3, MatAlpha.x output, and 15/4 light caps. Current deferred route supports only this non-specular projected parallax payload. /*0x7fe284*/
  v35[0x10C] = EmptyString; /*0x7fe28f*/
  v35[0x10E] = EmptyString; /*0x7fe296*/
  memset(&v35[0x10F], 0, 0x30); /*0x7fe29d*/
  v35[0x11D] = "8"; /*0x7fe2b2*/
  v35[0x130] = "8"; /*0x7fe2b9*/
  v35[0x11B] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe2ce*/
  v35[0x11C] = "MAXLIGHTS"; /*0x7fe2d5*/
  v35[0x11E] = "PARALLAX"; /*0x7fe2dc*/
  v35[0x11F] = EmptyString; /*0x7fe2e7*/
  v35[0x120] = "SPECULAR";                      // DeferredRendering projected parallax boundary: material index 15 adds SPECULAR to the projected parallax family. Keep forward-native until the specular mask/output contract is encoded from active Oblivion bytecode/source; do not approximate from naming alone. /*0x7fe2ee*/
  v35[0x121] = 0; /*0x7fe2f9*/
  v35[0x122] = "PROJSHADOW"; /*0x7fe300*/
  v35[0x123] = EmptyString; /*0x7fe307*/
  memset(&v35[0x124], 0, 0x28); /*0x7fe30e*/
  v35[0x12E] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe354*/
  v35[0x12F] = "MAXLIGHTS"; /*0x7fe35b*/
  v35[0x131] = "FACEGENBLEND"; /*0x7fe362*/
  v35[0x132] = EmptyString; /*0x7fe36d*/
  v35[0x133] = "PROJSHADOW"; /*0x7fe374*/
  v35[0x134] = EmptyString; /*0x7fe37b*/
  memset(&v35[0x135], 0, 0x30); /*0x7fe382*/
  v35[0x141] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe393*/
  v35[0x142] = "MAXLIGHTS"; /*0x7fe39a*/
  v35[0x143] = "8"; /*0x7fe3a1*/
  v35[0x144] = "FACEGENBLEND"; /*0x7fe3a8*/
  v35[0x145] = EmptyString; /*0x7fe3b3*/
  v35[0x146] = "SPECULAR"; /*0x7fe3ba*/
  v35[0x147] = 0; /*0x7fe3c5*/
  v35[0x148] = "PROJSHADOW"; /*0x7fe41d*/
  v35[0x149] = EmptyString; /*0x7fe424*/
  memset(&v35[0x14A], 0, 0x28); /*0x7fe42b*/
  v35[0x154] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe432*/
  v35[0x155] = "MAXLIGHTS"; /*0x7fe439*/
  v35[0x156] = "8"; /*0x7fe440*/
  v35[0x157] = "GLOW"; /*0x7fe447*/
  v35[0x158] = EmptyString; /*0x7fe452*/
  v35[0x159] = "PROJSHADOW"; /*0x7fe459*/
  v35[0x15A] = EmptyString; /*0x7fe460*/
  memset(&v35[0x15B], 0, 0x30); /*0x7fe467*/
  v35[0x167] = "lighting\\3x\\SM3Lighting.p.hlsl"; /*0x7fe477*/
  v35[0x168] = "MAXLIGHTS"; /*0x7fe47e*/
  v35[0x169] = "8"; /*0x7fe498*/
  v35[0x16A] = "GLOW"; /*0x7fe49f*/
  v35[0x16B] = EmptyString; /*0x7fe4aa*/
  v35[0x16C] = "SPECULAR"; /*0x7fe4b1*/
  v35[0x16D] = 0; /*0x7fe4bc*/
  v35[0x16E] = "PROJSHADOW"; /*0x7fe4c3*/
  v35[0x16F] = EmptyString; /*0x7fe4ce*/
  memset(&v35[0x170], 0, 0x28); /*0x7fe4d5*/
  v35[0x17A] = "lighting\\2x\\p\\EnvMap.p.hlsl";// DeferredRendering: EnvMap normal pixel family start. B46ED8[20..22] remains forward-native until a dedicated cube-reflection deferred contract exists. /*0x7fe51b*/
  v35[0x17B] = "SM3"; /*0x7fe526*/
  v35[0x17C] = EmptyString; /*0x7fe52d*/
  memset(&v35[0x17D], 0, 0x40); /*0x7fe534*/
  v35[0x18D] = "lighting\\2x\\p\\EnvMap.p.hlsl"; /*0x7fe54b*/
  v35[0x18E] = "SM3"; /*0x7fe556*/
  v35[0x18F] = EmptyString; /*0x7fe55d*/
  v35[0x190] = "WINDOW"; /*0x7fe564*/
  memset(&v35[0x191], 0, 0x3C); /*0x7fe56f*/
  v35[0x1A0] = "lighting\\2x\\p\\EnvMap.p.hlsl"; /*0x7fe590*/
  v35[0x1A1] = "SM3"; /*0x7fe59b*/
  v35[0x1A2] = EmptyString; /*0x7fe5a2*/
  v35[0x1A3] = &off_A90BE8; /*0x7fe5a9*/
  memset(&v35[0x1A4], 0, 0x3C); /*0x7fe5b4*/
  v35[0x1B3] = "lighting\\3x\\SM3SimpleShadow.p.hlsl";// Load stock Oblivion SM3023. Linked SimpleShadow varyings: TEXCOORD0 base UV, TEXCOORD6 object/skinned position, TEXCOORD1 projected shadow coordinate, TEXCOORD2.w fog amount. Pixel ABI remains s0/s2 and c5/c9/c10; c7 is unused. /*0x7fe5c7*/
  v35[0x1B4] = "SOFTSHADOW";                    // SM3023 compile macro SOFTSHADOW=4. /*0x7fe5dd*/
  v35[0x1B5] = "4"; /*0x7fe5e8*/
  v35[0x1B6] = "DEPTHBIAS";                     // SM3023 compile macro DEPTHBIAS=-2. /*0x7fe5f3*/
  v35[0x1B7] = "-2"; /*0x7fe5fe*/
  memset(&v35[0x1B8], 0, 0x38); /*0x7fe609*/
  v35[0x1C6] = "lighting\\2x\\p\\Decal.p.hlsl"; // DeferredRendering: Decal pixel family start. B46ED8[24..25] uses projected decal inputs/layers; forward-native only for primary deferred replacement. /*0x7fe620*/
  v35[0x1C7] = "SM3"; /*0x7fe62b*/
  v35[0x1C8] = 0; /*0x7fe632*/
  v35[0x1C9] = "MAXDECALS"; /*0x7fe639*/
  v35[0x1CA] = "8"; /*0x7fe644*/
  memset(&v35[0x1CB], 0, 0x38); /*0x7fe64b*/
  v35[0x1D9] = "lighting\\2x\\p\\Decal.p.hlsl"; /*0x7fe662*/
  v35[0x1DA] = "SM3"; /*0x7fe66d*/
  v35[0x1DB] = 0; /*0x7fe674*/
  v35[0x1DC] = "MAXDECALS"; /*0x7fe67b*/
  v35[0x1DD] = "8"; /*0x7fe686*/
  v35[0x1DE] = "ALPHA"; /*0x7fe68d*/
  memset(&v35[0x1DF], 0, 0x34); /*0x7fe698*/
  v35[0x1EC] = "lighting\\3x\\SM3DepthMap.p.hlsl";// DeferredRendering support contract: B46ED8[26] DepthMap pixel wrapper writes depth-like support output; not a final-color lighting material. /*0x7fe6bb*/
  memset(&v35[0x1ED], 0, 0x48); /*0x7fe6c2*/
  v35[0x1FF] = "lighting\\3x\\SM3DepthMap.p.hlsl"; /*0x7fe6d9*/
  memset(&v35[0x200], 0, 0x48); /*0x7fe6e0*/
  v35[0x212] = "lighting\\2x\\p\\renderNormals.p.hlsl";// DeferredRendering support contract: B46ED8[28] RenderNormals pixel wrapper writes encoded normal/refraction support output; not a deferred lighting material. /*0x7fe6ff*/
  v35[0x213] = "SM3"; /*0x7fe706*/
  memset(&v35[0x214], 0, 0x44); /*0x7fe70d*/
  v35[0x225] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7fe72b*/
  v35[0x226] = "SM3"; /*0x7fe732*/
  memset(&v35[0x227], 0, 0x44); /*0x7fe739*/
  v35[0x238] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7fe757*/
  v35[0x239] = "SM3"; /*0x7fe75e*/
  v35[0x23A] = 0; /*0x7fe765*/
  v35[0x23B] = "FIRE"; /*0x7fe76c*/
  v35[0x23C] = EmptyString; /*0x7fe777*/
  memset(&v35[0x23D], 0, 0x38); /*0x7fe77e*/
  v35[0x24B] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7fe78a*/
  v35[0x24C] = "SM3"; /*0x7fe79c*/
  v35[0x24D] = 0; /*0x7fe7a3*/
  v35[0x24E] = "CLEAR"; /*0x7fe7aa*/
  v35[0x24F] = EmptyString; /*0x7fe7b5*/
  memset(&v35[0x250], 0, 0x38); /*0x7fe7bc*/
  v35[0x25E] = "lighting\\2x\\p\\renderNormals.p.hlsl"; /*0x7fe7ca*/
  v35[0x25F] = "SM3"; /*0x7fe7df*/
  v35[0x260] = 0; /*0x7fe7e6*/
  v35[0x261] = "CLEAR"; /*0x7fe7ed*/
  v35[0x262] = EmptyString; /*0x7fe7f4*/
  memset(&v35[0x263], 0, 0x38); /*0x7fe7fb*/
  v35[0x271] = "lighting\\2x\\p\\localMap.p.hlsl";// DeferredRendering support contract: B46ED8[33] LocalMap pixel wrapper writes local-map support output; not a deferred lighting material. /*0x7fe812*/
  v35[0x272] = "SM3"; /*0x7fe81d*/
  memset(&v35[0x273], 0, 0x44); /*0x7fe824*/
  v35[0x284] = "lighting\\2x\\p\\localMap.p.hlsl"; /*0x7fe845*/
  v35[0x285] = "SM3"; /*0x7fe850*/
  v35[0x286] = 0; /*0x7fe857*/
  v35[0x287] = "CLEAR"; /*0x7fe85e*/
  memset(&v35[0x288], 0, 0x3C); /*0x7fe865*/
  v35[0x297] = "lighting\\1x\\p\\texEffect.p.hlsl";// DeferredRendering: TexEffect pixel family start. B46ED8[35..36] uses alternate shader-slot route; forward-native only until dedicated TexEffect deferred contract. /*0x7fe88d*/
  v35[0x298] = "HQ"; /*0x7fe894*/
  v35[0x299] = EmptyString; /*0x7fe89b*/
  memset(&v35[0x29A], 0, 0x40); /*0x7fe8a2*/
  v35[0x2AA] = "lighting\\1x\\p\\texEffect.p.hlsl"; /*0x7fe8b9*/
  v35[0x2AB] = "HQ"; /*0x7fe8c0*/
  v35[0x2AC] = EmptyString; /*0x7fe8c7*/
  memset(&v35[0x2AD], 0, 0x40); /*0x7fe8ce*/
  v35[0x2BD] = "lighting\\3x\\SM3ZOnly.p.hlsl"; // DeferredRendering support contract: B46ED8[37] ZOnly pixel wrapper writes zero color for depth/occlusion support; native-owned. /*0x7fe8ea*/
  memset(&v35[0x2BE], 0, 0x48); /*0x7fe8f1*/
  v35[0x2D0] = "lighting\\3x\\SM3ZOnly.p.hlsl"; /*0x7fe908*/
  memset(&v35[0x2D1], 0, 0x48); /*0x7fe90f*/
  PixelShaderTargetName = BSShaderManager_GetPixelShaderTargetName(0); /*0x7fe91c*/
  v2 = a15; /*0x7fe92b*/
  v3 = (char *)PixelShaderTargetName; /*0x7fe932*/
  LOBYTE(PixelShaderTargetName) = byte_A93282; /*0x7fe934*/
  v30 = word_A93280; /*0x7fe939*/
  v4 = byte_A900F2; /*0x7fe93e*/
  v31 = (char)PixelShaderTargetName; /*0x7fe944*/
  LOWORD(PixelShaderTargetName) = word_A9327C; /*0x7fe948*/
  v26 = v2; /*0x7fe94e*/
  LOBYTE(v2) = byte_A9327E; /*0x7fe953*/
  v5 = (__int16 **)v35; /*0x7fe959*/
  Str1 = v3; /*0x7fe95d*/
  v27 = v4; /*0x7fe961*/
  v22 = (__int16)PixelShaderTargetName; /*0x7fe965*/
  v23 = v2; /*0x7fe96a*/
  v20 = 0x38; /*0x7fe96e*/
  v21 = 0; /*0x7fe975*/
  v24 = 0x37; /*0x7fe979*/
  v25 = 0; /*0x7fe980*/
  v18 = 0x34; /*0x7fe984*/
  v19 = 0; /*0x7fe98b*/
  v28 = 0x32; /*0x7fe98f*/
  v29 = 0; /*0x7fe996*/
  v6 = 0; /*0x7fe99a*/
  for ( i = (__int16 **)v35; ; v5 = i ) /*0x7fe99c*/
  {
    sub_801030((char *)v5[0xFFFFFFFE], (int)FileName); /*0x7fe9b6*/
    _sprintf(v36, "SM3%03i.pso", v6); /*0x7fe9c9*/
    v7 = sub_404F00(0); /*0x7fe9cf*/
    if ( v7 == 7 ) /*0x7fe9da*/
    {
      if ( v6 < 0x14 ) /*0x7fe9e3*/
        *v5 = &v30; /*0x7fe9e9*/
      if ( v6 == 2 || v6 == 3 || v6 == 0xC || v6 == 0xD )// DeferredRendering hair fidelity gate: Oblivion hair-specular variants require additional native AnisoMap/view-light payload. Four-MRT deferred replacement must not claim material indices 3/13 as exact until that semantic is encoded. /*0x7fe9fd*/
        v5[2] = &v28; /*0x7fea03*/
      if ( !v6 || v6 == 2 || v6 == 4 || v6 == 8 || v6 == 0xC || v6 == 0xE || v6 == 0x12 ) /*0x7fea26*/
      {
        *v5 = &v26; /*0x7fea72*/
      }
      else
      {
        if ( v6 == 1 || v6 == 5 || v6 == 6 || v6 == 9 || v6 == 0xB || v6 == 0xF || v6 == 0x10 ) /*0x7fea49*/
        {
          v15 = 1; /*0x7fea63*/
          *v5 = &v22; /*0x7fea65*/
          v14 = 2; /*0x7fea67*/
          goto LABEL_51; /*0x7fea69*/
        }
        if ( v6 < 0x14 ) /*0x7fea4e*/
        {
          v15 = 1; /*0x7fea54*/
          *v5 = &v20; /*0x7fea56*/
          v14 = 2; /*0x7fea58*/
          goto LABEL_51; /*0x7fea5a*/
        }
      }
      v15 = 1; /*0x7fea74*/
      v14 = 2; /*0x7fea76*/
LABEL_51:
      v8 = v5 + 0xFFFFFFFF; /*0x7feb10*/
      PixelShader = CreatePixelShader(FileName, v8, v3, v36, v14, v15); /*0x7feb29*/
      v10 = *(volatile LONG **)(4 * v6 + 0xB46ED8); /*0x7feb2e*/
      v16 = PixelShader; /*0x7feb37*/
      if ( v10 == (volatile LONG *)PixelShader ) /*0x7feb3b*/
        goto LABEL_58; /*0x7feb3b*/
      if ( v10 ) /*0x7feb3f*/
      {
LABEL_53:
        if ( !InterlockedDecrement(v10 + 1) ) /*0x7feb45*/
          (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x7feb5c*/
        PixelShader = v16; /*0x7feb5e*/
      }
LABEL_56:
      *(_DWORD *)(4 * v6 + 0xB46ED8) = PixelShader; /*0x7feb62*/
      if ( PixelShader ) /*0x7feb6b*/
        InterlockedIncrement((volatile LONG *)PixelShader + 1); /*0x7feb71*/
      goto LABEL_58; /*0x7feb71*/
    }
    if ( v7 != 5 ) /*0x7fea80*/
    {
      v15 = 0; /*0x7feb0e*/
      v14 = 0; /*0x7feb0f*/
      goto LABEL_51; /*0x7feb0f*/
    }
    if ( !v6 /*0x7feacd*/
      || v6 == 4
      || v6 == 5
      || v6 == 8
      || v6 == 0xB
      || v6 == 0xE
      || v6 == 0xF
      || v6 == 0x10
      || v6 == 0x11
      || v6 == 9
      || v6 == 0xC
      || v6 == 0x12
      || v6 == 19
      || v6 == 6
      || v6 == 7 )
    {
      *v5 = &v24; /*0x7fead3*/
    }
    v8 = v5 + 0xFFFFFFFF; /*0x7feae4*/
    PixelShader = CreatePixelShader(FileName, v8, v3, v36, 0, 0); /*0x7feaf0*/
    v10 = *(volatile LONG **)(4 * v6 + 0xB46ED8); /*0x7feaf5*/
    v16 = PixelShader; /*0x7feafe*/
    if ( v10 != (volatile LONG *)PixelShader ) /*0x7feb02*/
    {
      if ( v10 ) /*0x7feb06*/
        goto LABEL_53; /*0x7feb06*/
      goto LABEL_56; /*0x7feb06*/
    }
LABEL_58:
    if ( v6 < 0x14 ) /*0x7feb7a*/
    {
      _sprintf(v36, "SM3LL%03i.pso", v6);       // DeferredRendering low-light fidelity pass: SM3LL%03i wrappers remain exact-index gated. Supported deferred replacement is restricted to decoded payloads; hair-specular stays forward-native until native AnisoMap s4/specular semantics are carried. /*0x7feb8e*/
      *i = &v18; /*0x7feba0*/
      v11 = CreatePixelShader(FileName, v8, Str1, v36, 0, 0); /*0x7febbc*/
      v12 = *(volatile LONG **)(4 * v6 + 0xB46C20);// DeferredRendering: reads existing B46C20[index] before replacing low-light wrapper; table is not an auxiliary family and must stay exact-index gated. /*0x7febc1*/
      v13 = v11; /*0x7febc8*/
      if ( v12 != (volatile LONG *)v11 ) /*0x7febcc*/
      {
        if ( v12 ) /*0x7febd0*/
        {
          if ( !InterlockedDecrement(v12 + 1) ) /*0x7febd6*/
            (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1); /*0x7febec*/
        }
        *(_DWORD *)(4 * v6 + 0xB46C20) = v13; /*0x7febf0*/
        if ( v13 ) /*0x7febf7*/
          InterlockedIncrement((volatile LONG *)v13 + 1); /*0x7febfd*/
      }
    }
    i += 0x13; /*0x7fec03*/
    if ( ++v6 >= 0x27 ) /*0x7fec0e*/
      break; /*0x7fec0e*/
    v3 = Str1; /*0x7fe9a2*/
  }
}

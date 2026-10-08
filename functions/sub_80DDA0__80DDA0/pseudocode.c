//
//
// [2026-10-03 lighting audit] Verified this is Frond vtable+34 transform stage: c8 directional block at shader+A8 from shared light-data slot0; c9 point block at shader+98 from shared position slot0. Native leaf light helper uses position slot1 for its optional local light. Candidate mismatch for frond point lighting: after sun+local pass association, confirm STFROND PT shader c9/c10 consumers before changing these source bindings. Constant map 0x80E500 currently binds LightRadius c10 to shared light-data slot0. This is unresolved, not an accepted correction.
//
// [2026-10-03 bytecode follow-up] PT bytecode confirmation closes the consumer uncertainty above: installed STFROND002/003 use c9 for point position and c10.x for radius. Native transform still sources position slot0 and map sources radius slot0, but restored pass local light is slot1. Full corrective shader path remains pending; do not treat current texture-only output as lighting acceptance.
//
// [2026-10-03 implemented correction] Plugin verifies and changes only this frond transform's FLD operands at 0x80DEEB,0x80DEFC,0x80DF0B from generic position slot0 (B46528/2C/30) to slot1 (B46538/3C/40). Native inverse-transform math remains intact. Vtable+34 (A94470) wrapper calls this 8-stack-argument thiscall routine (ret20), then supplies slot1 radius B465B8 divided by abs(world scale+30). Division is corroborated by Oblivion leaf 0x7F0100 and Fallout leaf UpdatePointLights 0x82214550; invalid radius/scale gets a small positive fallback. This is a plugin correction, not a claim that retail code already uses slot1.
//
// [2026-10-03 per-node guide fading] Plugin wrapper now fills redirected c10.yzw from the generated shape registry's last runtime-node-sync LOD, not a shared model's current tree LOD at draw time. c10.x remains object-space point radius. Missing/unvalidated scene metadata disables guide fading with a defined distance1. Embedded VS computes lerp(.33,1,saturate((nodeLOD-hint)/distance)); legacy PS receives factor through COLOR0 alpha, modern PS through TEXCOORD3.x. Both modulate only sampled alpha; fog/lighting remain independent.
//
// [2026-10-03 material scalar update] After native transform and point-radius update, plugin copies world ambient/sun/local constants into private c5/c6/c7 storage and applies immutable per-shape asset factors. This uses the same transform-before-constant-map-upload stage as native c8/c9 and prior redirected c10. No new shader register or bytecode changes were needed. Missing tracking uses identity factors; malformed retained scalars reject new shape registration. Actual game ordering/appearance still requires acceptance.
int __thiscall OB_SpeedTreeFrondShader_SetupTransformations_010201A0(
        char **this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float *a8,
        int a9)
{
  float v11; // edx
  float v12; // eax
  double v13; // st7
  double v14; // st7
  float v16; // [esp+30h] [ebp-BCh]
  float v17; // [esp+34h] [ebp-B8h]
  float v18; // [esp+3Ch] [ebp-B0h] BYREF
  float v19; // [esp+40h] [ebp-ACh]
  float v20; // [esp+44h] [ebp-A8h]
  float v21[3]; // [esp+48h] [ebp-A4h] BYREF
  float v22[3]; // [esp+54h] [ebp-98h] BYREF
  float v23[16]; // [esp+60h] [ebp-8Ch] BYREF
  _BYTE v24[12]; // [esp+A0h] [ebp-4Ch] BYREF
  _BYTE v25[64]; // [esp+ACh] [ebp-40h] BYREF

  NiDX9Renderer_SetModelTransform((NiDX9Renderer *)*(this + 5), a8, 0); /*0x80ddb7*/
  v23[0] = a8[0xC] * *a8; /*0x80ddc8*/
  v23[1] = a8[3] * a8[0xC]; /*0x80ddda*/
  v23[2] = a8[6] * a8[0xC]; /*0x80dde4*/
  v23[4] = a8[1] * a8[0xC]; /*0x80ddee*/
  v23[5] = a8[4] * a8[0xC]; /*0x80ddf8*/
  v23[6] = a8[7] * a8[0xC]; /*0x80de02*/
  v23[8] = a8[2] * a8[0xC]; /*0x80de0c*/
  v23[9] = a8[5] * a8[0xC]; /*0x80de16*/
  v23[0xA] = a8[8] * a8[0xC]; /*0x80de20*/
  v23[0xC] = a8[9]; /*0x80de27*/
  v23[0xD] = a8[0xA]; /*0x80de2e*/
  v23[0xE] = a8[0xB]; /*0x80de35*/
  v23[3] = 0.0; /*0x80de3e*/
  v23[7] = 0.0; /*0x80de42*/
  v23[0xB] = 0.0; /*0x80de46*/
  v23[0xF] = 1.0; /*0x80de4c*/
  D3DXMatrixInverse_0((int)v25, 0, (int)v23); /*0x80de53*/
  v18 = -flt_B464A0[0x42]; /*0x80de67*/
  v19 = -flt_B464A0[0x43]; /*0x80de79*/
  v20 = -flt_B464A0[0x44]; /*0x80de8d*/
  D3DXVec3TransformNormal_0((int)v24, (int)&v18, (int)v25); /*0x80de91*/
  D3DXVec3Normalize_0((int)&v18, (int)v24); /*0x80dea0*/
  v11 = v19; /*0x80dec7*/
  v12 = v20; /*0x80decb*/
  *((float *)this + 0x2A) = v18; /*0x80decf*/
  *((float *)this + 0x2B) = v11; /*0x80ded9*/
  *((float *)this + 0x2C) = v12; /*0x80dedf*/
  *((float *)this + 0x2D) = 0.0; /*0x80dee5*/
  v22[0] = flt_B464A0[0x22]; /*0x80def1*/
  v22[1] = flt_B464A0[0x23]; /*0x80df07*/
  v22[2] = flt_B464A0[0x24]; /*0x80df16*/
  D3DXVec3TransformCoord_0((int)v21, (int)v22, (int)v25); /*0x80df1b*/
  v13 = v21[1]; /*0x80df2c*/
  *(this + 0x26) = (char *)LODWORD(v21[0]); /*0x80df30*/
  v16 = v13; /*0x80df36*/
  v14 = v21[2]; /*0x80df3e*/
  *((float *)this + 0x27) = v16; /*0x80df42*/
  v17 = v14; /*0x80df48*/
  *((float *)this + 0x28) = v17; /*0x80df52*/
  *((float *)this + 0x29) = 1.0; /*0x80df62*/
  return 0; /*0x80df68*/
}

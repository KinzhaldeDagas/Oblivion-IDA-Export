void __userpurge NiDX9Renderer::SetupScreenSpaceCamera(
        NiDX9Renderer *a1@<ecx>,
        NiViewport *a6,
        int a3,
        NiViewport *arg8)
{
  float v5; // edi
  float v6; // ebp
  double v7; // st7
  double v8; // st7
  IDirect3DDevice9 *device; // ecx
  double v10; // st5
  double v11; // st4
  double v12; // st5
  double v13; // st5
  IDirect3DDevice9 *v14; // ecx
  float v15; // [esp+44h] [ebp-2Ch]
  float v16; // [esp+4Ch] [ebp-24h]
  float v17; // [esp+58h] [ebp-18h]
  NiViewport v18; // [esp+60h] [ebp-10h] BYREF
  float retaddr; // [esp+70h] [ebp+0h]

  if ( !a1->member.lostDevice ) /*0x762be6*/
  {
    v5 = COERCE_FLOAT(a1->member.currentRTGroup->vtbl->GetWidth(a1->member.currentRTGroup, 0)); /*0x762c0a*/
    v6 = COERCE_FLOAT(a1->member.currentRTGroup->vtbl->GetHeight(a1->member.currentRTGroup, 0)); /*0x762c15*/
    v7 = (double)SLODWORD(v5); /*0x762c1f*/
    if ( v5 < 0.0 ) /*0x762c23*/
      v7 = v7 + flt_A2FC78; /*0x762c25*/
    v15 = v7; /*0x762c2d*/
    v8 = (double)SLODWORD(v6); /*0x762c37*/
    if ( v6 < 0.0 ) /*0x762c3b*/
      v8 = v8 + flt_A2FC78; /*0x762c3d*/
    v16 = v8; /*0x762c43*/
    device = a1->member.device; /*0x762c4f*/
    a1->member.viewMatrix.m[0][0] = 1.0; /*0x762c55*/
    a1->member.viewMatrix.m[0][1] = 0.0; /*0x762c5c*/
    a1->member.viewMatrix.m[0][2] = 0.0; /*0x762c63*/
    a1->member.viewMatrix.m[0][3] = 0.0; /*0x762c69*/
    a1->member.viewMatrix.m[1][0] = 0.0; /*0x762c6f*/
    v10 = kTerrainLODQuadRayDirectionZ; /*0x762c75*/
    a1->member.viewMatrix.m[1][1] = kTerrainLODQuadRayDirectionZ; /*0x762c7b*/
    a1->member.viewMatrix.m[1][2] = 0.0; /*0x762c83*/
    a1->member.viewMatrix.m[1][3] = 0.0; /*0x762c89*/
    a1->member.viewMatrix.m[2][0] = 0.0; /*0x762c8f*/
    a1->member.viewMatrix.m[2][1] = 0.0; /*0x762c95*/
    a1->member.viewMatrix.m[2][3] = 0.0; /*0x762c9b*/
    a1->member.viewMatrix.m[2][2] = 1.0; /*0x762ca3*/
    a1->member.viewMatrix.m[3][0] = flt_A45E4C; /*0x762caf*/
    v11 = kHeadBodyNormalMatchRadius; /*0x762cb5*/
    a1->member.viewMatrix.m[3][1] = kHeadBodyNormalMatchRadius; /*0x762cbb*/
    a1->member.invViewMatrix.m[3][0] = v11; /*0x762cc1*/
    a1->member.invViewMatrix.m[3][1] = v11; /*0x762cc7*/
    a1->member.viewMatrix.m[3][2] = 1.0; /*0x762ccd*/
    a1->member.viewMatrix.m[3][3] = 1.0; /*0x762cd3*/
    a1->member.invViewMatrix.m[0][0] = 1.0; /*0x762cd9*/
    a1->member.invViewMatrix.m[2][2] = 1.0; /*0x762cdf*/
    a1->member.invViewMatrix.m[3][3] = 1.0; /*0x762ce5*/
    a1->member.invViewMatrix.m[0][1] = 0.0; /*0x762ced*/
    a1->member.invViewMatrix.m[0][2] = 0.0; /*0x762cf3*/
    a1->member.invViewMatrix.m[0][3] = 0.0; /*0x762cf9*/
    a1->member.invViewMatrix.m[1][0] = 0.0; /*0x762cff*/
    a1->member.invViewMatrix.m[1][2] = 0.0; /*0x762d05*/
    a1->member.invViewMatrix.m[1][3] = 0.0; /*0x762d0b*/
    a1->member.invViewMatrix.m[2][0] = 0.0; /*0x762d11*/
    a1->member.invViewMatrix.m[2][1] = 0.0; /*0x762d17*/
    a1->member.invViewMatrix.m[2][3] = 0.0; /*0x762d1d*/
    a1->member.invViewMatrix.m[1][1] = v10; /*0x762d23*/
    a1->member.invViewMatrix.m[3][2] = v10; /*0x762d29*/
    ((void (__thiscall *)(IDirect3DDevice9 *, IDirect3DDevice9 *, int, D3DXMATRIX *))device->lpVtbl->SetTransform)( /*0x762d37*/
      device,
      device,
      2,
      &a1->member.viewMatrix);
    *(float *)&a1->member.pad624[0xB] = 1.0; /*0x762d49*/
    *(float *)&a1->member.pad624[5] = 1.0; /*0x762d53*/
    v17 = kTerrainLODQuadRayDirectionZ; /*0x762d6f*/
    *(float *)&a1->member.pad624[0xC] = 0.0; /*0x762d73*/
    *(float *)&a1->member.pad624[6] = 0.0; /*0x762d79*/
    a1->member.camRight.y = 0.0; /*0x762d87*/
    *(float *)&a1->member.pad624[8] = 0.0; /*0x762d8f*/
    a1->member.NearDepth = 1.0; /*0x762d95*/
    a1->member.camRight.x = 0.0; /*0x762d9b*/
    v12 = flt_A88980; /*0x762da1*/
    *(float *)&a1->member.pad624[7] = 0.0; /*0x762da7*/
    a1->member.DepthRange = v12; /*0x762db1*/
    a1->member.camRight.z = v17; /*0x762db7*/
    *(float *)&a1->member.pad624[9] = v17; /*0x762dbd*/
    a1->member.camUp.x = 0.0; /*0x762dc3*/
    *(float *)&a1->member.pad624[0xA] = 0.0; /*0x762dc9*/
    v13 = fConstant_2; /*0x762dd5*/
    v14 = a1->member.device; /*0x762ddb*/
    a1->member.projMatrix.m[0][0] = fConstant_2; /*0x762de1*/
    a1->member.projMatrix.m[1][0] = 0.0; /*0x762de8*/
    a1->member.projMatrix.m[2][0] = 0.0; /*0x762def*/
    a1->member.projMatrix.m[3][0] = dbl_A3D360 / v15; /*0x762dff*/
    a1->member.projMatrix.m[0][1] = 0.0; /*0x762e05*/
    a1->member.projMatrix.m[2][1] = 0.0; /*0x762e0b*/
    a1->member.projMatrix.m[1][1] = v13; /*0x762e13*/
    a1->member.projMatrix.m[3][1] = 1.0 / v16; /*0x762e21*/
    a1->member.projMatrix.m[0][2] = 0.0; /*0x762e29*/
    a1->member.projMatrix.m[1][2] = 0.0; /*0x762e2f*/
    a1->member.projMatrix.m[2][2] = flt_A8897C; /*0x762e3b*/
    a1->member.projMatrix.m[3][2] = flt_A88978; /*0x762e47*/
    a1->member.projMatrix.m[0][3] = 0.0; /*0x762e4d*/
    a1->member.projMatrix.m[1][3] = 0.0; /*0x762e53*/
    a1->member.projMatrix.m[2][3] = 0.0; /*0x762e59*/
    a1->member.projMatrix.m[3][3] = 1.0; /*0x762e5f*/
    ((void (__thiscall *)(IDirect3DDevice9 *, IDirect3DDevice9 *, int, D3DXMATRIX *))v14->lpVtbl->SetTransform)( /*0x762e6d*/
      v14,
      v14,
      3,
      &a1->member.projMatrix);
    if ( arg8 ) /*0x762e75*/
    {
      LODWORD(v18.l) = (__int64)(arg8->l * v15); /*0x762ea5*/
      LODWORD(v18.r) = (__int64)((1.0 - arg8->t) * v16); /*0x762edc*/
      LODWORD(v18.t) = (__int64)(v15 * (arg8->r - arg8->l)); /*0x762f0b*/
      LODWORD(v18.b) = (__int64)(v16 * (arg8->t - arg8->b)); /*0x762f39*/
    }
    else
    {
      v18.l = 0.0; /*0x762f43*/
      v18.r = 0.0; /*0x762f4b*/
      v18.t = v5; /*0x762f53*/
      v18.b = v6; /*0x762f57*/
    }
    retaddr = 0.0; /*0x762f63*/
    a1->member.device->lpVtbl->SetViewport(a1->member.device, (const D3DVIEWPORT9 *)&v18); /*0x762f7b*/
    ((void (__thiscall *)(_DWORD, _DWORD, _DWORD))a1->member.renderState->vtbl->func_11)( /*0x762f9a*/
      a1->member.renderState,
      1.0,
      flt_A5A04C);
  }
}

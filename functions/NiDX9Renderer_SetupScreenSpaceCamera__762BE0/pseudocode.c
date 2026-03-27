void __userpurge NiDX9Renderer::SetupScreenSpaceCamera(
        NiDX9Renderer *a1@<ecx>,
        NiViewport *a6,
        int a5,
        NiViewport *arg8)
{
  float v7; // edi
  float v8; // ebp
  double v9; // st7
  double v10; // st7
  IDirect3DDevice9 *device; // ecx
  double v12; // st5
  double v13; // st4
  double v14; // st5
  double v15; // st5
  IDirect3DDevice9 *v16; // ecx
  float v17; // [esp+44h] [ebp-2Ch]
  float v18; // [esp+4Ch] [ebp-24h]
  float v19; // [esp+58h] [ebp-18h]
  NiViewport v20; // [esp+60h] [ebp-10h] BYREF
  float retaddr; // [esp+70h] [ebp+0h]

  if ( !a1->member.lostDevice )
  {
    v7 = COERCE_FLOAT(a1->member.currentRTGroup->vtbl->GetWidth(a1->member.currentRTGroup, 0));
    v8 = COERCE_FLOAT(a1->member.currentRTGroup->vtbl->GetHeight(a1->member.currentRTGroup, 0));
    v9 = (double)SLODWORD(v7);
    if ( v7 < 0.0 )
      v9 = v9 + flt_A2FC78;
    v17 = v9;
    v10 = (double)SLODWORD(v8);
    if ( v8 < 0.0 )
      v10 = v10 + flt_A2FC78;
    v18 = v10;
    device = a1->member.device;
    a1->member.viewMatrix.m[0][0] = 1.0;
    a1->member.viewMatrix.m[0][1] = 0.0;
    a1->member.viewMatrix.m[0][2] = 0.0;
    a1->member.viewMatrix.m[0][3] = 0.0;
    a1->member.viewMatrix.m[1][0] = 0.0;
    v12 = flt_A30634;
    a1->member.viewMatrix.m[1][1] = flt_A30634;
    a1->member.viewMatrix.m[1][2] = 0.0;
    a1->member.viewMatrix.m[1][3] = 0.0;
    a1->member.viewMatrix.m[2][0] = 0.0;
    a1->member.viewMatrix.m[2][1] = 0.0;
    a1->member.viewMatrix.m[2][3] = 0.0;
    a1->member.viewMatrix.m[2][2] = 1.0;
    a1->member.viewMatrix.m[3][0] = flt_A45E4C;
    v13 = flt_A3D65C;
    a1->member.viewMatrix.m[3][1] = flt_A3D65C;
    a1->member.invViewMatrix.m[3][0] = v13;
    a1->member.invViewMatrix.m[3][1] = v13;
    a1->member.viewMatrix.m[3][2] = 1.0;
    a1->member.viewMatrix.m[3][3] = 1.0;
    a1->member.invViewMatrix.m[0][0] = 1.0;
    a1->member.invViewMatrix.m[2][2] = 1.0;
    a1->member.invViewMatrix.m[3][3] = 1.0;
    a1->member.invViewMatrix.m[0][1] = 0.0;
    a1->member.invViewMatrix.m[0][2] = 0.0;
    a1->member.invViewMatrix.m[0][3] = 0.0;
    a1->member.invViewMatrix.m[1][0] = 0.0;
    a1->member.invViewMatrix.m[1][2] = 0.0;
    a1->member.invViewMatrix.m[1][3] = 0.0;
    a1->member.invViewMatrix.m[2][0] = 0.0;
    a1->member.invViewMatrix.m[2][1] = 0.0;
    a1->member.invViewMatrix.m[2][3] = 0.0;
    a1->member.invViewMatrix.m[1][1] = v12;
    a1->member.invViewMatrix.m[3][2] = v12;
    ((void (__thiscall *)(IDirect3DDevice9 *, IDirect3DDevice9 *, int, D3DXMATRIX *))device->lpVtbl->SetTransform)(
      device,
      device,
      2,
      &a1->member.viewMatrix);
    *(float *)&a1->member.pad624[0xB] = 1.0;
    *(float *)&a1->member.pad624[5] = 1.0;
    v19 = flt_A30634;
    *(float *)&a1->member.pad624[0xC] = 0.0;
    *(float *)&a1->member.pad624[6] = 0.0;
    a1->member.camRight.y = 0.0;
    *(float *)&a1->member.pad624[8] = 0.0;
    a1->member.NearDepth = 1.0;
    a1->member.camRight.x = 0.0;
    v14 = flt_A88980;
    *(float *)&a1->member.pad624[7] = 0.0;
    a1->member.DepthRange = v14;
    a1->member.camRight.z = v19;
    *(float *)&a1->member.pad624[9] = v19;
    a1->member.camUp.x = 0.0;
    *(float *)&a1->member.pad624[0xA] = 0.0;
    v15 = fConstant_2;
    v16 = a1->member.device;
    a1->member.projMatrix.m[0][0] = fConstant_2;
    a1->member.projMatrix.m[1][0] = 0.0;
    a1->member.projMatrix.m[2][0] = 0.0;
    a1->member.projMatrix.m[3][0] = dbl_A3D360 / v17;
    a1->member.projMatrix.m[0][1] = 0.0;
    a1->member.projMatrix.m[2][1] = 0.0;
    a1->member.projMatrix.m[1][1] = v15;
    a1->member.projMatrix.m[3][1] = 1.0 / v18;
    a1->member.projMatrix.m[0][2] = 0.0;
    a1->member.projMatrix.m[1][2] = 0.0;
    a1->member.projMatrix.m[2][2] = flt_A8897C;
    a1->member.projMatrix.m[3][2] = flt_A88978;
    a1->member.projMatrix.m[0][3] = 0.0;
    a1->member.projMatrix.m[1][3] = 0.0;
    a1->member.projMatrix.m[2][3] = 0.0;
    a1->member.projMatrix.m[3][3] = 1.0;
    ((void (__thiscall *)(IDirect3DDevice9 *, IDirect3DDevice9 *, int, D3DXMATRIX *))v16->lpVtbl->SetTransform)(
      v16,
      v16,
      3,
      &a1->member.projMatrix);
    if ( arg8 )
    {
      LODWORD(v20.l) = (__int64)(arg8->l * v17);
      LODWORD(v20.r) = (__int64)((1.0 - arg8->t) * v18);
      LODWORD(v20.t) = (__int64)(v17 * (arg8->r - arg8->l));
      LODWORD(v20.b) = (__int64)(v18 * (arg8->t - arg8->b));
    }
    else
    {
      v20.l = 0.0;
      v20.r = 0.0;
      v20.t = v7;
      v20.b = v8;
    }
    retaddr = 0.0;
    a1->member.device->lpVtbl->SetViewport(a1->member.device, (const D3DVIEWPORT9 *)&v20);
    ((void (__thiscall *)(_DWORD, _DWORD, _DWORD))a1->member.renderState->vtbl->func_11)(
      a1->member.renderState,
      1.0,
      flt_A5A04C);
  }
}

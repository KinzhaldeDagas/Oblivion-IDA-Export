// NiDX9Renderer camera/viewport setup. Builds and uploads view/projection matrices, then converts the normalized viewport to pixel coordinates from the current render-target dimensions.
void __thiscall NiDX9Renderer_SetCameraAndViewport(
        NiDX9Renderer *self,
        const NiPoint3 *position,
        const NiPoint3 *forward,
        const NiPoint3 *up,
        const NiPoint3 *right,
        const NiFrustum *frustum,
        const NiViewport *viewport)
{
  int v7; // ebx
  int v8; // edi
  float x; // ecx
  float y; // edx
  float z; // eax
  double v13; // st4
  IDirect3DDevice9 *device; // eax
  float *v15; // edi
  double v16; // st7
  bool v17; // zf
  int (*GetLeftHanded)(void); // eax
  char v19; // al
  double v20; // st7
  D3DXMATRIX *p_projMatrix; // ecx
  double v22; // st5
  double v23; // st5
  double v24; // st4
  double v25; // st7
  char v26; // al
  double v27; // st7
  double v28; // st5
  double v29; // st5
  double v30; // st4
  IDirect3DDevice9 *v31; // eax
  double v32; // st7
  double v33; // st7
  _DWORD v34[4]; // [esp+50h] [ebp-10h] BYREF
  float retaddr; // [esp+60h] [ebp+0h]
  float positiona; // [esp+64h] [ebp+4h]
  float positionb; // [esp+64h] [ebp+4h]
  float positionc; // [esp+64h] [ebp+4h]
  float upc; // [esp+6Ch] [ebp+Ch]
  float upa; // [esp+6Ch] [ebp+Ch]
  const NiPoint3 *upd; // [esp+6Ch] [ebp+Ch]
  float upb; // [esp+6Ch] [ebp+Ch]
  float righta; // [esp+70h] [ebp+10h]
  float frustuma; // [esp+74h] [ebp+14h]
  float frustumb; // [esp+74h] [ebp+14h]
  float viewporta; // [esp+78h] [ebp+18h]
  const NiViewport *viewportb; // [esp+78h] [ebp+18h]
  int v48; // [esp+7Ch] [ebp+1Ch]
  float v49; // [esp+7Ch] [ebp+1Ch]
  float *v50; // [esp+80h] [ebp+20h]

  if ( !self->member.lostDevice ) /*0x762646*/
  {
    MEMORY[0xB3F92C] = position->x; /*0x762659*/
    x = g_zeroNiPoint3.x; /*0x762662*/
    unk_B3F930 = position->y; /*0x762668*/
    y = g_zeroNiPoint3.y; /*0x762671*/
    unk_B3F934 = position->z; /*0x762677*/
    z = g_zeroNiPoint3.z; /*0x76267c*/
    self->member.viewMatrix.m[0][0] = right->x; /*0x762691*/
    self->member.viewMatrix.m[0][1] = up->x; /*0x7626a3*/
    self->member.viewMatrix.m[0][2] = forward->x; /*0x7626b3*/
    self->member.viewMatrix.m[0][3] = 0.0; /*0x7626bb*/
    self->member.viewMatrix.m[1][0] = right->y; /*0x7626c4*/
    self->member.viewMatrix.m[1][1] = up->y; /*0x7626cd*/
    self->member.viewMatrix.m[1][2] = forward->y; /*0x7626d6*/
    self->member.viewMatrix.m[1][3] = 0.0; /*0x7626dc*/
    self->member.viewMatrix.m[2][0] = right->z; /*0x7626e5*/
    self->member.viewMatrix.m[2][1] = up->z; /*0x7626ee*/
    self->member.viewMatrix.m[2][2] = forward->z; /*0x7626f7*/
    self->member.viewMatrix.m[2][3] = 0.0; /*0x7626fd*/
    v13 = z; /*0x762727*/
    positiona = right->x * x + right->y * y + z * right->z; /*0x762729*/
    self->member.viewMatrix.m[3][0] = -positiona; /*0x762733*/
    positionb = up->x * x + y * up->y + up->z * z; /*0x76274b*/
    self->member.viewMatrix.m[3][1] = -positionb; /*0x762755*/
    positionc = forward->x * x + forward->y * y + forward->z * z; /*0x76276d*/
    self->member.viewMatrix.m[3][2] = -positionc; /*0x76277a*/
    self->member.viewMatrix.m[3][3] = 1.0; /*0x762782*/
    *(NiPoint3 *)&self->member.invViewMatrix.m[0][0] = *right; /*0x76278a*/
    self->member.invViewMatrix.m[0][3] = 0.0; /*0x7627a4*/
    *(NiPoint3 *)&self->member.invViewMatrix.m[1][0] = *up; /*0x7627ac*/
    self->member.invViewMatrix.m[1][3] = 0.0; /*0x7627c4*/
    self->member.invViewMatrix.m[2][0] = forward->x; /*0x7627cc*/
    self->member.invViewMatrix.m[2][1] = forward->y; /*0x7627d5*/
    device = self->member.device; /*0x7627de*/
    self->member.invViewMatrix.m[2][2] = forward->z; /*0x7627e4*/
    self->member.invViewMatrix.m[2][3] = 0.0; /*0x7627eb*/
    self->member.invViewMatrix.m[3][0] = x; /*0x7627f3*/
    self->member.invViewMatrix.m[3][1] = y; /*0x7627f9*/
    self->member.invViewMatrix.m[3][2] = v13; /*0x7627ff*/
    self->member.invViewMatrix.m[3][3] = 1.0; /*0x762805*/
    ((void (__stdcall *)(IDirect3DDevice9 *, int, D3DXMATRIX *, int, int))device->lpVtbl->SetTransform)( /*0x762813*/
      device,
      2,
      &self->member.viewMatrix,
      v8,
      v7);
    *(NiPoint3 *)&self->member.pad624[0xB] = *right; /*0x762817*/
    *(NiPoint3 *)&self->member.pad624[5] = *right; /*0x762831*/
    v15 = (float *)v48; /*0x762843*/
    *(NiPoint3 *)&self->member.camRight.y = *up; /*0x76284f*/
    *(NiPoint3 *)&self->member.pad624[8] = *up; /*0x762869*/
    self->member.NearDepth = *(float *)(v48 + 0x10); /*0x762884*/
    upc = v15[5] - v15[4]; /*0x762890*/
    v16 = upc; /*0x762894*/
    self->member.DepthRange = upc; /*0x762898*/
    upa = v15[1] - *v15; /*0x7628a3*/
    viewporta = v15[1] + *v15; /*0x7628ac*/
    frustuma = v15[2] - v15[3]; /*0x7628b6*/
    v17 = *(_BYTE *)(v48 + 0x18) == 0; /*0x7628bd*/
    righta = v15[3] + v15[2]; /*0x7628cc*/
    GetLeftHanded = (int (*)(void))self->member.renderState->vtbl->GetLeftHanded; /*0x7628d0*/
    v49 = 1.0 / v16; /*0x7628d7*/
    if ( v17 ) /*0x7628db*/
    {
      v26 = GetLeftHanded(); /*0x76299d*/
      v27 = dbl_A3D0C0; /*0x76299f*/
      p_projMatrix = &self->member.projMatrix; /*0x7629ab*/
      v28 = upa; /*0x7629b1*/
      if ( v26 ) /*0x7629b3*/
      {
        p_projMatrix->m[0][0] = kFaceGenPolarNegativeTwo / v28; /*0x7629bb*/
        v29 = 0.0; /*0x7629bd*/
        self->member.projMatrix.m[1][0] = 0.0; /*0x7629bf*/
        v30 = viewporta; /*0x7629c5*/
      }
      else
      {
        p_projMatrix->m[0][0] = v27 / v28; /*0x7629cd*/
        v29 = 0.0; /*0x7629cf*/
        self->member.projMatrix.m[1][0] = 0.0; /*0x7629d1*/
        v30 = -viewporta; /*0x7629db*/
      }
      self->member.projMatrix.m[2][0] = v30 / upa; /*0x7629e1*/
      self->member.projMatrix.m[3][0] = v29; /*0x7629e7*/
      self->member.projMatrix.m[0][1] = v29; /*0x7629ed*/
      self->member.projMatrix.m[1][1] = v27 / frustuma; /*0x7629fd*/
      v25 = v29; /*0x762a0b*/
      self->member.projMatrix.m[2][1] = -righta / frustuma; /*0x762a0d*/
      self->member.projMatrix.m[3][1] = v29; /*0x762a13*/
      self->member.projMatrix.m[0][2] = v29; /*0x762a19*/
      self->member.projMatrix.m[1][2] = v29; /*0x762a1f*/
      self->member.projMatrix.m[2][2] = v15[5] * v49; /*0x762a32*/
      self->member.projMatrix.m[3][2] = -(v49 * (v15[5] * v15[4])); /*0x762a42*/
      self->member.projMatrix.m[0][3] = v29; /*0x762a48*/
      self->member.projMatrix.m[1][3] = v29; /*0x762a4e*/
      self->member.projMatrix.m[2][3] = 1.0; /*0x762a56*/
    }
    else
    {
      v19 = GetLeftHanded(); /*0x7628e1*/
      v20 = dbl_A3D0C0; /*0x7628e3*/
      p_projMatrix = &self->member.projMatrix; /*0x7628ef*/
      v22 = upa; /*0x7628f5*/
      if ( v19 ) /*0x7628f7*/
      {
        p_projMatrix->m[0][0] = kFaceGenPolarNegativeTwo / v22; /*0x7628ff*/
        v23 = 0.0; /*0x762901*/
        self->member.projMatrix.m[1][0] = 0.0; /*0x762903*/
        self->member.projMatrix.m[2][0] = 0.0; /*0x762909*/
        v24 = viewporta; /*0x76290f*/
      }
      else
      {
        p_projMatrix->m[0][0] = v20 / v22; /*0x762917*/
        v23 = 0.0; /*0x762919*/
        self->member.projMatrix.m[1][0] = 0.0; /*0x76291b*/
        self->member.projMatrix.m[2][0] = 0.0; /*0x762921*/
        v24 = -viewporta; /*0x76292b*/
      }
      self->member.projMatrix.m[3][0] = v24 / upa; /*0x762931*/
      self->member.projMatrix.m[0][1] = v23; /*0x762937*/
      self->member.projMatrix.m[1][1] = v20 / frustuma; /*0x762947*/
      self->member.projMatrix.m[2][1] = v23; /*0x76294d*/
      self->member.projMatrix.m[3][1] = -righta / frustuma; /*0x76295d*/
      self->member.projMatrix.m[0][2] = v23; /*0x762963*/
      self->member.projMatrix.m[1][2] = v23; /*0x762969*/
      self->member.projMatrix.m[2][2] = v49; /*0x762973*/
      self->member.projMatrix.m[3][2] = -(v49 * v15[4]); /*0x76297e*/
      self->member.projMatrix.m[0][3] = v23; /*0x762984*/
      self->member.projMatrix.m[1][3] = v23; /*0x76298a*/
      self->member.projMatrix.m[2][3] = v23; /*0x762990*/
      v25 = 1.0; /*0x762996*/
    }
    v31 = self->member.device; /*0x762a5c*/
    self->member.projMatrix.m[3][3] = v25; /*0x762a62*/
    v31->lpVtbl->SetTransform(v31, D3DTRANSFORMSTATE_PROJECTION, (const D3DMATRIX *)p_projMatrix); /*0x762a74*/
    upd = (const NiPoint3 *)self->member.currentRTGroup->vtbl->GetWidth(self->member.currentRTGroup, 0);// Query current render-target width for normalized-to-pixel viewport conversion. /*0x762a87*/
    v32 = (double)(int)upd; /*0x762a8b*/
    if ( (int)upd < 0 ) /*0x762a8f*/
      v32 = v32 + flt_A2FC78; /*0x762a91*/
    upb = v32; /*0x762a9d*/
    viewportb = (const NiViewport *)self->member.currentRTGroup->vtbl->GetHeight(self->member.currentRTGroup, 0);// Query current render-target height for normalized-to-pixel viewport conversion. /*0x762aac*/
    v33 = (double)(int)viewportb; /*0x762ab0*/
    if ( (int)viewportb < 0 ) /*0x762ab4*/
      v33 = v33 + flt_A2FC78; /*0x762ab6*/
    frustumb = v33; /*0x762ac0*/
    v34[0] = (__int64)(*v50 * upb);             // Viewport X = normalized left * target width. /*0x762aee*/
    v34[1] = (__int64)((1.0 - v50[2]) * frustumb);// Viewport Y = (1 - normalized top) * target height. /*0x762b25*/
    v34[2] = (__int64)(upb * (v50[1] - *v50));  // Viewport width = target width * (right - left). /*0x762b54*/
    v34[3] = (__int64)(frustumb * (v50[2] - v50[3]));// Viewport height = target height * (top - bottom). /*0x762b87*/
    retaddr = 0.0; /*0x762b98*/
    ((void (__cdecl *)(IDirect3DDevice9 *, _DWORD *))self->member.device->lpVtbl->SetViewport)(self->member.device, v34);// Install the computed pixel viewport. The shadow producer supplies (0,1,1,0), yielding the full ShadowSurfaceRes square; no scissor state is paired with this update. /*0x762baa*/
    ((void (__thiscall *)(_DWORD, _DWORD, _DWORD))self->member.renderState->vtbl->func_11)( /*0x762bc9*/
      self->member.renderState,
      v15[4],
      v15[5]);
  }
}

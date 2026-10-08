// Verified in OblivionNew 2026-09-26: copies requested gamma B06C2C to fGamma INI value B06F64, clears B34FA4, builds 256 identical RGB WORD entries round(pow(i/255,gamma)*65535), then calls device vtable +54 (IDirect3DDevice9::SetGammaRamp slot21), swapchain0, flags1 (D3DSGR_CALIBRATE). Device is loaded from renderer +280; renderer pointer at B350D8. Constants: A3DDD8=255, A3DDD0=65535, A2FAA0=0.5. EAX return in decompiler is not an API HRESULT: SetGammaRamp is void.
int Renderer_ApplyPendingGammaRamp()
{
  char *v0; // esi
  int v1; // edi
  __int16 v2; // ax
  float v4; // [esp+8h] [ebp-610h]
  float v5; // [esp+8h] [ebp-610h]
  int v6; // [esp+Ch] [ebp-60Ch]
  char v7[512]; // [esp+14h] [ebp-604h] BYREF
  char v8; // [esp+214h] [ebp-404h] BYREF

  flt_B06F64 = g_RequestedRenderGamma; /*0x497c4c*/
  MEMORY[0xB33E90][0x1114] = 0; /*0x497c52*/
  v6 = 0; /*0x497c59*/
  v0 = &v8; /*0x497c61*/
  v1 = 0x100; /*0x497c68*/
  do /*0x497ce1*/
  {
    v4 = (double)v6 / dbl_A3DDD8; /*0x497c7a*/
    v5 = pow(v4, g_RequestedRenderGamma); /*0x497c8d*/
    ++v6; /*0x497c95*/
    v0 += 2; /*0x497ca0*/
    --v1; /*0x497cb7*/
    v2 = (int)(v5 * dbl_A3DDD0 + dbl_A2FAA0); /*0x497cc6*/
    *((_WORD *)v0 + 0xFFFFFEFF) = v2; /*0x497ccb*/
    *((_WORD *)v0 + 0xFFFFFFFF) = v2; /*0x497cd2*/
    *((_WORD *)v0 + 0xFF) = v2; /*0x497cda*/
  }
  while ( v1 ); /*0x497ce1*/
  return (*(int (__stdcall **)(_DWORD, _DWORD, int, char *))(**(_DWORD **)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 0x280) /*0x497cff*/
                                                           + 0x54))(
           *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 0x280),
           0,
           1,
           v7);
}

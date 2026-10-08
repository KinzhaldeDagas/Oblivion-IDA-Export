// Per-draw transform slot updates object-space lighting and billboard axes before leaf pass setup. A correct bound texture can therefore render RGB-black if stock lighting/dimmer/fog constants yield zero, independently of atlas RGB.
int __thiscall sub_7F15E0(char **this, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9)
{
  _DWORD *v10; // edi
  BOOL v11; // eax
  float v13[16]; // [esp+1Ch] [ebp-80h] BYREF
  int v14[16]; // [esp+5Ch] [ebp-40h] BYREF

  NiDX9Renderer_SetModelTransform((NiDX9Renderer *)*(this + 5), a8, 0); /*0x7f15f8*/
  v13[0] = a8[0xC] * *a8; /*0x7f1609*/
  v13[1] = a8[3] * a8[0xC]; /*0x7f1618*/
  v13[2] = a8[6] * a8[0xC]; /*0x7f1622*/
  v13[4] = a8[1] * a8[0xC]; /*0x7f162c*/
  v13[5] = a8[4] * a8[0xC]; /*0x7f1636*/
  v13[6] = a8[7] * a8[0xC]; /*0x7f1640*/
  v13[8] = a8[2] * a8[0xC]; /*0x7f164a*/
  v13[9] = a8[5] * a8[0xC]; /*0x7f1654*/
  v13[0xA] = a8[8] * a8[0xC]; /*0x7f165e*/
  v13[0xC] = a8[9]; /*0x7f1665*/
  v13[0xD] = a8[0xA]; /*0x7f166c*/
  v13[0xE] = a8[0xB]; /*0x7f1673*/
  v13[3] = 0.0; /*0x7f1679*/
  v13[7] = 0.0; /*0x7f167d*/
  v13[0xB] = 0.0; /*0x7f1681*/
  v13[0xF] = 1.0; /*0x7f1687*/
  D3DXMatrixInverse_0((int)v14, 0, (int)v13); /*0x7f168b*/
  v10 = *(_DWORD **)(a6 + 0x18); /*0x7f1697*/
  if ( v10 ) /*0x7f169c*/
    v11 = (*(int (__thiscall **)(_DWORD))(*v10 + 0x54))(*(_DWORD *)(a6 + 0x18)) == 9; /*0x7f16b3*/
  else
    v11 = 0; /*0x7f169e*/
  OB_SpeedTreeLeafShader_UpdateObjectSpaceLightConstants_010201A0(v11 ? v10 : 0, (int)v14, a8[0xC]);// Per-draw transform setup rebuilds leaf c11 (and optional point c12) before leaf pass setup/draw; c11 is not merely consumed stale on the normal path.
  OB_SpeedTreeLeafShader_UpdateBillboardAxes_010201A0(); /*0x7f16cf*/
  return 0; /*0x7f16d4*/
}

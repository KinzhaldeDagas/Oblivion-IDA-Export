//
// Verified constructor 2026-10-01: clears RendererOwned byte0 and DWORDs4/8/C/10 only. Bytes1..3 are padding not initialized here; preserve them when modeling later acquisition.
_DWORD *__thiscall NiD3DRenderStateGroup_InitializeEmpty(_DWORD *this)
{
  *(_BYTE *)this = 0; /*0x7726a4*/
  *(this + 1) = 0; /*0x7726a6*/
  *(this + 2) = 0; /*0x7726a9*/
  *(this + 3) = 0; /*0x7726ac*/
  *(this + 4) = 0; /*0x7726af*/
  return this; /*0x7726b2*/
}

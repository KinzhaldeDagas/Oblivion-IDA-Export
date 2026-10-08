//
// DX11 normalization audit 2026-10-01: actual NiDX9RenderState table A8A9F4 slot+34. Requests RS143 NORMALIZENORMALS with savePrevious=0 when scale<the double atA88D40, scale>the float atA88D38, byteFF4 nonzero or byteFF5 nonzero. Threshold equality does not enable normalization. Manager77B000 native-cache equality can suppress the device write; preserve that behavior. The two flag setters are77B310 and77B330 (table+F4/+FC).
int __thiscall NiDX9RenderState_SetNormalization(NiDX9RenderState *this, const NiTransform *transform)
{
  if ( transform->scale < dbl_A88D40 /*0x77fe0d*/
    || flt_A88D38 < (double)transform->scale
    || this->member.InternalNormalizeNormals
    || this->member.ForceNormalizeNormals )
  {
    return ((int (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))this->vtbl->SetRenderState)(this, 0x8F, 1, 0); /*0x77fe37*/
  }
  else
  {
    return ((int (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))this->vtbl->SetRenderState)(this, 0x8F, 0, 0); /*0x77fe24*/
  }
}

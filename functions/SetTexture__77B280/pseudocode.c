HRESULT __thiscall SetTexture(NiDX9RenderState *this, DWORD sampler, IDirect3DBaseTexture9 *a3)
{
  HRESULT result; // eax

  result = (HRESULT)sampler;
  if ( (IDirect3DBaseTexture9 *)this->member.unk0FA0[sampler] != a3 )
  {
    this->member.unk0FA0[sampler] = (UInt32)a3;
    return this->member.Device->lpVtbl->SetTexture(this->member.Device, sampler, a3);
  }
  return result;
}

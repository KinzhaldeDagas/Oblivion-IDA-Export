HRESULT __thiscall sub_4A1920(NiGeometry *this, NiDX9Renderer *a2)
{
  int v3; // ecx
  char v4; // bl
  int v5; // eax
  int v6; // eax
  HRESULT result; // eax

  v3 = *((_DWORD *)this + 0x33);
  v4 = 0;
  if ( v3 || *((_DWORD *)this + 0x31) || *((_DWORD *)this + 0x30) || *((_DWORD *)this + 0x32) )
  {
    v5 = *((_DWORD *)this + 0x30);
    if ( v5 < 0 && *((int *)this + 0x32) < 0
      || v5 > 1 && *((int *)this + 0x32) > 1
      || (v6 = *((_DWORD *)this + 0x31), v6 < 0) && v3 < 0
      || v6 > 1 && v3 > 1 )
    {
      a2->member.device->lpVtbl->SetRenderState(a2->member.device, D3DRENDERSTATE_MIPMAPLODBIAS|0x80, 1);
      a2->member.device->lpVtbl->SetScissorRect(a2->member.device, (const RECT *)this + 0xC);
      v4 = 1;
    }
  }
  result = (HRESULT)sub_717690(this, a2);
  if ( v4 )
    return a2->member.device->lpVtbl->SetRenderState(a2->member.device, D3DRENDERSTATE_MIPMAPLODBIAS|0x80, 0);
  return result;
}

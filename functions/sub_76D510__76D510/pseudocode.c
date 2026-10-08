// Return whether this depth/stencil buffer's surface format advertises a stencil component; used to gate D3DCLEAR_STENCIL.
bool __thiscall NiDX92DBufferData_HasStencilComponent(NiDX92DBufferData *this)
{
  NiSurfaceData *SurfaceData; // ecx

  SurfaceData = this->member.SurfaceData; /*0x76d512*/
  return SurfaceData && this->member.Surface && sub_71B4A0((char *)SurfaceData, 0x12) != 0; /*0x76d52b*/
}

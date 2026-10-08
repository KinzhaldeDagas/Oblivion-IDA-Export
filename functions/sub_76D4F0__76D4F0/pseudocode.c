// Return whether this depth/stencil buffer's surface format advertises a depth component; used to gate D3DCLEAR_ZBUFFER.
bool __thiscall NiDX92DBufferData_HasDepthComponent(NiDX92DBufferData *this)
{
  NiSurfaceData *SurfaceData; // ecx

  SurfaceData = this->member.SurfaceData; /*0x76d4f2*/
  return SurfaceData && this->member.Surface && sub_71B4A0((char *)SurfaceData, 0x11) != 0; /*0x76d50b*/
}

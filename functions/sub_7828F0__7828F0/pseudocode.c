ULONG __thiscall sub_7828F0(NiGeometryGroup *this)
{
  IDirect3DDevice9 *device; // ecx
  ULONG result; // eax

  this->vtbl = (NiGeometryGroupVtbl *)&NiGeometryGroup::`vftable'; /*0x7828f0*/
  device = this->device; /*0x7828f6*/
  if ( device ) /*0x7828fb*/
    return device->lpVtbl->Release(device); /*0x782903*/
  return result; /*0x782905*/
}

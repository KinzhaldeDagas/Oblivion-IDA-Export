ULONG __thiscall sub_7828F0(NiGeometryGroup *this)
{
  IDirect3DDevice9 *device; // ecx
  ULONG result; // eax

  this->vtbl = (NiGeometryGroupVtbl *)&NiGeometryGroup::`vftable';
  device = this->device;
  if ( device )
    return device->lpVtbl->Release(device);
  return result;
}

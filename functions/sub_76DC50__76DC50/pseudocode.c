//
// Verified vtableA8997C slot15/+0x3C. Releases surface+0x0C, frees SurfaceData+0x10, releases retained IDirect3DDevice9+0x4C and nulls each field. Confirms corrected implicit buffer layout. Return is last device Release count or0; no native drawing.
unsigned int __thiscall NiDX9ImplicitBufferData_ReleaseResources(NiDX9ImplicitBufferData *self)
{
  IDirect3DSurface9 *Surface; // eax
  unsigned int result; // eax

  Surface = self->super.Surface; /*0x76dc53*/
  if ( Surface ) /*0x76dc58*/
  {
    Surface->lpVtbl->Release(Surface); /*0x76dc60*/
    self->super.Surface = 0; /*0x76dc62*/
  }
  FormHeapFree((unsigned int)self->super.SurfaceData); /*0x76dc6d*/
  result = (unsigned int)self->device; /*0x76dc72*/
  self->super.SurfaceData = 0; /*0x76dc7a*/
  if ( result ) /*0x76dc81*/
  {
    result = (*(int (__stdcall **)(unsigned int))(*(_DWORD *)result + 8))(result); /*0x76dc89*/
    self->device = 0; /*0x76dc8b*/
  }
  return result; /*0x76dc92*/
}

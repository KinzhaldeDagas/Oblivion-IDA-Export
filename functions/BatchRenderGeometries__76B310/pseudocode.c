// MoonSugarEffect decode: NiDX9Renderer BatchRenderGeometries vtable thunk. Forwards to 0x769960, the batch/prepack entry builder, not the immediate RenderTriGeometries draw path.
// attributes: thunk
NiGeometry **__thiscall BatchRenderGeometries(NiDX9Renderer *this, NiGeometry *a2)
{
  return sub_769960(this, a2);
}

//
// DX11 authority audit 2026-10-01: verified NiDX9Renderer vtable A88EA4+B4 target. NiGeometryData destructor 7291E0 calls 7014A0, which dispatches this PurgeGeometryData virtual. If bufferData/stream/chip exists, 763FE0 enters renderer+80 then precache+100, removes every matching data pointer from linked prepack objects (next +20), frees records, then 764040 releases +100 before +80. Crucially, geometryGroupMgr renderer+8A0 virtual+1C is invoked AFTER this local lock interval and may also run when the stream/chip branch was skipped. Therefore those lock helpers alone do not establish lifetime/exclusion for all geometry-group teardown. Verified homologous Fallout NiXenonRenderer::PurgeGeometryData 827A9D58: same guarded prepack walk and unlocked final manager virtual+1C, but its buffer/chip/prepack/manager offsets differ (PPC manager+70C vs Oblivion+8A0).
void __cdecl NiRenderer_PurgeGeometryDataFromCurrent(NiGeometryData *data)
{
  if ( renderer ) /*0x7014a0*/
    renderer->__vftable->super.PurgeGeometryData((NiRenderer *)renderer, data); /*0x7014b7*/
}

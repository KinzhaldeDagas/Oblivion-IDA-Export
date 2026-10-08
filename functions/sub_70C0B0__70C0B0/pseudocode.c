// Renderer camera-cull-submit boundary. Installs camera matrices, culls the scene root into the visible array, then submits that visible array through the current renderer accumulator.
//
// CULLING audit 2026-09-27 (observed Oblivion behavior): Accepts a generic NiAVObject root (the player call passes a NiNode), not only SceneGraph. Installs camera renderer state. Chooses explicit array or process+0x08. If present, zeroes array count, calls virtual Process(+8), then submits/flushed array through 0x70C000 AFTER Process returns and clears process.Camera. Otherwise calls Process with null array. This is a candidate ownership/lifetime observation boundary, not a universally main-view function.
//
// CULLING runtime correspondence 2026-09-27: installed disk executable SHA256 035dba38fddd325b3ca18afdaacd086eecf7a8a33fce1abdb057e5cd831e1ee4 differs from IDA input afe430894d29dbf0e615b8c8b0bfd6f03dcbc0667378a7f0ea740e0c9af843d9. Four callsites, 18 culling/geometry vtable entries including unpatched water, full 92-byte classifier, and 13 relevant primary function bodies matched database bytes. This bounded comparison is not full executable identity or proof against runtime plugin patches.
void __cdecl NiRenderer_CullAndRenderScene(
        NiCamera *camera,
        NiAVObject *sceneRoot,
        NiCullingProcess *cullingProcess,
        CullingVisibleGeometryArray *visibleArray)
{
  CullingVisibleGeometryArray *VisibleGeo; // esi

  if ( renderer ) /*0x70c0b0*/
  {
    if ( camera ) /*0x70c0c1*/
    {
      if ( sceneRoot ) /*0x70c0ca*/
      {
        VisibleGeo = visibleArray; /*0x70c0cd*/
        if ( !visibleArray ) /*0x70c0d8*/
          VisibleGeo = cullingProcess->VisibleGeo; /*0x70c0da*/
        SetCameraViewProj(renderer, camera);    // Install the supplied camera view/projection before culling and visible-geometry submission. /*0x70c0de*/
        if ( VisibleGeo ) /*0x70c0e7*/
        {
          VisibleGeo->size = 0; /*0x70c0ea*/
          cullingProcess->vtbl->Process(cullingProcess, camera, sceneRoot, VisibleGeo); /*0x70c0f8*/
          NiRenderer_SubmitAndFlushVisibleGeometryArray(camera, VisibleGeo); /*0x70c0fc*/
        }
        else
        {
          cullingProcess->vtbl->Process(cullingProcess, camera, sceneRoot, 0); /*0x70c112*/
        }
      }
    }
  }
}

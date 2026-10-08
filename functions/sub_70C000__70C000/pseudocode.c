// Renderer visible-array submit/flush helper. Begins accumulator work with the camera, submits the visible array, then calls the accumulator flush entry; the per-source shadow producer deliberately gates the first nested flush until +0x21E1 is set.
//
// CULLING audit 2026-09-27 (observed Oblivion behavior): Uses supplied camera to begin accumulator(+0x4C), calls 0x70BF30 on the array, flushes(+0x50), then releases retained accumulator. For callers via 0x70C0B0 this runs after Process has returned; process.Camera is no longer a valid consumer-lifetime source. Existing shadow-ready comments apply to the particular shadow accumulator producer, not all invocations.
//
// CULLING documentation correction 2026-09-27: bounded direct-xref query currently reports caller 0x70C0FC in CullAndRenderScene, after Process returns. Do not infer universal main-view ownership from this observed direct-call chain.
void __cdecl NiRenderer_SubmitAndFlushVisibleGeometryArray(NiCamera *camera, CullingVisibleGeometryArray *visibleArray)
{
  volatile LONG *accumulator; // esi

  if ( renderer ) /*0x70c023*/
  {
    if ( camera ) /*0x70c032*/
    {
      accumulator = (volatile LONG *)renderer->member.super.accumulator; /*0x70c034*/
      if ( accumulator ) /*0x70c03d*/
      {
        InterlockedIncrement(accumulator + 1); /*0x70c043*/
        (*(void (__thiscall **)(volatile LONG *, NiCamera *))(*accumulator + 0x4C))(accumulator, camera);// Nested begin is harmless here because +0x2268 is already pending from the producer. /*0x70c05d*/
      }
      NiRenderer_SubmitVisibleGeometryArray(visibleArray); /*0x70c064*/
      if ( accumulator ) /*0x70c06e*/
      {
        (*(void (__thiscall **)(volatile LONG *))(*accumulator + 0x50))(accumulator);// Nested flush occurs before producer sets +0x21E1, so it does not dispatch; the producer performs the ready flush afterward. /*0x70c077*/
        if ( !InterlockedDecrement(accumulator + 1) ) /*0x70c089*/
          (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x70c09b*/
      }
    }
  }
}

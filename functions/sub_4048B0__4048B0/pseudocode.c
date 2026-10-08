// Verified 2026-09-30: copies 11 DWORD counters to caller outputs in the order named in this prototype, returns the last counter in EAX. Caller InterfaceMgr_ShowDebugText at40A9F8 labels outputs Geometry (%d secondary), Tri, Pass, TriPasses, QueueMem, Occlusion Geom/tri/wait loops, bound-volume wait loops and sun-occlusion wait frames. QueueMemory units and the second Geometry subcategory are not further inferred here.
int __cdecl Renderer_CopyStatisticsCounters(
        int *geometryCount,
        int *secondaryGeometryCount,
        int *triangleCount,
        int *passCount,
        int *trianglePassCount,
        int *queueMemoryStatistic,
        int *occlusionGeometryCount,
        int *occlusionTriangleCount,
        int *occlusionWaitLoops,
        int *boundVolumeWaitLoops,
        int *sunOcclusionWaitFrames)
{
  int result; // eax

  *geometryCount = unk_B42CD0; /*0x4048be*/
  *secondaryGeometryCount = unk_B42CB8; /*0x4048c9*/
  *triangleCount = g_rendererTriangleCount; /*0x4048d5*/
  *passCount = g_rendererPassCount; /*0x4048e1*/
  *trianglePassCount = g_rendererTrianglePassCount; /*0x4048ec*/
  *queueMemoryStatistic = unk_B42CB0; /*0x4048f8*/
  *occlusionGeometryCount = g_rendererOcclusionGeometryCount; /*0x404904*/
  *occlusionTriangleCount = g_rendererOcclusionTriangleCount; /*0x40490f*/
  *occlusionWaitLoops = g_rendererOcclusionWaitLoops; /*0x40491b*/
  *boundVolumeWaitLoops = g_rendererBoundVolumeOcclusionWaitLoops; /*0x404927*/
  result = g_rendererSunOcclusionWaitFrames; /*0x404929*/
  *sunOcclusionWaitFrames = g_rendererSunOcclusionWaitFrames; /*0x40492e*/
  return result; /*0x404930*/
}

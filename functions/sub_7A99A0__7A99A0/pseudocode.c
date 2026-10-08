int sub_7A99A0()
{
  int result; // eax
  bool v1; // zf

  result = 0; /*0x7a99a0*/
  v1 = unk_B42CDB == 0; /*0x7a99a2*/
  unk_B42CD0 = 0; /*0x7a99a8*/
  unk_B42CB8 = 0; /*0x7a99ad*/
  g_rendererTriangleCount = 0; /*0x7a99b2*/
  g_rendererPassCount = 0; /*0x7a99b7*/
  g_rendererTrianglePassCount = 0; /*0x7a99bc*/
  unk_B42CB0 = 0; /*0x7a99c1*/
  if ( v1 ) /*0x7a99c6*/
  {
    g_rendererOcclusionGeometryCount = 0; /*0x7a99c8*/
    g_rendererOcclusionTriangleCount = 0; /*0x7a99cd*/
    g_rendererOcclusionWaitLoops = 0; /*0x7a99d2*/
    g_rendererSunOcclusionWaitFrames = 0; /*0x7a99d7*/
    g_rendererBoundVolumeOcclusionWaitLoops = 0; /*0x7a99dc*/
  }
  return result; /*0x7a99e1*/
}

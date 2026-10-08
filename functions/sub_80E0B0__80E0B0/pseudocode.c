//
// [2026-10-03 selector distinction] Returns19 from shader virtual+1C, but this is NOT the RenderPass selector. Independent counterexample: SpeedTreeLeafShader virtual+1C at8C16C0 returns20, while its property7F1F00 constructs selector14. Frond RenderPass identity is15 per native GetRenderPassName7B4920 case15. Plugin no longer derives accumulator bucket from this virtual.
signed int sub_80E0B0()
{
  return 0x13; /*0x80e0b5*/
}

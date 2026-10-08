// Only writer of g_bRendererAccumulationFrozen. Registered by CommandInfo_FreezeRenderAccumulation as the FreezeRenderAccumulation/fra console command ('only re-render geometry visible during this frame'). Toggles the renderer debug replay/freeze state, prints frozen or active, and returns true.
bool __cdecl ToggleRendererAccumulationFrozen()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = !g_bRendererAccumulationFrozen; /*0x500837*/
  g_bRendererAccumulationFrozen = v0; /*0x50083a*/
  v1 = !v0; /*0x50083f*/
  v2 = "frozen"; /*0x500841*/
  if ( v1 ) /*0x500846*/
    v2 = "active"; /*0x500848*/
  Interface_ConsolePrint("Renderer Accumulation : %s", v2);
  return 1; /*0x50085d*/
}

// [Verified] Global initialization wrapper calls RendererShaderState_ResetGlobals on unk_B430D8 and registers nullsub_23 with atexit. This confirms the reset is in the renderer/shader static startup path; the owning class name remains Unknown.
int InitializeRendererShaderStateGlobals()
{
  RendererShaderState_ResetGlobals(&unk_B430D8); /*0xa10eb5*/
  return atexit(nullsub_23); /*0xa10ec5*/
}

0xA10EB0: mov     ecx, offset unk_B430D8; [Verified] Global initialization wrapper calls RendererShaderState_ResetGlobals on unk_B430D8 and registers nullsub_23 with atexit. This confirms the reset is in the renderer/shader static startup path; the owning class name remains Unknown.
0xA10EB5: call    RendererShaderState_ResetGlobals; [Verified] Static-initialization target called with unk_B430D8 by InitializeRendererShaderStateGlobals. Resets renderer/shader state, clears pass-control bytes +1/+2, sets +3=1, resets shader version to 0, and releases cached renderer objects. [Unknown] The owning C++ class for unk_B430D8 is not identified.
0xA10EBA: push    offset nullsub_23; void (__cdecl *)()
0xA10EBF: call    _atexit
0xA10EC4: pop     ecx
0xA10EC5: retn

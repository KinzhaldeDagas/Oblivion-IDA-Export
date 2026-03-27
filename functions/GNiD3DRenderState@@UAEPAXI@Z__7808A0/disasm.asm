0x7808A0: push    esi
0x7808A1: mov     esi, ecx
0x7808A3: call    ??1NiD3DRenderState@@UAE@XZ; NiD3DRenderState::~NiD3DRenderState(void)
0x7808A8: test    byte ptr [esp+4+arg_0], 1
0x7808AD: jz      short loc_7808B8
0x7808AF: push    esi
0x7808B0: call    FormHeapFree
0x7808B5: add     esp, 4
0x7808B8: mov     eax, esi
0x7808BA: pop     esi
0x7808BB: retn    4

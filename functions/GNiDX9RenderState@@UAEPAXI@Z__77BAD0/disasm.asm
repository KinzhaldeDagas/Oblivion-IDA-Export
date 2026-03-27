0x77BAD0: push    esi
0x77BAD1: mov     esi, ecx
0x77BAD3: mov     dword ptr [esi], offset ??_7NiDX9RenderState@@6B@; const NiDX9RenderState::`vftable'
0x77BAD9: call    ??1NiD3DRenderState@@UAE@XZ; NiD3DRenderState::~NiD3DRenderState(void)
0x77BADE: test    byte ptr [esp+4+arg_0], 1
0x77BAE3: jz      short loc_77BAEE
0x77BAE5: push    esi
0x77BAE6: call    FormHeapFree
0x77BAEB: add     esp, 4
0x77BAEE: mov     eax, esi
0x77BAF0: pop     esi
0x77BAF1: retn    4

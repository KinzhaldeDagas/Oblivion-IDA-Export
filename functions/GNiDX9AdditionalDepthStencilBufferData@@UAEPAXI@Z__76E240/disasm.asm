0x76E240: push    esi
0x76E241: mov     esi, ecx
0x76E243: call    ??1NiDX9AdditionalDepthStencilBufferData@@UAE@XZ; NiDX9AdditionalDepthStencilBufferData::~NiDX9AdditionalDepthStencilBufferData(void)
0x76E248: test    byte ptr [esp+4+arg_0], 1
0x76E24D: jz      short loc_76E258
0x76E24F: push    esi
0x76E250: call    FormHeapFree
0x76E255: add     esp, 4
0x76E258: mov     eax, esi
0x76E25A: pop     esi
0x76E25B: retn    4

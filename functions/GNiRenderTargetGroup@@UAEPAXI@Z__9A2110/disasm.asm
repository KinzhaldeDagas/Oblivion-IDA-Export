0x9A2110: push    esi
0x9A2111: mov     esi, ecx
0x9A2113: call    ??1NiRenderTargetGroup@@UAE@XZ; NiRenderTargetGroup::~NiRenderTargetGroup(void)
0x9A2118: test    byte ptr [esp+4+arg_0], 1
0x9A211D: jz      short loc_9A2128
0x9A211F: push    esi
0x9A2120: call    FormHeapFree
0x9A2125: add     esp, 4
0x9A2128: mov     eax, esi
0x9A212A: pop     esi
0x9A212B: retn    4

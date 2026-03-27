0x732190: push    esi
0x732191: mov     esi, ecx
0x732193: call    ??1Ni2DBuffer@@UAE@XZ; Ni2DBuffer::~Ni2DBuffer(void)
0x732198: test    byte ptr [esp+4+arg_0], 1
0x73219D: jz      short loc_7321A8
0x73219F: push    esi
0x7321A0: call    FormHeapFree
0x7321A5: add     esp, 4
0x7321A8: mov     eax, esi
0x7321AA: pop     esi
0x7321AB: retn    4

0x54DFB0: push    esi
0x54DFB1: mov     esi, ecx
0x54DFB3: call    ??1BSFaceGenImage@@UAE@XZ; BSFaceGenImage::~BSFaceGenImage(void)
0x54DFB8: test    byte ptr [esp+4+arg_0], 1
0x54DFBD: jz      short loc_54DFC8
0x54DFBF: push    esi
0x54DFC0: call    FormHeapFree
0x54DFC5: add     esp, 4
0x54DFC8: mov     eax, esi
0x54DFCA: pop     esi
0x54DFCB: retn    4

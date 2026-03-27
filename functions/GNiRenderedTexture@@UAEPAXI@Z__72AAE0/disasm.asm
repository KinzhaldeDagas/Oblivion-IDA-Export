0x72AAE0: push    esi
0x72AAE1: mov     esi, ecx
0x72AAE3: call    ??1NiRenderedTexture@@UAE@XZ; NiRenderedTexture::~NiRenderedTexture(void)
0x72AAE8: test    byte ptr [esp+4+arg_0], 1
0x72AAED: jz      short loc_72AAF8
0x72AAEF: push    esi
0x72AAF0: call    FormHeapFree
0x72AAF5: add     esp, 4
0x72AAF8: mov     eax, esi
0x72AAFA: pop     esi
0x72AAFB: retn    4

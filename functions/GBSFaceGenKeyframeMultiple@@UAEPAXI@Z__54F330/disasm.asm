0x54F330: push    esi
0x54F331: mov     esi, ecx
0x54F333: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54F338: test    byte ptr [esp+4+arg_0], 1
0x54F33D: jz      short loc_54F348
0x54F33F: push    esi
0x54F340: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x54F345: add     esp, 4
0x54F348: mov     eax, esi
0x54F34A: pop     esi
0x54F34B: retn    4

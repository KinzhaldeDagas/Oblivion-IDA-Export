0x6CB090: push    esi
0x6CB091: mov     esi, ecx
0x6CB093: call    ??1NiControllerSequence@@UAE@XZ; NiControllerSequence::~NiControllerSequence(void)
0x6CB098: test    byte ptr [esp+4+arg_0], 1
0x6CB09D: jz      short loc_6CB0A8
0x6CB09F: push    esi
0x6CB0A0: call    FormHeapFree
0x6CB0A5: add     esp, 4
0x6CB0A8: mov     eax, esi
0x6CB0AA: pop     esi
0x6CB0AB: retn    4

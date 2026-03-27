0x4B4150: push    esi
0x4B4151: mov     esi, ecx
0x4B4153: call    ??1TESObjectACTI@@UAE@XZ; TESObjectACTI::~TESObjectACTI(void)
0x4B4158: test    byte ptr [esp+4+arg_0], 1
0x4B415D: jz      short loc_4B4168
0x4B415F: push    esi
0x4B4160: call    FormHeapFree
0x4B4165: add     esp, 4
0x4B4168: mov     eax, esi
0x4B416A: pop     esi
0x4B416B: retn    4

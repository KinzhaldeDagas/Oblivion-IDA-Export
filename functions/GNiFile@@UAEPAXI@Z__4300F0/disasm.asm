0x4300F0: push    esi
0x4300F1: mov     esi, ecx
0x4300F3: call    ??1NiFile@@UAE@XZ; NiFile::~NiFile(void)
0x4300F8: test    byte ptr [esp+4+arg_0], 1
0x4300FD: jz      short loc_430108
0x4300FF: push    esi
0x430100: call    FormHeapFree
0x430105: add     esp, 4
0x430108: mov     eax, esi
0x43010A: pop     esi
0x43010B: retn    4

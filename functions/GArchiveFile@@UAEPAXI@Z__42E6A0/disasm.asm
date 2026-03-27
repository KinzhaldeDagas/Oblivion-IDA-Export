0x42E6A0: push    esi
0x42E6A1: mov     esi, ecx
0x42E6A3: call    ??1ArchiveFile@@UAE@XZ; ArchiveFile::~ArchiveFile(void)
0x42E6A8: test    byte ptr [esp+4+arg_0], 1
0x42E6AD: jz      short loc_42E6B8
0x42E6AF: push    esi
0x42E6B0: call    FormHeapFree
0x42E6B5: add     esp, 4
0x42E6B8: mov     eax, esi
0x42E6BA: pop     esi
0x42E6BB: retn    4

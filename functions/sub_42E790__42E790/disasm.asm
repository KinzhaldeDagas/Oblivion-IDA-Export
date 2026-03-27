0x42E790: push    esi
0x42E791: mov     esi, ecx
0x42E793: push    edi
0x42E794: mov     edi, [esi+15Ch]
0x42E79A: test    edi, edi
0x42E79C: mov     dword ptr [esi], offset ??_7CompressedArchiveFile@@6B@; const CompressedArchiveFile::`vftable'
0x42E7A2: jz      short loc_42E7B3
0x42E7A4: push    edi
0x42E7A5: call    Zlib_inflateEnd
0x42E7AA: push    edi
0x42E7AB: call    FormHeapFree
0x42E7B0: add     esp, 8
0x42E7B3: mov     eax, [esi+160h]
0x42E7B9: test    eax, eax
0x42E7BB: jz      short loc_42E7C6
0x42E7BD: push    eax
0x42E7BE: call    FormHeapFree
0x42E7C3: add     esp, 4
0x42E7C6: mov     ecx, esi; this
0x42E7C8: call    ??1ArchiveFile@@UAE@XZ; ArchiveFile::~ArchiveFile(void)
0x42E7CD: test    [esp+8+arg_0], 1
0x42E7D2: jz      short loc_42E7DD
0x42E7D4: push    esi
0x42E7D5: call    FormHeapFree
0x42E7DA: add     esp, 4
0x42E7DD: pop     edi
0x42E7DE: mov     eax, esi
0x42E7E0: pop     esi
0x42E7E1: retn    4

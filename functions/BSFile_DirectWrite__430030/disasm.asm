0x430030: mov     eax, [esp+Count]
0x430034: push    esi
0x430035: mov     esi, ecx
0x430037: mov     ecx, [esp+4+Src]
0x43003B: push    eax; Count
0x43003C: push    ecx; Src
0x43003D: mov     ecx, esi
0x43003F: call    NiFile_DirectWrite
0x430044: add     [esi+148h], eax
0x43004A: pop     esi
0x43004B: retn    8

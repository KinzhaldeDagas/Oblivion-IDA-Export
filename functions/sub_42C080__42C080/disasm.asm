0x42C080: push    esi
0x42C081: mov     esi, ecx
0x42C083: test    byte ptr [esi+194h], 4
0x42C08A: jnz     short loc_42C0C6
0x42C08C: mov     eax, [esi+198h]
0x42C092: test    eax, eax
0x42C094: jz      short loc_42C09F
0x42C096: push    eax
0x42C097: call    FormHeapFree
0x42C09C: add     esp, 4
0x42C09F: mov     eax, [esi+19Ch]
0x42C0A5: test    eax, eax
0x42C0A7: jz      short loc_42C0B2
0x42C0A9: push    eax
0x42C0AA: call    FormHeapFree
0x42C0AF: add     esp, 4
0x42C0B2: mov     dword ptr [esi+198h], 0
0x42C0BC: mov     dword ptr [esi+19Ch], 0
0x42C0C6: and     byte ptr [esi+194h], 0EFh
0x42C0CD: pop     esi
0x42C0CE: retn

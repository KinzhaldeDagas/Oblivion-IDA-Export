0x414680: push    esi
0x414681: xor     eax, eax
0x414683: mov     esi, ecx
0x414685: push    0FFFFFFFFh; count
0x414687: mov     [esi+14h], eax
0x41468A: mov     dword ptr [esi+18h], 0Fh
0x414691: push    eax; offset
0x414692: mov     [esi+4], al
0x414695: mov     eax, [esp+0Ch+source]
0x414699: push    eax; source
0x41469A: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x41469F: mov     eax, esi
0x4146A1: pop     esi
0x4146A2: retn    4

0x6F5FA0: push    esi
0x6F5FA1: mov     esi, ecx
0x6F5FA3: mov     eax, [esi+3Ch]
0x6F5FA6: test    eax, eax
0x6F5FA8: jz      short loc_6F5FB3
0x6F5FAA: push    eax; File
0x6F5FAB: call    _fclose
0x6F5FB0: add     esp, 4
0x6F5FB3: push    0; count
0x6F5FB5: push    offset EmptyString; source
0x6F5FBA: lea     ecx, [esi+4]; this
0x6F5FBD: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x6F5FC2: mov     dword ptr [esi+3Ch], 0
0x6F5FC9: pop     esi
0x6F5FCA: retn

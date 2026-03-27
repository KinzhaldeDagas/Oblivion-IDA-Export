0x6DF090: push    esi
0x6DF091: mov     esi, ecx
0x6DF093: mov     eax, [esi+10h]
0x6DF096: mov     eax, [eax+8]
0x6DF099: test    eax, eax
0x6DF09B: jz      short loc_6DF0AE
0x6DF09D: push    eax; Src
0x6DF09E: call    sub_6DF010
0x6DF0A3: mov     dword ptr [esi+10h], 0
0x6DF0AA: mov     al, 1
0x6DF0AC: pop     esi
0x6DF0AD: retn
0x6DF0AE: mov     ecx, [esi+14h]
0x6DF0B1: push    ecx
0x6DF0B2: call    FormHeapFree
0x6DF0B7: add     esp, 4
0x6DF0BA: mov     dword ptr [esi+14h], 0
0x6DF0C1: xor     al, al
0x6DF0C3: pop     esi
0x6DF0C4: retn

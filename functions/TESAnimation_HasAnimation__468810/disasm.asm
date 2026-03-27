0x468810: cmp     dword ptr [ecx+8], 0
0x468814: push    esi
0x468815: lea     esi, [ecx+4]
0x468818: jnz     short loc_468825
0x46881A: cmp     dword ptr [esi], 0
0x46881D: jnz     short loc_468825
0x46881F: xor     al, al
0x468821: pop     esi
0x468822: retn    4
0x468825: test    esi, esi
0x468827: push    edi
0x468828: jz      short loc_468847
0x46882A: mov     edi, [esp+8+Str2]
0x46882E: mov     edi, edi
0x468830: mov     eax, [esi]
0x468832: push    edi; Str2
0x468833: push    eax; Str1
0x468834: call    __strcmp
0x468839: add     esp, 8
0x46883C: test    eax, eax
0x46883E: jz      short loc_46884E
0x468840: mov     esi, [esi+4]
0x468843: test    esi, esi
0x468845: jnz     short loc_468830
0x468847: pop     edi
0x468848: xor     al, al
0x46884A: pop     esi
0x46884B: retn    4
0x46884E: pop     edi
0x46884F: mov     al, 1
0x468851: pop     esi
0x468852: retn    4

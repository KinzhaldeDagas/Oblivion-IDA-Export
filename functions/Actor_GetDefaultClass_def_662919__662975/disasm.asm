0x662975: lea     eax, [ebp-3]; jumptable 00662919 default case
0x662978: cmp     eax, 3
0x66297B: ja      short Actor_GetDefaultClass___def_66297D
0x66297D: jmp     ds:jpt_66297D[eax*4]; switch jump
0x662984: mov     eax, ds:0B37CD8h; jumptable 0066297D case 6
0x662989: push    eax
0x66298A: jmp     short loc_6629C8
0x66298C: cmp     esi, 2; jumptable 0066297D case 5
0x66298F: jnz     short loc_66299A
0x662991: mov     ecx, ds:0B37C70h
0x662997: push    ecx
0x662998: jmp     short loc_6629C8
0x66299A: mov     edx, ds:0B37CE0h
0x6629A0: jmp     short loc_6629C7
0x6629A2: cmp     esi, 2; jumptable 0066297D case 4
0x6629A5: jnz     short loc_6629AF
0x6629A7: mov     eax, ds:0B37CE8h
0x6629AC: push    eax
0x6629AD: jmp     short loc_6629C8
0x6629AF: mov     ecx, ds:0B37CF0h
0x6629B5: push    ecx
0x6629B6: jmp     short loc_6629C8
0x6629B8: cmp     edi, 2; jumptable 0066297D case 3
0x6629BB: jnz     short Actor_GetDefaultClass___def_66297D
0x6629BD: cmp     esi, edi
0x6629BF: jnz     short Actor_GetDefaultClass___def_66297D
0x6629C1: mov     edx, ds:0B37CF8h
0x6629C7: push    edx
0x6629C8: mov     ecx, ds:0B33A98h
0x6629CE: call    TESDataHandler_LookupTESClassByFormID
0x6629D3: mov     [ebx+650h], eax

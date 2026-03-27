0x89E9C0: mov     eax, [ecx+10h]
0x89E9C3: test    eax, eax
0x89E9C5: jz      short loc_89E9EB
0x89E9C7: mov     eax, [eax+8]
0x89E9CA: test    eax, eax
0x89E9CC: jz      short loc_89E9E5
0x89E9CE: mov     ecx, [eax+50h]
0x89E9D1: mov     eax, [ecx]
0x89E9D3: mov     edx, [eax+8]
0x89E9D6: call    edx
0x89E9D8: cmp     eax, 6
0x89E9DB: jz      short loc_89E9E5
0x89E9DD: cmp     eax, 7
0x89E9E0: jz      short loc_89E9E5
0x89E9E2: xor     eax, eax
0x89E9E4: retn
0x89E9E5: mov     eax, 1
0x89E9EA: retn
0x89E9EB: xor     al, al
0x89E9ED: retn

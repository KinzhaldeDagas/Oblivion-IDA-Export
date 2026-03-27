0x41E2D0: push    ebx
0x41E2D1: mov     bl, [esp+4+arg_0]
0x41E2D5: push    esi
0x41E2D6: mov     esi, ecx
0x41E2D8: movzx   ecx, bl
0x41E2DB: mov     eax, ecx
0x41E2DD: shr     eax, 3
0x41E2E0: cmp     eax, 0Ch
0x41E2E3: jnb     short loc_41E301
0x41E2E5: and     ecx, 80000007h
0x41E2EB: jns     short loc_41E2F2
0x41E2ED: dec     ecx
0x41E2EE: or      ecx, 0FFFFFFF8h
0x41E2F1: inc     ecx
0x41E2F2: mov     al, [eax+esi+8]
0x41E2F6: mov     edx, 1
0x41E2FB: shl     edx, cl
0x41E2FD: test    al, dl
0x41E2FF: jnz     short loc_41E308
0x41E301: pop     esi
0x41E302: xor     eax, eax
0x41E304: pop     ebx
0x41E305: retn    4
0x41E308: push    offset aBaseextralis_0; lpCriticalSection
0x41E30D: mov     ecx, offset BSExtraDataCS
0x41E312: call    NiEnterCriticalSection
0x41E317: mov     eax, [esi+4]
0x41E31A: xor     esi, esi
0x41E31C: test    eax, eax
0x41E31E: jz      short loc_41E32E
0x41E320: cmp     [eax+4], bl
0x41E323: jz      short loc_41E32E
0x41E325: mov     esi, eax
0x41E327: mov     eax, [eax+8]
0x41E32A: test    eax, eax
0x41E32C: jnz     short loc_41E320
0x41E32E: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E333: call    NiLeaveCriticalSection_0
0x41E338: mov     eax, esi
0x41E33A: pop     esi
0x41E33B: pop     ebx
0x41E33C: retn    4

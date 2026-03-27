0x6AAAA0: mov     eax, dword ptr [esp+ArgList]
0x6AAAA4: cmp     eax, 4; switch 5 cases
0x6AAAA7: push    esi
0x6AAAA8: ja      def_6AAAAE; jumptable 006AAAAE default case, case 1
0x6AAAAE: jmp     ds:jpt_6AAAAE[eax*4]; switch jump
0x6AAAB5: mov     eax, [esp+4+arg_8]; jumptable 006AAAAE case 3
0x6AAAB9: push    8
0x6AAABB: push    2800h
0x6AAAC0: push    0
0x6AAAC2: push    eax
0x6AAAC3: call    sub_431130
0x6AAAC8: add     esp, 10h
0x6AAACB: test    eax, eax
0x6AAACD: jz      short loc_6AAAF3
0x6AAACF: cmp     byte ptr [eax+24h], 0
0x6AAAD3: jz      short loc_6AAAE9
0x6AAAD5: mov     ecx, [esp+4+arg_0]
0x6AAAD9: mov     [ecx+30h], eax
0x6AAADC: mov     dword ptr [ecx+2Ch], 0
0x6AAAE3: xor     eax, eax
0x6AAAE5: pop     esi
0x6AAAE6: retn    10h
0x6AAAE9: mov     edx, [eax]
0x6AAAEB: mov     ecx, eax
0x6AAAED: mov     eax, [edx]
0x6AAAEF: push    1
0x6AAAF1: call    eax
0x6AAAF3: mov     eax, 101h
0x6AAAF8: pop     esi
0x6AAAF9: retn    10h
0x6AAAFC: mov     ecx, [esp+4+arg_0]; jumptable 006AAAAE case 4
0x6AAB00: mov     ecx, [ecx+30h]
0x6AAB03: test    ecx, ecx
0x6AAB05: jnz     short loc_6AAB10
0x6AAB07: mov     eax, 104h
0x6AAB0C: pop     esi
0x6AAB0D: retn    10h
0x6AAB10: mov     edx, [ecx]
0x6AAB12: mov     eax, [edx]
0x6AAB14: push    1
0x6AAB16: call    eax
0x6AAB18: xor     eax, eax
0x6AAB1A: pop     esi
0x6AAB1B: retn    10h
0x6AAB1E: mov     esi, [esp+4+arg_0]; jumptable 006AAAAE case 0
0x6AAB22: mov     ecx, [esi+30h]
0x6AAB25: test    ecx, ecx
0x6AAB27: jnz     short loc_6AAB32
0x6AAB29: mov     eax, 105h
0x6AAB2E: pop     esi
0x6AAB2F: retn    10h
0x6AAB32: mov     edx, [esp+4+arg_C]
0x6AAB36: mov     eax, [esp+4+arg_8]
0x6AAB3A: push    edx
0x6AAB3B: push    eax
0x6AAB3C: call    ReadFile??
0x6AAB41: add     [esi+2Ch], eax
0x6AAB44: pop     esi
0x6AAB45: retn    10h
0x6AAB48: mov     ecx, [esp+4+arg_C]; jumptable 006AAAAE case 2
0x6AAB4C: test    ecx, ecx
0x6AAB4E: mov     eax, ds:0A853D4h
0x6AAB53: jnz     short loc_6AAB5C
0x6AAB55: mov     eax, ds:0A853D0h
0x6AAB5A: jmp     short loc_6AAB66
0x6AAB5C: cmp     ecx, 2
0x6AAB5F: jnz     short loc_6AAB66
0x6AAB61: mov     eax, ds:0A853D8h
0x6AAB66: push    edi
0x6AAB67: mov     edi, [esp+8+arg_0]
0x6AAB6B: mov     esi, [edi+30h]
0x6AAB6E: test    esi, esi
0x6AAB70: jnz     short loc_6AAB7C
0x6AAB72: pop     edi
0x6AAB73: mov     eax, 107h
0x6AAB78: pop     esi
0x6AAB79: retn    10h
0x6AAB7C: mov     edx, [esi]
0x6AAB7E: mov     edx, [edx+0Ch]
0x6AAB81: push    eax
0x6AAB82: mov     eax, [esp+0Ch+arg_8]
0x6AAB86: push    eax
0x6AAB87: mov     ecx, esi
0x6AAB89: call    edx
0x6AAB8B: mov     eax, [esi+30h]
0x6AAB8E: cmp     eax, 0FFFFFFFFh
0x6AAB91: jnz     short loc_6AAB99
0x6AAB93: mov     eax, [esi+148h]
0x6AAB99: mov     [edi+2Ch], eax
0x6AAB9C: pop     edi
0x6AAB9D: xor     eax, eax
0x6AAB9F: pop     esi
0x6AABA0: retn    10h
0x6AABA3: push    eax; jumptable 006AAAAE default case, case 1
0x6AABA4: push    offset aUnhandledMessa; "Unhandled message %i in MMIOReadBSFileP"...
0x6AABA9: call    PrintError
0x6AABAE: add     esp, 8
0x6AABB1: mov     eax, 10Ch
0x6AABB6: pop     esi
0x6AABB7: retn    10h

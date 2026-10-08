0x65C010: mov     al, byte ptr [esp+actorValue]
0x65C014: movsx   edx, al
0x65C017: push    esi
0x65C018: xor     esi, esi
0x65C01A: cmp     edx, 38h; switch 57 cases
0x65C01D: ja      AVCollection_GetNode___def_65C02A; jumptable 0065C02A default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C023: movzx   edx, ds:byte_65C1D8[edx]
0x65C02A: jmp     ds:jpt_65C02A[edx*4]; switch jump
0x65C031: mov     eax, [ecx+8]; jumptable 0065C02A case 9
0x65C034: pop     esi
0x65C035: retn    4
0x65C038: mov     eax, [ecx+0Ch]; jumptable 0065C02A case 10
0x65C03B: pop     esi
0x65C03C: retn    4
0x65C03F: mov     ecx, [ecx+10h]; jumptable 0065C02A case 8
0x65C042: test    ecx, ecx
0x65C044: jz      short AVCollection_GetNode___Return_0
0x65C046: mov     eax, [ecx]
0x65C048: pop     esi
0x65C049: retn    4
0x65C04C: xor     eax, eax
0x65C04E: pop     esi
0x65C04F: retn    4
0x65C052: mov     ecx, [ecx+10h]; jumptable 0065C02A case 11
0x65C055: test    ecx, ecx
0x65C057: jz      short AVCollection_GetNode___Return_0
0x65C059: mov     eax, [ecx+4]
0x65C05C: pop     esi
0x65C05D: retn    4
0x65C060: mov     ecx, [ecx+10h]; jumptable 0065C02A case 40
0x65C063: test    ecx, ecx
0x65C065: jz      short AVCollection_GetNode___Return_0
0x65C067: mov     eax, [ecx+8]
0x65C06A: pop     esi
0x65C06B: retn    4
0x65C06E: mov     ecx, [ecx+10h]; jumptable 0065C02A case 48
0x65C071: test    ecx, ecx
0x65C073: jz      short AVCollection_GetNode___Return_0
0x65C075: mov     eax, [ecx+0Ch]
0x65C078: pop     esi
0x65C079: retn    4
0x65C07C: mov     ecx, [ecx+10h]; jumptable 0065C02A case 36
0x65C07F: test    ecx, ecx
0x65C081: jz      short AVCollection_GetNode___Return_0
0x65C083: mov     eax, [ecx+10h]
0x65C086: pop     esi
0x65C087: retn    4
0x65C08A: mov     ecx, [ecx+10h]; jumptable 0065C02A case 49
0x65C08D: test    ecx, ecx
0x65C08F: jz      short AVCollection_GetNode___Return_0
0x65C091: mov     eax, [ecx+14h]
0x65C094: pop     esi
0x65C095: retn    4
0x65C098: mov     ecx, [ecx+10h]; jumptable 0065C02A case 6
0x65C09B: test    ecx, ecx
0x65C09D: jz      short AVCollection_GetNode___Return_0
0x65C09F: mov     eax, [ecx+18h]
0x65C0A2: pop     esi
0x65C0A3: retn    4
0x65C0A6: mov     ecx, [ecx+10h]; jumptable 0065C02A case 56
0x65C0A9: test    ecx, ecx
0x65C0AB: jz      short AVCollection_GetNode___Return_0
0x65C0AD: mov     eax, [ecx+1Ch]
0x65C0B0: pop     esi
0x65C0B1: retn    4
0x65C0B4: mov     ecx, [ecx+10h]; jumptable 0065C02A case 46
0x65C0B7: test    ecx, ecx
0x65C0B9: jz      short AVCollection_GetNode___Return_0
0x65C0BB: mov     eax, [ecx+20h]
0x65C0BE: pop     esi
0x65C0BF: retn    4
0x65C0C2: mov     ecx, [ecx+10h]; jumptable 0065C02A case 47
0x65C0C5: test    ecx, ecx
0x65C0C7: jz      short AVCollection_GetNode___Return_0
0x65C0C9: mov     eax, [ecx+24h]
0x65C0CC: pop     esi
0x65C0CD: retn    4
0x65C0D0: mov     ecx, [ecx+10h]; jumptable 0065C02A case 41
0x65C0D3: test    ecx, ecx
0x65C0D5: jz      AVCollection_GetNode___Return_0
0x65C0DB: mov     eax, [ecx+28h]
0x65C0DE: pop     esi
0x65C0DF: retn    4
0x65C0E2: mov     ecx, [ecx+10h]; jumptable 0065C02A case 33
0x65C0E5: test    ecx, ecx
0x65C0E7: jz      AVCollection_GetNode___Return_0
0x65C0ED: mov     eax, [ecx+2Ch]
0x65C0F0: pop     esi
0x65C0F1: retn    4
0x65C0F4: mov     ecx, [ecx+10h]; jumptable 0065C02A case 26
0x65C0F7: test    ecx, ecx
0x65C0F9: jz      AVCollection_GetNode___Return_0
0x65C0FF: mov     eax, [ecx+30h]
0x65C102: pop     esi
0x65C103: retn    4
0x65C106: mov     ecx, [ecx+10h]; jumptable 0065C02A case 5
0x65C109: test    ecx, ecx
0x65C10B: jz      AVCollection_GetNode___Return_0
0x65C111: mov     eax, [ecx+34h]
0x65C114: pop     esi
0x65C115: retn    4
0x65C118: mov     ecx, [ecx+10h]; jumptable 0065C02A case 7
0x65C11B: test    ecx, ecx
0x65C11D: jz      AVCollection_GetNode___Return_0
0x65C123: mov     eax, [ecx+38h]
0x65C126: pop     esi
0x65C127: retn    4
0x65C12A: mov     ecx, [ecx+10h]; jumptable 0065C02A case 0
0x65C12D: test    ecx, ecx
0x65C12F: jz      AVCollection_GetNode___Return_0
0x65C135: mov     eax, [ecx+3Ch]
0x65C138: pop     esi
0x65C139: retn    4
0x65C13C: mov     ecx, [ecx+10h]; jumptable 0065C02A case 4
0x65C13F: test    ecx, ecx
0x65C141: jz      AVCollection_GetNode___Return_0
0x65C147: mov     eax, [ecx+40h]
0x65C14A: pop     esi
0x65C14B: retn    4
0x65C14E: mov     ecx, [ecx+10h]; jumptable 0065C02A case 13
0x65C151: test    ecx, ecx
0x65C153: jz      AVCollection_GetNode___Return_0
0x65C159: mov     eax, [ecx+44h]
0x65C15C: pop     esi
0x65C15D: retn    4
0x65C160: test    ecx, ecx; jumptable 0065C02A default case, cases 1-3,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C162: mov     edx, ecx
0x65C164: jz      short loc_65C17D
0x65C166: mov     ecx, [edx]
0x65C168: test    ecx, ecx
0x65C16A: jz      short loc_65C17D
0x65C16C: test    esi, esi
0x65C16E: jnz     short loc_65C17D
0x65C170: cmp     [ecx], al
0x65C172: jnz     short loc_65C176
0x65C174: mov     esi, ecx
0x65C176: mov     edx, [edx+4]
0x65C179: test    edx, edx
0x65C17B: jnz     short loc_65C166
0x65C17D: mov     eax, esi
0x65C17F: pop     esi
0x65C180: retn    4

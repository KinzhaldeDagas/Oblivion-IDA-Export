0x4D1BA0: sub     esp, 8
0x4D1BA3: push    esi
0x4D1BA4: xor     al, al
0x4D1BA6: cmp     [esp+0Ch+arg_0], 0
0x4D1BAB: mov     esi, ecx
0x4D1BAD: mov     [esp+0Ch+var_4], esi
0x4D1BB1: mov     [esp+0Ch+var_7], al
0x4D1BB5: jz      loc_4D1DFF
0x4D1BBB: mov     cl, [esp+0Ch+arg_10]
0x4D1BBF: test    cl, cl
0x4D1BC1: jz      loc_4D1DFF
0x4D1BC7: movsx   eax, cl
0x4D1BCA: mov     edx, eax
0x4D1BCC: shr     edx, 2
0x4D1BCF: and     dl, 1
0x4D1BD2: push    ebx
0x4D1BD3: mov     [esp+10h+arg_10], dl
0x4D1BD7: mov     ebx, eax
0x4D1BD9: mov     edx, eax
0x4D1BDB: shr     ebx, 1
0x4D1BDD: shr     edx, 3
0x4D1BE0: shr     eax, 4
0x4D1BE3: push    ebp
0x4D1BE4: mov     ebp, [esp+14h+arg_8]
0x4D1BE8: and     dl, 1
0x4D1BEB: and     al, 1
0x4D1BED: and     bl, 1
0x4D1BF0: test    cl, 1
0x4D1BF3: push    edi
0x4D1BF4: mov     edi, [esp+18h+arg_4]
0x4D1BF8: mov     [esp+18h+var_6], dl
0x4D1BFC: mov     [esp+18h+var_5], al
0x4D1C00: jz      short loc_4D1C42
0x4D1C02: mov     eax, [esi+54h]
0x4D1C05: test    eax, eax
0x4D1C07: jz      short loc_4D1C1D
0x4D1C09: cmp     word ptr [eax+0B6h], 0
0x4D1C11: jbe     short loc_4D1C1D
0x4D1C13: mov     eax, [eax+0B0h]
0x4D1C19: mov     eax, [eax]
0x4D1C1B: jmp     short loc_4D1C1F
0x4D1C1D: xor     eax, eax
0x4D1C1F: fld     [esp+18h+arg_C]
0x4D1C23: push    0; char
0x4D1C25: push    eax; int
0x4D1C26: push    ecx
0x4D1C27: mov     ecx, [esp+24h+arg_0]
0x4D1C2B: fstp    [esp+24h+var_24]; float
0x4D1C2E: push    ebp; int
0x4D1C2F: push    edi; int
0x4D1C30: push    ecx; int
0x4D1C31: call    sub_481890
0x4D1C36: add     esp, 18h
0x4D1C39: test    al, al
0x4D1C3B: jz      short loc_4D1C42
0x4D1C3D: mov     [esp+18h+var_7], 1
0x4D1C42: test    bl, bl
0x4D1C44: jz      short loc_4D1C87
0x4D1C46: mov     eax, [esi+54h]
0x4D1C49: test    eax, eax
0x4D1C4B: jz      short loc_4D1C62
0x4D1C4D: cmp     word ptr [eax+0B6h], 1
0x4D1C55: jbe     short loc_4D1C62
0x4D1C57: mov     edx, [eax+0B0h]
0x4D1C5D: mov     eax, [edx+4]
0x4D1C60: jmp     short loc_4D1C64
0x4D1C62: xor     eax, eax
0x4D1C64: fld     [esp+18h+arg_C]
0x4D1C68: push    0; char
0x4D1C6A: push    eax; int
0x4D1C6B: mov     eax, [esp+20h+arg_0]
0x4D1C6F: push    ecx
0x4D1C70: fstp    [esp+24h+var_24]; float
0x4D1C73: push    ebp; int
0x4D1C74: push    edi; int
0x4D1C75: push    eax; int
0x4D1C76: call    sub_481890
0x4D1C7B: add     esp, 18h
0x4D1C7E: test    al, al
0x4D1C80: jz      short loc_4D1C87
0x4D1C82: mov     [esp+18h+var_7], 1
0x4D1C87: cmp     [esp+18h+arg_10], 0
0x4D1C8C: jnz     short loc_4D1CA0
0x4D1C8E: cmp     [esp+18h+var_6], 0
0x4D1C93: jnz     short loc_4D1CA0
0x4D1C95: cmp     [esp+18h+var_5], 0
0x4D1C9A: jz      loc_4D1DF8
0x4D1CA0: mov     edi, 2
0x4D1CA5: mov     esi, 8
0x4D1CAA: mov     [esp+18h+arg_8], 5
0x4D1CB2: cmp     [esp+18h+arg_10], 0
0x4D1CB7: jz      short loc_4D1D1B
0x4D1CB9: mov     ecx, [esp+18h+var_4]
0x4D1CBD: mov     eax, [ecx+54h]
0x4D1CC0: test    eax, eax
0x4D1CC2: jz      short loc_4D1CF0
0x4D1CC4: movzx   edx, word ptr [eax+0B6h]
0x4D1CCB: cmp     edx, edi
0x4D1CCD: jbe     short loc_4D1CF0
0x4D1CCF: mov     eax, [eax+0B0h]
0x4D1CD5: mov     eax, [esi+eax]
0x4D1CD8: test    eax, eax
0x4D1CDA: jz      short loc_4D1CF0
0x4D1CDC: cmp     word ptr [eax+0B6h], 0
0x4D1CE4: jbe     short loc_4D1CF0
0x4D1CE6: mov     ecx, [eax+0B0h]
0x4D1CEC: mov     eax, [ecx]
0x4D1CEE: jmp     short loc_4D1CF2
0x4D1CF0: xor     eax, eax
0x4D1CF2: fld     [esp+18h+arg_C]
0x4D1CF6: mov     ebx, [esp+18h+arg_4]
0x4D1CFA: mov     edx, [esp+18h+arg_0]
0x4D1CFE: push    0; char
0x4D1D00: push    eax; int
0x4D1D01: push    ecx
0x4D1D02: fstp    [esp+24h+var_24]; float
0x4D1D05: push    ebp; int
0x4D1D06: push    ebx; int
0x4D1D07: push    edx; int
0x4D1D08: call    sub_481890
0x4D1D0D: add     esp, 18h
0x4D1D10: test    al, al
0x4D1D12: jz      short loc_4D1D1F
0x4D1D14: mov     [esp+18h+var_7], 1
0x4D1D19: jmp     short loc_4D1D1F
0x4D1D1B: mov     ebx, [esp+18h+arg_4]
0x4D1D1F: cmp     [esp+18h+var_6], 0
0x4D1D24: jz      short loc_4D1D83
0x4D1D26: mov     eax, [esp+18h+var_4]
0x4D1D2A: mov     eax, [eax+54h]
0x4D1D2D: test    eax, eax
0x4D1D2F: jz      short loc_4D1D5E
0x4D1D31: movzx   ecx, word ptr [eax+0B6h]
0x4D1D38: cmp     ecx, edi
0x4D1D3A: jbe     short loc_4D1D5E
0x4D1D3C: mov     edx, [eax+0B0h]
0x4D1D42: mov     eax, [esi+edx]
0x4D1D45: test    eax, eax
0x4D1D47: jz      short loc_4D1D5E
0x4D1D49: cmp     word ptr [eax+0B6h], 2
0x4D1D51: jbe     short loc_4D1D5E
0x4D1D53: mov     eax, [eax+0B0h]
0x4D1D59: mov     eax, [eax+8]
0x4D1D5C: jmp     short loc_4D1D60
0x4D1D5E: xor     eax, eax
0x4D1D60: fld     [esp+18h+arg_C]
0x4D1D64: push    0; char
0x4D1D66: push    eax; int
0x4D1D67: push    ecx
0x4D1D68: mov     ecx, [esp+24h+arg_0]
0x4D1D6C: fstp    [esp+24h+var_24]; float
0x4D1D6F: push    ebp; int
0x4D1D70: push    ebx; int
0x4D1D71: push    ecx; int
0x4D1D72: call    sub_481890
0x4D1D77: add     esp, 18h
0x4D1D7A: test    al, al
0x4D1D7C: jz      short loc_4D1D83
0x4D1D7E: mov     [esp+18h+var_7], 1
0x4D1D83: cmp     [esp+18h+var_5], 0
0x4D1D88: jz      short loc_4D1DE7
0x4D1D8A: mov     edx, [esp+18h+var_4]
0x4D1D8E: mov     eax, [edx+54h]
0x4D1D91: test    eax, eax
0x4D1D93: jz      short loc_4D1DC2
0x4D1D95: movzx   ecx, word ptr [eax+0B6h]
0x4D1D9C: cmp     ecx, edi
0x4D1D9E: jbe     short loc_4D1DC2
0x4D1DA0: mov     edx, [eax+0B0h]
0x4D1DA6: mov     eax, [esi+edx]
0x4D1DA9: test    eax, eax
0x4D1DAB: jz      short loc_4D1DC2
0x4D1DAD: cmp     word ptr [eax+0B6h], 3
0x4D1DB5: jbe     short loc_4D1DC2
0x4D1DB7: mov     eax, [eax+0B0h]
0x4D1DBD: mov     eax, [eax+0Ch]
0x4D1DC0: jmp     short loc_4D1DC4
0x4D1DC2: xor     eax, eax
0x4D1DC4: fld     [esp+18h+arg_C]
0x4D1DC8: push    0; char
0x4D1DCA: push    eax; int
0x4D1DCB: push    ecx
0x4D1DCC: mov     ecx, [esp+24h+arg_0]
0x4D1DD0: fstp    [esp+24h+var_24]; float
0x4D1DD3: push    ebp; int
0x4D1DD4: push    ebx; int
0x4D1DD5: push    ecx; int
0x4D1DD6: call    sub_481890
0x4D1DDB: add     esp, 18h
0x4D1DDE: test    al, al
0x4D1DE0: jz      short loc_4D1DE7
0x4D1DE2: mov     [esp+18h+var_7], 1
0x4D1DE7: add     esi, 4
0x4D1DEA: add     edi, 1
0x4D1DED: sub     [esp+18h+arg_8], 1
0x4D1DF2: jnz     loc_4D1CB2
0x4D1DF8: mov     al, [esp+18h+var_7]
0x4D1DFC: pop     edi
0x4D1DFD: pop     ebp
0x4D1DFE: pop     ebx
0x4D1DFF: pop     esi
0x4D1E00: add     esp, 8
0x4D1E03: retn    14h

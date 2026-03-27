0x7C1B50: sub     esp, 10h
0x7C1B53: push    ebx
0x7C1B54: push    ebp
0x7C1B55: mov     ebp, [esp+18h+a2]
0x7C1B59: mov     eax, [ebp+0]
0x7C1B5C: mov     edx, [eax+7Ch]
0x7C1B5F: push    esi
0x7C1B60: mov     esi, ecx
0x7C1B62: push    edi
0x7C1B63: mov     ecx, ebp
0x7C1B65: mov     [esp+20h+var_C], esi
0x7C1B69: mov     [esp+20h+var_10], 0
0x7C1B71: call    edx
0x7C1B73: mov     edx, [eax]
0x7C1B75: mov     ecx, eax
0x7C1B77: mov     eax, [edx+4Ch]
0x7C1B7A: push    0
0x7C1B7C: call    eax
0x7C1B7E: mov     edx, [ebp+0]
0x7C1B81: mov     [esp+20h+var_4], eax
0x7C1B85: mov     eax, [edx+7Ch]
0x7C1B88: mov     ecx, ebp
0x7C1B8A: call    eax
0x7C1B8C: mov     edx, [eax]
0x7C1B8E: mov     ecx, eax
0x7C1B90: mov     eax, [edx+50h]
0x7C1B93: push    0
0x7C1B95: call    eax
0x7C1B97: mov     ebx, [esp+20h+a6]
0x7C1B9B: test    ebx, ebx
0x7C1B9D: mov     [esp+20h+var_8], eax
0x7C1BA1: jz      loc_7C1C74
0x7C1BA7: test    byte ptr [esp+20h+a5], 8
0x7C1BAC: jnz     loc_7C1C74
0x7C1BB2: lea     eax, [ebx-14h]; switch 97 cases
0x7C1BB5: cmp     eax, 60h
0x7C1BB8: ja      NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1BBE: movzx   ecx, ds:byte_7C1E70[eax]
0x7C1BC5: jmp     ds:jpt_7C1BC5[ecx*4]; switch jump
0x7C1BCC: cmp     byte ptr ds:0B42E98h, 0; jumptable 007C1BC5 case 23
0x7C1BD3: jz      NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1BD9: jmp     loc_7C1C74
0x7C1BDE: cmp     byte ptr ds:0B42E99h, 0; jumptable 007C1BC5 case 24
0x7C1BE5: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1BE7: jmp     loc_7C1C74
0x7C1BEC: cmp     byte ptr ds:0B42E9Ah, 0; jumptable 007C1BC5 case 25
0x7C1BF3: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1BF5: jmp     short loc_7C1C74
0x7C1BF7: cmp     byte ptr ds:0B42E9Bh, 0; jumptable 007C1BC5 case 26
0x7C1BFE: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C00: jmp     short loc_7C1C74
0x7C1C02: cmp     byte ptr ds:0B42E9Ch, 0; jumptable 007C1BC5 case 81
0x7C1C09: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C0B: jmp     short loc_7C1C74
0x7C1C0D: cmp     byte ptr ds:0B42E9Dh, 0; jumptable 007C1BC5 case 20
0x7C1C14: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C16: jmp     short loc_7C1C74
0x7C1C18: cmp     byte ptr ds:0B42E9Eh, 0; jumptable 007C1BC5 case 21
0x7C1C1F: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C21: jmp     short loc_7C1C74
0x7C1C23: cmp     byte ptr ds:0B42E9Fh, 0; jumptable 007C1BC5 case 22
0x7C1C2A: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C2C: jmp     short loc_7C1C74
0x7C1C2E: cmp     byte ptr ds:0B42EA0h, 0; jumptable 007C1BC5 case 114
0x7C1C35: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C37: jmp     short loc_7C1C74
0x7C1C39: cmp     byte ptr ds:0B42EA1h, 0; jumptable 007C1BC5 case 113
0x7C1C40: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C42: jmp     short loc_7C1C74
0x7C1C44: cmp     byte ptr ds:0B42EA2h, 0; jumptable 007C1BC5 case 36
0x7C1C4B: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C4D: jmp     short loc_7C1C74
0x7C1C4F: cmp     byte ptr ds:0B42EA3h, 0; jumptable 007C1BC5 case 116
0x7C1C56: jz      short NiRenderer_GetRenderedSurface___def_7C1BC5; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C58: jmp     short loc_7C1C74
0x7C1C5A: cmp     byte ptr ds:0B42EA4h, 0; jumptable 007C1BC5 case 50
0x7C1C61: jnz     short loc_7C1C74
0x7C1C63: cmp     ebx, 24h ; '$'; jumptable 007C1BC5 default case, cases 27-35,37-49,51-80,82-112,115
0x7C1C66: jnz     short loc_7C1C74
0x7C1C68: mov     [esp+20h+a6], 71h ; 'q'
0x7C1C70: mov     ebx, [esp+20h+a6]
0x7C1C74: mov     edi, [esi+4]
0x7C1C77: test    edi, edi
0x7C1C79: mov     [esp+20h+a2], edi
0x7C1C7D: jz      loc_7C1D46
0x7C1C83: cmp     [esp+20h+var_10], 0
0x7C1C88: jnz     loc_7C1DC5
0x7C1C8E: mov     esi, [edi+8]
0x7C1C91: mov     eax, [esi]
0x7C1C93: mov     ecx, [eax+20h]
0x7C1C96: test    ecx, ecx
0x7C1C98: jz      short loc_7C1CA3
0x7C1C9A: mov     edx, [ecx]
0x7C1C9C: mov     eax, [edx+4Ch]
0x7C1C9F: call    eax
0x7C1CA1: jmp     short loc_7C1CA5
0x7C1CA3: xor     eax, eax
0x7C1CA5: mov     ecx, [esp+20h+a3]
0x7C1CA9: cmp     eax, ecx
0x7C1CAB: jz      short loc_7C1CCF
0x7C1CAD: test    ecx, ecx
0x7C1CAF: jnz     loc_7C1D2E
0x7C1CB5: mov     eax, [esi]
0x7C1CB7: mov     ecx, [eax+20h]
0x7C1CBA: test    ecx, ecx
0x7C1CBC: jz      short loc_7C1CC7
0x7C1CBE: mov     edx, [ecx]
0x7C1CC0: mov     eax, [edx+4Ch]
0x7C1CC3: call    eax
0x7C1CC5: jmp     short loc_7C1CC9
0x7C1CC7: xor     eax, eax
0x7C1CC9: cmp     eax, [esp+20h+var_4]
0x7C1CCD: jnz     short loc_7C1D2E
0x7C1CCF: mov     eax, [esi]
0x7C1CD1: mov     ecx, [eax+20h]
0x7C1CD4: test    ecx, ecx
0x7C1CD6: jz      short loc_7C1CE1
0x7C1CD8: mov     edx, [ecx]
0x7C1CDA: mov     eax, [edx+50h]
0x7C1CDD: call    eax
0x7C1CDF: jmp     short loc_7C1CE3
0x7C1CE1: xor     eax, eax
0x7C1CE3: mov     ecx, [esp+20h+a4]
0x7C1CE7: cmp     eax, ecx
0x7C1CE9: jz      short loc_7C1D09
0x7C1CEB: test    ecx, ecx
0x7C1CED: jnz     short loc_7C1D2E
0x7C1CEF: mov     eax, [esi]
0x7C1CF1: mov     ecx, [eax+20h]
0x7C1CF4: test    ecx, ecx
0x7C1CF6: jz      short loc_7C1D01
0x7C1CF8: mov     edx, [ecx]
0x7C1CFA: mov     eax, [edx+50h]
0x7C1CFD: call    eax
0x7C1CFF: jmp     short loc_7C1D03
0x7C1D01: xor     eax, eax
0x7C1D03: cmp     eax, [esp+20h+var_8]
0x7C1D07: jnz     short loc_7C1D2E
0x7C1D09: cmp     [esi+4], ebx
0x7C1D0C: jnz     short loc_7C1D2E
0x7C1D0E: mov     ecx, [esp+20h+a7]
0x7C1D12: cmp     [esi+8], ecx
0x7C1D15: jnz     short loc_7C1D2E
0x7C1D17: mov     edx, [esi+0Ch]
0x7C1D1A: mov     eax, [esp+20h+a5]
0x7C1D1E: or      edx, 22h
0x7C1D21: or      eax, 22h
0x7C1D24: cmp     edx, eax
0x7C1D26: jnz     short loc_7C1D2E
0x7C1D28: mov     [esp+20h+var_10], esi
0x7C1D2C: jmp     short loc_7C1D30
0x7C1D2E: mov     edi, [edi]
0x7C1D30: test    edi, edi
0x7C1D32: jnz     loc_7C1C83
0x7C1D38: cmp     [esp+20h+var_10], edi
0x7C1D3C: mov     [esp+20h+a2], edi
0x7C1D40: jnz     loc_7C1DC9
0x7C1D46: push    14h; Size
0x7C1D48: call    FormHeapAlloc
0x7C1D4D: add     esp, 4
0x7C1D50: test    eax, eax
0x7C1D52: jz      short loc_7C1D5E
0x7C1D54: mov     dword ptr [eax], 0
0x7C1D5A: mov     esi, eax
0x7C1D5C: jmp     short loc_7C1D60
0x7C1D5E: xor     esi, esi
0x7C1D60: mov     ecx, [esp+20h+a5]
0x7C1D64: mov     eax, [esp+20h+a7]
0x7C1D68: mov     [esi+0Ch], ecx
0x7C1D6B: mov     ecx, [esp+20h+a3]
0x7C1D6F: test    ecx, ecx
0x7C1D71: mov     [esi+4], ebx
0x7C1D74: mov     ebx, 1
0x7C1D79: mov     edi, esi
0x7C1D7B: mov     [esi+8], eax
0x7C1D7E: mov     [esi+10h], bl
0x7C1D81: jle     short loc_7C1D9C
0x7C1D83: cmp     [esp+20h+a4], 0
0x7C1D88: jle     short loc_7C1D9C
0x7C1D8A: mov     edx, [esp+20h+a5]
0x7C1D8E: push    edx
0x7C1D8F: mov     edx, [esp+24h+a4]
0x7C1D93: push    eax
0x7C1D94: mov     eax, [esp+28h+a6]
0x7C1D98: push    eax
0x7C1D99: push    edx
0x7C1D9A: jmp     short loc_7C1DB0
0x7C1D9C: mov     ecx, [esp+20h+a5]
0x7C1DA0: mov     edx, [esp+20h+a6]
0x7C1DA4: push    ecx
0x7C1DA5: mov     ecx, [esp+24h+var_4]
0x7C1DA9: push    eax
0x7C1DAA: mov     eax, [esp+28h+var_8]
0x7C1DAE: push    edx
0x7C1DAF: push    eax
0x7C1DB0: push    ecx
0x7C1DB1: mov     ecx, [esp+34h+var_C]
0x7C1DB5: push    ebp
0x7C1DB6: call    sub_7C1430
0x7C1DBB: push    eax; a2
0x7C1DBC: mov     ecx, esi; this
0x7C1DBE: call    NiSmartPointer_Set??
0x7C1DC3: jmp     short loc_7C1DE5
0x7C1DC5: mov     [esp+20h+a2], edi
0x7C1DC9: mov     ecx, [esp+20h+var_C]
0x7C1DCD: lea     edx, [esp+20h+a2]
0x7C1DD1: push    edx
0x7C1DD2: call    sub_7AA860
0x7C1DD7: mov     eax, [esp+20h+var_10]
0x7C1DDB: mov     ebx, 1
0x7C1DE0: mov     [eax+10h], bl
0x7C1DE3: mov     edi, eax
0x7C1DE5: mov     esi, [esp+20h+var_C]
0x7C1DE9: mov     edx, [esi+10h]
0x7C1DEC: mov     eax, [edx+4]
0x7C1DEF: add     esi, 10h
0x7C1DF2: mov     ecx, esi
0x7C1DF4: call    eax
0x7C1DF6: mov     [eax+8], edi
0x7C1DF9: mov     dword ptr [eax], 0
0x7C1DFF: mov     ecx, [esi+8]
0x7C1E02: mov     [eax+4], ecx
0x7C1E05: mov     ecx, [esi+8]
0x7C1E08: test    ecx, ecx
0x7C1E0A: jz      short loc_7C1E20
0x7C1E0C: mov     [ecx], eax
0x7C1E0E: add     [esi+0Ch], ebx
0x7C1E11: mov     [esi+8], eax
0x7C1E14: mov     eax, [edi]
0x7C1E16: pop     edi
0x7C1E17: pop     esi
0x7C1E18: pop     ebp
0x7C1E19: pop     ebx
0x7C1E1A: add     esp, 10h
0x7C1E1D: retn    18h
0x7C1E20: add     [esi+0Ch], ebx
0x7C1E23: mov     [esi+4], eax
0x7C1E26: mov     [esi+8], eax
0x7C1E29: mov     eax, [edi]
0x7C1E2B: pop     edi
0x7C1E2C: pop     esi
0x7C1E2D: pop     ebp
0x7C1E2E: pop     ebx
0x7C1E2F: add     esp, 10h
0x7C1E32: retn    18h

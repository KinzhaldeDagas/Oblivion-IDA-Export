0x4C00B0: push    ebx
0x4C00B1: push    esi
0x4C00B2: push    edi
0x4C00B3: mov     edi, [esp+0Ch+arg_0]
0x4C00B7: movzx   eax, byte ptr [edi+4]
0x4C00BB: push    eax
0x4C00BC: mov     esi, ecx
0x4C00BE: xor     bl, bl
0x4C00C0: call    sub_4CA010
0x4C00C5: add     esp, 4
0x4C00C8: test    al, al
0x4C00CA: jz      loc_4C0166
0x4C00D0: push    ebp
0x4C00D1: push    0; int
0x4C00D3: push    offset ??_R0?AVTESChildCell@@@8; struct TypeDescriptor *
0x4C00D8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C00DD: push    0; int
0x4C00DF: push    edi; void *
0x4C00E0: call    OblivionDynamicCast
0x4C00E5: mov     edx, [eax]
0x4C00E7: mov     ecx, eax
0x4C00E9: mov     eax, [edx]
0x4C00EB: add     esp, 14h
0x4C00EE: call    eax
0x4C00F0: mov     edx, [esi+18h]
0x4C00F3: add     esi, 18h
0x4C00F6: mov     ebp, eax
0x4C00F8: mov     eax, [edx]
0x4C00FA: mov     ecx, esi
0x4C00FC: call    eax
0x4C00FE: cmp     ebp, eax
0x4C0100: jnz     short loc_4C014D
0x4C0102: movzx   eax, byte ptr [edi+4]
0x4C0106: cmp     eax, 31h ; '1'
0x4C0109: jl      short loc_4C0180
0x4C010B: cmp     eax, 33h ; '3'
0x4C010E: jle     short loc_4C011E
0x4C0110: cmp     eax, 34h ; '4'
0x4C0113: jnz     short loc_4C0180
0x4C0115: pop     ebp
0x4C0116: pop     edi
0x4C0117: pop     esi
0x4C0118: mov     al, 1
0x4C011A: pop     ebx
0x4C011B: retn    4
0x4C011E: push    0; int
0x4C0120: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4C0125: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C012A: push    0; int
0x4C012C: push    edi; void *
0x4C012D: call    OblivionDynamicCast
0x4C0132: add     esp, 14h
0x4C0135: test    eax, eax
0x4C0137: jz      short loc_4C0144
0x4C0139: mov     ecx, eax; this
0x4C013B: call    TESObjectREFR_IsPersistent?
0x4C0140: test    al, al
0x4C0142: jz      short loc_4C0115
0x4C0144: pop     ebp
0x4C0145: pop     edi
0x4C0146: pop     esi
0x4C0147: xor     al, al
0x4C0149: pop     ebx
0x4C014A: retn    4
0x4C014D: mov     edx, [esi]
0x4C014F: mov     eax, [edx]
0x4C0151: mov     ecx, esi
0x4C0153: call    eax
0x4C0155: mov     edx, [eax]
0x4C0157: mov     ecx, eax
0x4C0159: mov     eax, [edx+34h]
0x4C015C: push    ebp
0x4C015D: call    eax
0x4C015F: pop     ebp
0x4C0160: pop     edi
0x4C0161: pop     esi
0x4C0162: pop     ebx
0x4C0163: retn    4
0x4C0166: mov     edx, [esi+18h]
0x4C0169: mov     eax, [edx]
0x4C016B: lea     ecx, [esi+18h]
0x4C016E: call    eax
0x4C0170: mov     edx, [eax]
0x4C0172: mov     ecx, eax
0x4C0174: mov     eax, [edx+34h]
0x4C0177: push    edi
0x4C0178: call    eax
0x4C017A: pop     edi
0x4C017B: pop     esi
0x4C017C: pop     ebx
0x4C017D: retn    4
0x4C0180: pop     ebp
0x4C0181: pop     edi
0x4C0182: pop     esi
0x4C0183: mov     al, bl
0x4C0185: pop     ebx
0x4C0186: retn    4

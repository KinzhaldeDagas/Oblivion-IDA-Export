0x584F10: sub     esp, 11Ch
0x584F16: mov     eax, ds:0B30AACh
0x584F1B: xor     eax, esp
0x584F1D: mov     [esp+11Ch+var_4], eax
0x584F24: mov     eax, [esp+11Ch+arg_4]
0x584F2B: push    ebx
0x584F2C: xor     ebx, ebx
0x584F2E: cmp     eax, ebx
0x584F30: push    esi
0x584F31: push    edi
0x584F32: mov     edi, [esp+128h+arg_0]
0x584F39: mov     [esp+128h+var_115], bl
0x584F3D: jnz     loc_584FE1
0x584F43: push    4
0x584F45: push    2800h
0x584F4A: push    ebx
0x584F4B: push    edi
0x584F4C: call    sub_431130
0x584F51: mov     esi, eax
0x584F53: add     esp, 10h
0x584F56: cmp     esi, ebx
0x584F58: jz      short loc_584FA9
0x584F5A: cmp     [esi+24h], bl
0x584F5D: mov     eax, [esi]
0x584F5F: mov     ecx, esi
0x584F61: jz      short loc_584FA3
0x584F63: mov     edx, [eax+1Ch]
0x584F66: call    edx
0x584F68: mov     edi, eax
0x584F6A: push    edi; Size
0x584F6B: mov     [esp+12Ch+var_10C], edi
0x584F6F: call    FormHeapAlloc
0x584F74: mov     edx, [esi+4]
0x584F77: push    1
0x584F79: lea     ecx, [esp+130h+var_114]
0x584F7D: push    ecx
0x584F7E: push    edi
0x584F7F: push    eax
0x584F80: push    esi
0x584F81: mov     [esp+140h+var_110], eax
0x584F85: mov     [esp+140h+var_115], 1
0x584F8A: mov     [esp+140h+var_114], 1
0x584F92: call    edx
0x584F94: mov     eax, [esi]
0x584F96: mov     edx, [eax]
0x584F98: add     esp, 18h
0x584F9B: push    1
0x584F9D: mov     ecx, esi
0x584F9F: call    edx
0x584FA1: jmp     short loc_584FF9
0x584FA3: mov     edx, [eax]
0x584FA5: push    1
0x584FA7: call    edx
0x584FA9: push    edi
0x584FAA: lea     eax, [esp+12Ch+OutputString]
0x584FAE: push    offset aXmlErrorOpenin; "XML : error opening XML file : %s"
0x584FB3: push    eax
0x584FB4: call    __sprintf
0x584FB9: add     esp, 0Ch
0x584FBC: lea     ecx, [esp+128h+OutputString]
0x584FC0: push    ecx; lpOutputString
0x584FC1: call    dword ptr ds:0A28144h
0x584FC7: pop     edi
0x584FC8: pop     esi
0x584FC9: xor     eax, eax
0x584FCB: pop     ebx
0x584FCC: mov     ecx, [esp+11Ch+var_4]
0x584FD3: xor     ecx, esp
0x584FD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x584FDA: add     esp, 11Ch
0x584FE0: retn
0x584FE1: mov     [esp+128h+var_110], eax
0x584FE5: lea     edx, [eax+1]
0x584FE8: mov     cl, [eax]
0x584FEA: add     eax, 1
0x584FED: cmp     cl, bl
0x584FEF: jnz     short loc_584FE8
0x584FF1: sub     eax, edx
0x584FF3: mov     [esp+128h+var_10C], eax
0x584FF7: mov     edi, eax
0x584FF9: push    ebp
0x584FFA: push    edi; Size
0x584FFB: call    FormHeapAlloc
0x585000: mov     ebp, eax
0x585002: add     esp, 4
0x585005: xor     esi, esi
0x585007: xor     al, al
0x585009: xor     dl, dl
0x58500B: xor     edi, edi
0x58500D: cmp     [esp+12Ch+var_10C], ebx
0x585011: mov     [esp+12Ch+var_114], ebx
0x585015: mov     [esp+12Ch+var_117], bl
0x585019: mov     [esp+12Ch+var_116], bl
0x58501D: mov     [esp+12Ch+var_118], bl
0x585021: mov     [esp+12Ch+var_119], bl
0x585025: jbe     short loc_58506E
0x585027: mov     ecx, [esp+12Ch+var_110]
0x58502B: mov     cl, [edi+ecx]
0x58502E: cmp     cl, bl
0x585030: jz      short loc_58506E
0x585032: cmp     cl, 9
0x585035: jz      short loc_585065
0x585037: cmp     cl, 0Ah
0x58503A: jz      short loc_585065
0x58503C: cmp     cl, 0Dh
0x58503F: jz      short loc_585065
0x585041: cmp     [esp+12Ch+var_118], 0
0x585046: jz      short loc_5850A0
0x585048: cmp     dl, 2Dh ; '-'
0x58504B: jnz     short loc_58505B
0x58504D: cmp     al, dl
0x58504F: jnz     short loc_58505B
0x585051: cmp     cl, 3Eh ; '>'
0x585054: jnz     short loc_58505B
0x585056: mov     [esp+12Ch+var_118], 0
0x58505B: mov     [esp+12Ch+var_119], dl
0x58505F: mov     dl, al
0x585061: mov     al, cl
0x585063: xor     ebx, ebx
0x585065: add     edi, 1
0x585068: cmp     edi, [esp+12Ch+var_10C]
0x58506C: jb      short loc_585027
0x58506E: cmp     [esp+12Ch+var_115], bl
0x585072: mov     [esi+ebp], bl
0x585075: jz      short loc_585084
0x585077: mov     edx, [esp+12Ch+var_110]
0x58507B: push    edx
0x58507C: call    FormHeapFree
0x585081: add     esp, 4
0x585084: push    8; Size
0x585086: call    FormHeapAlloc
0x58508B: add     esp, 4
0x58508E: cmp     eax, ebx
0x585090: jz      loc_58516E
0x585096: mov     [eax], esi
0x585098: mov     [eax+4], ebp
0x58509B: jmp     loc_585170
0x5850A0: cmp     cl, 20h ; ' '
0x5850A3: jnz     short loc_5850CF
0x5850A5: cmp     al, cl
0x5850A7: jz      short loc_585063
0x5850A9: cmp     al, 3Eh ; '>'
0x5850AB: jz      short loc_585063
0x5850AD: cmp     [esp+12Ch+var_114], 186A0h
0x5850B5: mov     ecx, [esp+12Ch+var_110]
0x5850B9: jbe     short loc_585133
0x5850BB: cmp     [esp+12Ch+var_117], 0
0x5850C0: jz      short loc_585124
0x5850C2: cmp     byte ptr [edi+ecx], 3Eh ; '>'
0x5850C6: jnz     short loc_585124
0x5850C8: mov     [esp+12Ch+var_116], 1
0x5850CD: jmp     short loc_585133
0x5850CF: cmp     al, 20h ; ' '
0x5850D1: jnz     short loc_5850E2
0x5850D3: cmp     cl, 3Ch ; '<'
0x5850D6: jz      short loc_5850DD
0x5850D8: cmp     cl, 3Eh ; '>'
0x5850DB: jnz     short loc_5850E2
0x5850DD: sub     esi, 1
0x5850E0: jmp     short loc_5850AD
0x5850E2: cmp     dl, 20h ; ' '
0x5850E5: jnz     short loc_5850F9
0x5850E7: cmp     al, 2Fh ; '/'
0x5850E9: jnz     short loc_5850F9
0x5850EB: cmp     cl, 3Eh ; '>'
0x5850EE: jnz     short loc_5850F9
0x5850F0: sub     esi, 1
0x5850F3: mov     [esi+ebp-1], al
0x5850F7: jmp     short loc_5850AD
0x5850F9: cmp     [esp+12Ch+var_119], 3Ch ; '<'
0x5850FE: jnz     short loc_5850AD
0x585100: cmp     dl, 21h ; '!'
0x585103: jnz     short loc_5850AD
0x585105: cmp     al, 2Dh ; '-'
0x585107: jnz     short loc_5850AD
0x585109: cmp     cl, al
0x58510B: jnz     short loc_5850AD
0x58510D: xor     ebx, ebx
0x58510F: xor     al, al
0x585111: xor     dl, dl
0x585113: mov     [esp+12Ch+var_119], bl
0x585117: sub     esi, 3
0x58511A: mov     [esp+12Ch+var_118], 1
0x58511F: jmp     loc_585065
0x585124: cmp     al, 3Ch ; '<'
0x585126: jnz     short loc_585133
0x585128: cmp     byte ptr [edi+ecx], 2Fh ; '/'
0x58512C: jnz     short loc_585133
0x58512E: mov     [esp+12Ch+var_117], 1
0x585133: mov     bl, [edi+ecx]
0x585136: add     [esp+12Ch+var_114], 1
0x58513B: mov     [esi+ebp], bl
0x58513E: xor     ebx, ebx
0x585140: add     esi, 1
0x585143: cmp     [esp+12Ch+var_116], bl
0x585147: mov     [esp+12Ch+var_119], dl
0x58514B: mov     dl, al
0x58514D: mov     al, [edi+ecx]
0x585150: jz      loc_585065
0x585156: mov     byte ptr [esi+ebp], 0Ah
0x58515A: mov     [esp+12Ch+var_117], bl
0x58515E: mov     [esp+12Ch+var_116], bl
0x585162: add     esi, 1
0x585165: mov     [esp+12Ch+var_114], ebx
0x585169: jmp     loc_585065
0x58516E: xor     eax, eax
0x585170: mov     ecx, [esp+12Ch+var_4]
0x585177: pop     ebp
0x585178: pop     edi
0x585179: pop     esi
0x58517A: pop     ebx
0x58517B: xor     ecx, esp
0x58517D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x585182: add     esp, 11Ch
0x585188: retn

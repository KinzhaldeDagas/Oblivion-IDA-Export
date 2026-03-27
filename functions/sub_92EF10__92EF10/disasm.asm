0x92EF10: mov     edx, [esp+arg_C]
0x92EF14: sub     esp, 1Ch
0x92EF17: push    ebx
0x92EF18: mov     ebx, [esp+20h+arg_8]
0x92EF1C: mov     ecx, [ebx+4]
0x92EF1F: test    ecx, ecx
0x92EF21: push    ebp
0x92EF22: push    esi
0x92EF23: push    edi
0x92EF24: jnz     short loc_92EF31
0x92EF26: mov     eax, [edx]
0x92EF28: mov     eax, [eax+4]
0x92EF2B: mov     [esp+2Ch+var_1C], eax
0x92EF2F: jmp     short loc_92EF6A
0x92EF31: mov     eax, [edx+4]
0x92EF34: test    eax, eax
0x92EF36: jnz     short loc_92EF43
0x92EF38: mov     eax, [ebx]
0x92EF3A: mov     eax, [eax+4]
0x92EF3D: mov     [esp+2Ch+var_1C], eax
0x92EF41: jmp     short loc_92EF6A
0x92EF43: mov     eax, [edx]
0x92EF45: fld     dword ptr [eax+4]
0x92EF48: mov     eax, [ebx]
0x92EF4A: fld     dword ptr [eax+4]
0x92EF4D: fst     [esp+2Ch+var_18]
0x92EF51: fcomp   st(1)
0x92EF53: fnstsw  ax
0x92EF55: test    ah, 5
0x92EF58: jp      short loc_92EF66
0x92EF5A: mov     eax, [esp+2Ch+var_18]
0x92EF5E: fstp    st
0x92EF60: mov     [esp+2Ch+var_1C], eax
0x92EF64: jmp     short loc_92EF6A
0x92EF66: fstp    [esp+2Ch+var_1C]
0x92EF6A: mov     edi, [esp+2Ch+arg_4]
0x92EF6E: mov     ebp, [edi+4]
0x92EF71: mov     esi, [esp+2Ch+arg_10]
0x92EF75: xor     eax, eax
0x92EF77: test    ecx, ecx
0x92EF79: mov     [esp+2Ch+arg_4], ebp
0x92EF7D: mov     [esp+2Ch+var_18], eax
0x92EF81: jle     loc_92F061
0x92EF87: jmp     short loc_92EF90
0x92EF89: mov     edx, [esp+2Ch+arg_C]
0x92EF8D: lea     ecx, [ecx+0]
0x92EF90: mov     ecx, [ebx]
0x92EF92: fld     dword ptr [ecx+eax*8+4]
0x92EF96: lea     ecx, [ecx+eax*8]
0x92EF99: fsub    [esp+2Ch+var_1C]
0x92EF9D: mov     eax, [esp+2Ch+arg_0]
0x92EFA1: fld     st
0x92EFA3: fcomp   dword ptr [eax]
0x92EFA5: fnstsw  ax
0x92EFA7: test    ah, 41h
0x92EFAA: jz      loc_92F186
0x92EFB0: mov     ebx, [ecx]
0x92EFB2: fadd    dword ptr [edi+10h]
0x92EFB5: mov     ecx, [edi]
0x92EFB7: movzx   edx, word ptr [ecx]
0x92EFBA: mov     eax, [esi+4]
0x92EFBD: fstp    [esp+2Ch+var_4]
0x92EFC1: xor     ecx, ecx
0x92EFC3: test    eax, eax
0x92EFC5: mov     [esp+2Ch+var_8], edx
0x92EFC9: jle     short loc_92F007
0x92EFCB: mov     eax, [esi]
0x92EFCD: lea     ecx, [ecx+0]
0x92EFD0: mov     ebp, [eax]
0x92EFD2: mov     dx, [ebx]
0x92EFD5: cmp     [ebp+0], dx
0x92EFD9: jnz     short loc_92EFF8
0x92EFDB: mov     edx, [eax+4]
0x92EFDE: mov     dx, [edx]
0x92EFE1: mov     ebp, [esp+2Ch+arg_4]
0x92EFE5: cmp     dx, [ebp+0]
0x92EFE9: jnz     short loc_92EFF8
0x92EFEB: mov     edx, [esp+2Ch+var_8]
0x92EFEF: cmp     [eax+0Ch], edx
0x92EFF2: jz      loc_92F154
0x92EFF8: mov     edx, [esi+4]
0x92EFFB: inc     ecx
0x92EFFC: add     eax, 14h
0x92EFFF: cmp     ecx, edx
0x92F001: jl      short loc_92EFD0
0x92F003: mov     ebp, [esp+2Ch+arg_4]
0x92F007: mov     eax, [esi+8]
0x92F00A: mov     ecx, [esi+4]
0x92F00D: and     eax, 3FFFFFFFh
0x92F012: cmp     ecx, eax
0x92F014: jnz     short loc_92F021
0x92F016: push    14h
0x92F018: push    esi
0x92F019: call    sub_8A6EE0
0x92F01E: add     esp, 8
0x92F021: mov     eax, [esi+4]
0x92F024: mov     edx, [esi]
0x92F026: lea     ecx, [eax+eax*4]
0x92F029: lea     eax, [edx+ecx*4]
0x92F02C: mov     ecx, [esp+2Ch+var_8]
0x92F030: mov     edx, [esp+2Ch+var_4]
0x92F034: mov     [eax], ebx
0x92F036: mov     [eax+4], ebp
0x92F039: mov     [eax+8], edi
0x92F03C: mov     [eax+0Ch], ecx
0x92F03F: mov     [eax+10h], edx
0x92F042: inc     dword ptr [esi+4]
0x92F045: mov     eax, [esp+2Ch+var_18]
0x92F049: mov     ebx, [esp+2Ch+arg_8]
0x92F04D: mov     ecx, [ebx+4]
0x92F050: inc     eax
0x92F051: cmp     eax, ecx
0x92F053: mov     [esp+2Ch+var_18], eax
0x92F057: jl      loc_92EF89
0x92F05D: mov     edx, [esp+2Ch+arg_C]
0x92F061: mov     eax, [edi]
0x92F063: mov     ecx, [edx+4]
0x92F066: mov     [esp+2Ch+arg_8], eax
0x92F06A: xor     eax, eax
0x92F06C: test    ecx, ecx
0x92F06E: mov     [esp+2Ch+arg_4], eax
0x92F072: jle     loc_92F1C1
0x92F078: jmp     short loc_92F080
0x92F07A: align 10h
0x92F080: mov     ecx, [edx]
0x92F082: fld     dword ptr [ecx+eax*8+4]
0x92F086: mov     edx, [esp+2Ch+arg_0]
0x92F08A: fsub    [esp+2Ch+var_1C]
0x92F08E: lea     ecx, [ecx+eax*8]
0x92F091: fld     st
0x92F093: fcomp   dword ptr [edx]
0x92F095: fnstsw  ax
0x92F097: test    ah, 41h
0x92F09A: jz      loc_92F1BF
0x92F0A0: mov     eax, [edi+4]
0x92F0A3: fadd    dword ptr [edi+10h]
0x92F0A6: mov     ebx, [ecx]
0x92F0A8: movzx   ecx, word ptr [eax]
0x92F0AB: mov     eax, [esi+4]
0x92F0AE: fstp    [esp+2Ch+var_4]
0x92F0B2: mov     [esp+2Ch+var_8], ecx
0x92F0B6: xor     ecx, ecx
0x92F0B8: test    eax, eax
0x92F0BA: jle     short loc_92F0F1
0x92F0BC: mov     edx, [esp+2Ch+arg_8]
0x92F0C0: mov     eax, [esi]
0x92F0C2: mov     dx, [edx]
0x92F0C5: mov     ebp, [eax]
0x92F0C7: cmp     [ebp+0], dx
0x92F0CB: jnz     short loc_92F0E6
0x92F0CD: mov     ebp, [eax+4]
0x92F0D0: mov     bp, [ebp+0]
0x92F0D4: cmp     bp, [ebx]
0x92F0D7: jnz     short loc_92F0E6
0x92F0D9: mov     ebp, [esp+2Ch+var_8]
0x92F0DD: cmp     [eax+0Ch], ebp
0x92F0E0: jz      loc_92F18D
0x92F0E6: mov     ebp, [esi+4]
0x92F0E9: inc     ecx
0x92F0EA: add     eax, 14h
0x92F0ED: cmp     ecx, ebp
0x92F0EF: jl      short loc_92F0C5
0x92F0F1: mov     ecx, [esi+8]
0x92F0F4: mov     eax, [esi+4]
0x92F0F7: and     ecx, 3FFFFFFFh
0x92F0FD: cmp     eax, ecx
0x92F0FF: jnz     short loc_92F10C
0x92F101: push    14h
0x92F103: push    esi
0x92F104: call    sub_8A6EE0
0x92F109: add     esp, 8
0x92F10C: mov     eax, [esi+4]
0x92F10F: lea     edx, [eax+eax*4]
0x92F112: mov     eax, [esi]
0x92F114: lea     ecx, [eax+edx*4]
0x92F117: mov     edx, [esp+2Ch+arg_8]
0x92F11B: mov     eax, [esp+2Ch+var_8]
0x92F11F: mov     [ecx], edx
0x92F121: mov     edx, [esp+2Ch+var_4]
0x92F125: mov     [ecx+4], ebx
0x92F128: mov     [ecx+8], edi
0x92F12B: mov     [ecx+0Ch], eax
0x92F12E: mov     [ecx+10h], edx
0x92F131: inc     dword ptr [esi+4]
0x92F134: mov     eax, [esp+2Ch+arg_4]
0x92F138: mov     edx, [esp+2Ch+arg_C]
0x92F13C: mov     ecx, [edx+4]
0x92F13F: inc     eax
0x92F140: cmp     eax, ecx
0x92F142: mov     [esp+2Ch+arg_4], eax
0x92F146: jl      loc_92F080
0x92F14C: pop     edi
0x92F14D: pop     esi
0x92F14E: pop     ebp
0x92F14F: pop     ebx
0x92F150: add     esp, 1Ch
0x92F153: retn
0x92F154: lea     eax, [ecx+ecx*4]
0x92F157: mov     ecx, [esi]
0x92F159: fld     dword ptr [ecx+eax*4+10h]
0x92F15D: lea     ecx, [ecx+eax*4]
0x92F160: fcomp   [esp+2Ch+var_4]
0x92F164: fnstsw  ax
0x92F166: test    ah, 5
0x92F169: jp      loc_92F045
0x92F16F: mov     [ecx], ebx
0x92F171: mov     [ecx+4], ebp
0x92F174: mov     [ecx+8], edi
0x92F177: mov     [ecx+0Ch], edx
0x92F17A: mov     edx, [esp+2Ch+var_4]
0x92F17E: mov     [ecx+10h], edx
0x92F181: jmp     loc_92F045
0x92F186: fstp    st
0x92F188: jmp     loc_92F061
0x92F18D: lea     eax, [ecx+ecx*4]
0x92F190: mov     ecx, [esi]
0x92F192: fld     dword ptr [ecx+eax*4+10h]
0x92F196: lea     ecx, [ecx+eax*4]
0x92F199: fcomp   [esp+2Ch+var_4]
0x92F19D: fnstsw  ax
0x92F19F: test    ah, 5
0x92F1A2: jp      short loc_92F134
0x92F1A4: mov     edx, [esp+2Ch+arg_8]
0x92F1A8: mov     eax, [esp+2Ch+var_4]
0x92F1AC: mov     [ecx], edx
0x92F1AE: mov     [ecx+4], ebx
0x92F1B1: mov     [ecx+8], edi
0x92F1B4: mov     [ecx+0Ch], ebp
0x92F1B7: mov     [ecx+10h], eax
0x92F1BA: jmp     loc_92F134
0x92F1BF: fstp    st
0x92F1C1: pop     edi
0x92F1C2: pop     esi
0x92F1C3: pop     ebp
0x92F1C4: pop     ebx
0x92F1C5: add     esp, 1Ch
0x92F1C8: retn

0x925ED0: push    ebx
0x925ED1: mov     ebx, [esp+4+arg_0]
0x925ED5: mov     eax, [ebx+4]
0x925ED8: push    esi
0x925ED9: xor     esi, esi
0x925EDB: dec     eax
0x925EDC: test    eax, eax
0x925EDE: push    edi
0x925EDF: mov     edi, [esp+0Ch+arg_4]
0x925EE3: jle     short loc_925F08
0x925EE5: movzx   eax, word ptr [ebx+16h]
0x925EE9: mov     edx, [edi]
0x925EEB: push    eax
0x925EEC: push    eax
0x925EED: mov     eax, [ebx]
0x925EEF: mov     ecx, [eax+esi*4]
0x925EF2: push    ecx
0x925EF3: push    8
0x925EF5: push    offset aSector; "Sector"
0x925EFA: mov     ecx, edi
0x925EFC: call    dword ptr [edx+4]
0x925EFF: mov     edx, [ebx+4]
0x925F02: inc     esi
0x925F03: dec     edx
0x925F04: cmp     esi, edx
0x925F06: jl      short loc_925EE5
0x925F08: cmp     esi, [ebx+4]
0x925F0B: jge     short loc_925F2A
0x925F0D: movzx   ecx, word ptr [ebx+16h]
0x925F11: mov     edx, [ebx+10h]
0x925F14: mov     eax, [edi]
0x925F16: push    ecx
0x925F17: mov     ecx, [ebx]
0x925F19: push    edx
0x925F1A: mov     edx, [ecx+esi*4]
0x925F1D: push    edx
0x925F1E: push    8
0x925F20: push    offset aSector; "Sector"
0x925F25: mov     ecx, edi
0x925F27: call    dword ptr [eax+4]
0x925F2A: mov     eax, [ebx+4]
0x925F2D: xor     ecx, ecx
0x925F2F: test    eax, eax
0x925F31: jle     short loc_925F9D
0x925F33: push    ebp
0x925F34: mov     edx, [ebx]
0x925F36: mov     esi, [edx+ecx*4]
0x925F39: inc     ecx
0x925F3A: cmp     ecx, eax
0x925F3C: mov     [esp+10h+arg_0], ecx
0x925F40: jnz     short loc_925F47
0x925F42: mov     ebp, [ebx+10h]
0x925F45: jmp     short loc_925F4B
0x925F47: movzx   ebp, word ptr [ebx+16h]
0x925F4B: add     ebp, esi
0x925F4D: cmp     esi, ebp
0x925F4F: jnb     short loc_925F95
0x925F51: movzx   eax, byte ptr [esi]
0x925F54: sub     eax, 2
0x925F57: jz      short loc_925F75
0x925F59: sub     eax, 2
0x925F5C: jz      short loc_925F75
0x925F5E: sub     eax, 2
0x925F61: jnz     short loc_925F8B
0x925F63: mov     ecx, [esi+4]
0x925F66: mov     eax, [edi]
0x925F68: push    ecx
0x925F69: push    8
0x925F6B: push    offset aAgent; "Agent"
0x925F70: mov     ecx, edi
0x925F72: call    dword ptr [eax+8]
0x925F75: mov     eax, [esi+10h]
0x925F78: mov     edx, [edi]
0x925F7A: push    eax
0x925F7B: push    8
0x925F7D: push    offset aContactmgr; "ContactMgr"
0x925F82: mov     ecx, edi
0x925F84: call    dword ptr [edx+8]
0x925F87: mov     ecx, [esp+10h+arg_0]
0x925F8B: movzx   edx, byte ptr [esi+3]
0x925F8F: add     esi, edx
0x925F91: cmp     esi, ebp
0x925F93: jb      short loc_925F51
0x925F95: mov     eax, [ebx+4]
0x925F98: cmp     ecx, eax
0x925F9A: jl      short loc_925F34
0x925F9C: pop     ebp
0x925F9D: pop     edi
0x925F9E: pop     esi
0x925F9F: pop     ebx
0x925FA0: retn

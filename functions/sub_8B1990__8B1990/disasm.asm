0x8B1990: push    ebx
0x8B1991: mov     ebx, [esp+4+arg_0]
0x8B1995: mov     eax, [ebx]
0x8B1997: mov     ecx, [eax-4]
0x8B199A: push    ebp
0x8B199B: xor     ebp, ebp
0x8B199D: cmp     ecx, ebp
0x8B199F: push    esi
0x8B19A0: push    edi; Args
0x8B19A1: jg      short loc_8B19AE
0x8B19A3: mov     ecx, [eax-8]
0x8B19A6: add     ecx, 0Dh
0x8B19A9: cmp     ecx, 33h ; '3'
0x8B19AC: jge     short loc_8B19F6
0x8B19AE: mov     ecx, [eax-4]
0x8B19B1: add     eax, 0FFFFFFF4h
0x8B19B4: dec     ecx
0x8B19B5: mov     [eax+8], ecx
0x8B19B8: jns     short loc_8B19CF
0x8B19BA: mov     esi, [eax+4]
0x8B19BD: mov     ecx, ds:0BA7D98h
0x8B19C3: mov     edx, [ecx]
0x8B19C5: push    13h
0x8B19C7: add     esi, 0Dh
0x8B19CA: push    esi
0x8B19CB: push    eax
0x8B19CC: call    dword ptr [edx+14h]
0x8B19CF: mov     ecx, ds:0BA7D98h
0x8B19D5: mov     eax, [ecx]
0x8B19D7: push    13h
0x8B19D9: push    10Ch
0x8B19DE: call    dword ptr [eax+10h]
0x8B19E1: mov     dword ptr [eax], 0FFh
0x8B19E7: mov     dword ptr [eax+4], 0FFh
0x8B19EE: mov     [eax+8], ebp
0x8B19F1: add     eax, 0Ch
0x8B19F4: mov     [ebx], eax
0x8B19F6: mov     ecx, [ebx]
0x8B19F8: mov     esi, [ecx-8]
0x8B19FB: mov     eax, [esp+10h+Format]
0x8B19FF: lea     edx, [esp+10h+Args]
0x8B1A03: push    edx; Format
0x8B1A04: push    eax; Format
0x8B1A05: add     esi, 0Dh
0x8B1A08: mov     eax, esi
0x8B1A0A: cdq
0x8B1A0B: sub     eax, edx
0x8B1A0D: sar     eax, 1
0x8B1A0F: push    eax; Count
0x8B1A10: push    ecx; Dest
0x8B1A11: call    __vsnprintf
0x8B1A16: mov     edi, eax
0x8B1A18: add     esp, 10h
0x8B1A1B: cmp     edi, ebp
0x8B1A1D: jl      short loc_8B1A48
0x8B1A1F: cmp     edi, esi
0x8B1A21: jl      short loc_8B1AA2
0x8B1A23: mov     eax, [ebx]
0x8B1A25: mov     ecx, [eax-4]
0x8B1A28: sub     eax, 0Ch
0x8B1A2B: dec     ecx
0x8B1A2C: mov     [eax+8], ecx
0x8B1A2F: jns     short loc_8B1A7B
0x8B1A31: mov     esi, [eax+4]
0x8B1A34: mov     ecx, ds:0BA7D98h
0x8B1A3A: mov     edx, [ecx]
0x8B1A3C: push    13h
0x8B1A3E: add     esi, 0Dh
0x8B1A41: push    esi
0x8B1A42: push    eax
0x8B1A43: call    dword ptr [edx+14h]
0x8B1A46: jmp     short loc_8B1A7B
0x8B1A48: mov     eax, [ebx]
0x8B1A4A: mov     ecx, [eax-4]
0x8B1A4D: sub     eax, 0Ch
0x8B1A50: dec     ecx
0x8B1A51: mov     [eax+8], ecx
0x8B1A54: jns     short loc_8B1A6B
0x8B1A56: mov     edi, [eax+4]
0x8B1A59: mov     ecx, ds:0BA7D98h
0x8B1A5F: mov     edx, [ecx]
0x8B1A61: push    13h
0x8B1A63: add     edi, 0Dh
0x8B1A66: push    edi
0x8B1A67: push    eax
0x8B1A68: call    dword ptr [edx+14h]
0x8B1A6B: lea     edi, [esi+esi]
0x8B1A6E: cmp     edi, 0FFh
0x8B1A74: jg      short loc_8B1A7B
0x8B1A76: mov     edi, 0FFh
0x8B1A7B: cmp     edi, 33h ; '3'
0x8B1A7E: mov     esi, edi
0x8B1A80: jge     short loc_8B1A87
0x8B1A82: mov     esi, 33h ; '3'
0x8B1A87: mov     ecx, ds:0BA7D98h
0x8B1A8D: mov     eax, [ecx]
0x8B1A8F: push    13h
0x8B1A91: lea     edx, [esi+0Dh]
0x8B1A94: push    edx
0x8B1A95: call    dword ptr [eax+10h]
0x8B1A98: mov     [eax], edi
0x8B1A9A: mov     [eax+4], esi
0x8B1A9D: jmp     loc_8B19EE
0x8B1AA2: mov     eax, [ebx]
0x8B1AA4: mov     [eax-0Ch], edi
0x8B1AA7: pop     edi
0x8B1AA8: pop     esi
0x8B1AA9: pop     ebp
0x8B1AAA: pop     ebx
0x8B1AAB: retn

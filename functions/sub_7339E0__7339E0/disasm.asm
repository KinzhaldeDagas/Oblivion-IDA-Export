0x7339E0: push    ebx
0x7339E1: push    esi
0x7339E2: push    edi
0x7339E3: mov     edi, ecx
0x7339E5: lea     esi, [edi+80h]
0x7339EB: push    esi; lpCriticalSection
0x7339EC: call    dword ptr ds:0A2806Ch
0x7339F2: call    dword ptr ds:0A2808Ch
0x7339F8: add     dword ptr [esi+7Ch], 1
0x7339FC: lea     ebx, [edi+100h]
0x733A02: mov     ecx, ebx
0x733A04: mov     [esi+78h], eax
0x733A07: call    sub_712930
0x733A0C: mov     ecx, [esp+0Ch+arg_0]
0x733A10: mov     eax, [ebx]
0x733A12: mov     edx, [eax+4]
0x733A15: push    ecx
0x733A16: mov     ecx, ebx
0x733A18: call    edx
0x733A1A: cmp     dword ptr [edi+310h], 1
0x733A21: jz      short loc_733A3F
0x733A23: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x733A27: jnz     short loc_733A30
0x733A29: mov     dword ptr [esi+78h], 0
0x733A30: push    esi; lpCriticalSection
0x733A31: call    dword ptr ds:0A28074h
0x733A37: pop     edi
0x733A38: pop     esi
0x733A39: xor     eax, eax
0x733A3B: pop     ebx
0x733A3C: retn    8
0x733A3F: mov     eax, [edi+308h]
0x733A45: mov     edi, [eax]
0x733A47: xor     ebx, ebx
0x733A49: cmp     edi, ebx
0x733A4B: jz      short loc_733A6E
0x733A4D: mov     edx, [edi]
0x733A4F: mov     eax, [edx+4]
0x733A52: mov     ecx, edi
0x733A54: call    eax
0x733A56: cmp     eax, ebx
0x733A58: jz      short loc_733A6E
0x733A5A: lea     ebx, [ebx+0]
0x733A60: cmp     eax, offset dword_B3FAD4
0x733A65: jz      short loc_733A86
0x733A67: mov     eax, [eax+4]
0x733A6A: cmp     eax, ebx
0x733A6C: jnz     short loc_733A60
0x733A6E: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x733A72: jnz     short loc_733A77
0x733A74: mov     [esi+78h], ebx
0x733A77: push    esi; lpCriticalSection
0x733A78: call    dword ptr ds:0A28074h
0x733A7E: pop     edi
0x733A7F: pop     esi
0x733A80: xor     eax, eax
0x733A82: pop     ebx
0x733A83: retn    8
0x733A86: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x733A8A: jnz     short loc_733A8F
0x733A8C: mov     [esi+78h], ebx
0x733A8F: push    esi; lpCriticalSection
0x733A90: call    dword ptr ds:0A28074h
0x733A96: mov     eax, edi
0x733A98: pop     edi
0x733A99: pop     esi
0x733A9A: pop     ebx
0x733A9B: retn    8

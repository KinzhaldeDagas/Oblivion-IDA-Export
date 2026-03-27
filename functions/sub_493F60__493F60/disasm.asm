0x493F60: sub     esp, 0Ch
0x493F63: push    ebx
0x493F64: push    esi
0x493F65: mov     esi, [esp+14h+arg_0]
0x493F69: test    esi, esi
0x493F6B: jz      loc_4940B2
0x493F71: mov     eax, [esi]
0x493F73: mov     edx, [eax+18h]
0x493F76: push    0
0x493F78: mov     ebx, 1
0x493F7D: push    ebx
0x493F7E: mov     ecx, esi
0x493F80: call    edx
0x493F82: test    al, al
0x493F84: mov     eax, [esi]
0x493F86: mov     ecx, esi
0x493F88: jz      loc_4940AD
0x493F8E: mov     edx, [eax+1Ch]
0x493F91: push    ebp
0x493F92: push    edi
0x493F93: call    edx
0x493F95: mov     edx, [esi+4]
0x493F98: push    ebx
0x493F99: mov     ebp, eax
0x493F9B: lea     eax, [esp+1Ch+arg_4]
0x493F9F: push    eax
0x493FA0: push    0Ch
0x493FA2: lea     ecx, [esp+24h+var_8]
0x493FA6: push    ecx
0x493FA7: push    esi
0x493FA8: mov     [esp+2Ch+arg_4], ebx
0x493FAC: call    edx
0x493FAE: add     esp, 14h
0x493FB1: cmp     [esp+18h+var_8], ebx
0x493FB5: jz      loc_49403B
0x493FBB: mov     ecx, ds:0A853D0h
0x493FC1: mov     eax, [esi]
0x493FC3: mov     edx, [eax+0Ch]
0x493FC6: push    ecx
0x493FC7: push    ebx
0x493FC8: mov     ecx, esi
0x493FCA: sub     ebp, ebx
0x493FCC: call    edx
0x493FCE: push    ebp; Size
0x493FCF: call    FormHeapAlloc
0x493FD4: mov     ecx, [esi+4]
0x493FD7: mov     edi, eax
0x493FD9: push    ebx
0x493FDA: lea     eax, [esp+1Ch+arg_8]
0x493FDE: push    eax
0x493FDF: push    ebp
0x493FE0: push    edi
0x493FE1: push    esi
0x493FE2: mov     [esp+2Ch+arg_8], ebx
0x493FE6: call    ecx
0x493FE8: lea     edx, [edi+ebp]
0x493FEB: add     esp, 18h
0x493FEE: xor     ecx, ecx
0x493FF0: cmp     edi, edx
0x493FF2: jnb     short loc_494014
0x493FF4: mov     eax, edi
0x493FF6: cmp     byte ptr [eax], 0
0x493FF9: jz      short loc_494001
0x493FFB: add     ecx, ebx
0x493FFD: add     eax, ebx
0x493FFF: jmp     short loc_494010
0x494001: add     eax, ebx
0x494003: movzx   ebx, word ptr [eax]
0x494006: add     ecx, ebx
0x494008: add     eax, 2
0x49400B: mov     ebx, 1
0x494010: cmp     eax, edx
0x494012: jb      short loc_493FF6
0x494014: mov     eax, ds:0A853D0h
0x494019: mov     edx, [esi]
0x49401B: mov     edx, [edx+0Ch]
0x49401E: push    eax
0x49401F: mov     [esp+18h], ecx
0x494023: push    ebx
0x494024: mov     ecx, esi
0x494026: mov     [esp+1Ch+var_4], ebx
0x49402A: mov     [esp+1Ch+arg_0], ebx
0x49402E: call    edx
0x494030: push    edi
0x494031: call    FormHeapFree
0x494036: add     esp, 4
0x494039: jmp     short loc_49403E
0x49403B: sub     ebp, 0Ch
0x49403E: mov     eax, [esp+18h+var_4]
0x494042: add     eax, 10h
0x494045: push    eax; Size
0x494046: call    FormHeapAlloc
0x49404B: add     esp, 4
0x49404E: test    [esp+18h], bl
0x494052: mov     edi, eax
0x494054: jz      short loc_494068
0x494056: mov     ecx, [esp+18h+var_4]
0x49405A: push    ecx
0x49405B: push    ebp
0x49405C: push    edi
0x49405D: push    esi
0x49405E: call    sub_493ED0
0x494063: add     esp, 10h
0x494066: jmp     short loc_494081
0x494068: mov     eax, [esp+18h+var_4]
0x49406C: mov     ecx, [esi+4]
0x49406F: push    ebx
0x494070: lea     edx, [esp+1Ch+arg_4]
0x494074: push    edx
0x494075: push    eax
0x494076: push    edi
0x494077: push    esi
0x494078: mov     [esp+2Ch+arg_4], ebx
0x49407C: call    ecx
0x49407E: add     esp, 14h
0x494081: mov     edx, [esp+18h+var_4]
0x494085: push    edx
0x494086: push    edi
0x494087: call    sub_493BD0
0x49408C: mov     ebp, eax
0x49408E: mov     eax, [esi]
0x494090: mov     edx, [eax]
0x494092: add     esp, 8
0x494095: push    ebx
0x494096: mov     ecx, esi
0x494098: call    edx
0x49409A: push    edi
0x49409B: call    FormHeapFree
0x4940A0: add     esp, 4
0x4940A3: pop     edi
0x4940A4: mov     eax, ebp
0x4940A6: pop     ebp
0x4940A7: pop     esi
0x4940A8: pop     ebx
0x4940A9: add     esp, 0Ch
0x4940AC: retn
0x4940AD: mov     edx, [eax]
0x4940AF: push    ebx
0x4940B0: call    edx
0x4940B2: pop     esi
0x4940B3: xor     eax, eax
0x4940B5: pop     ebx
0x4940B6: add     esp, 0Ch
0x4940B9: retn

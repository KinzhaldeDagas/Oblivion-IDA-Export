0x678F50: push    ecx
0x678F51: push    ebx
0x678F52: push    esi
0x678F53: xor     eax, eax
0x678F55: cmp     [ecx+4Ch], eax
0x678F58: lea     esi, [ecx+48h]
0x678F5B: push    edi
0x678F5C: mov     [esp+10h+var_4], eax
0x678F60: jnz     short loc_678F71
0x678F62: xor     edi, edi
0x678F64: cmp     [esi], edi
0x678F66: mov     eax, 1
0x678F6B: jnz     short loc_678F75
0x678F6D: mov     bl, al
0x678F6F: jmp     short loc_678F77
0x678F71: mov     edi, [esp+10h+arg_4]
0x678F75: xor     bl, bl
0x678F77: test    al, 1
0x678F79: jz      short loc_678F97
0x678F7B: test    edi, edi
0x678F7D: jz      short loc_678F97
0x678F7F: lea     eax, [edi+4]
0x678F82: push    eax; lpAddend
0x678F83: call    dword ptr ds:0A2807Ch
0x678F89: test    eax, eax
0x678F8B: jnz     short loc_678F97
0x678F8D: mov     edx, [edi]
0x678F8F: mov     eax, [edx]
0x678F91: push    1
0x678F93: mov     ecx, edi
0x678F95: call    eax
0x678F97: test    bl, bl
0x678F99: jnz     loc_67904C
0x678F9F: mov     ebx, esi
0x678FA1: test    ebx, ebx
0x678FA3: jz      loc_67904C
0x678FA9: push    ebp
0x678FAA: mov     ebp, [esp+14h+arg_4]
0x678FAE: mov     edi, edi
0x678FB0: lea     ecx, [esp+14h+arg_4]
0x678FB4: push    ecx
0x678FB5: mov     ecx, ebx
0x678FB7: call    sub_677C70
0x678FBC: mov     edi, [eax]
0x678FBE: mov     eax, [esp+14h+arg_4]
0x678FC2: test    eax, eax
0x678FC4: jz      short loc_678FE4
0x678FC6: mov     esi, eax
0x678FC8: add     eax, 4
0x678FCB: push    eax; lpAddend
0x678FCC: call    dword ptr ds:0A2807Ch
0x678FD2: test    eax, eax
0x678FD4: jnz     short loc_678FE4
0x678FD6: test    esi, esi
0x678FD8: jz      short loc_678FE4
0x678FDA: mov     edx, [esi]
0x678FDC: mov     eax, [edx]
0x678FDE: push    1
0x678FE0: mov     ecx, esi
0x678FE2: call    eax
0x678FE4: test    edi, edi
0x678FE6: jz      short loc_679040
0x678FE8: mov     edx, [edi]
0x678FEA: mov     eax, [edx+4]
0x678FED: mov     ecx, edi
0x678FEF: call    eax
0x678FF1: test    eax, eax
0x678FF3: jz      short loc_679040
0x678FF5: cmp     eax, offset unk_B3C0C4
0x678FFA: jz      short loc_679005
0x678FFC: mov     eax, [eax+4]
0x678FFF: test    eax, eax
0x679001: jnz     short loc_678FF5
0x679003: jmp     short loc_679040
0x679005: mov     ecx, [esp+14h+arg_0]
0x679009: cmp     [edi+1Ch], ecx
0x67900C: jnz     short loc_679040
0x67900E: mov     eax, [edi+2Ch]
0x679011: mov     ecx, ebp
0x679013: mov     dl, [eax]
0x679015: cmp     dl, [ecx]
0x679017: jnz     short loc_679033
0x679019: test    dl, dl
0x67901B: jz      short loc_67902F
0x67901D: mov     dl, [eax+1]
0x679020: cmp     dl, [ecx+1]
0x679023: jnz     short loc_679033
0x679025: add     eax, 2
0x679028: add     ecx, 2
0x67902B: test    dl, dl
0x67902D: jnz     short loc_679013
0x67902F: xor     eax, eax
0x679031: jmp     short loc_679038
0x679033: sbb     eax, eax
0x679035: sbb     eax, 0FFFFFFFFh
0x679038: test    eax, eax
0x67903A: jnz     short loc_679040
0x67903C: mov     byte ptr [edi+24h], 1
0x679040: mov     ebx, [ebx+4]
0x679043: test    ebx, ebx
0x679045: jnz     loc_678FB0
0x67904B: pop     ebp
0x67904C: pop     edi
0x67904D: pop     esi
0x67904E: pop     ebx
0x67904F: pop     ecx
0x679050: retn    8

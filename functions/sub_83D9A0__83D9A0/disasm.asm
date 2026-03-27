0x83D9A0: push    0FFFFFFFFh
0x83D9A2: push    offset SEH_882120
0x83D9A7: mov     eax, large fs:0
0x83D9AD: push    eax
0x83D9AE: push    ebx
0x83D9AF: push    ebp
0x83D9B0: push    esi
0x83D9B1: push    edi
0x83D9B2: mov     eax, ds:0B30AACh
0x83D9B7: xor     eax, esp
0x83D9B9: push    eax
0x83D9BA: lea     eax, [esp+20h+var_C]
0x83D9BE: mov     large fs:0, eax
0x83D9C4: mov     esi, ecx
0x83D9C6: mov     edi, [esp+20h+arg_8]
0x83D9CA: mov     eax, [edi+10h]
0x83D9CD: mov     ebx, ds:0B45820h
0x83D9D3: push    eax
0x83D9D4: call    sub_848DA0
0x83D9D9: mov     edi, [edi+0Ch]
0x83D9DC: push    edi
0x83D9DD: mov     ecx, esi
0x83D9DF: call    sub_848E50
0x83D9E4: mov     ecx, [esp+20h+arg_0]
0x83D9E8: mov     eax, [esi]
0x83D9EA: mov     edx, [eax+0BCh]
0x83D9F0: push    0
0x83D9F2: push    edi
0x83D9F3: push    ecx
0x83D9F4: mov     ecx, esi
0x83D9F6: call    edx
0x83D9F8: mov     eax, [ebx+24h]
0x83D9FB: mov     edi, [esp+20h+arg_C]
0x83D9FF: mov     ebp, [eax]
0x83DA01: mov     edx, [edi]
0x83DA03: mov     eax, [edx+88h]
0x83DA09: push    0
0x83DA0B: mov     ecx, edi
0x83DA0D: mov     [esp+24h+arg_8], ebp
0x83DA11: call    eax
0x83DA13: mov     ebp, [ebp+4]
0x83DA16: cmp     ebp, eax
0x83DA18: mov     [esp+20h+arg_0], eax
0x83DA1C: jz      short loc_83DA58
0x83DA1E: test    ebp, ebp
0x83DA20: jz      short loc_83DA43
0x83DA22: lea     ecx, [ebp+4]
0x83DA25: push    ecx; lpAddend
0x83DA26: call    dword ptr ds:0A2807Ch
0x83DA2C: test    eax, eax
0x83DA2E: jnz     short loc_83DA3F
0x83DA30: test    ebp, ebp
0x83DA32: jz      short loc_83DA3F
0x83DA34: mov     edx, [ebp+0]
0x83DA37: mov     eax, [edx]
0x83DA39: push    1
0x83DA3B: mov     ecx, ebp
0x83DA3D: call    eax
0x83DA3F: mov     eax, [esp+20h+arg_0]
0x83DA43: test    eax, eax
0x83DA45: mov     ecx, [esp+20h+arg_8]
0x83DA49: mov     [ecx+4], eax
0x83DA4C: jz      short loc_83DA58
0x83DA4E: add     eax, 4
0x83DA51: push    eax; lpAddend
0x83DA52: call    dword ptr ds:0A28078h
0x83DA58: mov     edx, [esp+20h+arg_8]
0x83DA5C: push    edi
0x83DA5D: push    edx
0x83DA5E: mov     ecx, esi
0x83DA60: call    sub_848FA0
0x83DA65: mov     eax, [ebx+24h]
0x83DA68: mov     ebp, [eax+4]
0x83DA6B: push    0
0x83DA6D: push    edi
0x83DA6E: mov     ecx, esi
0x83DA70: mov     [esp+28h+arg_8], ebp
0x83DA74: call    sub_848FD0
0x83DA79: mov     ebp, [ebp+4]
0x83DA7C: cmp     ebp, eax
0x83DA7E: mov     [esp+20h+arg_0], eax
0x83DA82: jz      short loc_83DABE
0x83DA84: test    ebp, ebp
0x83DA86: jz      short loc_83DAA9
0x83DA88: lea     ecx, [ebp+4]
0x83DA8B: push    ecx; lpAddend
0x83DA8C: call    dword ptr ds:0A2807Ch
0x83DA92: test    eax, eax
0x83DA94: jnz     short loc_83DAA5
0x83DA96: test    ebp, ebp
0x83DA98: jz      short loc_83DAA5
0x83DA9A: mov     edx, [ebp+0]
0x83DA9D: mov     eax, [edx]
0x83DA9F: push    1
0x83DAA1: mov     ecx, ebp
0x83DAA3: call    eax
0x83DAA5: mov     eax, [esp+20h+arg_0]
0x83DAA9: test    eax, eax
0x83DAAB: mov     ecx, [esp+20h+arg_8]
0x83DAAF: mov     [ecx+4], eax
0x83DAB2: jz      short loc_83DABE
0x83DAB4: add     eax, 4
0x83DAB7: push    eax; lpAddend
0x83DAB8: call    dword ptr ds:0A28078h
0x83DABE: mov     edx, [esp+20h+arg_8]
0x83DAC2: push    edi
0x83DAC3: push    edx
0x83DAC4: mov     ecx, esi
0x83DAC6: call    sub_848FA0
0x83DACB: mov     eax, [ebx+24h]
0x83DACE: mov     ebp, [eax+10h]
0x83DAD1: mov     edx, [edi]
0x83DAD3: mov     eax, [edx+90h]
0x83DAD9: push    0
0x83DADB: mov     ecx, edi
0x83DADD: mov     [esp+24h+arg_8], ebp
0x83DAE1: call    eax
0x83DAE3: mov     ebp, [ebp+4]
0x83DAE6: cmp     ebp, eax
0x83DAE8: mov     [esp+20h+arg_0], eax
0x83DAEC: jz      short loc_83DB28
0x83DAEE: test    ebp, ebp
0x83DAF0: jz      short loc_83DB13
0x83DAF2: lea     ecx, [ebp+4]
0x83DAF5: push    ecx; lpAddend
0x83DAF6: call    dword ptr ds:0A2807Ch
0x83DAFC: test    eax, eax
0x83DAFE: jnz     short loc_83DB0F
0x83DB00: test    ebp, ebp
0x83DB02: jz      short loc_83DB0F
0x83DB04: mov     edx, [ebp+0]
0x83DB07: mov     eax, [edx]
0x83DB09: push    1
0x83DB0B: mov     ecx, ebp
0x83DB0D: call    eax
0x83DB0F: mov     eax, [esp+20h+arg_0]
0x83DB13: test    eax, eax
0x83DB15: mov     ecx, [esp+20h+arg_8]
0x83DB19: mov     [ecx+4], eax
0x83DB1C: jz      short loc_83DB28
0x83DB1E: add     eax, 4
0x83DB21: push    eax; lpAddend
0x83DB22: call    dword ptr ds:0A28078h
0x83DB28: mov     edx, [esp+20h+arg_8]
0x83DB2C: push    edi
0x83DB2D: push    edx
0x83DB2E: mov     ecx, esi
0x83DB30: call    sub_848FA0
0x83DB35: mov     ecx, [ebx+24h]
0x83DB38: mov     edi, [ecx+18h]
0x83DB3B: mov     eax, ds:0B43108h
0x83DB40: mov     ebp, [edi+4]
0x83DB43: add     edi, 4
0x83DB46: cmp     ebp, eax
0x83DB48: mov     [esp+20h+arg_8], eax
0x83DB4C: jz      short loc_83DB83
0x83DB4E: test    ebp, ebp
0x83DB50: jz      short loc_83DB73
0x83DB52: lea     edx, [ebp+4]
0x83DB55: push    edx; lpAddend
0x83DB56: call    dword ptr ds:0A2807Ch
0x83DB5C: test    eax, eax
0x83DB5E: jnz     short loc_83DB6F
0x83DB60: test    ebp, ebp
0x83DB62: jz      short loc_83DB6F
0x83DB64: mov     eax, [ebp+0]
0x83DB67: mov     edx, [eax]
0x83DB69: push    1
0x83DB6B: mov     ecx, ebp
0x83DB6D: call    edx
0x83DB6F: mov     eax, [esp+20h+arg_8]
0x83DB73: test    eax, eax
0x83DB75: mov     [edi], eax
0x83DB77: jz      short loc_83DB83
0x83DB79: add     eax, 4
0x83DB7C: push    eax; lpAddend
0x83DB7D: call    dword ptr ds:0A28078h
0x83DB83: mov     eax, [ebx+24h]
0x83DB86: mov     ebp, [eax+1Ch]
0x83DB89: mov     eax, ds:0B4310Ch
0x83DB8E: mov     edi, [ebp+4]
0x83DB91: cmp     edi, eax
0x83DB93: mov     ecx, eax
0x83DB95: mov     [esp+20h+arg_8], ecx
0x83DB99: jz      short loc_83DBD0
0x83DB9B: test    edi, edi
0x83DB9D: jz      short loc_83DBBF
0x83DB9F: lea     ecx, [edi+4]
0x83DBA2: push    ecx; lpAddend
0x83DBA3: call    dword ptr ds:0A2807Ch
0x83DBA9: test    eax, eax
0x83DBAB: jnz     short loc_83DBBB
0x83DBAD: test    edi, edi
0x83DBAF: jz      short loc_83DBBB
0x83DBB1: mov     edx, [edi]
0x83DBB3: mov     eax, [edx]
0x83DBB5: push    1
0x83DBB7: mov     ecx, edi
0x83DBB9: call    eax
0x83DBBB: mov     ecx, [esp+20h+arg_8]
0x83DBBF: test    ecx, ecx
0x83DBC1: mov     [ebp+4], ecx
0x83DBC4: jz      short loc_83DBD0
0x83DBC6: add     ecx, 4
0x83DBC9: push    ecx; lpAddend
0x83DBCA: call    dword ptr ds:0A28078h
0x83DBD0: mov     edi, 1
0x83DBD5: add     [ebx+60h], edi
0x83DBD8: mov     [esp+20h+arg_8], ebx
0x83DBDC: mov     edx, [esi+38h]
0x83DBDF: lea     ecx, [esp+20h+arg_8]
0x83DBE3: push    ecx
0x83DBE4: push    edx
0x83DBE5: lea     ecx, [esi+40h]
0x83DBE8: mov     [esp+28h+var_4], 0
0x83DBF0: call    sub_76CE40
0x83DBF5: or      eax, 0FFFFFFFFh
0x83DBF8: add     [ebx+60h], eax
0x83DBFB: mov     [esp+20h+var_4], eax
0x83DBFF: jnz     short loc_83DC08
0x83DC01: mov     ecx, ebx
0x83DC03: call    sub_7604D0
0x83DC08: add     [esi+38h], edi
0x83DC0B: mov     ecx, [esp+20h+var_C]
0x83DC0F: mov     large fs:0, ecx
0x83DC16: pop     ecx
0x83DC17: pop     edi
0x83DC18: pop     esi
0x83DC19: pop     ebp
0x83DC1A: pop     ebx
0x83DC1B: add     esp, 0Ch
0x83DC1E: retn    10h

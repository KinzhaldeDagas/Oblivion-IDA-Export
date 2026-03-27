0x83ED40: push    0FFFFFFFFh
0x83ED42: push    offset SEH_882120
0x83ED47: mov     eax, large fs:0
0x83ED4D: push    eax
0x83ED4E: push    ebx
0x83ED4F: push    ebp
0x83ED50: push    esi
0x83ED51: push    edi
0x83ED52: mov     eax, ds:0B30AACh
0x83ED57: xor     eax, esp
0x83ED59: push    eax
0x83ED5A: lea     eax, [esp+20h+var_C]
0x83ED5E: mov     large fs:0, eax
0x83ED64: mov     esi, ecx
0x83ED66: mov     ebx, [esp+20h+arg_8]
0x83ED6A: mov     eax, [ebx+10h]
0x83ED6D: mov     edi, ds:0B4586Ch
0x83ED73: push    eax
0x83ED74: call    sub_848DA0
0x83ED79: mov     ebp, [ebx+0Ch]
0x83ED7C: push    ebp
0x83ED7D: mov     ecx, esi
0x83ED7F: call    sub_848E50
0x83ED84: mov     ebx, [ebx+10h]
0x83ED87: mov     ecx, [esp+20h+arg_0]
0x83ED8B: mov     eax, [esi]
0x83ED8D: mov     edx, [eax+0BCh]
0x83ED93: push    ebx
0x83ED94: push    ebp
0x83ED95: push    ecx
0x83ED96: mov     ecx, esi
0x83ED98: call    edx
0x83ED9A: mov     eax, [edi+24h]
0x83ED9D: mov     ebx, [esp+20h+arg_C]
0x83EDA1: mov     ebp, [eax]
0x83EDA3: mov     edx, [ebx]
0x83EDA5: mov     eax, [edx+88h]
0x83EDAB: push    0
0x83EDAD: mov     ecx, ebx
0x83EDAF: mov     [esp+24h+arg_8], ebp
0x83EDB3: call    eax
0x83EDB5: mov     ebp, [ebp+4]
0x83EDB8: cmp     ebp, eax
0x83EDBA: mov     [esp+20h+arg_0], eax
0x83EDBE: jz      short loc_83EDFA
0x83EDC0: test    ebp, ebp
0x83EDC2: jz      short loc_83EDE5
0x83EDC4: lea     ecx, [ebp+4]
0x83EDC7: push    ecx; lpAddend
0x83EDC8: call    dword ptr ds:0A2807Ch
0x83EDCE: test    eax, eax
0x83EDD0: jnz     short loc_83EDE1
0x83EDD2: test    ebp, ebp
0x83EDD4: jz      short loc_83EDE1
0x83EDD6: mov     edx, [ebp+0]
0x83EDD9: mov     eax, [edx]
0x83EDDB: push    1
0x83EDDD: mov     ecx, ebp
0x83EDDF: call    eax
0x83EDE1: mov     eax, [esp+20h+arg_0]
0x83EDE5: test    eax, eax
0x83EDE7: mov     ecx, [esp+20h+arg_8]
0x83EDEB: mov     [ecx+4], eax
0x83EDEE: jz      short loc_83EDFA
0x83EDF0: add     eax, 4
0x83EDF3: push    eax; lpAddend
0x83EDF4: call    dword ptr ds:0A28078h
0x83EDFA: mov     edx, [esp+20h+arg_8]
0x83EDFE: push    ebx
0x83EDFF: push    edx
0x83EE00: mov     ecx, esi
0x83EE02: call    sub_848FA0
0x83EE07: mov     eax, [edi+24h]
0x83EE0A: mov     ebp, [eax+4]
0x83EE0D: push    0
0x83EE0F: push    ebx
0x83EE10: mov     ecx, esi
0x83EE12: mov     [esp+28h+arg_8], ebp
0x83EE16: call    sub_848FD0
0x83EE1B: mov     ebp, [ebp+4]
0x83EE1E: cmp     ebp, eax
0x83EE20: mov     [esp+20h+arg_0], eax
0x83EE24: jz      short loc_83EE60
0x83EE26: test    ebp, ebp
0x83EE28: jz      short loc_83EE4B
0x83EE2A: lea     ecx, [ebp+4]
0x83EE2D: push    ecx; lpAddend
0x83EE2E: call    dword ptr ds:0A2807Ch
0x83EE34: test    eax, eax
0x83EE36: jnz     short loc_83EE47
0x83EE38: test    ebp, ebp
0x83EE3A: jz      short loc_83EE47
0x83EE3C: mov     edx, [ebp+0]
0x83EE3F: mov     eax, [edx]
0x83EE41: push    1
0x83EE43: mov     ecx, ebp
0x83EE45: call    eax
0x83EE47: mov     eax, [esp+20h+arg_0]
0x83EE4B: test    eax, eax
0x83EE4D: mov     ecx, [esp+20h+arg_8]
0x83EE51: mov     [ecx+4], eax
0x83EE54: jz      short loc_83EE60
0x83EE56: add     eax, 4
0x83EE59: push    eax; lpAddend
0x83EE5A: call    dword ptr ds:0A28078h
0x83EE60: mov     edx, [esp+20h+arg_8]
0x83EE64: push    ebx
0x83EE65: push    edx
0x83EE66: mov     ecx, esi
0x83EE68: call    sub_848FA0
0x83EE6D: mov     eax, [edi+24h]
0x83EE70: mov     ebp, [eax+10h]
0x83EE73: mov     edx, [ebx]
0x83EE75: mov     eax, [edx+90h]
0x83EE7B: push    0
0x83EE7D: mov     ecx, ebx
0x83EE7F: mov     [esp+24h+arg_8], ebp
0x83EE83: call    eax
0x83EE85: mov     ebp, [ebp+4]
0x83EE88: cmp     ebp, eax
0x83EE8A: mov     [esp+20h+arg_0], eax
0x83EE8E: jz      short loc_83EECA
0x83EE90: test    ebp, ebp
0x83EE92: jz      short loc_83EEB5
0x83EE94: lea     ecx, [ebp+4]
0x83EE97: push    ecx; lpAddend
0x83EE98: call    dword ptr ds:0A2807Ch
0x83EE9E: test    eax, eax
0x83EEA0: jnz     short loc_83EEB1
0x83EEA2: test    ebp, ebp
0x83EEA4: jz      short loc_83EEB1
0x83EEA6: mov     edx, [ebp+0]
0x83EEA9: mov     eax, [edx]
0x83EEAB: push    1
0x83EEAD: mov     ecx, ebp
0x83EEAF: call    eax
0x83EEB1: mov     eax, [esp+20h+arg_0]
0x83EEB5: test    eax, eax
0x83EEB7: mov     ecx, [esp+20h+arg_8]
0x83EEBB: mov     [ecx+4], eax
0x83EEBE: jz      short loc_83EECA
0x83EEC0: add     eax, 4
0x83EEC3: push    eax; lpAddend
0x83EEC4: call    dword ptr ds:0A28078h
0x83EECA: mov     edx, [esp+20h+arg_8]
0x83EECE: push    ebx
0x83EECF: push    edx
0x83EED0: mov     ecx, esi
0x83EED2: call    sub_848FA0
0x83EED7: mov     ebx, 1
0x83EEDC: add     [edi+60h], ebx
0x83EEDF: mov     [esp+20h+arg_8], edi
0x83EEE3: mov     ecx, [esi+38h]
0x83EEE6: lea     eax, [esp+20h+arg_8]
0x83EEEA: push    eax
0x83EEEB: push    ecx
0x83EEEC: lea     ecx, [esi+40h]
0x83EEEF: mov     [esp+28h+var_4], 0
0x83EEF7: call    sub_76CE40
0x83EEFC: or      eax, 0FFFFFFFFh
0x83EEFF: add     [edi+60h], eax
0x83EF02: mov     [esp+20h+var_4], eax
0x83EF06: jnz     short loc_83EF0F
0x83EF08: mov     ecx, edi
0x83EF0A: call    sub_7604D0
0x83EF0F: add     [esi+38h], ebx
0x83EF12: mov     ecx, [esp+20h+var_C]
0x83EF16: mov     large fs:0, ecx
0x83EF1D: pop     ecx
0x83EF1E: pop     edi
0x83EF1F: pop     esi
0x83EF20: pop     ebp
0x83EF21: pop     ebx
0x83EF22: add     esp, 0Ch
0x83EF25: retn    10h

0x842EF0: push    0FFFFFFFFh
0x842EF2: push    offset SEH_882120
0x842EF7: mov     eax, large fs:0
0x842EFD: push    eax
0x842EFE: push    ebx
0x842EFF: push    ebp
0x842F00: push    esi
0x842F01: push    edi
0x842F02: mov     eax, ds:0B30AACh
0x842F07: xor     eax, esp
0x842F09: push    eax
0x842F0A: lea     eax, [esp+20h+var_C]
0x842F0E: mov     large fs:0, eax
0x842F14: mov     esi, ecx
0x842F16: mov     ebx, [esp+20h+arg_8]
0x842F1A: mov     eax, [ebx+10h]
0x842F1D: mov     edi, ds:0B4573Ch
0x842F23: push    eax
0x842F24: call    sub_848DA0
0x842F29: mov     ebx, [ebx+0Ch]
0x842F2C: push    ebx
0x842F2D: mov     ecx, esi
0x842F2F: call    sub_848E50
0x842F34: mov     ecx, [esp+20h+arg_0]
0x842F38: mov     eax, [esi]
0x842F3A: mov     edx, [eax+0BCh]
0x842F40: push    0
0x842F42: push    ebx
0x842F43: push    ecx
0x842F44: mov     ecx, esi
0x842F46: call    edx
0x842F48: mov     eax, [edi+24h]
0x842F4B: mov     ebx, [esp+20h+arg_C]
0x842F4F: mov     ebp, [eax]
0x842F51: mov     edx, [ebx]
0x842F53: mov     eax, [edx+88h]
0x842F59: push    0
0x842F5B: mov     ecx, ebx
0x842F5D: mov     [esp+24h+arg_8], ebp
0x842F61: call    eax
0x842F63: mov     ebp, [ebp+4]
0x842F66: cmp     ebp, eax
0x842F68: mov     [esp+20h+arg_0], eax
0x842F6C: jz      short loc_842FA8
0x842F6E: test    ebp, ebp
0x842F70: jz      short loc_842F93
0x842F72: lea     ecx, [ebp+4]
0x842F75: push    ecx; lpAddend
0x842F76: call    dword ptr ds:0A2807Ch
0x842F7C: test    eax, eax
0x842F7E: jnz     short loc_842F8F
0x842F80: test    ebp, ebp
0x842F82: jz      short loc_842F8F
0x842F84: mov     edx, [ebp+0]
0x842F87: mov     eax, [edx]
0x842F89: push    1
0x842F8B: mov     ecx, ebp
0x842F8D: call    eax
0x842F8F: mov     eax, [esp+20h+arg_0]
0x842F93: test    eax, eax
0x842F95: mov     ecx, [esp+20h+arg_8]
0x842F99: mov     [ecx+4], eax
0x842F9C: jz      short loc_842FA8
0x842F9E: add     eax, 4
0x842FA1: push    eax; lpAddend
0x842FA2: call    dword ptr ds:0A28078h
0x842FA8: mov     edx, [esp+20h+arg_8]
0x842FAC: push    ebx
0x842FAD: push    edx
0x842FAE: mov     ecx, esi
0x842FB0: call    sub_848FA0
0x842FB5: mov     eax, [edi+24h]
0x842FB8: mov     ebp, [eax+4]
0x842FBB: push    0
0x842FBD: push    ebx
0x842FBE: mov     ecx, esi
0x842FC0: mov     [esp+28h+arg_8], ebp
0x842FC4: call    sub_848FD0
0x842FC9: mov     ebp, [ebp+4]
0x842FCC: cmp     ebp, eax
0x842FCE: mov     [esp+20h+arg_0], eax
0x842FD2: jz      short loc_84300E
0x842FD4: test    ebp, ebp
0x842FD6: jz      short loc_842FF9
0x842FD8: lea     ecx, [ebp+4]
0x842FDB: push    ecx; lpAddend
0x842FDC: call    dword ptr ds:0A2807Ch
0x842FE2: test    eax, eax
0x842FE4: jnz     short loc_842FF5
0x842FE6: test    ebp, ebp
0x842FE8: jz      short loc_842FF5
0x842FEA: mov     edx, [ebp+0]
0x842FED: mov     eax, [edx]
0x842FEF: push    1
0x842FF1: mov     ecx, ebp
0x842FF3: call    eax
0x842FF5: mov     eax, [esp+20h+arg_0]
0x842FF9: test    eax, eax
0x842FFB: mov     ecx, [esp+20h+arg_8]
0x842FFF: mov     [ecx+4], eax
0x843002: jz      short loc_84300E
0x843004: add     eax, 4
0x843007: push    eax; lpAddend
0x843008: call    dword ptr ds:0A28078h
0x84300E: mov     edx, [esp+20h+arg_8]
0x843012: push    ebx
0x843013: push    edx
0x843014: mov     ecx, esi
0x843016: call    sub_848FA0
0x84301B: mov     eax, [edi+24h]
0x84301E: mov     ebp, [eax+0Ch]
0x843021: mov     edx, [ebx]
0x843023: mov     eax, [edx+90h]
0x843029: push    0
0x84302B: mov     ecx, ebx
0x84302D: mov     [esp+24h+arg_8], ebp
0x843031: call    eax
0x843033: mov     ebp, [ebp+4]
0x843036: cmp     ebp, eax
0x843038: mov     [esp+20h+arg_0], eax
0x84303C: jz      short loc_843078
0x84303E: test    ebp, ebp
0x843040: jz      short loc_843063
0x843042: lea     ecx, [ebp+4]
0x843045: push    ecx; lpAddend
0x843046: call    dword ptr ds:0A2807Ch
0x84304C: test    eax, eax
0x84304E: jnz     short loc_84305F
0x843050: test    ebp, ebp
0x843052: jz      short loc_84305F
0x843054: mov     edx, [ebp+0]
0x843057: mov     eax, [edx]
0x843059: push    1
0x84305B: mov     ecx, ebp
0x84305D: call    eax
0x84305F: mov     eax, [esp+20h+arg_0]
0x843063: test    eax, eax
0x843065: mov     ecx, [esp+20h+arg_8]
0x843069: mov     [ecx+4], eax
0x84306C: jz      short loc_843078
0x84306E: add     eax, 4
0x843071: push    eax; lpAddend
0x843072: call    dword ptr ds:0A28078h
0x843078: mov     edx, [esp+20h+arg_8]
0x84307C: push    ebx
0x84307D: push    edx
0x84307E: mov     ecx, esi
0x843080: call    sub_848FA0
0x843085: mov     ebx, 1
0x84308A: add     [edi+60h], ebx
0x84308D: mov     [esp+20h+arg_8], edi
0x843091: mov     ecx, [esi+38h]
0x843094: lea     eax, [esp+20h+arg_8]
0x843098: push    eax
0x843099: push    ecx
0x84309A: lea     ecx, [esi+40h]
0x84309D: mov     [esp+28h+var_4], 0
0x8430A5: call    sub_76CE40
0x8430AA: or      eax, 0FFFFFFFFh
0x8430AD: add     [edi+60h], eax
0x8430B0: mov     [esp+20h+var_4], eax
0x8430B4: jnz     short loc_8430BD
0x8430B6: mov     ecx, edi
0x8430B8: call    sub_7604D0
0x8430BD: add     [esi+38h], ebx
0x8430C0: mov     ecx, [esp+20h+var_C]
0x8430C4: mov     large fs:0, ecx
0x8430CB: pop     ecx
0x8430CC: pop     edi
0x8430CD: pop     esi
0x8430CE: pop     ebp
0x8430CF: pop     ebx
0x8430D0: add     esp, 0Ch
0x8430D3: retn    10h

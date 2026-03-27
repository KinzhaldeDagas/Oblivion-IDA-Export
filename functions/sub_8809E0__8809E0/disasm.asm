0x8809E0: push    0FFFFFFFFh
0x8809E2: push    offset SEH_882120
0x8809E7: mov     eax, large fs:0
0x8809ED: push    eax
0x8809EE: push    ebx
0x8809EF: push    ebp
0x8809F0: push    esi
0x8809F1: push    edi
0x8809F2: mov     eax, ds:0B30AACh
0x8809F7: xor     eax, esp
0x8809F9: push    eax
0x8809FA: lea     eax, [esp+20h+var_C]
0x8809FE: mov     large fs:0, eax
0x880A04: mov     esi, ecx
0x880A06: mov     ebx, [esp+20h+arg_8]
0x880A0A: mov     eax, [ebx+10h]
0x880A0D: mov     edi, ds:0B47738h
0x880A13: push    eax
0x880A14: call    sub_848C40
0x880A19: mov     ebx, [ebx+0Ch]
0x880A1C: push    ebx
0x880A1D: mov     ecx, esi
0x880A1F: call    sub_848E50
0x880A24: mov     ecx, [esp+20h+arg_0]
0x880A28: mov     eax, [esi]
0x880A2A: mov     edx, [eax+0BCh]
0x880A30: push    0
0x880A32: push    ebx
0x880A33: push    ecx
0x880A34: mov     ecx, esi
0x880A36: call    edx
0x880A38: mov     eax, [edi+24h]
0x880A3B: mov     ebp, [esp+20h+arg_C]
0x880A3F: mov     ebx, [eax]
0x880A41: mov     edx, [ebp+0]
0x880A44: mov     eax, [edx+88h]
0x880A4A: push    0
0x880A4C: mov     ecx, ebp
0x880A4E: mov     [esp+24h+arg_8], ebx
0x880A52: call    eax
0x880A54: mov     ebx, [ebx+4]
0x880A57: cmp     ebx, eax
0x880A59: mov     [esp+20h+arg_0], eax
0x880A5D: jz      short loc_880A98
0x880A5F: test    ebx, ebx
0x880A61: jz      short loc_880A83
0x880A63: lea     ecx, [ebx+4]
0x880A66: push    ecx; lpAddend
0x880A67: call    dword ptr ds:0A2807Ch
0x880A6D: test    eax, eax
0x880A6F: jnz     short loc_880A7F
0x880A71: test    ebx, ebx
0x880A73: jz      short loc_880A7F
0x880A75: mov     edx, [ebx]
0x880A77: mov     eax, [edx]
0x880A79: push    1
0x880A7B: mov     ecx, ebx
0x880A7D: call    eax
0x880A7F: mov     eax, [esp+20h+arg_0]
0x880A83: test    eax, eax
0x880A85: mov     ecx, [esp+20h+arg_8]
0x880A89: mov     [ecx+4], eax
0x880A8C: jz      short loc_880A98
0x880A8E: add     eax, 4
0x880A91: push    eax; lpAddend
0x880A92: call    dword ptr ds:0A28078h
0x880A98: mov     edx, [edi+24h]
0x880A9B: mov     ebx, [edx+4]
0x880A9E: push    0
0x880AA0: push    ebp
0x880AA1: mov     ecx, esi
0x880AA3: mov     [esp+28h+arg_8], ebx
0x880AA7: call    sub_848FD0
0x880AAC: mov     ebx, [ebx+4]
0x880AAF: cmp     ebx, eax
0x880AB1: mov     [esp+20h+arg_0], eax
0x880AB5: jz      short loc_880AF0
0x880AB7: test    ebx, ebx
0x880AB9: jz      short loc_880ADB
0x880ABB: lea     eax, [ebx+4]
0x880ABE: push    eax; lpAddend
0x880ABF: call    dword ptr ds:0A2807Ch
0x880AC5: test    eax, eax
0x880AC7: jnz     short loc_880AD7
0x880AC9: test    ebx, ebx
0x880ACB: jz      short loc_880AD7
0x880ACD: mov     edx, [ebx]
0x880ACF: mov     eax, [edx]
0x880AD1: push    1
0x880AD3: mov     ecx, ebx
0x880AD5: call    eax
0x880AD7: mov     eax, [esp+20h+arg_0]
0x880ADB: test    eax, eax
0x880ADD: mov     ecx, [esp+20h+arg_8]
0x880AE1: mov     [ecx+4], eax
0x880AE4: jz      short loc_880AF0
0x880AE6: add     eax, 4
0x880AE9: push    eax; lpAddend
0x880AEA: call    dword ptr ds:0A28078h
0x880AF0: mov     edx, [edi+24h]
0x880AF3: mov     ebx, [edx+8]
0x880AF6: mov     eax, [ebp+0]
0x880AF9: mov     edx, [eax+88h]
0x880AFF: push    1
0x880B01: mov     ecx, ebp
0x880B03: mov     [esp+24h+arg_8], ebx
0x880B07: call    edx
0x880B09: mov     ebx, [ebx+4]
0x880B0C: cmp     ebx, eax
0x880B0E: mov     [esp+20h+arg_0], eax
0x880B12: jz      short loc_880B4D
0x880B14: test    ebx, ebx
0x880B16: jz      short loc_880B38
0x880B18: lea     eax, [ebx+4]
0x880B1B: push    eax; lpAddend
0x880B1C: call    dword ptr ds:0A2807Ch
0x880B22: test    eax, eax
0x880B24: jnz     short loc_880B34
0x880B26: test    ebx, ebx
0x880B28: jz      short loc_880B34
0x880B2A: mov     edx, [ebx]
0x880B2C: mov     eax, [edx]
0x880B2E: push    1
0x880B30: mov     ecx, ebx
0x880B32: call    eax
0x880B34: mov     eax, [esp+20h+arg_0]
0x880B38: test    eax, eax
0x880B3A: mov     ecx, [esp+20h+arg_8]
0x880B3E: mov     [ecx+4], eax
0x880B41: jz      short loc_880B4D
0x880B43: add     eax, 4
0x880B46: push    eax; lpAddend
0x880B47: call    dword ptr ds:0A28078h
0x880B4D: mov     edx, [edi+24h]
0x880B50: mov     eax, [edx+0Ch]
0x880B53: push    1
0x880B55: push    ebp
0x880B56: mov     ecx, esi
0x880B58: mov     [esp+28h+arg_8], eax
0x880B5C: call    sub_848FD0
0x880B61: mov     ecx, [esp+20h+arg_8]
0x880B65: mov     ebp, [ecx+4]
0x880B68: mov     ebx, eax
0x880B6A: cmp     ebp, ebx
0x880B6C: jz      short loc_880BA4
0x880B6E: test    ebp, ebp
0x880B70: jz      short loc_880B8F
0x880B72: lea     edx, [ebp+4]
0x880B75: push    edx; lpAddend
0x880B76: call    dword ptr ds:0A2807Ch
0x880B7C: test    eax, eax
0x880B7E: jnz     short loc_880B8F
0x880B80: test    ebp, ebp
0x880B82: jz      short loc_880B8F
0x880B84: mov     eax, [ebp+0]
0x880B87: mov     edx, [eax]
0x880B89: push    1
0x880B8B: mov     ecx, ebp
0x880B8D: call    edx
0x880B8F: test    ebx, ebx
0x880B91: mov     eax, [esp+20h+arg_8]
0x880B95: mov     [eax+4], ebx
0x880B98: jz      short loc_880BA4
0x880B9A: add     ebx, 4
0x880B9D: push    ebx; lpAddend
0x880B9E: call    dword ptr ds:0A28078h
0x880BA4: mov     ebx, 1
0x880BA9: add     [edi+60h], ebx
0x880BAC: mov     [esp+20h+arg_8], edi
0x880BB0: mov     edx, [esi+38h]
0x880BB3: lea     ecx, [esp+20h+arg_8]
0x880BB7: push    ecx
0x880BB8: push    edx
0x880BB9: lea     ecx, [esi+40h]
0x880BBC: mov     [esp+28h+var_4], 0
0x880BC4: call    sub_76CE40
0x880BC9: or      eax, 0FFFFFFFFh
0x880BCC: add     [edi+60h], eax
0x880BCF: mov     [esp+20h+var_4], eax
0x880BD3: jnz     short loc_880BDC
0x880BD5: mov     ecx, edi
0x880BD7: call    sub_7604D0
0x880BDC: add     [esi+38h], ebx
0x880BDF: mov     ecx, [esp+20h+var_C]
0x880BE3: mov     large fs:0, ecx
0x880BEA: pop     ecx
0x880BEB: pop     edi
0x880BEC: pop     esi
0x880BED: pop     ebp
0x880BEE: pop     ebx
0x880BEF: add     esp, 0Ch
0x880BF2: retn    10h

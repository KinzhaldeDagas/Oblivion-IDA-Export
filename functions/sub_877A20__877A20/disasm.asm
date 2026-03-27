0x877A20: push    0FFFFFFFFh
0x877A22: push    offset SEH_882120
0x877A27: mov     eax, large fs:0
0x877A2D: push    eax
0x877A2E: push    ebx
0x877A2F: push    ebp
0x877A30: push    esi
0x877A31: push    edi
0x877A32: mov     eax, ds:0B30AACh
0x877A37: xor     eax, esp
0x877A39: push    eax
0x877A3A: lea     eax, [esp+20h+var_C]
0x877A3E: mov     large fs:0, eax
0x877A44: mov     esi, ecx
0x877A46: mov     ebp, [esp+20h+arg_8]
0x877A4A: mov     ebx, [ebp+0Ch]
0x877A4D: mov     edi, ds:0B476A4h
0x877A53: push    ebx
0x877A54: call    sub_848E50
0x877A59: mov     ebp, [ebp+10h]
0x877A5C: mov     ecx, [esp+20h+arg_0]
0x877A60: mov     eax, [esi]
0x877A62: mov     edx, [eax+0BCh]
0x877A68: push    ebp
0x877A69: push    ebx
0x877A6A: push    ecx
0x877A6B: mov     ecx, esi
0x877A6D: call    edx
0x877A6F: mov     eax, [edi+24h]
0x877A72: mov     ebp, [esp+20h+arg_C]
0x877A76: mov     ebx, [eax]
0x877A78: mov     edx, [ebp+0]
0x877A7B: mov     eax, [edx+88h]
0x877A81: push    0
0x877A83: mov     ecx, ebp
0x877A85: mov     [esp+24h+arg_8], ebx
0x877A89: call    eax
0x877A8B: mov     ebx, [ebx+4]
0x877A8E: cmp     ebx, eax
0x877A90: mov     [esp+20h+arg_0], eax
0x877A94: jz      short loc_877ACF
0x877A96: test    ebx, ebx
0x877A98: jz      short loc_877ABA
0x877A9A: lea     ecx, [ebx+4]
0x877A9D: push    ecx; lpAddend
0x877A9E: call    dword ptr ds:0A2807Ch
0x877AA4: test    eax, eax
0x877AA6: jnz     short loc_877AB6
0x877AA8: test    ebx, ebx
0x877AAA: jz      short loc_877AB6
0x877AAC: mov     edx, [ebx]
0x877AAE: mov     eax, [edx]
0x877AB0: push    1
0x877AB2: mov     ecx, ebx
0x877AB4: call    eax
0x877AB6: mov     eax, [esp+20h+arg_0]
0x877ABA: test    eax, eax
0x877ABC: mov     ecx, [esp+20h+arg_8]
0x877AC0: mov     [ecx+4], eax
0x877AC3: jz      short loc_877ACF
0x877AC5: add     eax, 4
0x877AC8: push    eax; lpAddend
0x877AC9: call    dword ptr ds:0A28078h
0x877ACF: mov     edx, [edi+24h]
0x877AD2: mov     ebx, [edx+4]
0x877AD5: push    0
0x877AD7: push    ebp
0x877AD8: mov     ecx, esi
0x877ADA: mov     [esp+28h+arg_8], ebx
0x877ADE: call    sub_848FD0
0x877AE3: mov     ebx, [ebx+4]
0x877AE6: cmp     ebx, eax
0x877AE8: mov     [esp+20h+arg_0], eax
0x877AEC: jz      short loc_877B27
0x877AEE: test    ebx, ebx
0x877AF0: jz      short loc_877B12
0x877AF2: lea     eax, [ebx+4]
0x877AF5: push    eax; lpAddend
0x877AF6: call    dword ptr ds:0A2807Ch
0x877AFC: test    eax, eax
0x877AFE: jnz     short loc_877B0E
0x877B00: test    ebx, ebx
0x877B02: jz      short loc_877B0E
0x877B04: mov     edx, [ebx]
0x877B06: mov     eax, [edx]
0x877B08: push    1
0x877B0A: mov     ecx, ebx
0x877B0C: call    eax
0x877B0E: mov     eax, [esp+20h+arg_0]
0x877B12: test    eax, eax
0x877B14: mov     ecx, [esp+20h+arg_8]
0x877B18: mov     [ecx+4], eax
0x877B1B: jz      short loc_877B27
0x877B1D: add     eax, 4
0x877B20: push    eax; lpAddend
0x877B21: call    dword ptr ds:0A28078h
0x877B27: mov     edx, [edi+24h]
0x877B2A: mov     eax, [edx+10h]
0x877B2D: mov     edx, [ebp+0]
0x877B30: mov     [esp+20h+arg_8], eax
0x877B34: mov     eax, [edx+90h]
0x877B3A: push    0
0x877B3C: mov     ecx, ebp
0x877B3E: call    eax
0x877B40: mov     ecx, [esp+20h+arg_8]
0x877B44: mov     ebp, [ecx+4]
0x877B47: mov     ebx, eax
0x877B49: cmp     ebp, ebx
0x877B4B: jz      short loc_877B83
0x877B4D: test    ebp, ebp
0x877B4F: jz      short loc_877B6E
0x877B51: lea     edx, [ebp+4]
0x877B54: push    edx; lpAddend
0x877B55: call    dword ptr ds:0A2807Ch
0x877B5B: test    eax, eax
0x877B5D: jnz     short loc_877B6E
0x877B5F: test    ebp, ebp
0x877B61: jz      short loc_877B6E
0x877B63: mov     eax, [ebp+0]
0x877B66: mov     edx, [eax]
0x877B68: push    1
0x877B6A: mov     ecx, ebp
0x877B6C: call    edx
0x877B6E: test    ebx, ebx
0x877B70: mov     eax, [esp+20h+arg_8]
0x877B74: mov     [eax+4], ebx
0x877B77: jz      short loc_877B83
0x877B79: add     ebx, 4
0x877B7C: push    ebx; lpAddend
0x877B7D: call    dword ptr ds:0A28078h
0x877B83: mov     ecx, [edi+24h]
0x877B86: mov     ebp, [ecx+14h]
0x877B89: mov     eax, ds:0B43110h
0x877B8E: mov     ebx, [ebp+4]
0x877B91: cmp     ebx, eax
0x877B93: mov     ecx, eax
0x877B95: mov     [esp+20h+arg_8], ecx
0x877B99: jz      short loc_877BD0
0x877B9B: test    ebx, ebx
0x877B9D: jz      short loc_877BBF
0x877B9F: lea     edx, [ebx+4]
0x877BA2: push    edx; lpAddend
0x877BA3: call    dword ptr ds:0A2807Ch
0x877BA9: test    eax, eax
0x877BAB: jnz     short loc_877BBB
0x877BAD: test    ebx, ebx
0x877BAF: jz      short loc_877BBB
0x877BB1: mov     eax, [ebx]
0x877BB3: mov     edx, [eax]
0x877BB5: push    1
0x877BB7: mov     ecx, ebx
0x877BB9: call    edx
0x877BBB: mov     ecx, [esp+20h+arg_8]
0x877BBF: test    ecx, ecx
0x877BC1: mov     [ebp+4], ecx
0x877BC4: jz      short loc_877BD0
0x877BC6: add     ecx, 4
0x877BC9: push    ecx; lpAddend
0x877BCA: call    dword ptr ds:0A28078h
0x877BD0: mov     ebx, 1
0x877BD5: add     [edi+60h], ebx
0x877BD8: mov     [esp+20h+arg_8], edi
0x877BDC: mov     ecx, [esi+38h]
0x877BDF: lea     eax, [esp+20h+arg_8]
0x877BE3: push    eax
0x877BE4: push    ecx
0x877BE5: lea     ecx, [esi+40h]
0x877BE8: mov     [esp+28h+var_4], 0
0x877BF0: call    sub_76CE40
0x877BF5: or      eax, 0FFFFFFFFh
0x877BF8: add     [edi+60h], eax
0x877BFB: mov     [esp+20h+var_4], eax
0x877BFF: jnz     short loc_877C08
0x877C01: mov     ecx, edi
0x877C03: call    sub_7604D0
0x877C08: add     [esi+38h], ebx
0x877C0B: mov     ecx, [esp+20h+var_C]
0x877C0F: mov     large fs:0, ecx
0x877C16: pop     ecx
0x877C17: pop     edi
0x877C18: pop     esi
0x877C19: pop     ebp
0x877C1A: pop     ebx
0x877C1B: add     esp, 0Ch
0x877C1E: retn    10h

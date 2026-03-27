0x843B30: push    0FFFFFFFFh
0x843B32: push    offset SEH_851CA0
0x843B37: mov     eax, large fs:0
0x843B3D: push    eax
0x843B3E: push    ecx
0x843B3F: push    ebx
0x843B40: push    ebp
0x843B41: push    esi
0x843B42: push    edi
0x843B43: mov     eax, ds:0B30AACh
0x843B48: xor     eax, esp
0x843B4A: push    eax
0x843B4B: lea     eax, [esp+24h+var_C]
0x843B4F: mov     large fs:0, eax
0x843B55: mov     edi, ecx
0x843B57: mov     esi, ds:0B4594Ch
0x843B5D: mov     ecx, [esp+24h+arg_C]
0x843B61: mov     eax, [esi+24h]
0x843B64: mov     ebp, [eax]
0x843B66: push    0
0x843B68: push    ecx
0x843B69: mov     ecx, edi
0x843B6B: call    sub_848FD0
0x843B70: mov     ebx, [ebp+4]
0x843B73: cmp     ebx, eax
0x843B75: mov     [esp+24h+var_10], eax
0x843B79: jz      short loc_843BB0
0x843B7B: test    ebx, ebx
0x843B7D: jz      short loc_843B9F
0x843B7F: lea     edx, [ebx+4]
0x843B82: push    edx; lpAddend
0x843B83: call    dword ptr ds:0A2807Ch
0x843B89: test    eax, eax
0x843B8B: jnz     short loc_843B9B
0x843B8D: test    ebx, ebx
0x843B8F: jz      short loc_843B9B
0x843B91: mov     eax, [ebx]
0x843B93: mov     edx, [eax]
0x843B95: push    1
0x843B97: mov     ecx, ebx
0x843B99: call    edx
0x843B9B: mov     eax, [esp+24h+var_10]
0x843B9F: test    eax, eax
0x843BA1: mov     [ebp+4], eax
0x843BA4: jz      short loc_843BB0
0x843BA6: add     eax, 4
0x843BA9: push    eax; lpAddend
0x843BAA: call    dword ptr ds:0A28078h
0x843BB0: mov     eax, [esp+24h+arg_C]
0x843BB4: push    eax
0x843BB5: push    ebp
0x843BB6: mov     ecx, edi
0x843BB8: call    sub_848FA0
0x843BBD: mov     ebx, 1
0x843BC2: add     [esi+60h], ebx
0x843BC5: mov     [esp+24h+arg_C], esi
0x843BC9: mov     edx, [edi+38h]
0x843BCC: lea     ecx, [esp+24h+arg_C]
0x843BD0: push    ecx
0x843BD1: push    edx
0x843BD2: lea     ecx, [edi+40h]
0x843BD5: mov     [esp+2Ch+var_4], 0
0x843BDD: call    sub_76CE40
0x843BE2: or      eax, 0FFFFFFFFh
0x843BE5: add     [esi+60h], eax
0x843BE8: mov     [esp+24h+var_4], eax
0x843BEC: jnz     short loc_843BF5
0x843BEE: mov     ecx, esi
0x843BF0: call    sub_7604D0
0x843BF5: add     [edi+38h], ebx
0x843BF8: mov     ecx, dword ptr [esp+24h+var_C]
0x843BFC: mov     large fs:0, ecx
0x843C03: pop     ecx
0x843C04: pop     edi
0x843C05: pop     esi
0x843C06: pop     ebp
0x843C07: pop     ebx
0x843C08: add     esp, 10h
0x843C0B: retn    10h

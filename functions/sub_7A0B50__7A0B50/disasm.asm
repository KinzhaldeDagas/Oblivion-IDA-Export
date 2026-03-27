0x7A0B50: sub     esp, 8
0x7A0B53: push    esi
0x7A0B54: mov     esi, ecx
0x7A0B56: push    edi
0x7A0B57: mov     edi, [esi+4]
0x7A0B5A: test    edi, edi
0x7A0B5C: jnz     short loc_7A0B62
0x7A0B5E: xor     ecx, ecx
0x7A0B60: jmp     short loc_7A0B78
0x7A0B62: mov     ecx, [esi+8]
0x7A0B65: sub     ecx, edi
0x7A0B67: mov     eax, 2AAAAAABh
0x7A0B6C: imul    ecx
0x7A0B6E: sar     edx, 3
0x7A0B71: mov     ecx, edx
0x7A0B73: shr     ecx, 1Fh
0x7A0B76: add     ecx, edx
0x7A0B78: test    edi, edi
0x7A0B7A: jz      short loc_7A0BC7
0x7A0B7C: mov     edx, [esi+0Ch]
0x7A0B7F: sub     edx, edi
0x7A0B81: mov     eax, 2AAAAAABh
0x7A0B86: imul    edx
0x7A0B88: sar     edx, 3
0x7A0B8B: mov     eax, edx
0x7A0B8D: shr     eax, 1Fh
0x7A0B90: add     eax, edx
0x7A0B92: cmp     ecx, eax
0x7A0B94: jnb     short loc_7A0BC7
0x7A0B96: mov     ecx, [esp+10h+arg_0]
0x7A0B9A: mov     edx, [esp+10h+arg_0]
0x7A0B9E: mov     edi, [esi+8]
0x7A0BA1: mov     byte ptr [esp+10h+var_8], 0
0x7A0BA6: mov     eax, [esp+10h+var_8]
0x7A0BAA: push    eax
0x7A0BAB: push    ecx
0x7A0BAC: push    esi
0x7A0BAD: push    edx
0x7A0BAE: push    1
0x7A0BB0: push    edi
0x7A0BB1: call    sub_79E190
0x7A0BB6: add     esp, 18h
0x7A0BB9: add     edi, 30h ; '0'
0x7A0BBC: mov     [esi+8], edi
0x7A0BBF: pop     edi
0x7A0BC0: pop     esi
0x7A0BC1: add     esp, 8
0x7A0BC4: retn    4
0x7A0BC7: push    ebx
0x7A0BC8: mov     ebx, [esi+8]
0x7A0BCB: cmp     edi, ebx
0x7A0BCD: jbe     short loc_7A0BD4
0x7A0BCF: call    __invalid_parameter_noinfo
0x7A0BD4: mov     eax, [esp+14h+arg_0]
0x7A0BD8: push    eax
0x7A0BD9: push    ebx
0x7A0BDA: push    esi
0x7A0BDB: lea     ecx, [esp+20h+var_8]
0x7A0BDF: push    ecx
0x7A0BE0: mov     ecx, esi
0x7A0BE2: call    sub_7A0A50

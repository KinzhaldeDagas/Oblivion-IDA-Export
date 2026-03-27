0x6B9B40: push    0FFFFFFFFh
0x6B9B42: push    offset SEH_7B2A00
0x6B9B47: mov     eax, large fs:0
0x6B9B4D: push    eax
0x6B9B4E: push    esi
0x6B9B4F: push    edi
0x6B9B50: mov     eax, ds:0B30AACh
0x6B9B55: xor     eax, esp
0x6B9B57: push    eax
0x6B9B58: lea     eax, [esp+18h+var_C]
0x6B9B5C: mov     large fs:0, eax
0x6B9B62: mov     edi, ecx
0x6B9B64: mov     esi, [esp+18h+arg_0]
0x6B9B68: test    esi, esi
0x6B9B6A: mov     [esp+18h+arg_0], esi
0x6B9B6E: jz      short loc_6B9B7A
0x6B9B70: lea     eax, [esi+4]
0x6B9B73: push    eax; lpAddend
0x6B9B74: call    dword ptr ds:0A28078h
0x6B9B7A: lea     ecx, [esp+18h+arg_0]
0x6B9B7E: push    ecx
0x6B9B7F: lea     ecx, [edi+10h]
0x6B9B82: mov     [esp+1Ch+var_4], 0
0x6B9B8A: call    sub_7C16B0
0x6B9B8F: test    esi, esi
0x6B9B91: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6B9B99: jz      short loc_6B9BB3
0x6B9B9B: lea     edx, [esi+4]
0x6B9B9E: push    edx; lpAddend
0x6B9B9F: call    dword ptr ds:0A2807Ch
0x6B9BA5: test    eax, eax
0x6B9BA7: jnz     short loc_6B9BB3
0x6B9BA9: mov     eax, [esi]
0x6B9BAB: mov     edx, [eax]
0x6B9BAD: push    1
0x6B9BAF: mov     ecx, esi
0x6B9BB1: call    edx
0x6B9BB3: mov     ecx, dword ptr [esp+18h+var_C]
0x6B9BB7: mov     large fs:0, ecx
0x6B9BBE: pop     ecx
0x6B9BBF: pop     edi
0x6B9BC0: pop     esi
0x6B9BC1: add     esp, 0Ch
0x6B9BC4: retn    4

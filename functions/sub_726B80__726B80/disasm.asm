0x726B80: push    0FFFFFFFFh
0x726B82: push    offset SEH_8094D0
0x726B87: mov     eax, large fs:0
0x726B8D: push    eax
0x726B8E: push    ebx
0x726B8F: push    ebp
0x726B90: push    esi
0x726B91: push    edi
0x726B92: mov     eax, ds:0B30AACh
0x726B97: xor     eax, esp
0x726B99: push    eax
0x726B9A: lea     eax, [esp+20h+var_C]
0x726B9E: mov     large fs:0, eax
0x726BA4: mov     esi, ecx
0x726BA6: mov     ebx, [esp+20h+arg_0]
0x726BAA: mov     ebp, [esi+14h]
0x726BAD: xor     ecx, ecx
0x726BAF: mov     eax, ebx
0x726BB1: mov     edx, 1Ch
0x726BB6: mul     edx
0x726BB8: seto    cl
0x726BBB: neg     ecx
0x726BBD: or      ecx, eax
0x726BBF: push    ecx; Size
0x726BC0: call    FormHeapAlloc
0x726BC5: mov     edi, eax
0x726BC7: add     esp, 4
0x726BCA: mov     [esp+20h+arg_0], edi
0x726BCE: test    edi, edi
0x726BD0: mov     [esp+20h+var_4], 0
0x726BD8: jz      short loc_726BEA
0x726BDA: push    offset sub_53D910
0x726BDF: push    ebx
0x726BE0: push    1Ch
0x726BE2: push    edi
0x726BE3: call    sub_401080
0x726BE8: jmp     short loc_726BEC
0x726BEA: xor     edi, edi
0x726BEC: test    ebp, ebp
0x726BEE: mov     [esi+14h], edi
0x726BF1: jz      short loc_726C14
0x726BF3: mov     eax, [esi+10h]
0x726BF6: lea     ecx, ds:0[eax*8]
0x726BFD: sub     ecx, eax
0x726BFF: add     ecx, ecx
0x726C01: add     ecx, ecx
0x726C03: push    ecx; Size
0x726C04: push    ebp; Src
0x726C05: push    edi; Dst
0x726C06: call    _memcpy
0x726C0B: push    ebp
0x726C0C: call    FormHeapFree
0x726C11: add     esp, 10h
0x726C14: mov     [esi+10h], ebx
0x726C17: mov     ecx, [esp+20h+var_C]
0x726C1B: mov     large fs:0, ecx
0x726C22: pop     ecx
0x726C23: pop     edi
0x726C24: pop     esi
0x726C25: pop     ebp
0x726C26: pop     ebx
0x726C27: add     esp, 0Ch
0x726C2A: retn    4

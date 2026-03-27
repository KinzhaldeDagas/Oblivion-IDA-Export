0x769B60: push    ecx
0x769B61: push    edi
0x769B62: mov     edi, [esp+8+arg_0]
0x769B66: test    edi, edi
0x769B68: mov     [esp+8+var_4], ecx
0x769B6C: jz      short loc_769BD1
0x769B6E: push    ebx
0x769B6F: push    ebp
0x769B70: push    esi
0x769B71: mov     esi, [edi+1Ch]
0x769B74: mov     ecx, esi
0x769B76: call    sub_777F10
0x769B7B: push    1; streamCount
0x769B7D: mov     ecx, esi; this
0x769B7F: mov     bl, al
0x769B81: mov     dword ptr [esi], 1400000h
0x769B87: call    sub_777F70
0x769B8C: test    bl, bl
0x769B8E: mov     ecx, [esi+4]
0x769B91: movzx   ebp, word ptr [edi+18h]
0x769B95: mov     eax, [ecx]
0x769B97: jnz     short loc_769BAF
0x769B99: mov     edx, [eax+1Ch]
0x769B9C: push    0
0x769B9E: push    esi
0x769B9F: call    edx
0x769BA1: mov     dword ptr [esi+34h], 0
0x769BA8: mov     ebp, 0Fh
0x769BAD: jmp     short loc_769BBD
0x769BAF: mov     edx, [eax+20h]
0x769BB2: call    edx
0x769BB4: test    al, al
0x769BB6: jnz     short loc_769BA8
0x769BB8: test    bp, bp
0x769BBB: jz      short loc_769BC8
0x769BBD: mov     ecx, [esp+14h+var_4]
0x769BC1: push    ebp
0x769BC2: push    edi
0x769BC3: call    sub_767EA0
0x769BC8: pop     esi
0x769BC9: pop     ebp
0x769BCA: mov     word ptr [edi+18h], 0
0x769BD0: pop     ebx
0x769BD1: pop     edi
0x769BD2: pop     ecx
0x769BD3: retn    4

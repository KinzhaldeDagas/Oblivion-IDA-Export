0x6D1A90: push    ebp
0x6D1A91: mov     ebp, [esp+4+arg_0]
0x6D1A95: push    edi
0x6D1A96: push    ebp
0x6D1A97: mov     edi, ecx
0x6D1A99: call    sub_6C3680
0x6D1A9E: test    al, al
0x6D1AA0: jnz     short loc_6D1AA7
0x6D1AA2: pop     edi
0x6D1AA3: pop     ebp
0x6D1AA4: retn    4
0x6D1AA7: push    ebx
0x6D1AA8: movzx   ebx, word ptr [edi+4Ah]
0x6D1AAC: push    esi
0x6D1AAD: xor     esi, esi
0x6D1AAF: test    ebx, ebx
0x6D1AB1: jbe     short loc_6D1ACC
0x6D1AB3: mov     eax, [edi+44h]
0x6D1AB6: mov     ecx, [eax+esi*4]
0x6D1AB9: test    ecx, ecx
0x6D1ABB: jz      short loc_6D1AC5
0x6D1ABD: mov     edx, [ecx]
0x6D1ABF: mov     eax, [edx+24h]
0x6D1AC2: push    ebp
0x6D1AC3: call    eax
0x6D1AC5: add     esi, 1
0x6D1AC8: cmp     esi, ebx
0x6D1ACA: jb      short loc_6D1AB3
0x6D1ACC: pop     esi
0x6D1ACD: pop     ebx
0x6D1ACE: pop     edi
0x6D1ACF: mov     al, 1
0x6D1AD1: pop     ebp
0x6D1AD2: retn    4

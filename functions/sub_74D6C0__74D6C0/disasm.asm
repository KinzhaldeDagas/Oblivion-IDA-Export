0x74D6C0: push    ebx
0x74D6C1: mov     ebx, [esp+4+arg_0]
0x74D6C5: push    edi
0x74D6C6: push    ebx
0x74D6C7: mov     edi, ecx
0x74D6C9: call    sub_6E7270
0x74D6CE: test    al, al
0x74D6D0: jnz     short loc_74D6D7
0x74D6D2: pop     edi
0x74D6D3: pop     ebx
0x74D6D4: retn    4
0x74D6D7: push    esi
0x74D6D8: xor     esi, esi
0x74D6DA: cmp     [edi+22h], si
0x74D6DE: jbe     short loc_74D6FD
0x74D6E0: mov     eax, [edi+1Ch]
0x74D6E3: mov     ecx, [eax+esi*4]
0x74D6E6: test    ecx, ecx
0x74D6E8: jz      short loc_74D6F2
0x74D6EA: mov     edx, [ecx]
0x74D6EC: mov     eax, [edx+24h]
0x74D6EF: push    ebx
0x74D6F0: call    eax
0x74D6F2: movzx   ecx, word ptr [edi+22h]
0x74D6F6: add     esi, 1
0x74D6F9: cmp     esi, ecx
0x74D6FB: jb      short loc_74D6E0
0x74D6FD: pop     esi
0x74D6FE: pop     edi
0x74D6FF: mov     al, 1
0x74D701: pop     ebx
0x74D702: retn    4

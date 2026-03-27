0x6C6270: push    esi
0x6C6271: push    edi
0x6C6272: mov     edi, [esp+8+arg_0]
0x6C6276: lea     eax, [esp+8+arg_0]
0x6C627A: push    eax
0x6C627B: push    edi
0x6C627C: mov     esi, ecx
0x6C627E: call    sub_6C5E20
0x6C6283: test    al, al
0x6C6285: jz      short loc_6C6290
0x6C6287: mov     eax, [esp+8+arg_0]
0x6C628B: pop     edi
0x6C628C: pop     esi
0x6C628D: retn    4
0x6C6290: mov     eax, edi
0x6C6292: lea     edx, [eax+1]
0x6C6295: mov     cl, [eax]
0x6C6297: add     eax, 1
0x6C629A: test    cl, cl
0x6C629C: jnz     short loc_6C6295
0x6C629E: mov     ecx, [esi+10h]
0x6C62A1: push    ebx
0x6C62A2: sub     eax, edx
0x6C62A4: push    ebp
0x6C62A5: lea     ebp, [eax+1]
0x6C62A8: add     ecx, ebp
0x6C62AA: cmp     ecx, [esi+0Ch]
0x6C62AD: jbe     short loc_6C62B6
0x6C62AF: mov     ecx, esi
0x6C62B1: call    sub_6C5EA0
0x6C62B6: mov     eax, [esi+10h]
0x6C62B9: mov     edx, [esi+8]
0x6C62BC: add     edx, eax
0x6C62BE: mov     byte ptr [edx], 0
0x6C62C1: mov     ecx, edi
0x6C62C3: sub     edx, edi
0x6C62C5: mov     bl, [ecx]
0x6C62C7: mov     [edx+ecx], bl
0x6C62CA: add     ecx, 1
0x6C62CD: test    bl, bl
0x6C62CF: jnz     short loc_6C62C5
0x6C62D1: add     [esi+10h], ebp
0x6C62D4: pop     ebp
0x6C62D5: pop     ebx
0x6C62D6: pop     edi
0x6C62D7: pop     esi
0x6C62D8: retn    4

0x5E02E0: push    ebx
0x5E02E1: push    esi
0x5E02E2: push    edi
0x5E02E3: xor     edi, edi
0x5E02E5: cmp     [esp+0Ch+a2], 0
0x5E02EA: mov     esi, ecx
0x5E02EC: jz      short loc_5E02FA
0x5E02EE: mov     eax, [esi]
0x5E02F0: mov     edx, [eax+128h]
0x5E02F6: call    edx
0x5E02F8: mov     edi, eax
0x5E02FA: mov     eax, [esi]
0x5E02FC: mov     edx, [eax+170h]
0x5E0302: mov     ecx, esi
0x5E0304: call    edx
0x5E0306: test    edi, edi
0x5E0308: mov     ebx, eax
0x5E030A: jnz     short loc_5E0322
0x5E030C: test    ebx, ebx
0x5E030E: jz      short loc_5E0322
0x5E0310: mov     eax, [esi]
0x5E0312: mov     edx, [eax+190h]
0x5E0318: mov     ecx, esi
0x5E031A: call    edx
0x5E031C: test    al, al
0x5E031E: mov     eax, ebx
0x5E0320: jnz     short loc_5E0324
0x5E0322: mov     eax, edi
0x5E0324: pop     edi
0x5E0325: pop     esi
0x5E0326: pop     ebx
0x5E0327: retn    4

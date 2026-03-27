0x679240: push    ecx
0x679241: push    ebx
0x679242: push    ebp
0x679243: push    esi
0x679244: xor     eax, eax
0x679246: lea     esi, [ecx+48h]
0x679249: mov     [esp+10h+var_4], eax
0x67924D: xor     ebp, ebp
0x67924F: cmp     [esi+4], eax
0x679252: push    edi
0x679253: jnz     short loc_679264
0x679255: xor     edi, edi
0x679257: cmp     [esi], edi
0x679259: mov     eax, 1
0x67925E: jnz     short loc_679268
0x679260: mov     bl, al
0x679262: jmp     short loc_67926A
0x679264: mov     edi, [esp+14h+arg_0]
0x679268: xor     bl, bl
0x67926A: test    al, 1
0x67926C: jz      short loc_67928A
0x67926E: test    edi, edi
0x679270: jz      short loc_67928A
0x679272: lea     eax, [edi+4]
0x679275: push    eax; lpAddend
0x679276: call    dword ptr ds:0A2807Ch
0x67927C: test    eax, eax
0x67927E: jnz     short loc_67928A
0x679280: mov     edx, [edi]
0x679282: mov     eax, [edx]
0x679284: push    1
0x679286: mov     ecx, edi
0x679288: call    eax
0x67928A: test    bl, bl
0x67928C: jnz     loc_67932A
0x679292: mov     ebx, esi
0x679294: test    ebx, ebx
0x679296: jz      loc_67932A
0x67929C: lea     esp, [esp+0]
0x6792A0: lea     ecx, [esp+14h+var_4]
0x6792A4: push    ecx
0x6792A5: mov     ecx, ebx
0x6792A7: call    sub_677C70
0x6792AC: mov     esi, [eax]
0x6792AE: mov     eax, [esp+14h+var_4]
0x6792B2: test    eax, eax
0x6792B4: jz      short loc_6792D4
0x6792B6: mov     edi, eax
0x6792B8: add     eax, 4
0x6792BB: push    eax; lpAddend
0x6792BC: call    dword ptr ds:0A2807Ch
0x6792C2: test    eax, eax
0x6792C4: jnz     short loc_6792D4
0x6792C6: test    edi, edi
0x6792C8: jz      short loc_6792D4
0x6792CA: mov     edx, [edi]
0x6792CC: mov     eax, [edx]
0x6792CE: push    1
0x6792D0: mov     ecx, edi
0x6792D2: call    eax
0x6792D4: test    esi, esi
0x6792D6: jz      short loc_67931F
0x6792D8: mov     edx, [esi]
0x6792DA: mov     eax, [edx+4]
0x6792DD: mov     ecx, esi
0x6792DF: call    eax
0x6792E1: test    eax, eax
0x6792E3: jz      short loc_67931F
0x6792E5: cmp     eax, offset unk_B3C0D4
0x6792EA: jz      short loc_6792F5
0x6792EC: mov     eax, [eax+4]
0x6792EF: test    eax, eax
0x6792F1: jnz     short loc_6792E5
0x6792F3: jmp     short loc_67931F
0x6792F5: mov     ecx, [esp+14h+arg_0]
0x6792F9: cmp     [esi+1Ch], ecx
0x6792FC: jnz     short loc_67931F
0x6792FE: cmp     byte ptr [esi+28h], 0
0x679302: jz      short loc_67931F
0x679304: cmp     byte ptr [esi+24h], 0
0x679308: jnz     short loc_67931F
0x67930A: mov     edx, [esp+14h+arg_4]
0x67930E: cmp     [esi+34h], edx
0x679311: jnz     short loc_67931B
0x679313: test    ebp, ebp
0x679315: jnz     short loc_67931B
0x679317: mov     ebp, esi
0x679319: jmp     short loc_67931F
0x67931B: mov     byte ptr [esi+24h], 1
0x67931F: mov     ebx, [ebx+4]
0x679322: test    ebx, ebx
0x679324: jnz     loc_6792A0
0x67932A: pop     edi
0x67932B: pop     esi
0x67932C: mov     eax, ebp
0x67932E: pop     ebp
0x67932F: pop     ebx
0x679330: pop     ecx
0x679331: retn    8

0x4FA890: push    ebx
0x4FA891: push    esi
0x4FA892: lea     esi, [ecx+48h]
0x4FA895: mov     eax, esi
0x4FA897: xor     edx, edx
0x4FA899: test    eax, eax
0x4FA89B: push    edi
0x4FA89C: jz      short loc_4FA8B6
0x4FA89E: mov     edi, edi
0x4FA8A0: mov     ecx, [eax]
0x4FA8A2: test    ecx, ecx
0x4FA8A4: jz      short loc_4FA8B6
0x4FA8A6: cmp     byte ptr [ecx+10h], 0
0x4FA8AA: mov     eax, [eax+4]
0x4FA8AD: jz      short loc_4FA8B2
0x4FA8AF: add     edx, 1
0x4FA8B2: test    eax, eax
0x4FA8B4: jnz     short loc_4FA8A0
0x4FA8B6: mov     edi, [esp+0Ch+arg_0]
0x4FA8BA: cmp     edi, edx
0x4FA8BC: setnb   bl
0x4FA8BF: test    bl, bl
0x4FA8C1: jz      short loc_4FA8C5
0x4FA8C3: sub     edi, edx
0x4FA8C5: mov     eax, esi
0x4FA8C7: xor     edx, edx
0x4FA8C9: test    eax, eax
0x4FA8CB: jz      short loc_4FA8F7
0x4FA8CD: lea     ecx, [ecx+0]
0x4FA8D0: mov     esi, [eax]
0x4FA8D2: test    esi, esi
0x4FA8D4: jz      short loc_4FA8F7
0x4FA8D6: mov     cl, [esi+10h]
0x4FA8D9: test    cl, cl
0x4FA8DB: mov     eax, [eax+4]
0x4FA8DE: jz      short loc_4FA8E8
0x4FA8E0: test    bl, bl
0x4FA8E2: jz      short loc_4FA8EC
0x4FA8E4: test    cl, cl
0x4FA8E6: jnz     short loc_4FA8F3
0x4FA8E8: test    bl, bl
0x4FA8EA: jz      short loc_4FA8F3
0x4FA8EC: cmp     edx, edi
0x4FA8EE: jz      short loc_4FA8FF
0x4FA8F0: add     edx, 1
0x4FA8F3: test    eax, eax
0x4FA8F5: jnz     short loc_4FA8D0
0x4FA8F7: pop     edi
0x4FA8F8: pop     esi
0x4FA8F9: xor     eax, eax
0x4FA8FB: pop     ebx
0x4FA8FC: retn    4
0x4FA8FF: mov     eax, [esi]
0x4FA901: pop     edi
0x4FA902: pop     esi
0x4FA903: pop     ebx
0x4FA904: retn    4

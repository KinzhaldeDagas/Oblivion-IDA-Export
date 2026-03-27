0x90D2E0: push    ebx
0x90D2E1: push    ebp
0x90D2E2: mov     ebp, [esp+8+arg_0]
0x90D2E6: push    esi
0x90D2E7: push    edi
0x90D2E8: mov     edi, ecx
0x90D2EA: xor     ebx, ebx
0x90D2EC: lea     esp, [esp+0]
0x90D2F0: mov     esi, [edi+4]
0x90D2F3: mov     edx, [edi+1Ch]
0x90D2F6: mov     eax, esi
0x90D2F8: test    eax, eax
0x90D2FA: mov     ecx, edx
0x90D2FC: jz      short loc_90D30A
0x90D2FE: mov     edi, edi
0x90D300: add     ecx, [eax+1Ch]
0x90D303: mov     eax, [eax+4]
0x90D306: test    eax, eax
0x90D308: jnz     short loc_90D300
0x90D30A: cmp     ebx, ecx
0x90D30C: jge     short loc_90D35C
0x90D30E: mov     eax, esi
0x90D310: test    eax, eax
0x90D312: jz      short loc_90D320
0x90D314: mov     esi, [eax+1Ch]
0x90D317: mov     eax, [eax+4]
0x90D31A: add     edx, esi
0x90D31C: test    eax, eax
0x90D31E: jnz     short loc_90D314
0x90D320: mov     eax, ebx
0x90D322: mov     ecx, edi
0x90D324: sub     eax, edx
0x90D326: add     eax, [ecx+1Ch]
0x90D329: jns     short loc_90D348
0x90D32B: mov     ecx, [ecx+4]
0x90D32E: test    ecx, ecx
0x90D330: jnz     short loc_90D326
0x90D332: mov     esi, [edi+18h]
0x90D335: mov     eax, [esi]
0x90D337: push    ebp
0x90D338: push    eax
0x90D339: call    sub_8B1770
0x90D33E: add     esp, 8
0x90D341: test    eax, eax
0x90D343: jz      short loc_90D353
0x90D345: inc     ebx
0x90D346: jmp     short loc_90D2F0
0x90D348: mov     ecx, [ecx+18h]
0x90D34B: lea     eax, [eax+eax*4]
0x90D34E: lea     esi, [ecx+eax*4]
0x90D351: jmp     short loc_90D335
0x90D353: pop     edi
0x90D354: mov     eax, esi
0x90D356: pop     esi
0x90D357: pop     ebp
0x90D358: pop     ebx
0x90D359: retn    4
0x90D35C: pop     edi
0x90D35D: pop     esi
0x90D35E: pop     ebp
0x90D35F: xor     eax, eax
0x90D361: pop     ebx
0x90D362: retn    4

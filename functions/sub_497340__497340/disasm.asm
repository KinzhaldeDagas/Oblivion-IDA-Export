0x497340: test    ecx, ecx
0x497342: jz      short loc_49735E
0x497344: mov     eax, [ecx+8]
0x497347: test    eax, eax
0x497349: jz      short loc_49735E
0x49734B: add     eax, 14h
0x49734E: jz      short loc_49735E
0x497350: mov     eax, [eax+1Ch]
0x497353: mov     ecx, [esp+arg_0]
0x497357: mov     [ecx], eax
0x497359: mov     eax, ecx
0x49735B: retn    4
0x49735E: mov     eax, [esp+arg_0]
0x497362: xor     ecx, ecx
0x497364: mov     [eax], ecx
0x497366: retn    4

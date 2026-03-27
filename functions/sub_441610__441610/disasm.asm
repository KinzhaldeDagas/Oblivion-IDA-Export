0x441610: push    edi
0x441611: mov     edi, ecx
0x441613: mov     ecx, [edi+34h]
0x441616: test    ecx, ecx
0x441618: jz      short loc_441628
0x44161A: add     edi, 80h ; '€'
0x441620: push    edi
0x441621: call    sub_4CB9E0
0x441626: pop     edi
0x441627: retn
0x441628: mov     eax, ds:0B06A2Ch
0x44162D: push    ebx
0x44162E: xor     ebx, ebx
0x441630: push    esi
0x441631: cmp     ebx, eax
0x441633: jnb     short loc_441662
0x441635: xor     esi, esi
0x441637: cmp     esi, eax
0x441639: jnb     short loc_44165D
0x44163B: mov     ecx, [edi+8]
0x44163E: push    esi
0x44163F: push    ebx
0x441640: call    GetGridEntry
0x441645: lea     ecx, [edi+80h]
0x44164B: push    ecx
0x44164C: mov     ecx, [eax]
0x44164E: call    sub_4CB9E0
0x441653: mov     eax, ds:0B06A2Ch
0x441658: add     esi, 1
0x44165B: jmp     short loc_441637
0x44165D: add     ebx, 1
0x441660: jmp     short loc_441631
0x441662: pop     esi
0x441663: pop     ebx
0x441664: pop     edi
0x441665: retn

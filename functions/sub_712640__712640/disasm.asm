0x712640: push    ebx
0x712641: mov     ebx, ecx
0x712643: mov     ecx, [esp+4+arg_0]
0x712647: mov     ax, [ecx+18h]
0x71264B: mov     edx, [ecx]
0x71264D: and     ax, 0FFEFh
0x712651: or      ax, 0Eh
0x712655: mov     [ecx+18h], ax
0x712659: mov     eax, [edx+8]
0x71265C: push    edi
0x71265D: call    eax
0x71265F: mov     edi, eax
0x712661: test    edi, edi
0x712663: jz      short loc_71269B
0x712665: movzx   eax, word ptr [edi+0B6h]
0x71266C: push    esi
0x71266D: xor     esi, esi
0x71266F: test    eax, eax
0x712671: jbe     short loc_71269A
0x712673: cmp     eax, esi
0x712675: jbe     short loc_71268C
0x712677: mov     ecx, [edi+0B0h]
0x71267D: mov     eax, [ecx+esi*4]
0x712680: test    eax, eax
0x712682: jz      short loc_71268C
0x712684: push    eax
0x712685: mov     ecx, ebx
0x712687: call    sub_712640
0x71268C: movzx   eax, word ptr [edi+0B6h]
0x712693: add     esi, 1
0x712696: cmp     eax, esi
0x712698: ja      short loc_712677
0x71269A: pop     esi
0x71269B: pop     edi
0x71269C: pop     ebx
0x71269D: retn    4

0x9A9620: push    ebx
0x9A9621: push    ebp
0x9A9622: push    esi
0x9A9623: push    edi
0x9A9624: mov     edi, ecx
0x9A9626: movzx   ebx, word ptr [edi+16h]
0x9A962A: xor     esi, esi
0x9A962C: test    ebx, ebx
0x9A962E: jbe     short loc_9A9656
0x9A9630: mov     ebp, [esp+10h+Str1]
0x9A9634: mov     eax, [edi+10h]
0x9A9637: mov     eax, [eax+esi*4]
0x9A963A: test    eax, eax
0x9A963C: jz      short loc_9A964F
0x9A963E: mov     eax, [eax+0Ch]
0x9A9641: push    eax; Str2
0x9A9642: push    ebp; Str1
0x9A9643: call    __strcmp
0x9A9648: add     esp, 8
0x9A964B: test    eax, eax
0x9A964D: jz      short loc_9A9660
0x9A964F: add     esi, 1
0x9A9652: cmp     esi, ebx
0x9A9654: jb      short loc_9A9634
0x9A9656: pop     edi
0x9A9657: pop     esi
0x9A9658: pop     ebp
0x9A9659: or      eax, 0FFFFFFFFh
0x9A965C: pop     ebx
0x9A965D: retn    4
0x9A9660: pop     edi
0x9A9661: mov     eax, esi
0x9A9663: pop     esi
0x9A9664: pop     ebp
0x9A9665: pop     ebx
0x9A9666: retn    4

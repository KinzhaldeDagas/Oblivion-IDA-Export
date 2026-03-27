0x4BA060: mov     dl, [esp+arg_0]
0x4BA064: cmp     dl, 0FFh
0x4BA067: jz      short loc_4BA093
0x4BA069: movzx   eax, word ptr [ecx+52h]
0x4BA06D: test    ax, ax
0x4BA070: jz      short loc_4BA093
0x4BA072: push    esi
0x4BA073: movzx   si, dl
0x4BA077: cmp     si, ax
0x4BA07A: jb      short loc_4BA086
0x4BA07C: movzx   esi, ax
0x4BA07F: movzx   eax, dl
0x4BA082: xor     edx, edx
0x4BA084: div     esi
0x4BA086: mov     ecx, [ecx+4Ch]
0x4BA089: movzx   eax, dl
0x4BA08C: mov     eax, [ecx+eax*4]
0x4BA08F: pop     esi
0x4BA090: retn    4
0x4BA093: mov     edx, [ecx]
0x4BA095: mov     eax, [edx+130h]
0x4BA09B: call    eax
0x4BA09D: retn    4

0x732B90: push    ebx
0x732B91: mov     ebx, [esp+4+arg_0]
0x732B95: push    edi
0x732B96: push    ebx
0x732B97: mov     edi, ecx
0x732B99: call    sub_728F90
0x732B9E: test    al, al
0x732BA0: jnz     short loc_732BA7
0x732BA2: pop     edi
0x732BA3: pop     ebx
0x732BA4: retn    4
0x732BA7: push    esi
0x732BA8: mov     esi, [edi+40h]
0x732BAB: test    esi, esi
0x732BAD: jz      short loc_732BB9
0x732BAF: cmp     dword ptr [ebx+40h], 0
0x732BB3: jz      short loc_732BBF
0x732BB5: test    esi, esi
0x732BB7: jnz     short loc_732BC7
0x732BB9: cmp     dword ptr [ebx+40h], 0
0x732BBD: jz      short loc_732BC7
0x732BBF: pop     esi
0x732BC0: pop     edi
0x732BC1: xor     al, al
0x732BC3: pop     ebx
0x732BC4: retn    4
0x732BC7: test    esi, esi
0x732BC9: push    ebp
0x732BCA: jz      short loc_732BF3
0x732BCC: movzx   edi, word ptr [edi+8]
0x732BD0: xor     ecx, ecx
0x732BD2: test    di, di
0x732BD5: jbe     short loc_732BF3
0x732BD7: mov     ebp, [ebx+40h]
0x732BDA: lea     ebx, [ebx+0]
0x732BE0: movzx   eax, cx
0x732BE3: mov     dl, [eax+esi]
0x732BE6: cmp     dl, [eax+ebp]
0x732BE9: jnz     short loc_732BFC
0x732BEB: add     ecx, 1
0x732BEE: cmp     cx, di
0x732BF1: jb      short loc_732BE0
0x732BF3: pop     ebp
0x732BF4: pop     esi
0x732BF5: pop     edi
0x732BF6: mov     al, 1
0x732BF8: pop     ebx
0x732BF9: retn    4
0x732BFC: pop     ebp
0x732BFD: pop     esi
0x732BFE: pop     edi
0x732BFF: xor     al, al
0x732C01: pop     ebx
0x732C02: retn    4

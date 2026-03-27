0x6F94E0: mov     ecx, [esp+arg_0]
0x6F94E4: test    ecx, ecx
0x6F94E6: jz      short locret_6F953E
0x6F94E8: mov     ax, [ecx+18h]
0x6F94EC: mov     edx, [ecx]
0x6F94EE: and     ax, 0FFEFh
0x6F94F2: or      ax, 6
0x6F94F6: mov     [ecx+18h], ax
0x6F94FA: mov     eax, [edx+8]
0x6F94FD: push    edi
0x6F94FE: call    eax
0x6F9500: mov     edi, eax
0x6F9502: test    edi, edi
0x6F9504: jz      short loc_6F953D
0x6F9506: movzx   eax, word ptr [edi+0B6h]
0x6F950D: push    esi
0x6F950E: xor     esi, esi
0x6F9510: test    eax, eax
0x6F9512: jbe     short loc_6F953C
0x6F9514: cmp     eax, esi
0x6F9516: ja      short loc_6F951C
0x6F9518: xor     eax, eax
0x6F951A: jmp     short loc_6F9525
0x6F951C: mov     ecx, [edi+0B0h]
0x6F9522: mov     eax, [ecx+esi*4]
0x6F9525: push    eax
0x6F9526: call    sub_6F94E0
0x6F952B: movzx   eax, word ptr [edi+0B6h]
0x6F9532: add     esi, 1
0x6F9535: add     esp, 4
0x6F9538: cmp     eax, esi
0x6F953A: ja      short loc_6F951C
0x6F953C: pop     esi
0x6F953D: pop     edi
0x6F953E: retn

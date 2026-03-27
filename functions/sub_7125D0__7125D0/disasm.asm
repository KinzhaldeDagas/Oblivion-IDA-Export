0x7125D0: push    esi
0x7125D1: mov     esi, ds:0B3FB84h
0x7125D7: movzx   edx, word ptr [esi+0Ah]
0x7125DB: xor     eax, eax
0x7125DD: test    edx, edx
0x7125DF: jbe     short loc_712637
0x7125E1: mov     ecx, [esi+4]
0x7125E4: push    edi
0x7125E5: mov     edi, [esp+8+arg_0]
0x7125E9: lea     esp, [esp+0]
0x7125F0: cmp     [ecx], edi
0x7125F2: jz      short loc_712601
0x7125F4: add     eax, 1
0x7125F7: add     ecx, 4
0x7125FA: cmp     eax, edx
0x7125FC: jb      short loc_7125F0
0x7125FE: pop     edi
0x7125FF: pop     esi
0x712600: retn
0x712601: movzx   ecx, word ptr [esi+0Ah]
0x712605: cmp     eax, ecx
0x712607: jnb     short loc_712636
0x712609: mov     edx, [esi+4]
0x71260C: lea     ecx, [edx+eax*4]
0x71260F: mov     edx, [ecx]
0x712611: test    edx, edx
0x712613: mov     dword ptr [ecx], 0
0x712619: jz      short loc_712621
0x71261B: add     word ptr [esi+0Ch], 0FFFFh
0x712621: movzx   ecx, word ptr [esi+0Ah]
0x712625: movzx   edx, cx
0x712628: sub     edx, 1
0x71262B: cmp     eax, edx
0x71262D: jnz     short loc_712636
0x71262F: add     ecx, 0FFFFFFFFh
0x712632: mov     [esi+0Ah], cx
0x712636: pop     edi
0x712637: pop     esi
0x712638: retn

0x6E5D70: push    esi
0x6E5D71: mov     esi, [esp+4+arg_0]
0x6E5D75: push    edi
0x6E5D76: push    esi
0x6E5D77: mov     edi, ecx
0x6E5D79: call    sub_6E5340
0x6E5D7E: test    al, al
0x6E5D80: jnz     short loc_6E5D89
0x6E5D82: pop     edi
0x6E5D83: xor     al, al
0x6E5D85: pop     esi
0x6E5D86: retn    4
0x6E5D89: xor     ecx, ecx
0x6E5D8B: lea     edx, [esi+2Ch]
0x6E5D8E: sub     edi, esi
0x6E5D90: fld     dword ptr [edi+edx]
0x6E5D93: fld     dword ptr [edx]
0x6E5D95: fucompp
0x6E5D97: fnstsw  ax
0x6E5D99: test    ah, 44h
0x6E5D9C: jp      short loc_6E5D82
0x6E5D9E: add     ecx, 1
0x6E5DA1: add     edx, 4
0x6E5DA4: cmp     ecx, 2
0x6E5DA7: jb      short loc_6E5D90
0x6E5DA9: pop     edi
0x6E5DAA: mov     al, 1
0x6E5DAC: pop     esi
0x6E5DAD: retn    4

0x8ED200: push    esi
0x8ED201: push    edi
0x8ED202: mov     edi, [esp+8+arg_0]
0x8ED206: cmp     dword ptr [edi], 0
0x8ED209: mov     esi, ecx
0x8ED20B: jz      short loc_8ED24B
0x8ED20D: push    edi
0x8ED20E: call    sub_88D780
0x8ED213: test    eax, eax
0x8ED215: jnz     short loc_8ED24B
0x8ED217: mov     eax, [esi+128h]
0x8ED21D: mov     ecx, [esi+124h]
0x8ED223: add     esi, 120h
0x8ED229: and     eax, 3FFFFFFFh
0x8ED22E: cmp     ecx, eax
0x8ED230: jnz     short loc_8ED23D
0x8ED232: push    4
0x8ED234: push    esi
0x8ED235: call    sub_8A6EE0
0x8ED23A: add     esp, 8
0x8ED23D: mov     eax, [esi+4]
0x8ED240: mov     ecx, [esi]
0x8ED242: lea     ecx, [ecx+eax*4]
0x8ED245: inc     eax
0x8ED246: mov     [esi+4], eax
0x8ED249: mov     [ecx], edi
0x8ED24B: pop     edi
0x8ED24C: pop     esi
0x8ED24D: retn    4

0x8A0200: push    esi
0x8A0201: mov     esi, ecx
0x8A0203: mov     eax, [esi+4]
0x8A0206: test    eax, eax
0x8A0208: jz      short loc_8A0231
0x8A020A: mov     dword ptr [eax+8], 0
0x8A0211: mov     ecx, [esi+4]
0x8A0214: cmp     word ptr [ecx+4], 0
0x8A0219: jz      short loc_8A0231
0x8A021B: add     word ptr [ecx+6], 0FFFFh
0x8A0220: movzx   eax, word ptr [ecx+6]
0x8A0224: test    ax, ax
0x8A0227: jnz     short loc_8A0231
0x8A0229: mov     eax, [ecx]
0x8A022B: mov     edx, [eax]
0x8A022D: push    1
0x8A022F: call    edx
0x8A0231: mov     eax, [esp+4+arg_0]
0x8A0235: test    eax, eax
0x8A0237: jz      short loc_8A0248
0x8A0239: cmp     word ptr [eax+4], 0
0x8A023E: jz      short loc_8A0245
0x8A0240: add     word ptr [eax+6], 1
0x8A0245: mov     [eax+8], esi
0x8A0248: mov     [esi+4], eax
0x8A024B: pop     esi
0x8A024C: retn    4

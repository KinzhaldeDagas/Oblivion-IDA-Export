0x9853D0: mov     eax, [esp+arg_0]
0x9853D4: xor     ecx, ecx
0x9853D6: cmp     eax, ds:0B30BC0h[ecx*8]
0x9853DD: jz      short loc_9853F1
0x9853DF: inc     ecx
0x9853E0: cmp     ecx, 2Dh ; '-'
0x9853E3: jl      short loc_9853D6
0x9853E5: lea     ecx, [eax-13h]
0x9853E8: cmp     ecx, 11h
0x9853EB: ja      short loc_9853F9
0x9853ED: push    0Dh
0x9853EF: pop     eax
0x9853F0: retn
0x9853F1: mov     eax, ds:0B30BC4h[ecx*8]
0x9853F8: retn
0x9853F9: add     eax, 0FFFFFF44h
0x9853FE: push    0Eh
0x985400: pop     ecx
0x985401: cmp     ecx, eax
0x985403: sbb     eax, eax
0x985405: and     eax, ecx
0x985407: add     eax, 8
0x98540A: retn

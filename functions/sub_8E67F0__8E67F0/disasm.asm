0x8E67F0: push    esi
0x8E67F1: mov     esi, [esp+4+arg_0]
0x8E67F5: movzx   ecx, word ptr [esi+14h]
0x8E67F9: mov     eax, [esi+4]
0x8E67FC: mov     edx, [esi]
0x8E67FE: mov     eax, [edx+eax*4-4]
0x8E6802: push    edi
0x8E6803: mov     edi, [esi+10h]
0x8E6806: sub     eax, ecx
0x8E6808: add     eax, edi
0x8E680A: mov     edi, [esp+8+arg_4]
0x8E680E: cmp     edi, eax
0x8E6810: jz      short loc_8E683A
0x8E6812: push    ecx
0x8E6813: push    eax
0x8E6814: push    edi
0x8E6815: call    sub_8B1890
0x8E681A: movzx   ecx, word ptr [edi+0Ch]
0x8E681E: mov     edx, [edi+14h]
0x8E6821: mov     edx, [edx+24h]
0x8E6824: mov     ax, [edi+0Eh]
0x8E6828: mov     [edx+ecx*8], edi
0x8E682B: mov     ecx, [edi+18h]
0x8E682E: mov     edx, [ecx+24h]
0x8E6831: movzx   eax, ax
0x8E6834: add     esp, 0Ch
0x8E6837: mov     [edx+eax*8], edi
0x8E683A: movzx   eax, word ptr [esi+14h]
0x8E683E: sub     [esi+10h], eax
0x8E6841: jnz     short loc_8E6896
0x8E6843: mov     eax, [esi+4]
0x8E6846: mov     ecx, [esi]
0x8E6848: mov     edi, [ecx+eax*4-4]
0x8E684C: lea     ecx, [eax-1]
0x8E684F: mov     eax, [esi+8]
0x8E6852: test    eax, eax
0x8E6854: mov     [esi+4], ecx
0x8E6857: js      short loc_8E687C
0x8E6859: inc     ecx
0x8E685A: cmp     ecx, 1
0x8E685D: jl      short loc_8E686B
0x8E685F: and     eax, 3FFFFFFFh
0x8E6864: lea     edx, [ecx+ecx]
0x8E6867: cmp     edx, eax
0x8E6869: jge     short loc_8E687C
0x8E686B: push    1
0x8E686D: lea     eax, [esi+0Ch]
0x8E6870: push    eax
0x8E6871: push    4
0x8E6873: push    esi
0x8E6874: call    sub_8A6F90
0x8E6879: add     esp, 10h
0x8E687C: movzx   eax, word ptr [esi+16h]
0x8E6880: mov     ecx, ds:0BA7D98h
0x8E6886: mov     edx, [ecx]
0x8E6888: push    24h ; '$'
0x8E688A: push    eax
0x8E688B: push    edi
0x8E688C: call    dword ptr [edx+14h]
0x8E688F: movzx   ecx, word ptr [esi+16h]
0x8E6893: mov     [esi+10h], ecx
0x8E6896: pop     edi
0x8E6897: pop     esi
0x8E6898: retn

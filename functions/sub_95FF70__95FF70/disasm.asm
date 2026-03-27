0x95FF70: push    ebx
0x95FF71: mov     ebx, [esp+4+arg_0]
0x95FF75: push    esi
0x95FF76: push    edi
0x95FF77: push    ebx
0x95FF78: mov     esi, ecx
0x95FF7A: call    sub_95DB50
0x95FF7F: movzx   eax, word ptr [esi+0Eh]
0x95FF83: lea     ecx, [esp+0Ch+arg_0]
0x95FF87: push    ecx
0x95FF88: push    ebx
0x95FF89: mov     [esp+14h+arg_0], eax
0x95FF8D: call    sub_6D3660
0x95FF92: xor     edi, edi
0x95FF94: add     esp, 8
0x95FF97: cmp     [esi+0Eh], di
0x95FF9B: jbe     short loc_95FFBD
0x95FF9D: lea     ecx, [ecx+0]
0x95FFA0: mov     edx, [esi+8]
0x95FFA3: mov     ecx, [edx+edi*4]
0x95FFA6: test    ecx, ecx
0x95FFA8: jz      short loc_95FFB2
0x95FFAA: mov     eax, [ecx]
0x95FFAC: mov     edx, [eax+4]
0x95FFAF: push    ebx
0x95FFB0: call    edx
0x95FFB2: movzx   eax, word ptr [esi+0Eh]
0x95FFB6: add     edi, 1
0x95FFB9: cmp     edi, eax
0x95FFBB: jb      short loc_95FFA0
0x95FFBD: pop     edi
0x95FFBE: pop     esi
0x95FFBF: pop     ebx
0x95FFC0: retn    4

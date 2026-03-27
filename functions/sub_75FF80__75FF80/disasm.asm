0x75FF80: push    ebx
0x75FF81: push    ebp
0x75FF82: push    esi
0x75FF83: mov     esi, ecx
0x75FF85: xor     ebp, ebp
0x75FF87: xor     ebx, ebx
0x75FF89: cmp     [esi+0Ah], bp
0x75FF8D: jbe     short loc_75FFB6
0x75FF8F: push    edi
0x75FF90: mov     ecx, [esi+4]
0x75FF93: movzx   eax, bx
0x75FF96: lea     edi, [ecx+eax*4]
0x75FF99: mov     ecx, [edi]
0x75FF9B: cmp     ecx, ebp
0x75FF9D: jz      short loc_75FFAC
0x75FF9F: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FFA3: jnz     short loc_75FFAA
0x75FFA5: call    sub_772560
0x75FFAA: mov     [edi], ebp
0x75FFAC: add     ebx, 1
0x75FFAF: cmp     bx, [esi+0Ah]
0x75FFB3: jb      short loc_75FF90
0x75FFB5: pop     edi
0x75FFB6: mov     [esi+0Ch], bp
0x75FFBA: mov     [esi+0Ah], bp
0x75FFBE: pop     esi
0x75FFBF: pop     ebp
0x75FFC0: pop     ebx
0x75FFC1: retn

0x6C5F80: movzx   edx, word ptr [ecx+44h]
0x6C5F84: xor     eax, eax
0x6C5F86: test    dx, dx
0x6C5F89: push    esi
0x6C5F8A: jbe     short loc_6C5FA1
0x6C5F8C: mov     ecx, [ecx+40h]
0x6C5F8F: nop
0x6C5F90: movzx   esi, ax
0x6C5F93: cmp     dword ptr [ecx+esi*4], 0
0x6C5F97: jz      short loc_6C5FAB
0x6C5F99: add     eax, 1
0x6C5F9C: cmp     ax, dx
0x6C5F9F: jb      short loc_6C5F90
0x6C5FA1: mov     ax, ds:0A7A160h
0x6C5FA7: pop     esi
0x6C5FA8: retn    4
0x6C5FAB: mov     esi, [esp+4+arg_0]
0x6C5FAF: movzx   edx, ax
0x6C5FB2: mov     [ecx+edx*4], esi
0x6C5FB5: pop     esi
0x6C5FB6: retn    4

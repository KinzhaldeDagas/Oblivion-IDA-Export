0x47C710: movzx   edx, word ptr [ecx+44h]
0x47C714: push    esi
0x47C715: xor     eax, eax
0x47C717: test    dx, dx
0x47C71A: push    edi
0x47C71B: jbe     short loc_47C734
0x47C71D: mov     ecx, [ecx+40h]
0x47C720: mov     esi, [esp+8+arg_0]
0x47C724: movzx   edi, ax
0x47C727: cmp     [ecx+edi*4], esi
0x47C72A: jz      short loc_47C73A
0x47C72C: add     eax, 1
0x47C72F: cmp     ax, dx
0x47C732: jb      short loc_47C724
0x47C734: mov     ax, ds:0A7A160h
0x47C73A: pop     edi
0x47C73B: pop     esi
0x47C73C: retn    4

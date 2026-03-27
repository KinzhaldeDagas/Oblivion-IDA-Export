0x405790: movzx   edx, word ptr [ecx+0B6h]
0x405797: mov     eax, [esp+arg_0]
0x40579B: cmp     edx, eax
0x40579D: ja      short loc_4057A4
0x40579F: xor     eax, eax
0x4057A1: retn    4
0x4057A4: mov     ecx, [ecx+0B0h]
0x4057AA: mov     eax, [ecx+eax*4]
0x4057AD: retn    4

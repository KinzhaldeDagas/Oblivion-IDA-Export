0x939340: push    esi
0x939341: movzx   esi, byte ptr [ecx+32h]
0x939345: xor     eax, eax
0x939347: test    esi, esi
0x939349: jle     short loc_93936D
0x93934B: lea     edx, [ecx+36h]
0x93934E: mov     edi, edi
0x939350: cmp     word ptr [edx], 0FFFFh
0x939355: jz      short loc_939363
0x939357: inc     eax
0x939358: add     edx, 8
0x93935B: cmp     eax, esi
0x93935D: jl      short loc_939350
0x93935F: pop     esi
0x939360: retn    4
0x939363: mov     dx, [esp+4+arg_0]
0x939368: mov     [ecx+eax*8+36h], dx
0x93936D: pop     esi
0x93936E: retn    4

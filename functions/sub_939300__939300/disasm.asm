0x939300: push    esi
0x939301: movzx   esi, byte ptr [ecx+32h]
0x939305: xor     eax, eax
0x939307: test    esi, esi
0x939309: jle     short loc_939334
0x93930B: push    edi
0x93930C: mov     di, [esp+8+arg_0]
0x939311: lea     edx, [ecx+36h]
0x939314: cmp     [edx], di
0x939317: jz      short loc_939326
0x939319: inc     eax
0x93931A: add     edx, 8
0x93931D: cmp     eax, esi
0x93931F: jl      short loc_939314
0x939321: pop     edi
0x939322: pop     esi
0x939323: retn    4
0x939326: push    eax
0x939327: add     ecx, 30h ; '0'
0x93932A: push    ecx
0x93932B: call    sub_939B00
0x939330: add     esp, 8
0x939333: pop     edi
0x939334: pop     esi
0x939335: retn    4

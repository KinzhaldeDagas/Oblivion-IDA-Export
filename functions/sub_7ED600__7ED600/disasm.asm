0x7ED600: mov     ecx, [ecx+70h]
0x7ED603: xor     eax, eax
0x7ED605: test    ecx, ecx
0x7ED607: jz      short locret_7ED636
0x7ED609: lea     esp, [esp+0]
0x7ED610: lea     edx, [ecx+8]
0x7ED613: mov     edx, [edx]
0x7ED615: test    edx, edx
0x7ED617: mov     ecx, [ecx]
0x7ED619: jz      short loc_7ED632
0x7ED61B: cmp     word ptr [edx+118h], 0FFh
0x7ED624: jz      short loc_7ED632
0x7ED626: cmp     byte ptr [edx+0F4h], 0
0x7ED62D: jnz     short loc_7ED632
0x7ED62F: add     eax, 1
0x7ED632: test    ecx, ecx
0x7ED634: jnz     short loc_7ED610
0x7ED636: retn

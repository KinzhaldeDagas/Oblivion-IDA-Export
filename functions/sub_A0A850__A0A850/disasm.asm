0xA0A850: mov     ecx, 1Fh
0xA0A855: mov     eax, offset byte_B40618
0xA0A85A: or      edx, 0FFFFFFFFh
0xA0A85D: lea     ecx, [ecx+0]
0xA0A860: mov     byte ptr [eax-8], 0
0xA0A864: mov     [eax-4], edx
0xA0A867: mov     byte ptr [eax], 0
0xA0A86A: add     eax, 0Ch
0xA0A86D: sub     ecx, 1
0xA0A870: jns     short loc_A0A860
0xA0A872: retn

0x749360: mov     eax, [esp+arg_0]
0x749364: mov     edx, [esp+arg_8]
0x749368: mov     byte ptr [eax], 1
0x74936B: mov     byte ptr [edx], 0
0x74936E: cmp     byte ptr [eax], 0
0x749371: jz      short loc_74937A
0x749373: or      word ptr [ecx+18h], 2
0x749378: jmp     short loc_749380
0x74937A: and     word ptr [ecx+18h], 0FFFDh
0x749380: or      word ptr [ecx+18h], 0Ch
0x749385: cmp     byte ptr [edx], 0
0x749388: movzx   eax, word ptr [ecx+18h]
0x74938C: jz      short loc_749398
0x74938E: or      eax, 10h
0x749391: mov     [ecx+18h], ax
0x749395: retn    0Ch
0x749398: and     eax, 0FFEFh
0x74939D: mov     [ecx+18h], ax
0x7493A1: retn    0Ch

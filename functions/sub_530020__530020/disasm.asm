0x530020: push    ecx
0x530021: mov     eax, [esp+4+a4]
0x530025: mov     edx, [esp+4+a3]
0x530029: push    0; a7
0x53002B: push    0; a6
0x53002D: push    0; a5
0x53002F: push    eax; a4
0x530030: push    edx; a3
0x530031: lea     eax, [esp+18h+a2]
0x530035: push    eax; a2
0x530036: mov     [esp+1Ch+a2], 0
0x53003B: call    sub_52F010
0x530040: mov     cl, [esp+4+a2]
0x530044: neg     cl
0x530046: sbb     ecx, ecx
0x530048: not     ecx
0x53004A: and     eax, ecx
0x53004C: pop     ecx
0x53004D: retn    8

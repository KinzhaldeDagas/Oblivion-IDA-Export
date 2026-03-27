0x8BB380: mov     eax, [esp+Origin]
0x8BB384: mov     edx, [esp+Offset]
0x8BB388: push    eax; Origin
0x8BB389: mov     eax, [ecx+8]
0x8BB38C: push    edx; Offset
0x8BB38D: push    eax; File
0x8BB38E: call    _fseek
0x8BB393: add     esp, 0Ch
0x8BB396: neg     eax
0x8BB398: sbb     eax, eax
0x8BB39A: neg     eax
0x8BB39C: retn    8

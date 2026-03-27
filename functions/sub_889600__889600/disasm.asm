0x889600: push    ebx
0x889601: mov     bl, [esp+4+arg_0]
0x889605: movzx   eax, bl
0x889608: add     eax, [esp+4+arg_4]
0x88960C: push    1
0x88960E: push    eax
0x88960F: mov     ecx, offset FormHeap
0x889614: call    j_MemoryHeap_Alloc
0x889619: mov     cl, bl
0x88961B: sub     cl, 1
0x88961E: and     cl, al
0x889620: sub     bl, cl
0x889622: movzx   edx, bl
0x889625: add     eax, edx
0x889627: mov     [eax-1], bl
0x88962A: pop     ebx
0x88962B: retn    0Ch

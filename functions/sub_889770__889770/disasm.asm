0x889770: push    ebx
0x889771: mov     bl, [esp+4+arg_4]
0x889775: movzx   eax, bl
0x889778: add     eax, [esp+4+arg_0]
0x88977C: push    1
0x88977E: push    eax
0x88977F: mov     ecx, offset FormHeap
0x889784: call    j_MemoryHeap_Alloc
0x889789: mov     cl, bl
0x88978B: sub     cl, 1
0x88978E: and     cl, al
0x889790: sub     bl, cl
0x889792: movzx   edx, bl
0x889795: add     eax, edx
0x889797: mov     [eax-1], bl
0x88979A: pop     ebx
0x88979B: retn

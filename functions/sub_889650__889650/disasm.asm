0x889650: mov     eax, [esp+arg_0]
0x889654: push    1
0x889656: add     eax, 10h
0x889659: push    eax
0x88965A: mov     ecx, offset FormHeap
0x88965F: call    j_MemoryHeap_Alloc
0x889664: mov     dl, al
0x889666: and     dl, 0Fh
0x889669: mov     cl, 10h
0x88966B: sub     cl, dl
0x88966D: movzx   edx, cl
0x889670: add     eax, edx
0x889672: mov     [eax-1], cl
0x889675: retn    8

0x8896A0: mov     eax, [esp+arg_0]
0x8896A4: push    1
0x8896A6: add     eax, 10h
0x8896A9: push    eax
0x8896AA: mov     ecx, offset FormHeap
0x8896AF: call    j_MemoryHeap_Alloc
0x8896B4: mov     dl, al
0x8896B6: and     dl, 0Fh
0x8896B9: mov     cl, 10h
0x8896BB: sub     cl, dl
0x8896BD: movzx   edx, cl
0x8896C0: add     eax, edx
0x8896C2: mov     [eax-1], cl
0x8896C5: retn

0x557740: push    esi
0x557741: mov     esi, [esp+4+arg_0]
0x557745: push    edi
0x557746: mov     edi, [esp+8+arg_4]
0x55774A: cmp     esi, edi
0x55774C: jz      short loc_557769
0x55774E: mov     edi, edi
0x557750: push    offset sub_794EB0; void (__thiscall *)(void *)
0x557755: push    3; int
0x557757: push    10h; unsigned int
0x557759: lea     eax, [esi+10h]
0x55775C: push    eax; void *
0x55775D: call    $LN21
0x557762: add     esi, 40h ; '@'
0x557765: cmp     esi, edi
0x557767: jnz     short loc_557750
0x557769: pop     edi
0x55776A: pop     esi
0x55776B: retn    8

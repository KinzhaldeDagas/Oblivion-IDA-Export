0x597170: mov     eax, [esp+arg_0]
0x597174: cmp     eax, 63h ; 'c'
0x597177: push    esi
0x597178: mov     esi, ecx
0x59717A: jl      short loc_59719C
0x59717C: mov     eax, [esp+4+arg_4]
0x597180: push    eax
0x597181: call    sub_596BC0
0x597186: push    eax
0x597187: mov     ecx, esi
0x597189: call    sub_596CF0
0x59718E: push    4; int
0x597190: call    sub_57DE50
0x597195: add     esp, 4
0x597198: pop     esi
0x597199: retn    8
0x59719C: cmp     eax, 4
0x59719F: jz      short loc_5971A6
0x5971A1: cmp     eax, 5
0x5971A4: jnz     short loc_5971B0
0x5971A6: push    4; int
0x5971A8: call    sub_57DE50
0x5971AD: add     esp, 4
0x5971B0: pop     esi
0x5971B1: retn    8

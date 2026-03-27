0x7964F0: push    esi
0x7964F1: push    edi
0x7964F2: mov     edi, [esp+8+arg_0]
0x7964F6: lea     esi, [ecx+0E8h]
0x7964FC: push    edi; int
0x7964FD: mov     ecx, esi; int
0x7964FF: call    sub_785F30
0x796504: call    sub_787680
0x796509: test    al, al
0x79650B: mov     ecx, esi; int
0x79650D: jz      short loc_796527
0x79650F: fld     dword ptr [edi+4]
0x796512: lea     eax, [esp+8+arg_0]
0x796516: fchs
0x796518: push    eax; int
0x796519: fstp    [esp+0Ch+arg_0]
0x79651D: call    sub_785F30
0x796522: pop     edi
0x796523: pop     esi
0x796524: retn    4
0x796527: add     edi, 4
0x79652A: push    edi; int
0x79652B: call    sub_785F30
0x796530: pop     edi
0x796531: pop     esi
0x796532: retn    4

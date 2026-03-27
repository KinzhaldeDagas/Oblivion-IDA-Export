0x612510: push    esi; int
0x612511: mov     esi, ecx
0x612513: call    sub_612150
0x612518: test    [esp+4+arg_0], 1
0x61251D: jz      short loc_612528
0x61251F: push    esi
0x612520: call    FormHeapFree
0x612525: add     esp, 4
0x612528: mov     eax, esi
0x61252A: pop     esi
0x61252B: retn    4

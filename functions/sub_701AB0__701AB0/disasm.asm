0x701AB0: mov     eax, ds:0B3F940h
0x701AB5: test    eax, eax
0x701AB7: jz      short locret_701AC8
0x701AB9: push    0FFFFFFFFh; dwMilliseconds
0x701ABB: mov     byte ptr [eax+1B0h], 1
0x701AC2: call    sub_404D60
0x701AC7: pop     ecx
0x701AC8: retn

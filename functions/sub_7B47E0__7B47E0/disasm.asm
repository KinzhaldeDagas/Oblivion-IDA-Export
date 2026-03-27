0x7B47E0: mov     eax, ds:0B42F48h
0x7B47E5: add     eax, 0FFFFFFFFh; switch 7 cases
0x7B47E8: cmp     eax, 6
0x7B47EB: ja      short def_7B47ED
0x7B47ED: jmp     ds:jpt_7B47ED[eax*4]; switch jump
0x7B47F4: mov     eax, offset aVs_1_1; jumptable 007B47ED case 1
0x7B47F9: retn
0x7B47FA: mov     eax, offset aVs_2_0; jumptable 007B47ED cases 2-6
0x7B47FF: retn
0x7B4800: mov     eax, offset aVs_3_0; jumptable 007B47ED case 7
0x7B4805: retn

0x7B7070: mov     eax, ds:0B42F48h
0x7B7075: cmp     eax, 7; switch 8 cases
0x7B7078: ja      short def_7B707A
0x7B707A: jmp     ds:jpt_7B707A[eax*4]; switch jump
0x7B7081: mov     eax, offset aBssm_sv_none; jumptable 007B707A case 0
0x7B7086: retn
0x7B7087: mov     eax, offset aBssm_sv_1_x; jumptable 007B707A case 1
0x7B708C: retn
0x7B708D: mov     eax, offset aBssm_sv_2_0; jumptable 007B707A case 2
0x7B7092: retn
0x7B7093: mov     eax, offset aBssm_sv_2_a96; jumptable 007B707A case 3
0x7B7098: retn
0x7B7099: mov     eax, offset aBssm_sv_2_b96; jumptable 007B707A case 4
0x7B709E: retn
0x7B709F: mov     eax, offset aBssm_sv_2_a; jumptable 007B707A case 5
0x7B70A4: retn
0x7B70A5: mov     eax, offset aBssm_sv_2_b; jumptable 007B707A case 6
0x7B70AA: retn
0x7B70AB: mov     eax, offset aBssm_sv_3_0; jumptable 007B707A case 7
0x7B70B0: retn

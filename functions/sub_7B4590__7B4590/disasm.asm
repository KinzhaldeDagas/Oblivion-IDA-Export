0x7B4590: mov     eax, ds:0B42F48h
0x7B4595: add     eax, 0FFFFFFFFh; switch 7 cases
0x7B4598: mov     ecx, 6
0x7B459D: cmp     eax, ecx
0x7B459F: ja      short def_7B45A1; jumptable 007B45A1 default case, cases 1,2
0x7B45A1: jmp     ds:jpt_7B45A1[eax*4]; switch jump
0x7B45A8: mov     ds:0B42E88h, ecx; jumptable 007B45A1 cases 3,4
0x7B45AE: retn
0x7B45AF: mov     dword ptr ds:0B42E88h, 8; jumptable 007B45A1 cases 5-7
0x7B45B9: retn
0x7B45BA: mov     dword ptr ds:0B42E88h, 2; jumptable 007B45A1 default case, cases 1,2
0x7B45C4: retn

0x7B4590: mov     eax, ds:0B42F48h; [Verified] SetDecalPassBatchSizeForShaderPackageVersion writes 6 for package versions 3/4, 8 for 5–7, and 2 otherwise. The value is used as the decal-data batch decrement in both BSSM_DECAL/BSSM_DECAL_A and BSSM_3XDECAL/BSSM_3XDECAL_A loops.
0x7B4595: add     eax, 0FFFFFFFFh; switch 7 cases
0x7B4598: mov     ecx, 6
0x7B459D: cmp     eax, ecx
0x7B459F: ja      short def_7B45A1; jumptable 007B45A1 default case, cases 1,2
0x7B45A1: jmp     ds:jpt_7B45A1[eax*4]; switch jump
0x7B45A8: mov     ds:0B42E88h, ecx; [Verified] Package versions 3 and 4 select decalPassBatchSize=6.
0x7B45AE: retn
0x7B45AF: mov     dword ptr ds:0B42E88h, 8; [Verified] Package versions 5, 6 and 7 select decalPassBatchSize=8.
0x7B45B9: retn
0x7B45BA: mov     dword ptr ds:0B42E88h, 2; [Verified] All other package versions select decalPassBatchSize=2.
0x7B45C4: retn

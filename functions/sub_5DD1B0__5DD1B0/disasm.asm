0x5DD1B0: mov     eax, [esp+arg_0]
0x5DD1B4: lea     edx, [eax-1]
0x5DD1B7: cmp     edx, 2
0x5DD1BA: ja      short loc_5DD1C1
0x5DD1BC: add     eax, 0FFFFFFFFh
0x5DD1BF: jmp     short loc_5DD1C6
0x5DD1C1: mov     eax, 3
0x5DD1C6: sub     eax, 1
0x5DD1C9: jz      short loc_5DD1D8
0x5DD1CB: sub     eax, 1
0x5DD1CE: jnz     short locret_5DD1F2
0x5DD1D0: call    sub_5DD0D0
0x5DD1D5: retn    8
0x5DD1D8: push    0; a3
0x5DD1DA: add     ecx, 34h ; '4'
0x5DD1DD: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5DD1E2: push    eax; a2
0x5DD1E3: mov     ecx, offset stru_B3B738; this
0x5DD1E8: call    BSStringT_Set
0x5DD1ED: call    sub_5DD0D0
0x5DD1F2: retn    8

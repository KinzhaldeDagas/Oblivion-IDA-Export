0x99D393: mov     eax, [esp+arg_0]
0x99D397: test    eax, eax
0x99D399: push    esi
0x99D39A: push    edi
0x99D39B: jl      short loc_99D3F7
0x99D39D: cmp     eax, uNumber
0x99D3A3: jnb     short loc_99D3F7
0x99D3A5: mov     esi, eax
0x99D3A7: and     esi, 1Fh
0x99D3AA: imul    esi, 28h ; '('
0x99D3AD: mov     ecx, eax
0x99D3AF: sar     ecx, 5
0x99D3B2: lea     edi, ds:0BAAAC0h[ecx*4]
0x99D3B9: mov     ecx, [edi]
0x99D3BB: cmp     dword ptr [esi+ecx], 0FFFFFFFFh
0x99D3BF: jnz     short loc_99D3F7
0x99D3C1: cmp     dword_B30DA8, 1
0x99D3C8: push    ebx
0x99D3C9: mov     ebx, [esp+0Ch+hHandle]
0x99D3CD: jnz     short loc_99D3ED
0x99D3CF: sub     eax, 0
0x99D3D2: jz      short loc_99D3E4
0x99D3D4: dec     eax
0x99D3D5: jz      short loc_99D3DF
0x99D3D7: dec     eax
0x99D3D8: jnz     short loc_99D3ED
0x99D3DA: push    ebx
0x99D3DB: push    0FFFFFFF4h
0x99D3DD: jmp     short loc_99D3E7
0x99D3DF: push    ebx
0x99D3E0: push    0FFFFFFF5h
0x99D3E2: jmp     short loc_99D3E7
0x99D3E4: push    ebx; hHandle
0x99D3E5: push    0FFFFFFF6h; nStdHandle
0x99D3E7: call    ds:SetStdHandle
0x99D3ED: mov     eax, [edi]
0x99D3EF: mov     [esi+eax], ebx
0x99D3F2: xor     eax, eax
0x99D3F4: pop     ebx
0x99D3F5: jmp     short loc_99D40D
0x99D3F7: call    __errno
0x99D3FC: mov     dword ptr [eax], 9
0x99D402: call    ___doserrno
0x99D407: and     dword ptr [eax], 0
0x99D40A: or      eax, 0FFFFFFFFh
0x99D40D: pop     edi
0x99D40E: pop     esi
0x99D40F: retn

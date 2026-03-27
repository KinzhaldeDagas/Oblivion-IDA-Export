0x99D410: mov     ecx, [esp+arg_0]
0x99D414: push    ebx
0x99D415: xor     ebx, ebx
0x99D417: cmp     ecx, ebx
0x99D419: push    esi
0x99D41A: push    edi
0x99D41B: jl      short loc_99D478
0x99D41D: cmp     ecx, uNumber
0x99D423: jnb     short loc_99D478
0x99D425: mov     esi, ecx
0x99D427: and     esi, 1Fh
0x99D42A: imul    esi, 28h ; '('
0x99D42D: mov     eax, ecx
0x99D42F: sar     eax, 5
0x99D432: lea     edi, ds:0BAAAC0h[eax*4]
0x99D439: mov     eax, [edi]
0x99D43B: add     eax, esi
0x99D43D: test    byte ptr [eax+4], 1
0x99D441: jz      short loc_99D478
0x99D443: cmp     dword ptr [eax], 0FFFFFFFFh
0x99D446: jz      short loc_99D478
0x99D448: cmp     dword_B30DA8, 1
0x99D44F: jnz     short loc_99D46E
0x99D451: sub     ecx, ebx
0x99D453: jz      short loc_99D465
0x99D455: dec     ecx
0x99D456: jz      short loc_99D460
0x99D458: dec     ecx
0x99D459: jnz     short loc_99D46E
0x99D45B: push    ebx
0x99D45C: push    0FFFFFFF4h
0x99D45E: jmp     short loc_99D468
0x99D460: push    ebx
0x99D461: push    0FFFFFFF5h
0x99D463: jmp     short loc_99D468
0x99D465: push    ebx; hHandle
0x99D466: push    0FFFFFFF6h; nStdHandle
0x99D468: call    ds:SetStdHandle
0x99D46E: mov     eax, [edi]
0x99D470: or      dword ptr [esi+eax], 0FFFFFFFFh
0x99D474: xor     eax, eax
0x99D476: jmp     short loc_99D48D
0x99D478: call    __errno
0x99D47D: mov     dword ptr [eax], 9
0x99D483: call    ___doserrno
0x99D488: mov     [eax], ebx
0x99D48A: or      eax, 0FFFFFFFFh
0x99D48D: pop     edi
0x99D48E: pop     esi
0x99D48F: pop     ebx
0x99D490: retn

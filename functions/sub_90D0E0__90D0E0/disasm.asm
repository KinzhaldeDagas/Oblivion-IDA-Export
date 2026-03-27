0x90D0E0: push    ebx
0x90D0E1: push    esi
0x90D0E2: push    edi
0x90D0E3: mov     edi, [esp+0Ch+arg_0]
0x90D0E7: mov     eax, [edi+20h]
0x90D0EA: mov     esi, ecx
0x90D0EC: mov     ecx, [edi+30h]
0x90D0EF: push    eax
0x90D0F0: push    ecx
0x90D0F1: mov     ecx, esi
0x90D0F3: call    sub_929D70
0x90D0F8: mov     dword ptr [esi], offset off_A9C4D4
0x90D0FE: mov     dword ptr [esi+48h], 80000000h
0x90D105: xor     ebx, ebx
0x90D107: mov     [esi+40h], ebx
0x90D10A: mov     [esi+44h], ebx
0x90D10D: movaps  xmm0, xmmword ptr [edi+10h]
0x90D111: movaps  xmmword ptr [esi+10h], xmm0
0x90D115: mov     edx, [edi+8]
0x90D118: mov     [esi+8], edx
0x90D11B: mov     al, [edi+0Ch]
0x90D11E: mov     [esi+0Ch], al
0x90D121: cmp     [edi+28h], ebx
0x90D124: jle     short loc_90D149
0x90D126: push    ebp
0x90D127: xor     ebp, ebp
0x90D129: lea     esp, [esp+0]
0x90D130: mov     ecx, [edi+24h]
0x90D133: add     ecx, ebp
0x90D135: push    ecx
0x90D136: mov     ecx, esi
0x90D138: call    sub_90CAE0
0x90D13D: mov     eax, [edi+28h]
0x90D140: inc     ebx
0x90D141: add     ebp, 30h ; '0'
0x90D144: cmp     ebx, eax
0x90D146: jl      short loc_90D130
0x90D148: pop     ebp
0x90D149: pop     edi
0x90D14A: mov     eax, esi
0x90D14C: pop     esi
0x90D14D: pop     ebx
0x90D14E: retn    4

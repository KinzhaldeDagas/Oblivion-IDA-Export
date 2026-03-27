0x8A63A0: push    esi
0x8A63A1: mov     esi, [ecx+98h]
0x8A63A7: xor     eax, eax
0x8A63A9: test    esi, esi
0x8A63AB: push    edi
0x8A63AC: jle     short loc_8A63C4
0x8A63AE: mov     edx, [ecx+94h]
0x8A63B4: mov     edi, [esp+8+arg_0]
0x8A63B8: cmp     [edx], edi
0x8A63BA: jz      short loc_8A63D9
0x8A63BC: inc     eax
0x8A63BD: add     edx, 4
0x8A63C0: cmp     eax, esi
0x8A63C2: jl      short loc_8A63B8
0x8A63C4: mov     edx, [ecx+94h]
0x8A63CA: pop     edi
0x8A63CB: or      eax, 0FFFFFFFFh
0x8A63CE: pop     esi
0x8A63CF: mov     dword ptr [edx+eax*4], 0
0x8A63D6: retn    4
0x8A63D9: mov     ecx, [ecx+94h]
0x8A63DF: pop     edi
0x8A63E0: pop     esi
0x8A63E1: mov     dword ptr [ecx+eax*4], 0
0x8A63E8: retn    4

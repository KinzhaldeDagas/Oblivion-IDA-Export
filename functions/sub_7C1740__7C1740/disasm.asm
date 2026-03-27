0x7C1740: push    0FFFFFFFFh
0x7C1742: push    offset SEH_6CC6E0
0x7C1747: mov     eax, large fs:0
0x7C174D: push    eax
0x7C174E: push    ecx
0x7C174F: push    ebx
0x7C1750: push    ebp
0x7C1751: push    esi
0x7C1752: push    edi
0x7C1753: mov     eax, ds:0B30AACh
0x7C1758: xor     eax, esp
0x7C175A: push    eax
0x7C175B: lea     eax, [esp+24h+var_C]
0x7C175F: mov     large fs:0, eax
0x7C1765: mov     esi, ecx
0x7C1767: xor     ebp, ebp
0x7C1769: mov     [esp+24h+var_10], ebp
0x7C176D: mov     edi, [esi+4]
0x7C1770: mov     eax, [edi]
0x7C1772: cmp     eax, ebp
0x7C1774: mov     [esi+4], eax
0x7C1777: jz      short loc_7C177E
0x7C1779: mov     [eax+4], ebp
0x7C177C: jmp     short loc_7C1781
0x7C177E: mov     [esi+8], ebp
0x7C1781: mov     eax, [edi+8]
0x7C1784: cmp     eax, ebp
0x7C1786: mov     ebx, [esp+24h+arg_0]
0x7C178A: mov     [ebx], eax
0x7C178C: jz      short loc_7C1798
0x7C178E: add     eax, 4
0x7C1791: push    eax; lpAddend
0x7C1792: call    dword ptr ds:0A28078h
0x7C1798: mov     eax, [esi]
0x7C179A: mov     edx, [eax+8]
0x7C179D: push    edi
0x7C179E: mov     ecx, esi
0x7C17A0: mov     [esp+28h+var_4], ebp
0x7C17A4: mov     [esp+28h+var_10], 1
0x7C17AC: call    edx
0x7C17AE: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7C17B2: mov     eax, ebx
0x7C17B4: mov     ecx, dword ptr [esp+24h+var_C]
0x7C17B8: mov     large fs:0, ecx
0x7C17BF: pop     ecx
0x7C17C0: pop     edi
0x7C17C1: pop     esi
0x7C17C2: pop     ebp
0x7C17C3: pop     ebx
0x7C17C4: add     esp, 10h
0x7C17C7: retn    4

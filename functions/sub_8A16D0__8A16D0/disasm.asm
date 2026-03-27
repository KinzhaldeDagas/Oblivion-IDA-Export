0x8A16D0: push    ecx
0x8A16D1: push    ebx
0x8A16D2: push    ebp
0x8A16D3: push    esi
0x8A16D4: push    edi
0x8A16D5: mov     edi, [esp+14h+arg_0]
0x8A16D9: push    edi
0x8A16DA: mov     esi, ecx
0x8A16DC: call    sub_8CE4C0
0x8A16E1: test    esi, esi
0x8A16E3: jz      short loc_8A16F7
0x8A16E5: mov     ecx, [esi+8]
0x8A16E8: test    ecx, ecx
0x8A16EA: jz      short loc_8A16F7
0x8A16EC: mov     eax, [ecx]
0x8A16EE: mov     edx, [eax+1Ch]
0x8A16F1: call    edx
0x8A16F3: mov     ebx, eax
0x8A16F5: jmp     short loc_8A16F9
0x8A16F7: xor     ebx, ebx
0x8A16F9: lea     ebp, [edi+4]
0x8A16FC: mov     dword ptr [edi+8], 0
0x8A1703: mov     eax, [ebp+8]
0x8A1706: and     eax, 3FFFFFFFh
0x8A170B: cmp     eax, ebx
0x8A170D: mov     [esp+14h+arg_0], ebp
0x8A1711: jge     short loc_8A1727
0x8A1713: add     eax, eax
0x8A1715: cmp     ebx, eax
0x8A1717: jl      short loc_8A171B
0x8A1719: mov     eax, ebx
0x8A171B: push    4
0x8A171D: push    eax
0x8A171E: push    ebp
0x8A171F: call    sub_8A6E40
0x8A1724: add     esp, 0Ch
0x8A1727: add     edi, 10h
0x8A172A: mov     [ebp+4], ebx
0x8A172D: mov     eax, [edi+8]
0x8A1730: and     eax, 3FFFFFFFh
0x8A1735: cmp     eax, ebx
0x8A1737: mov     [esp+14h+var_4], edi
0x8A173B: jge     short loc_8A1751
0x8A173D: add     eax, eax
0x8A173F: cmp     ebx, eax
0x8A1741: jl      short loc_8A1745
0x8A1743: mov     eax, ebx
0x8A1745: push    4
0x8A1747: push    eax
0x8A1748: push    edi
0x8A1749: call    sub_8A6E40
0x8A174E: add     esp, 0Ch
0x8A1751: test    esi, esi
0x8A1753: mov     [edi+4], ebx
0x8A1756: jz      short loc_8A176A
0x8A1758: mov     ecx, [esi+8]
0x8A175B: test    ecx, ecx
0x8A175D: jz      short loc_8A176A
0x8A175F: mov     eax, [ecx]
0x8A1761: mov     edx, [eax+20h]
0x8A1764: call    edx
0x8A1766: mov     ebp, eax
0x8A1768: jmp     short loc_8A176C
0x8A176A: xor     ebp, ebp
0x8A176C: xor     edi, edi
0x8A176E: test    ebx, ebx
0x8A1770: jbe     short loc_8A17D0
0x8A1772: test    esi, esi
0x8A1774: jz      short loc_8A1785
0x8A1776: mov     eax, [esi+8]
0x8A1779: test    eax, eax
0x8A177B: jz      short loc_8A1785
0x8A177D: mov     eax, [eax+10h]
0x8A1780: mov     eax, [eax+edi*8]
0x8A1783: jmp     short loc_8A1787
0x8A1785: xor     eax, eax
0x8A1787: test    esi, esi
0x8A1789: mov     ecx, [esp+14h+arg_0]
0x8A178D: mov     edx, [ecx]
0x8A178F: mov     [edx+edi*4], eax
0x8A1792: jz      short loc_8A17A5
0x8A1794: mov     ecx, [esi+8]
0x8A1797: test    ecx, ecx
0x8A1799: jz      short loc_8A17A5
0x8A179B: mov     eax, [ecx]
0x8A179D: mov     edx, [eax+2Ch]
0x8A17A0: push    ebp
0x8A17A1: call    edx
0x8A17A3: jmp     short loc_8A17A7
0x8A17A5: xor     eax, eax
0x8A17A7: test    esi, esi
0x8A17A9: mov     ecx, [esp+14h+var_4]
0x8A17AD: mov     edx, [ecx]
0x8A17AF: mov     [edx+edi*4], eax
0x8A17B2: jz      short loc_8A17C7
0x8A17B4: mov     ecx, [esi+8]
0x8A17B7: test    ecx, ecx
0x8A17B9: jz      short loc_8A17C7
0x8A17BB: mov     eax, [ecx]
0x8A17BD: mov     edx, [eax+24h]
0x8A17C0: push    ebp
0x8A17C1: call    edx
0x8A17C3: mov     ebp, eax
0x8A17C5: jmp     short loc_8A17C9
0x8A17C7: xor     ebp, ebp
0x8A17C9: add     edi, 1
0x8A17CC: cmp     edi, ebx
0x8A17CE: jb      short loc_8A1772
0x8A17D0: pop     edi
0x8A17D1: pop     esi
0x8A17D2: pop     ebp
0x8A17D3: pop     ebx
0x8A17D4: pop     ecx
0x8A17D5: retn    4

0x6E16A0: push    0FFFFFFFFh
0x6E16A2: push    offset SEH_6E16A0
0x6E16A7: mov     eax, large fs:0
0x6E16AD: push    eax
0x6E16AE: sub     esp, 10h
0x6E16B1: push    ebx
0x6E16B2: push    ebp
0x6E16B3: push    esi
0x6E16B4: push    edi
0x6E16B5: mov     eax, ds:0B30AACh
0x6E16BA: xor     eax, esp
0x6E16BC: push    eax
0x6E16BD: lea     eax, [esp+30h+var_C]
0x6E16C1: mov     large fs:0, eax
0x6E16C7: mov     edi, ecx
0x6E16C9: mov     ebx, [esp+30h+arg_0]
0x6E16CD: push    ebx
0x6E16CE: call    sub_715E70
0x6E16D3: cmp     dword ptr [ebx+0D8h], 4010003h
0x6E16DD: jnb     loc_6E1876
0x6E16E3: mov     esi, ds:0B3E040h
0x6E16E9: movzx   eax, word ptr [esi+2Ah]
0x6E16ED: xor     ebp, ebp
0x6E16EF: cmp     eax, ebp
0x6E16F1: mov     [esp+30h+var_14], eax
0x6E16F5: mov     [esp+30h+var_1C], ebp
0x6E16F9: jbe     loc_6E181C
0x6E16FF: add     edi, 3Ch ; '<'
0x6E1702: mov     [esp+30h+var_18], edi
0x6E1706: jmp     short loc_6E1714
0x6E1708: jmp     short loc_6E1710
0x6E170A: align 10h
0x6E1710: mov     ebx, [esp+30h+arg_0]
0x6E1714: mov     eax, [esi+14h]
0x6E1717: mov     edi, [eax+ebp*4]
0x6E171A: push    34h ; '4'; Size
0x6E171C: call    FormHeapAlloc
0x6E1721: add     esp, 4
0x6E1724: mov     [esp+30h+var_10], eax
0x6E1728: xor     esi, esi
0x6E172A: cmp     eax, esi
0x6E172C: mov     [esp+30h+var_4], esi
0x6E1730: jz      short loc_6E1740
0x6E1732: push    0Ch
0x6E1734: push    0Ch
0x6E1736: push    edi
0x6E1737: mov     ecx, eax; this
0x6E1739: call    ??0NiSequence@@QAE@XZ; NiSequence::NiSequence(void)
0x6E173E: mov     esi, eax
0x6E1740: push    edi
0x6E1741: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6E1749: call    FormHeapFree
0x6E174E: mov     ecx, ds:0B3E040h
0x6E1754: mov     edx, [ecx+4]
0x6E1757: mov     eax, [edx+ebp*4]
0x6E175A: add     esp, 4
0x6E175D: mov     ecx, ebx
0x6E175F: mov     [esi+30h], eax
0x6E1762: call    sub_7124A0
0x6E1767: mov     edi, [esi+2Ch]
0x6E176A: mov     ebx, eax
0x6E176C: cmp     edi, ebx
0x6E176E: jz      short loc_6E17A1
0x6E1770: test    edi, edi
0x6E1772: jz      short loc_6E1790
0x6E1774: lea     ecx, [edi+4]
0x6E1777: push    ecx; lpAddend
0x6E1778: call    dword ptr ds:0A2807Ch
0x6E177E: test    eax, eax
0x6E1780: jnz     short loc_6E1790
0x6E1782: test    edi, edi
0x6E1784: jz      short loc_6E1790
0x6E1786: mov     edx, [edi]
0x6E1788: mov     eax, [edx]
0x6E178A: push    1
0x6E178C: mov     ecx, edi
0x6E178E: call    eax
0x6E1790: test    ebx, ebx
0x6E1792: mov     [esi+2Ch], ebx
0x6E1795: jz      short loc_6E17A1
0x6E1797: add     ebx, 4
0x6E179A: push    ebx; lpAddend
0x6E179B: call    dword ptr ds:0A28078h
0x6E17A1: mov     ecx, ds:0B3E040h
0x6E17A7: mov     edx, [ecx+24h]
0x6E17AA: mov     ebx, [edx+ebp*4]
0x6E17AD: test    ebx, ebx
0x6E17AF: jz      short loc_6E17E9
0x6E17B1: mov     eax, ds:0B3E040h
0x6E17B6: mov     ecx, [eax+34h]
0x6E17B9: mov     eax, [esp+30h+var_1C]
0x6E17BD: mov     edi, [ecx+eax*4]
0x6E17C0: mov     ecx, [esp+30h+arg_0]
0x6E17C4: add     eax, 1
0x6E17C7: sub     ebx, 1
0x6E17CA: mov     [esp+30h+var_1C], eax
0x6E17CE: call    sub_7124A0
0x6E17D3: push    eax; int
0x6E17D4: push    edi; Src
0x6E17D5: mov     ecx, esi
0x6E17D7: call    sub_6D83A0
0x6E17DC: push    edi
0x6E17DD: call    FormHeapFree
0x6E17E2: add     esp, 4
0x6E17E5: test    ebx, ebx
0x6E17E7: jnz     short loc_6E17B1
0x6E17E9: mov     edi, [esi+8]
0x6E17EC: push    ecx
0x6E17ED: mov     eax, esp
0x6E17EF: mov     [eax], esi
0x6E17F1: mov     [esp+34h+var_10], esp
0x6E17F5: add     esi, 4
0x6E17F8: push    esi; lpAddend
0x6E17F9: call    dword ptr ds:0A28078h
0x6E17FF: mov     ecx, [esp+34h+var_18]
0x6E1803: push    edi
0x6E1804: call    sub_7C2FF0
0x6E1809: mov     esi, ds:0B3E040h
0x6E180F: add     ebp, 1
0x6E1812: cmp     ebp, [esp+30h+var_14]
0x6E1816: jb      loc_6E1710
0x6E181C: test    esi, esi
0x6E181E: jz      short loc_6E186A
0x6E1820: mov     edx, [esi+34h]
0x6E1823: lea     eax, [esi+30h]
0x6E1826: push    edx
0x6E1827: mov     dword ptr [eax], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6E182D: call    FormHeapFree
0x6E1832: mov     eax, [esi+24h]
0x6E1835: push    eax
0x6E1836: mov     dword ptr [esi+20h], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x6E183D: call    FormHeapFree
0x6E1842: mov     ecx, [esi+14h]
0x6E1845: push    ecx
0x6E1846: mov     dword ptr [esi+10h], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6E184D: call    FormHeapFree
0x6E1852: mov     edx, [esi+4]
0x6E1855: push    edx
0x6E1856: mov     dword ptr [esi], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x6E185C: call    FormHeapFree
0x6E1861: push    esi
0x6E1862: call    FormHeapFree
0x6E1867: add     esp, 14h
0x6E186A: mov     dword ptr ds:0B3E040h, 0
0x6E1874: jmp     short loc_6E18B8
0x6E1876: mov     ecx, ebx
0x6E1878: call    sub_7124D0
0x6E187D: test    eax, eax
0x6E187F: jbe     short loc_6E18B8
0x6E1881: mov     ebx, ds:0A28078h
0x6E1887: lea     ebp, [edi+3Ch]
0x6E188A: mov     edi, eax
0x6E188C: lea     esp, [esp+0]
0x6E1890: mov     ecx, [esp+30h+arg_0]
0x6E1894: call    sub_7124A0
0x6E1899: mov     esi, [eax+8]
0x6E189C: push    ecx
0x6E189D: mov     ecx, esp
0x6E189F: mov     [ecx], eax
0x6E18A1: add     eax, 4
0x6E18A4: mov     [esp+34h+var_10], esp
0x6E18A8: push    eax; lpAddend
0x6E18A9: call    ebx ; InterlockedIncrement
0x6E18AB: push    esi
0x6E18AC: mov     ecx, ebp
0x6E18AE: call    sub_7C2FF0
0x6E18B3: sub     edi, 1
0x6E18B6: jnz     short loc_6E1890
0x6E18B8: mov     ecx, [esp+30h+var_C]
0x6E18BC: mov     large fs:0, ecx
0x6E18C3: pop     ecx
0x6E18C4: pop     edi
0x6E18C5: pop     esi
0x6E18C6: pop     ebp
0x6E18C7: pop     ebx
0x6E18C8: add     esp, 1Ch
0x6E18CB: retn    4

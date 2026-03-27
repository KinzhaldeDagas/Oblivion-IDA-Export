0x6F1800: push    ebp
0x6F1801: mov     ebp, esp
0x6F1803: push    0FFFFFFFFh
0x6F1805: push    offset SEH_6F1800
0x6F180A: mov     eax, large fs:0
0x6F1810: push    eax
0x6F1811: sub     esp, 8
0x6F1814: push    ebx
0x6F1815: push    esi
0x6F1816: push    edi
0x6F1817: mov     eax, ds:0B30AACh
0x6F181C: xor     eax, ebp
0x6F181E: push    eax
0x6F181F: lea     eax, [ebp+var_C]
0x6F1822: mov     large fs:0, eax
0x6F1828: mov     [ebp+var_10], esp
0x6F182B: mov     edi, [ebp+arg_8]
0x6F182E: mov     ebx, [ebp+arg_4]
0x6F1831: mov     esi, [ebp+arg_0]
0x6F1834: mov     [ebp+var_14], edi
0x6F1837: mov     [ebp+var_4], 0
0x6F183E: mov     edi, edi
0x6F1840: cmp     esi, ebx
0x6F1842: jz      short loc_6F187E
0x6F1844: push    esi
0x6F1845: push    edi
0x6F1846: call    sub_6F1670
0x6F184B: add     edi, 20h ; ' '
0x6F184E: add     esp, 8
0x6F1851: mov     [ebp+arg_8], edi
0x6F1854: add     esi, 20h ; ' '
0x6F1857: jmp     short loc_6F1840
0x6F1859: mov     esi, [ebp+var_14]
0x6F185C: mov     edi, [ebp+arg_8]
0x6F185F: cmp     esi, edi
0x6F1861: jz      short loc_6F1875
0x6F1863: mov     ebx, [ebp+arg_C]
0x6F1866: push    esi
0x6F1867: mov     ecx, ebx
0x6F1869: call    sub_556F10
0x6F186E: add     esi, 20h ; ' '
0x6F1871: cmp     esi, edi
0x6F1873: jnz     short loc_6F1866
0x6F1875: push    0
0x6F1877: push    0
0x6F1879: call    ThrowException??
0x6F187E: mov     eax, edi
0x6F1880: mov     ecx, [ebp+var_C]
0x6F1883: mov     large fs:0, ecx
0x6F188A: pop     ecx
0x6F188B: pop     edi
0x6F188C: pop     esi
0x6F188D: pop     ebx
0x6F188E: mov     esp, ebp
0x6F1890: pop     ebp
0x6F1891: retn

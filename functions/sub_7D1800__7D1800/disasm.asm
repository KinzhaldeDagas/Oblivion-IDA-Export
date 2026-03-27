0x7D1800: push    esi
0x7D1801: movzx   esi, [esp+4+arg_0]
0x7D1806: add     esi, esi
0x7D1808: add     esi, esi
0x7D180A: cmp     ds:dword_B43490[esi], 0
0x7D1811: push    edi
0x7D1812: jz      loc_7D18BE
0x7D1818: push    ebx
0x7D1819: push    ebp
0x7D181A: mov     edx, 2
0x7D181F: mov     edi, offset dword_B4501C
0x7D1824: mov     ebp, 9
0x7D1829: lea     esp, [esp+0]
0x7D1830: mov     eax, [edi-4]
0x7D1833: test    eax, eax
0x7D1835: jz      short loc_7D1853
0x7D1837: cmp     byte ptr [eax+8], 0
0x7D183B: jz      short loc_7D1853
0x7D183D: lea     ecx, [edx-1]
0x7D1840: mov     ebx, 1
0x7D1845: shl     ebx, cl
0x7D1847: test    ds:dword_B43490[esi], ebx
0x7D184D: setz    cl
0x7D1850: mov     [eax+8], cl
0x7D1853: mov     eax, [edi]
0x7D1855: test    eax, eax
0x7D1857: jz      short loc_7D1874
0x7D1859: cmp     byte ptr [eax+8], 0
0x7D185D: jz      short loc_7D1874
0x7D185F: mov     ecx, edx
0x7D1861: mov     ebx, 1
0x7D1866: shl     ebx, cl
0x7D1868: test    ds:dword_B43490[esi], ebx
0x7D186E: setz    cl
0x7D1871: mov     [eax+8], cl
0x7D1874: mov     eax, [edi+4]
0x7D1877: test    eax, eax
0x7D1879: jz      short loc_7D1897
0x7D187B: cmp     byte ptr [eax+8], 0
0x7D187F: jz      short loc_7D1897
0x7D1881: lea     ecx, [edx+1]
0x7D1884: mov     ebx, 1
0x7D1889: shl     ebx, cl
0x7D188B: test    ds:dword_B43490[esi], ebx
0x7D1891: setz    cl
0x7D1894: mov     [eax+8], cl
0x7D1897: add     edx, 3
0x7D189A: add     edi, 0Ch
0x7D189D: sub     ebp, 1
0x7D18A0: jnz     short loc_7D1830
0x7D18A2: push    1; a1
0x7D18A4: call    GetShaderDefinition
0x7D18A9: mov     edx, [eax+4]
0x7D18AC: mov     ecx, [edx+30h]
0x7D18AF: add     eax, 4
0x7D18B2: mov     eax, [ecx]
0x7D18B4: mov     edx, [eax+48h]
0x7D18B7: add     esp, 4
0x7D18BA: call    edx
0x7D18BC: pop     ebp
0x7D18BD: pop     ebx
0x7D18BE: cmp     ds:dword_B44840[esi], 0
0x7D18C5: jz      short loc_7D191B
0x7D18C7: xor     eax, eax
0x7D18C9: lea     esp, [esp+0]
0x7D18D0: mov     edx, ds:0B45518h[eax*4]
0x7D18D7: test    edx, edx
0x7D18D9: jz      short loc_7D18F7
0x7D18DB: cmp     byte ptr [edx+8], 0
0x7D18DF: jz      short loc_7D18F7
0x7D18E1: lea     ecx, [eax+1]
0x7D18E4: mov     edi, 1
0x7D18E9: shl     edi, cl
0x7D18EB: test    ds:dword_B44840[esi], edi
0x7D18F1: setz    cl
0x7D18F4: mov     [edx+8], cl
0x7D18F7: add     eax, 1
0x7D18FA: cmp     eax, 11h
0x7D18FD: jl      short loc_7D18D0
0x7D18FF: push    1; a1
0x7D1901: call    GetShaderDefinition
0x7D1906: mov     edx, [eax+4]
0x7D1909: mov     ecx, [edx+2Ch]
0x7D190C: add     esp, 4
0x7D190F: add     eax, 4
0x7D1912: mov     eax, [ecx]
0x7D1914: mov     edx, [eax+48h]
0x7D1917: pop     edi
0x7D1918: pop     esi
0x7D1919: jmp     edx
0x7D191B: pop     edi
0x7D191C: pop     esi
0x7D191D: retn

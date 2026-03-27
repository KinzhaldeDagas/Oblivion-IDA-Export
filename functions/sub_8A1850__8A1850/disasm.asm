0x8A1850: push    0FFFFFFFFh
0x8A1852: push    offset SEH_8A1850
0x8A1857: mov     eax, large fs:0
0x8A185D: push    eax
0x8A185E: sub     esp, 24h
0x8A1861: push    ebx
0x8A1862: push    ebp
0x8A1863: push    esi
0x8A1864: push    edi
0x8A1865: mov     eax, ds:0B30AACh
0x8A186A: xor     eax, esp
0x8A186C: push    eax
0x8A186D: lea     eax, [esp+44h+var_C]
0x8A1871: mov     large fs:0, eax
0x8A1877: mov     [esp+44h+var_28], ecx
0x8A187B: mov     eax, [ecx]
0x8A187D: mov     eax, [eax+74h]
0x8A1880: lea     edx, [esp+44h+var_30+3]
0x8A1884: push    edx
0x8A1885: call    eax
0x8A1887: xor     ebx, ebx
0x8A1889: xor     ecx, ecx
0x8A188B: mov     ebp, 80000000h
0x8A1890: mov     [esp+44h+var_18], ebx
0x8A1894: mov     [esp+44h+var_14], ecx
0x8A1898: mov     [esp+44h+var_10], ebp
0x8A189C: mov     [esp+44h+var_4], ebx
0x8A18A0: mov     [esp+44h+var_24], ebx
0x8A18A4: mov     [esp+44h+var_20], ebx
0x8A18A8: mov     [esp+44h+var_1C], ebp
0x8A18AC: cmp     eax, ebx
0x8A18AE: mov     byte ptr [esp+44h+var_4], 1
0x8A18B3: jz      short loc_8A18FF
0x8A18B5: mov     ecx, [eax+4]
0x8A18B8: mov     edx, [eax+0Ch]
0x8A18BB: mov     [eax+0Ch], ebp
0x8A18BE: mov     [eax+4], ebx
0x8A18C1: mov     [esp+44h+var_18], ecx
0x8A18C5: mov     ecx, [eax+8]
0x8A18C8: mov     [eax+8], ebx
0x8A18CB: mov     esi, [esp+44h+var_24]
0x8A18CF: mov     ebp, edx
0x8A18D1: mov     edx, [eax+10h]
0x8A18D4: mov     [eax+10h], esi
0x8A18D7: mov     esi, [esp+44h+var_20]
0x8A18DB: mov     [esp+44h+var_24], edx
0x8A18DF: mov     edx, [eax+14h]
0x8A18E2: mov     [eax+14h], esi
0x8A18E5: mov     esi, [esp+44h+var_1C]
0x8A18E9: mov     [esp+44h+var_20], edx
0x8A18ED: mov     edx, [eax+18h]
0x8A18F0: mov     [eax+18h], esi
0x8A18F3: mov     [esp+44h+var_14], ecx
0x8A18F7: mov     [esp+44h+var_10], ebp
0x8A18FB: mov     [esp+44h+var_1C], edx
0x8A18FF: mov     esi, [esp+44h+arg_0]
0x8A1903: mov     eax, [esi+220h]
0x8A1909: mov     [esp+44h+var_2C], ecx
0x8A190D: push    1
0x8A190F: lea     ecx, [esp+48h+arg_0]
0x8A1913: push    ecx
0x8A1914: push    4
0x8A1916: lea     edx, [esp+50h+var_2C]
0x8A191A: push    edx
0x8A191B: push    eax
0x8A191C: mov     eax, [eax+8]
0x8A191F: mov     [esp+58h+arg_0], 4
0x8A1927: call    eax
0x8A1929: add     esp, 14h
0x8A192C: xor     edi, edi
0x8A192E: cmp     [esp+44h+var_2C], ebx
0x8A1932: jbe     short loc_8A1959
0x8A1934: mov     ecx, [esp+44h+var_18]
0x8A1938: mov     eax, [ecx+edi*4]
0x8A193B: cmp     eax, ebx
0x8A193D: jz      short loc_8A1944
0x8A193F: mov     eax, [eax+8]
0x8A1942: jmp     short loc_8A1946
0x8A1944: xor     eax, eax
0x8A1946: mov     edx, [esi]
0x8A1948: push    eax
0x8A1949: mov     eax, [edx+2Ch]
0x8A194C: mov     ecx, esi
0x8A194E: call    eax
0x8A1950: add     edi, 1
0x8A1953: cmp     edi, [esp+44h+var_2C]
0x8A1957: jb      short loc_8A1934
0x8A1959: mov     ecx, [esp+44h+var_28]
0x8A195D: push    esi
0x8A195E: call    sub_8A2610
0x8A1963: lea     ecx, [esp+44h+var_24]
0x8A1967: push    ecx
0x8A1968: push    esi
0x8A1969: call    sub_8E8310
0x8A196E: mov     eax, [esp+4Ch+var_1C]
0x8A1972: mov     esi, ds:0BA9DE4h
0x8A1978: mov     edi, large fs:2Ch
0x8A197F: add     esp, 8
0x8A1982: test    eax, eax
0x8A1984: mov     byte ptr [esp+44h+var_4], bl
0x8A1988: js      short loc_8A19B3
0x8A198A: mov     edx, [edi+esi*4]
0x8A198D: mov     ecx, [edx+19Ch]
0x8A1993: cmp     ecx, ebx
0x8A1995: jnz     short loc_8A199D
0x8A1997: mov     ecx, ds:0BA7D9Ch
0x8A199D: and     eax, 3FFFFFFFh
0x8A19A2: add     eax, eax
0x8A19A4: push    14h
0x8A19A6: add     eax, eax
0x8A19A8: push    eax
0x8A19A9: mov     eax, [esp+4Ch+var_24]
0x8A19AD: push    eax
0x8A19AE: call    sub_8A75D0
0x8A19B3: test    ebp, ebp
0x8A19B5: mov     [esp+44h+var_4], 0FFFFFFFFh
0x8A19BD: js      short loc_8A19EA
0x8A19BF: mov     ecx, [edi+esi*4]
0x8A19C2: mov     eax, [ecx+19Ch]
0x8A19C8: cmp     eax, ebx
0x8A19CA: jnz     short loc_8A19D1
0x8A19CC: mov     eax, ds:0BA7D9Ch
0x8A19D1: mov     edx, [esp+44h+var_18]
0x8A19D5: and     ebp, 3FFFFFFFh
0x8A19DB: add     ebp, ebp
0x8A19DD: push    14h
0x8A19DF: add     ebp, ebp
0x8A19E1: push    ebp
0x8A19E2: push    edx
0x8A19E3: mov     ecx, eax
0x8A19E5: call    sub_8A75D0
0x8A19EA: mov     ecx, [esp+44h+var_C]
0x8A19EE: mov     large fs:0, ecx
0x8A19F5: pop     ecx
0x8A19F6: pop     edi
0x8A19F7: pop     esi
0x8A19F8: pop     ebp
0x8A19F9: pop     ebx
0x8A19FA: add     esp, 30h
0x8A19FD: retn    4

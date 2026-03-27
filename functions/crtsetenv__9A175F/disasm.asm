0x9A175F: push    ebp
0x9A1760: mov     ebp, esp
0x9A1762: sub     esp, 14h
0x9A1765: mov     eax, [ebp+arg_0]
0x9A1768: push    ebx
0x9A1769: xor     ebx, ebx
0x9A176B: cmp     eax, ebx
0x9A176D: push    edi
0x9A176E: mov     [ebp+var_10], ebx
0x9A1771: jnz     short loc_9A1790
0x9A1773: call    __errno
0x9A1778: push    ebx
0x9A1779: push    ebx
0x9A177A: push    ebx
0x9A177B: push    ebx
0x9A177C: push    ebx
0x9A177D: mov     dword ptr [eax], 16h
0x9A1783: call    __invalid_parameter
0x9A1788: add     esp, 14h
0x9A178B: or      eax, 0FFFFFFFFh
0x9A178E: jmp     short loc_9A17FC
0x9A1790: push    esi; Src
0x9A1791: mov     esi, [eax]
0x9A1793: cmp     esi, ebx
0x9A1795: mov     [ebp+Str], esi
0x9A1798: jz      short loc_9A17ED
0x9A179A: push    3Dh ; '='; unsigned int
0x9A179C: push    esi; unsigned __int8 *
0x9A179D: call    __mbschr
0x9A17A2: cmp     eax, ebx
0x9A17A4: pop     ecx
0x9A17A5: pop     ecx
0x9A17A6: mov     [ebp+var_C], eax
0x9A17A9: jz      short loc_9A17ED
0x9A17AB: cmp     esi, eax
0x9A17AD: jz      short loc_9A17ED
0x9A17AF: xor     ecx, ecx
0x9A17B1: cmp     [eax+1], bl
0x9A17B4: mov     eax, dword_BA9DB4
0x9A17B9: setz    cl
0x9A17BC: cmp     eax, dword_BA9DB8
0x9A17C2: mov     [ebp+var_8], ecx
0x9A17C5: jnz     short loc_9A17D3
0x9A17C7: mov     edi, eax
0x9A17C9: call    _copy_environ
0x9A17CE: mov     dword_BA9DB4, eax
0x9A17D3: cmp     eax, ebx
0x9A17D5: jnz     short loc_9A1837
0x9A17D7: cmp     [ebp+arg_4], ebx
0x9A17DA: jz      short loc_9A1800
0x9A17DC: cmp     dword_BA9DBC, ebx
0x9A17E2: jz      short loc_9A1800
0x9A17E4: call    ___wtomb_environ
0x9A17E9: test    eax, eax
0x9A17EB: jz      short loc_9A1837
0x9A17ED: call    __errno
0x9A17F2: mov     dword ptr [eax], 16h
0x9A17F8: or      eax, 0FFFFFFFFh
0x9A17FB: pop     esi
0x9A17FC: pop     edi
0x9A17FD: pop     ebx
0x9A17FE: leave
0x9A17FF: retn
0x9A1800: cmp     [ebp+var_8], ebx
0x9A1803: jnz     loc_9A199F
0x9A1809: push    4
0x9A180B: call    unknown_libname_72
0x9A1810: cmp     eax, ebx
0x9A1812: pop     ecx
0x9A1813: mov     dword_BA9DB4, eax
0x9A1818: jz      short loc_9A17F8
0x9A181A: mov     [eax], ebx
0x9A181C: cmp     dword_BA9DBC, ebx
0x9A1822: jnz     short loc_9A1837
0x9A1824: push    4
0x9A1826: call    unknown_libname_72
0x9A182B: cmp     eax, ebx
0x9A182D: pop     ecx
0x9A182E: mov     dword_BA9DBC, eax
0x9A1833: jz      short loc_9A17F8
0x9A1835: mov     [eax], ebx
0x9A1837: mov     esi, dword_BA9DB4
0x9A183D: cmp     esi, ebx
0x9A183F: mov     [ebp+var_14], esi
0x9A1842: jz      short loc_9A17F8
0x9A1844: mov     edi, [ebp+var_C]
0x9A1847: sub     edi, [ebp+Str]
0x9A184A: push    [ebp+Str]
0x9A184D: call    _findenv
0x9A1852: mov     edi, eax
0x9A1854: cmp     edi, ebx
0x9A1856: pop     ecx
0x9A1857: jl      short loc_9A18AB
0x9A1859: cmp     [esi], ebx
0x9A185B: jz      short loc_9A18AB
0x9A185D: lea     esi, [esi+edi*4]
0x9A1860: push    dword ptr [esi]; Memory
0x9A1862: call    _free
0x9A1867: cmp     [ebp+var_8], ebx
0x9A186A: pop     ecx
0x9A186B: jnz     short loc_9A1888
0x9A186D: mov     eax, [ebp+Str]
0x9A1870: mov     [esi], eax
0x9A1872: mov     eax, [ebp+arg_0]
0x9A1875: mov     [eax], ebx
0x9A1877: jmp     loc_9A18FE
0x9A187C: mov     eax, [esi+4]
0x9A187F: mov     [esi], eax
0x9A1881: mov     eax, [ebp+var_14]
0x9A1884: inc     edi
0x9A1885: lea     esi, [eax+edi*4]
0x9A1888: cmp     [esi], ebx
0x9A188A: jnz     short loc_9A187C
0x9A188C: cmp     edi, 3FFFFFFFh
0x9A1892: jnb     short loc_9A18FE
0x9A1894: push    4
0x9A1896: push    edi
0x9A1897: push    dword_BA9DB4
0x9A189D: call    unknown_libname_78
0x9A18A2: add     esp, 0Ch
0x9A18A5: cmp     eax, ebx
0x9A18A7: jz      short loc_9A18FE
0x9A18A9: jmp     short loc_9A18F9
0x9A18AB: cmp     [ebp+var_8], ebx
0x9A18AE: jnz     loc_9A1991
0x9A18B4: cmp     edi, ebx
0x9A18B6: jge     short loc_9A18BA
0x9A18B8: neg     edi
0x9A18BA: lea     eax, [edi+2]
0x9A18BD: cmp     eax, edi
0x9A18BF: jl      loc_9A17F8
0x9A18C5: cmp     eax, 3FFFFFFFh
0x9A18CA: jnb     loc_9A17F8
0x9A18D0: push    eax
0x9A18D1: push    4
0x9A18D3: push    dword_BA9DB4
0x9A18D9: call    unknown_libname_78
0x9A18DE: add     esp, 0Ch
0x9A18E1: cmp     eax, ebx
0x9A18E3: jz      loc_9A17F8
0x9A18E9: mov     edx, [ebp+Str]
0x9A18EC: lea     ecx, [eax+edi*4]
0x9A18EF: mov     [ecx], edx
0x9A18F1: mov     [ecx+4], ebx
0x9A18F4: mov     ecx, [ebp+arg_0]
0x9A18F7: mov     [ecx], ebx
0x9A18F9: mov     dword_BA9DB4, eax
0x9A18FE: cmp     [ebp+arg_4], ebx
0x9A1901: jz      short loc_9A197B
0x9A1903: mov     esi, [ebp+Str]
0x9A1906: push    1
0x9A1908: push    esi; Str
0x9A1909: call    _strlen
0x9A190E: inc     eax
0x9A190F: pop     ecx
0x9A1910: inc     eax
0x9A1911: push    eax
0x9A1912: call    unknown_libname_74
0x9A1917: mov     edi, eax
0x9A1919: cmp     edi, ebx
0x9A191B: pop     ecx
0x9A191C: pop     ecx
0x9A191D: jz      short loc_9A197B
0x9A191F: push    esi; Src
0x9A1920: push    esi; Str
0x9A1921: call    _strlen
0x9A1926: inc     eax
0x9A1927: pop     ecx
0x9A1928: inc     eax
0x9A1929: push    eax; SizeInBytes
0x9A192A: push    edi; Dst
0x9A192B: call    _strcpy_s
0x9A1930: add     esp, 0Ch
0x9A1933: test    eax, eax
0x9A1935: jz      short loc_9A1944
0x9A1937: push    ebx
0x9A1938: push    ebx
0x9A1939: push    ebx
0x9A193A: push    ebx
0x9A193B: push    ebx
0x9A193C: call    __invoke_watson
0x9A1941: add     esp, 14h
0x9A1944: mov     ecx, [ebp+var_8]
0x9A1947: mov     eax, edi
0x9A1949: sub     eax, esi
0x9A194B: add     eax, [ebp+var_C]
0x9A194E: mov     [eax], bl
0x9A1950: inc     eax
0x9A1951: neg     ecx
0x9A1953: sbb     ecx, ecx
0x9A1955: not     ecx
0x9A1957: and     ecx, eax
0x9A1959: push    ecx; lpValue
0x9A195A: push    edi; lpName
0x9A195B: call    ds:SetEnvironmentVariableA
0x9A1961: test    eax, eax
0x9A1963: jnz     short loc_9A1974
0x9A1965: or      [ebp+var_10], 0FFFFFFFFh
0x9A1969: call    __errno
0x9A196E: mov     dword ptr [eax], 2Ah ; '*'
0x9A1974: push    edi; Memory
0x9A1975: call    _free
0x9A197A: pop     ecx
0x9A197B: cmp     [ebp+var_8], ebx
0x9A197E: jz      short loc_9A1989
0x9A1980: push    [ebp+Str]; Memory
0x9A1983: call    _free
0x9A1988: pop     ecx
0x9A1989: mov     eax, [ebp+var_10]
0x9A198C: jmp     loc_9A17FB
0x9A1991: push    [ebp+Str]; Memory
0x9A1994: call    _free
0x9A1999: mov     eax, [ebp+arg_0]
0x9A199C: pop     ecx
0x9A199D: mov     [eax], ebx
0x9A199F: xor     eax, eax
0x9A19A1: jmp     loc_9A17FB

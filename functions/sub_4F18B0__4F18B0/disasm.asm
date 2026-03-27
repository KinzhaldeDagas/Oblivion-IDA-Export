0x4F18B0: mov     eax, [esp+arg_8]
0x4F18B4: mov     edx, [esp+arg_C]
0x4F18B8: push    ebx
0x4F18B9: push    edi
0x4F18BA: mov     dword ptr [eax], 0
0x4F18C0: mov     edi, ecx
0x4F18C2: mov     dword ptr [edx], 0
0x4F18C8: mov     ecx, [edi+7Ch]
0x4F18CB: xor     bl, bl
0x4F18CD: test    ecx, ecx
0x4F18CF: jnz     loc_4F1961
0x4F18D5: lea     eax, [edi+10h]
0x4F18D8: test    eax, eax
0x4F18DA: jz      loc_4F197F
0x4F18E0: cmp     dword ptr [eax], 0
0x4F18E3: jz      short loc_4F18E8
0x4F18E5: add     ecx, 1
0x4F18E8: mov     eax, [eax+4]
0x4F18EB: test    eax, eax
0x4F18ED: jnz     short loc_4F18E0
0x4F18EF: test    ecx, ecx
0x4F18F1: jz      loc_4F1978
0x4F18F7: push    ebp
0x4F18F8: lea     ebp, [ecx-1]
0x4F18FB: test    ebp, ebp
0x4F18FD: jl      short loc_4F1970
0x4F18FF: mov     ebx, [esp+0Ch+arg_4]
0x4F1903: push    esi
0x4F1904: push    ebp; a2
0x4F1905: mov     ecx, edi; this
0x4F1907: call    TESForm_GetOverrideFile
0x4F190C: mov     ecx, eax
0x4F190E: call    sub_4520F0
0x4F1913: mov     esi, eax
0x4F1915: test    esi, esi
0x4F1917: jz      short loc_4F1938
0x4F1919: mov     eax, [esp+10h+arg_0]
0x4F191D: push    ebx
0x4F191E: push    eax
0x4F191F: push    esi
0x4F1920: mov     ecx, edi
0x4F1922: call    TESWorldSpace__FindCellInFile
0x4F1927: test    al, al
0x4F1929: jz      short loc_4F1938
0x4F192B: push    esi
0x4F192C: call    sub_4D1990
0x4F1931: add     esp, 4
0x4F1934: test    al, al
0x4F1936: jnz     short loc_4F1946
0x4F1938: sub     ebp, 1
0x4F193B: jns     short loc_4F1904
0x4F193D: pop     esi
0x4F193E: pop     ebp
0x4F193F: pop     edi
0x4F1940: xor     al, al
0x4F1942: pop     ebx
0x4F1943: retn    10h
0x4F1946: mov     ecx, [esp+10h+arg_8]
0x4F194A: mov     eax, [esp+10h+arg_C]
0x4F194E: mov     [ecx], esi
0x4F1950: mov     edx, [esi+25Ch]
0x4F1956: pop     esi
0x4F1957: pop     ebp
0x4F1958: pop     edi
0x4F1959: mov     [eax], edx
0x4F195B: mov     al, 1
0x4F195D: pop     ebx
0x4F195E: retn    10h
0x4F1961: pop     edi
0x4F1962: pop     ebx
0x4F1963: mov     [esp+arg_C], edx
0x4F1967: mov     [esp+arg_8], eax
0x4F196B: jmp     sub_4F18B0
0x4F1970: pop     ebp
0x4F1971: pop     edi
0x4F1972: xor     al, al
0x4F1974: pop     ebx
0x4F1975: retn    10h
0x4F1978: pop     edi
0x4F1979: xor     al, al
0x4F197B: pop     ebx
0x4F197C: retn    10h
0x4F197F: pop     edi
0x4F1980: mov     al, bl
0x4F1982: pop     ebx
0x4F1983: retn    10h

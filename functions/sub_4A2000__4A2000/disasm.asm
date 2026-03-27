0x4A2000: sub     esp, 118h
0x4A2006: mov     eax, ds:0B30AACh
0x4A200B: xor     eax, esp
0x4A200D: mov     [esp+118h+var_4], eax
0x4A2014: push    esi
0x4A2015: mov     esi, [esp+11Ch+Str1]
0x4A201C: push    edi
0x4A201D: push    offset CriticalSection; lpCriticalSection
0x4A2022: mov     edi, ecx
0x4A2024: call    dword ptr ds:0A2806Ch
0x4A202A: call    dword ptr ds:0A2808Ch
0x4A2030: add     dword ptr ds:0B353FCh, 1
0x4A2037: mov     ds:0B353F8h, eax
0x4A203C: lea     eax, [esp+120h+FullPath]
0x4A2040: push    eax; int
0x4A2041: push    esi; Str1
0x4A2042: call    sub_47D8F0
0x4A2047: lea     ecx, [esp+128h+var_114]
0x4A204B: push    ecx; int
0x4A204C: lea     edx, [esp+12Ch+var_10C]
0x4A2050: push    edx; int
0x4A2051: lea     eax, [esp+130h+FullPath]
0x4A2055: push    eax; FullPath
0x4A2056: call    HashFilePAth
0x4A205B: lea     ecx, [esp+134h+FullPath]
0x4A205F: push    ecx
0x4A2060: lea     edx, [esp+138h+var_114]
0x4A2064: push    edx
0x4A2065: lea     eax, [esp+13Ch+var_10C]
0x4A2069: push    eax
0x4A206A: push    1
0x4A206C: call    ArchiveManager_LazyFileLookup
0x4A2071: add     esp, 24h
0x4A2074: push    ecx
0x4A2075: mov     esi, eax
0x4A2077: test    esi, esi
0x4A2079: mov     eax, [esp+124h+arg_4]
0x4A2080: mov     ecx, esp
0x4A2082: mov     [esp+124h+var_118], esp
0x4A2086: mov     [ecx], eax
0x4A2088: jz      short loc_4A20A3
0x4A208A: test    eax, eax
0x4A208C: jz      short loc_4A2098
0x4A208E: add     eax, 4
0x4A2091: push    eax; lpAddend
0x4A2092: call    dword ptr ds:0A28078h
0x4A2098: mov     ecx, [edi+8]
0x4A209B: push    esi
0x4A209C: call    sub_6AA3B0
0x4A20A1: jmp     short loc_4A20BE
0x4A20A3: test    eax, eax
0x4A20A5: jz      short loc_4A20B1
0x4A20A7: add     eax, 4
0x4A20AA: push    eax; lpAddend
0x4A20AB: call    dword ptr ds:0A28078h
0x4A20B1: lea     ecx, [esp+124h+FullPath]
0x4A20B5: push    ecx
0x4A20B6: mov     ecx, [edi+0Ch]
0x4A20B9: call    sub_4A1B10
0x4A20BE: sub     dword ptr ds:0B353FCh, 1
0x4A20C5: jnz     short loc_4A20D1
0x4A20C7: mov     dword ptr ds:0B353F8h, 0
0x4A20D1: push    offset CriticalSection; lpCriticalSection
0x4A20D6: call    dword ptr ds:0A28074h
0x4A20DC: mov     ecx, [esp+120h+var_4]
0x4A20E3: pop     edi
0x4A20E4: pop     esi
0x4A20E5: xor     ecx, esp
0x4A20E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A20EC: add     esp, 118h
0x4A20F2: retn    8

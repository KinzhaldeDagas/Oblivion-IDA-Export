0x6C2000: push    0FFFFFFFFh
0x6C2002: push    offset SEH_6E3250
0x6C2007: mov     eax, large fs:0
0x6C200D: push    eax
0x6C200E: push    esi
0x6C200F: push    edi
0x6C2010: mov     eax, ds:0B30AACh
0x6C2015: xor     eax, esp
0x6C2017: push    eax
0x6C2018: lea     eax, [esp+18h+var_C]
0x6C201C: mov     large fs:0, eax
0x6C2022: mov     edi, [esp+18h+size]
0x6C2026: xor     ecx, ecx
0x6C2028: mov     eax, edi
0x6C202A: mov     edx, 14h
0x6C202F: mul     edx
0x6C2031: seto    cl
0x6C2034: neg     ecx
0x6C2036: or      ecx, eax
0x6C2038: xor     eax, eax
0x6C203A: add     ecx, 4
0x6C203D: setb    al
0x6C2040: neg     eax
0x6C2042: or      eax, ecx
0x6C2044: push    eax; Size
0x6C2045: call    FormHeapAlloc
0x6C204A: add     esp, 4
0x6C204D: mov     [esp+18h+size], eax
0x6C2051: test    eax, eax
0x6C2053: mov     [esp+18h+var_4], 0
0x6C205B: jz      short loc_6C2089
0x6C205D: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C2062: push    offset sub_6C1F90; a4
0x6C2067: push    edi; size
0x6C2068: lea     esi, [eax+4]
0x6C206B: push    14h; a2
0x6C206D: push    esi; a1
0x6C206E: mov     [eax], edi
0x6C2070: call    ArrayConstructor
0x6C2075: mov     eax, esi
0x6C2077: mov     ecx, [esp+18h+var_C]
0x6C207B: mov     large fs:0, ecx
0x6C2082: pop     ecx
0x6C2083: pop     edi
0x6C2084: pop     esi
0x6C2085: add     esp, 0Ch
0x6C2088: retn
0x6C2089: xor     eax, eax
0x6C208B: mov     ecx, [esp+18h+var_C]
0x6C208F: mov     large fs:0, ecx
0x6C2096: pop     ecx
0x6C2097: pop     edi
0x6C2098: pop     esi
0x6C2099: add     esp, 0Ch
0x6C209C: retn

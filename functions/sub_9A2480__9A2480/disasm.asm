0x9A2480: sub     esp, 10Ch
0x9A2486: mov     eax, ___security_cookie
0x9A248B: xor     eax, esp
0x9A248D: mov     [esp+10Ch+var_4], eax
0x9A2494: push    ebx
0x9A2495: mov     ebx, [esp+110h+arg_C]
0x9A249C: push    ebp
0x9A249D: mov     ebp, [esp+114h+SizeInBytes]
0x9A24A4: push    esi
0x9A24A5: mov     esi, [esp+118h+Src]
0x9A24AC: lea     eax, [ebp+1]
0x9A24AF: cmp     eax, 104h
0x9A24B4: push    edi; Src
0x9A24B5: mov     edi, [esp+11Ch+arg_4]
0x9A24BC: jnb     short loc_9A24C5
0x9A24BE: xor     al, al
0x9A24C0: jmp     loc_9A2550
0x9A24C5: push    esi; Src
0x9A24C6: lea     ecx, [esp+120h+Dst]
0x9A24CA: push    104h; SizeInBytes
0x9A24CF: push    ecx; Dst
0x9A24D0: call    _strcpy_s
0x9A24D5: push    esi; Src
0x9A24D6: push    104h; SizeInBytes
0x9A24DB: push    edi; Dst
0x9A24DC: call    _strcpy_s
0x9A24E1: lea     edx, [esp+134h+Dst]
0x9A24E5: push    5Fh ; '_'; Val
0x9A24E7: push    edx; Str
0x9A24E8: call    _strchr
0x9A24ED: mov     esi, eax
0x9A24EF: add     esp, 20h
0x9A24F2: test    esi, esi
0x9A24F4: jz      short loc_9A254E
0x9A24F6: movsx   eax, byte ptr [esi+1]
0x9A24FA: push    eax; C
0x9A24FB: call    _isdigit
0x9A2500: add     esp, 4
0x9A2503: test    eax, eax
0x9A2505: jz      short loc_9A254E
0x9A2507: cmp     byte ptr [esi+2], 0
0x9A250B: jnz     short loc_9A254E
0x9A250D: lea     ecx, [esp+11Ch+Context]
0x9A2511: push    ecx; Context
0x9A2512: lea     edx, [esp+120h+Dst]
0x9A2516: push    offset a__0; "_"
0x9A251B: push    edx; Str
0x9A251C: call    _strtok_s
0x9A2521: mov     esi, eax
0x9A2523: lea     eax, [esp+128h+Context]
0x9A2527: push    eax; Context
0x9A2528: push    offset a__0; "_"
0x9A252D: push    0; Str
0x9A252F: call    _strtok_s
0x9A2534: add     esp, 18h
0x9A2537: test    eax, eax
0x9A2539: jz      short loc_9A254E
0x9A253B: push    eax; Str
0x9A253C: call    j__atol
0x9A2541: push    esi; Src
0x9A2542: push    ebp; SizeInBytes
0x9A2543: push    edi; Dst
0x9A2544: mov     [ebx], eax
0x9A2546: call    sub_434900
0x9A254B: add     esp, 10h
0x9A254E: mov     al, 1
0x9A2550: mov     ecx, [esp+11Ch+var_4]
0x9A2557: pop     edi
0x9A2558: pop     esi
0x9A2559: pop     ebp
0x9A255A: pop     ebx
0x9A255B: xor     ecx, esp
0x9A255D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A2562: add     esp, 10Ch
0x9A2568: retn

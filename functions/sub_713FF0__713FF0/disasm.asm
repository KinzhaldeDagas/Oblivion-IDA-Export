0x713FF0: push    0FFFFFFFFh
0x713FF2: push    offset SEH_713FF0
0x713FF7: mov     eax, large fs:0
0x713FFD: push    eax
0x713FFE: sub     esp, 118h
0x714004: mov     eax, ds:0B30AACh
0x714009: xor     eax, esp
0x71400B: mov     [esp+124h+var_10], eax
0x714012: push    ebx
0x714013: push    ebp
0x714014: push    esi
0x714015: push    edi
0x714016: mov     eax, ds:0B30AACh
0x71401B: xor     eax, esp
0x71401D: push    eax; Src
0x71401E: lea     eax, [esp+138h+var_C]
0x714025: mov     large fs:0, eax
0x71402B: mov     esi, ecx
0x71402D: mov     eax, [esi+21Ch]
0x714033: push    1
0x714035: lea     ecx, [esp+13Ch+var_11C]
0x714039: push    ecx
0x71403A: push    2
0x71403C: lea     edx, [esp+144h+var_124]
0x714040: push    edx
0x714041: push    eax
0x714042: mov     eax, [eax+4]
0x714045: mov     [esp+14Ch+var_11C], 2
0x71404D: call    eax
0x71404F: movzx   eax, [esp+14Ch+var_124]
0x714054: xor     ecx, ecx
0x714056: mov     ebx, 4
0x71405B: mov     edx, ebx
0x71405D: mul     edx
0x71405F: seto    cl
0x714062: neg     ecx
0x714064: or      ecx, eax
0x714066: push    ecx; Size
0x714067: call    FormHeapAlloc
0x71406C: xor     ebp, ebp
0x71406E: add     esp, 18h
0x714071: cmp     [esp+138h+var_124], bp
0x714076: mov     [esp+138h+var_118], eax
0x71407A: jbe     short loc_7140F5
0x71407C: mov     edi, eax
0x71407E: mov     edi, edi
0x714080: mov     eax, [esi+21Ch]
0x714086: push    1
0x714088: lea     ecx, [esp+13Ch+var_120]
0x71408C: push    ecx
0x71408D: push    ebx
0x71408E: lea     edx, [esp+144h+var_11C]
0x714092: push    edx
0x714093: push    eax
0x714094: mov     eax, [eax+4]
0x714097: mov     [esp+14Ch+var_120], ebx
0x71409B: call    eax
0x71409D: mov     edx, [esp+14Ch+var_11C]
0x7140A1: mov     eax, [esi+21Ch]
0x7140A7: push    1
0x7140A9: lea     ecx, [esp+150h+var_120]
0x7140AD: push    ecx
0x7140AE: push    edx
0x7140AF: mov     edx, [eax+4]
0x7140B2: lea     ecx, [esp+158h+Src]
0x7140B6: push    ecx
0x7140B7: push    eax
0x7140B8: mov     [esp+160h+var_120], 1
0x7140C0: call    edx
0x7140C2: mov     eax, [esp+160h+var_11C]
0x7140C6: add     esp, 28h
0x7140C9: push    edi
0x7140CA: lea     ecx, [esp+13Ch+Src]
0x7140CE: push    ecx
0x7140CF: mov     ecx, ds:0B3FB80h
0x7140D5: mov     [esp+eax+140h+Src], 0
0x7140DA: call    NiTMap_GetAt
0x7140DF: test    al, al
0x7140E1: jz      loc_7141F9
0x7140E7: movzx   edx, [esp+138h+var_124]
0x7140EC: add     ebp, 1
0x7140EF: add     edi, ebx
0x7140F1: cmp     ebp, edx
0x7140F3: jb      short loc_714080
0x7140F5: cmp     dword ptr [esi+1F4h], 0
0x7140FC: mov     [esp+138h+var_11C], 0
0x714104: jbe     loc_7141C2
0x71410A: lea     ebx, [esi+1ECh]
0x714110: mov     eax, [esi+21Ch]
0x714116: push    1
0x714118: lea     edx, [esp+13Ch+var_120]
0x71411C: push    edx
0x71411D: mov     edx, [eax+4]
0x714120: push    2
0x714122: lea     ecx, [esp+144h+var_114]
0x714126: push    ecx
0x714127: push    eax
0x714128: mov     [esp+14Ch+var_120], 2
0x714130: call    edx
0x714132: movzx   eax, [esp+14Ch+var_114]
0x714137: mov     ecx, [esp+14Ch+var_118]
0x71413B: mov     edx, [ecx+eax*4]
0x71413E: add     esp, 14h
0x714141: call    edx
0x714143: mov     edi, eax
0x714145: test    edi, edi
0x714147: mov     [esp+138h+var_120], edi
0x71414B: jz      short loc_714157
0x71414D: lea     eax, [edi+4]
0x714150: push    eax; lpAddend
0x714151: call    dword ptr ds:0A28078h
0x714157: mov     ebp, [ebx+0Ch]
0x71415A: cmp     ebp, [ebx+8]
0x71415D: mov     [esp+138h+var_4], 0
0x714168: jb      short loc_714177
0x71416A: mov     ecx, [ebx+14h]
0x71416D: add     ecx, ebp
0x71416F: push    ecx
0x714170: mov     ecx, ebx
0x714172: call    sub_8BCA30
0x714177: lea     edx, [esp+138h+var_120]
0x71417B: push    edx
0x71417C: push    ebp
0x71417D: mov     ecx, ebx
0x71417F: call    sub_8BCD40
0x714184: test    edi, edi
0x714186: mov     [esp+138h+var_4], 0FFFFFFFFh
0x714191: jz      short loc_7141AB
0x714193: lea     eax, [edi+4]
0x714196: push    eax; lpAddend
0x714197: call    dword ptr ds:0A2807Ch
0x71419D: test    eax, eax
0x71419F: jnz     short loc_7141AB
0x7141A1: mov     edx, [edi]
0x7141A3: mov     eax, [edx]
0x7141A5: push    1
0x7141A7: mov     ecx, edi
0x7141A9: call    eax
0x7141AB: mov     eax, [esp+138h+var_11C]
0x7141AF: add     eax, 1
0x7141B2: cmp     eax, [esi+1F4h]
0x7141B8: mov     [esp+138h+var_11C], eax
0x7141BC: jb      loc_714110
0x7141C2: mov     ecx, [esp+138h+var_118]
0x7141C6: push    ecx
0x7141C7: call    FormHeapFree
0x7141CC: add     esp, 4
0x7141CF: mov     al, 1
0x7141D1: mov     ecx, dword ptr [esp+138h+var_C]
0x7141D8: mov     large fs:0, ecx
0x7141DF: pop     ecx
0x7141E0: pop     edi
0x7141E1: pop     esi
0x7141E2: pop     ebp
0x7141E3: pop     ebx
0x7141E4: mov     ecx, [esp+124h+var_10]
0x7141EB: xor     ecx, esp
0x7141ED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7141F2: add     esp, 124h
0x7141F8: retn
0x7141F9: lea     eax, [esp+138h+Src]
0x7141FD: push    eax; Src
0x7141FE: mov     dword ptr [esi+380h], 5
0x714208: add     esi, 384h
0x71420E: push    104h; SizeInBytes
0x714213: push    esi; Src
0x714214: call    _strcpy_s
0x714219: push    offset aCannotFindCrea; ": cannot find create function."
0x71421E: push    104h; SizeInBytes
0x714223: push    esi; Dst
0x714224: call    _strcat_s
0x714229: mov     ecx, [esp+150h+var_118]
0x71422D: push    ecx
0x71422E: call    FormHeapFree
0x714233: add     esp, 1Ch
0x714236: xor     al, al
0x714238: jmp     short loc_7141D1

0x854FF0: push    0FFFFFFFFh
0x854FF2: push    offset SEH_854FF0
0x854FF7: mov     eax, large fs:0
0x854FFD: push    eax
0x854FFE: sub     esp, 0Ch
0x855001: push    ebx
0x855002: push    ebp
0x855003: push    esi
0x855004: push    edi
0x855005: mov     eax, ds:0B30AACh
0x85500A: xor     eax, esp
0x85500C: push    eax
0x85500D: lea     eax, [esp+2Ch+var_C]
0x855011: mov     large fs:0, eax
0x855017: mov     ebx, ecx
0x855019: mov     ebp, [esp+2Ch+arg_0]
0x85501D: lea     eax, [esp+2Ch+arg_0]
0x855021: push    eax
0x855022: mov     ecx, ebp
0x855024: call    sub_405760
0x855029: mov     eax, [eax]
0x85502B: mov     esi, [eax+10h]
0x85502E: mov     eax, [esp+2Ch+arg_0]
0x855032: test    eax, eax
0x855034: jz      short loc_855054
0x855036: mov     edi, eax
0x855038: add     eax, 4
0x85503B: push    eax; lpAddend
0x85503C: call    dword ptr ds:0A2807Ch
0x855042: test    eax, eax
0x855044: jnz     short loc_855054
0x855046: test    edi, edi
0x855048: jz      short loc_855054
0x85504A: mov     edx, [edi]
0x85504C: mov     eax, [edx]
0x85504E: push    1
0x855050: mov     ecx, edi
0x855052: call    eax
0x855054: test    esi, esi
0x855056: jz      loc_85514B
0x85505C: mov     ecx, [esi+40h]
0x85505F: mov     edx, [esi+44h]
0x855062: mov     eax, [esi+48h]
0x855065: mov     [esp+2Ch+var_18], ecx
0x855069: push    offset dword_B3FA90
0x85506E: lea     ecx, [esp+30h+var_18]
0x855072: mov     [esp+30h+var_14], edx
0x855076: mov     [esp+30h+var_10], eax
0x85507A: call    sub_8AA390
0x85507F: test    al, al
0x855081: jz      loc_85514B
0x855087: mov     ecx, [ebx+30h]
0x85508A: mov     eax, [ecx+8]
0x85508D: test    eax, eax
0x85508F: jz      short loc_855095
0x855091: mov     byte ptr [eax+7], 1
0x855095: cmp     [esp+2Ch+arg_C], 0
0x85509A: jnz     short loc_8550EE
0x85509C: cmp     [esp+2Ch+arg_8], 1
0x8550A1: jnz     loc_855143
0x8550A7: push    10h; Size
0x8550A9: call    FormHeapAlloc
0x8550AE: add     esp, 4
0x8550B1: mov     dword ptr [esp+2Ch+arg_8], eax
0x8550B5: test    eax, eax
0x8550B7: mov     [esp+2Ch+var_4], 0
0x8550BF: jz      short loc_8550E1
0x8550C1: push    0
0x8550C3: push    0
0x8550C5: push    0
0x8550C7: push    19Eh
0x8550CC: push    ebp
0x8550CD: push    eax
0x8550CE: call    sub_7E2370
0x8550D3: add     esp, 18h
0x8550D6: lea     edx, [esp+2Ch+arg_8]
0x8550DA: mov     dword ptr [esp+2Ch+arg_8], eax
0x8550DE: push    edx
0x8550DF: jmp     short loc_855131
0x8550E1: xor     eax, eax
0x8550E3: lea     edx, [esp+2Ch+arg_8]
0x8550E7: mov     dword ptr [esp+2Ch+arg_8], eax
0x8550EB: push    edx
0x8550EC: jmp     short loc_855131
0x8550EE: cmp     [esp+2Ch+arg_8], 1
0x8550F3: jnz     short loc_855143
0x8550F5: push    10h; Size
0x8550F7: call    FormHeapAlloc
0x8550FC: add     esp, 4
0x8550FF: mov     dword ptr [esp+2Ch+arg_8], eax
0x855103: test    eax, eax
0x855105: mov     [esp+2Ch+var_4], 1
0x85510D: jz      short loc_855126
0x85510F: push    0
0x855111: push    0
0x855113: push    0
0x855115: push    19Fh
0x85511A: push    ebp
0x85511B: push    eax
0x85511C: call    sub_7E2370
0x855121: add     esp, 18h
0x855124: jmp     short loc_855128
0x855126: xor     eax, eax
0x855128: mov     dword ptr [esp+2Ch+arg_8], eax
0x85512C: lea     eax, [esp+2Ch+arg_8]
0x855130: push    eax
0x855131: lea     ecx, [ebx+28h]
0x855134: mov     [esp+30h+var_4], 0FFFFFFFFh
0x85513C: call    sub_5B1E20
0x855141: jmp     short loc_85514B
0x855143: mov     eax, [esp+2Ch+arg_4]
0x855147: add     word ptr [eax], 1
0x85514B: mov     ecx, dword ptr [esp+2Ch+var_C]
0x85514F: mov     large fs:0, ecx
0x855156: pop     ecx
0x855157: pop     edi
0x855158: pop     esi
0x855159: pop     ebp
0x85515A: pop     ebx
0x85515B: add     esp, 18h
0x85515E: retn    14h

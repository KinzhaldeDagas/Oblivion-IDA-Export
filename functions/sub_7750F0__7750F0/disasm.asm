0x7750F0: sub     esp, 10h
0x7750F3: mov     edx, [esp+10h+arg_0]
0x7750F7: push    ebx
0x7750F8: push    esi
0x7750F9: lea     eax, [esp+18h+var_10]
0x7750FD: push    eax
0x7750FE: xor     ebx, ebx
0x775100: push    edx
0x775101: add     ecx, 8
0x775104: xor     esi, esi
0x775106: mov     [esp+20h+var_10], ebx
0x77510A: call    NiTMap_GetAt
0x77510F: test    al, al
0x775111: jz      loc_7751D8
0x775117: mov     eax, [esp+18h+var_10]
0x77511B: push    ebp
0x77511C: add     eax, 24h ; '$'
0x77511F: push    edi
0x775120: xor     ebp, ebp
0x775122: mov     [esp+20h+var_4], ebx
0x775126: mov     [esp+20h+var_8], ebx
0x77512A: mov     [esp+20h+var_10], eax
0x77512E: xor     edi, edi
0x775130: mov     ecx, [esp+20h+var_10]
0x775134: cmp     [ecx], bl
0x775136: jz      loc_7751B9
0x77513C: mov     esi, ds:dword_B29944[edi]
0x775142: lea     edx, [esp+20h+arg_0]
0x775146: push    edx
0x775147: lea     eax, [esp+24h+var_C]
0x77514B: push    eax
0x77514C: push    esi
0x77514D: mov     [esp+2Ch+var_C], ebx
0x775151: mov     [esp+2Ch+arg_0], ebx
0x775155: call    sub_774AE0
0x77515A: mov     ecx, [esp+2Ch+var_C]
0x77515E: mov     ebx, [esp+2Ch+arg_4]
0x775162: mov     eax, ecx
0x775164: sub     eax, ebx
0x775166: cdq
0x775167: xor     eax, edx
0x775169: sub     eax, edx
0x77516B: mov     [esp+2Ch+var_C], eax
0x77516F: mov     eax, ebp
0x775171: sub     eax, ebx
0x775173: cdq
0x775174: xor     eax, edx
0x775176: sub     eax, edx
0x775178: mov     edx, [esp+2Ch+var_C]
0x77517C: add     esp, 0Ch
0x77517F: cmp     eax, edx
0x775181: jl      short loc_7751B7
0x775183: mov     ebx, [esp+20h+arg_8]
0x775187: mov     eax, [esp+20h+arg_0]
0x77518B: sub     eax, ebx
0x77518D: cdq
0x77518E: xor     eax, edx
0x775190: sub     eax, edx
0x775192: mov     [esp+20h+var_C], eax
0x775196: mov     eax, [esp+20h+var_8]
0x77519A: sub     eax, ebx
0x77519C: cdq
0x77519D: xor     eax, edx
0x77519F: sub     eax, edx
0x7751A1: mov     edx, [esp+20h+var_C]
0x7751A5: cmp     eax, edx
0x7751A7: jl      short loc_7751B7
0x7751A9: mov     ebp, ecx
0x7751AB: mov     ecx, [esp+20h+arg_0]
0x7751AF: mov     [esp+20h+var_8], ecx
0x7751B3: mov     [esp+20h+var_4], esi
0x7751B7: xor     ebx, ebx
0x7751B9: add     [esp+20h+var_10], 4
0x7751BE: add     edi, 4
0x7751C1: cmp     edi, 24h ; '$'
0x7751C4: jb      loc_775130
0x7751CA: mov     eax, [esp+20h+var_4]
0x7751CE: pop     edi
0x7751CF: pop     ebp
0x7751D0: pop     esi
0x7751D1: pop     ebx
0x7751D2: add     esp, 10h
0x7751D5: retn    0Ch
0x7751D8: mov     eax, esi
0x7751DA: pop     esi
0x7751DB: pop     ebx
0x7751DC: add     esp, 10h
0x7751DF: retn    0Ch

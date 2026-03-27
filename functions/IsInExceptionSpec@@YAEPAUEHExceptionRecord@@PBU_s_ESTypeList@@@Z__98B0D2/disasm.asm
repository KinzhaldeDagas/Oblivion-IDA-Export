0x98B0D2: push    ebp
0x98B0D3: mov     ebp, esp
0x98B0D5: sub     esp, 0Ch
0x98B0D8: test    edi, edi
0x98B0DA: jnz     short loc_98B0E6
0x98B0DC: call    ?_inconsistency@@YAXXZ
0x98B0E1: jmp     ?terminate@@YAXXZ
0x98B0E6: and     [ebp+var_8], 0
0x98B0EA: cmp     dword ptr [edi], 0
0x98B0ED: mov     [ebp+var_1], 0
0x98B0F1: jle     short loc_98B146
0x98B0F3: push    ebx
0x98B0F4: push    esi
0x98B0F5: mov     eax, [ebp+arg_0]
0x98B0F8: mov     eax, [eax+1Ch]
0x98B0FB: mov     eax, [eax+0Ch]
0x98B0FE: mov     ebx, [eax]
0x98B100: test    ebx, ebx
0x98B102: lea     esi, [eax+4]
0x98B105: jle     short loc_98B13A
0x98B107: mov     eax, [ebp+var_8]
0x98B10A: shl     eax, 4
0x98B10D: mov     [ebp+var_C], eax
0x98B110: mov     ecx, [ebp+arg_0]
0x98B113: push    dword ptr [ecx+1Ch]
0x98B116: mov     eax, [esi]
0x98B118: push    eax
0x98B119: mov     eax, [edi+4]
0x98B11C: add     eax, [ebp+var_C]
0x98B11F: push    eax
0x98B120: call    ___TypeMatch
0x98B125: add     esp, 0Ch
0x98B128: test    eax, eax
0x98B12A: jnz     short loc_98B136
0x98B12C: dec     ebx
0x98B12D: add     esi, 4
0x98B130: test    ebx, ebx
0x98B132: jg      short loc_98B110
0x98B134: jmp     short loc_98B13A
0x98B136: mov     [ebp+var_1], 1
0x98B13A: inc     [ebp+var_8]
0x98B13D: mov     eax, [ebp+var_8]
0x98B140: cmp     eax, [edi]
0x98B142: jl      short loc_98B0F5
0x98B144: pop     esi
0x98B145: pop     ebx
0x98B146: mov     al, [ebp+var_1]
0x98B149: leave
0x98B14A: retn

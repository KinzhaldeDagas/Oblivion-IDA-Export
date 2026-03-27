0x8F6580: push    ebp
0x8F6581: mov     ebp, esp
0x8F6583: and     esp, 0FFFFFFF0h
0x8F6586: push    ecx
0x8F6587: mov     edx, [ebp+arg_4]
0x8F658A: push    ebx
0x8F658B: mov     ebx, [ebp+arg_8]
0x8F658E: push    esi
0x8F658F: mov     esi, [ebp+arg_0]
0x8F6592: push    edi
0x8F6593: lea     ecx, [edx+ebx]
0x8F6596: sar     ecx, 1
0x8F6598: mov     ecx, [esi+ecx*4]
0x8F659B: mov     eax, ebx
0x8F659D: mov     edi, edx
0x8F659F: nop
0x8F65A0: cmp     [esi+edi*4], ecx
0x8F65A3: jnb     short loc_8F65AB
0x8F65A5: inc     edi
0x8F65A6: cmp     [esi+edi*4], ecx
0x8F65A9: jb      short loc_8F65A5
0x8F65AB: cmp     ecx, [esi+eax*4]
0x8F65AE: jnb     short loc_8F65B6
0x8F65B0: dec     eax
0x8F65B1: cmp     ecx, [esi+eax*4]
0x8F65B4: jb      short loc_8F65B0
0x8F65B6: cmp     eax, edi
0x8F65B8: jl      short loc_8F65D4
0x8F65BA: jz      short loc_8F65CE
0x8F65BC: mov     ebx, [esi+edi*4]
0x8F65BF: mov     edx, [esi+eax*4]
0x8F65C2: mov     [esi+eax*4], ebx
0x8F65C5: mov     ebx, [ebp+arg_8]
0x8F65C8: mov     [esi+edi*4], edx
0x8F65CB: mov     edx, [ebp+arg_4]
0x8F65CE: dec     eax
0x8F65CF: inc     edi
0x8F65D0: cmp     edi, eax
0x8F65D2: jle     short loc_8F65A0
0x8F65D4: cmp     edx, eax
0x8F65D6: jge     short loc_8F65E7
0x8F65D8: mov     ecx, [ebp+arg_C]
0x8F65DB: push    ecx
0x8F65DC: push    eax
0x8F65DD: push    edx
0x8F65DE: push    esi
0x8F65DF: call    sub_8F6580
0x8F65E4: add     esp, 10h
0x8F65E7: cmp     edi, ebx
0x8F65E9: jge     short loc_8F65F2
0x8F65EB: mov     edx, edi
0x8F65ED: mov     [ebp+arg_4], edx
0x8F65F0: jmp     short loc_8F6593
0x8F65F2: pop     edi
0x8F65F3: pop     esi
0x8F65F4: pop     ebx
0x8F65F5: mov     esp, ebp
0x8F65F7: pop     ebp
0x8F65F8: retn

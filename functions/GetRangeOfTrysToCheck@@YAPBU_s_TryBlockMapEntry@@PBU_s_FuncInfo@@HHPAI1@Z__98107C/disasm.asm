0x98107C: push    ebp
0x98107D: mov     ebp, esp
0x98107F: push    ecx
0x981080: push    ebx
0x981081: push    esi
0x981082: push    edi
0x981083: mov     edi, [ebp+arg_0]
0x981086: mov     eax, [edi+10h]
0x981089: mov     esi, [edi+0Ch]
0x98108C: mov     [ebp+var_4], eax
0x98108F: mov     ebx, esi
0x981091: jmp     short loc_9810C0
0x981093: cmp     esi, 0FFFFFFFFh
0x981096: jnz     short loc_98109D
0x981098: call    ?_inconsistency@@YAXXZ
0x98109D: mov     ecx, [ebp+var_4]
0x9810A0: dec     esi
0x9810A1: mov     eax, esi
0x9810A3: imul    eax, 14h
0x9810A6: add     eax, ecx
0x9810A8: mov     ecx, [ebp+arg_8]
0x9810AB: cmp     [eax+4], ecx
0x9810AE: jge     short loc_9810B5
0x9810B0: cmp     ecx, [eax+8]
0x9810B3: jle     short loc_9810BA
0x9810B5: cmp     esi, 0FFFFFFFFh
0x9810B8: jnz     short loc_9810C3
0x9810BA: dec     [ebp+arg_4]
0x9810BD: mov     ebx, [ebp+arg_0]
0x9810C0: mov     [ebp+arg_0], esi
0x9810C3: cmp     [ebp+arg_4], 0
0x9810C7: jge     short loc_981093
0x9810C9: mov     eax, [ebp+arg_C]
0x9810CC: inc     esi
0x9810CD: mov     [eax], esi
0x9810CF: mov     eax, [ebp+arg_10]
0x9810D2: mov     [eax], ebx
0x9810D4: cmp     ebx, [edi+0Ch]
0x9810D7: ja      short loc_9810DD
0x9810D9: cmp     esi, ebx
0x9810DB: jbe     short loc_9810E2
0x9810DD: call    ?_inconsistency@@YAXXZ
0x9810E2: mov     eax, esi
0x9810E4: imul    eax, 14h
0x9810E7: add     eax, [ebp+var_4]
0x9810EA: pop     edi
0x9810EB: pop     esi
0x9810EC: pop     ebx
0x9810ED: leave
0x9810EE: retn

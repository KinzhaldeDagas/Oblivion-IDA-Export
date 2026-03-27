0x56A850: push    0FFFFFFFFh
0x56A852: push    offset SEH_690310
0x56A857: mov     eax, large fs:0
0x56A85D: push    eax
0x56A85E: push    ecx
0x56A85F: push    ebx
0x56A860: push    ebp
0x56A861: push    esi
0x56A862: push    edi
0x56A863: mov     eax, ds:0B30AACh
0x56A868: xor     eax, esp
0x56A86A: push    eax
0x56A86B: lea     eax, [esp+24h+var_C]
0x56A86F: mov     large fs:0, eax
0x56A875: mov     esi, ecx
0x56A877: call    sub_56A750
0x56A87C: mov     eax, [esp+24h+arg_0]
0x56A880: xor     ebx, ebx
0x56A882: cmp     eax, ebx
0x56A884: mov     [esp+24h+var_10], esi
0x56A888: mov     ebp, eax
0x56A88A: jz      loc_56A92E
0x56A890: cmp     [ebp+4], ebx
0x56A893: jnz     short loc_56A89E
0x56A895: cmp     [ebp+0], ebx
0x56A898: jz      loc_56A92E
0x56A89E: push    18h; Size
0x56A8A0: call    FormHeapAlloc
0x56A8A5: add     esp, 4
0x56A8A8: mov     [esp+24h+arg_0], eax
0x56A8AC: cmp     eax, ebx
0x56A8AE: mov     [esp+24h+var_4], ebx
0x56A8B2: jz      short loc_56A8BF
0x56A8B4: mov     ecx, eax
0x56A8B6: call    Condition_constr?
0x56A8BB: mov     edi, eax
0x56A8BD: jmp     short loc_56A8C1
0x56A8BF: xor     edi, edi
0x56A8C1: mov     eax, [ebp+0]
0x56A8C4: push    eax
0x56A8C5: mov     ecx, edi
0x56A8C7: mov     [esp+28h+var_4], 0FFFFFFFFh
0x56A8CF: call    sub_56AB80
0x56A8D4: cmp     edi, ebx
0x56A8D6: jz      short loc_56A914
0x56A8D8: mov     esi, [esp+24h+var_10]
0x56A8DC: mov     eax, esi
0x56A8DE: add     eax, 4
0x56A8E1: cmp     [eax], ebx
0x56A8E3: jz      short loc_56A8EF
0x56A8E5: mov     esi, [eax]
0x56A8E7: cmp     [esi+4], ebx
0x56A8EA: lea     eax, [esi+4]
0x56A8ED: jnz     short loc_56A8E5
0x56A8EF: cmp     [esi], ebx
0x56A8F1: jz      short loc_56A912
0x56A8F3: push    8; Size
0x56A8F5: call    FormHeapAlloc
0x56A8FA: add     esp, 4
0x56A8FD: cmp     eax, ebx
0x56A8FF: jz      short loc_56A90B
0x56A901: mov     [eax], edi
0x56A903: mov     [eax+4], ebx
0x56A906: mov     [esi+4], eax
0x56A909: jmp     short loc_56A914
0x56A90B: xor     eax, eax
0x56A90D: mov     [esi+4], eax
0x56A910: jmp     short loc_56A914
0x56A912: mov     [esi], edi
0x56A914: mov     ecx, [esp+24h+var_10]
0x56A918: mov     eax, [ecx+4]
0x56A91B: cmp     eax, ebx
0x56A91D: jz      short loc_56A923
0x56A91F: mov     [esp+24h+var_10], eax
0x56A923: mov     ebp, [ebp+4]
0x56A926: cmp     ebp, ebx
0x56A928: jnz     loc_56A890
0x56A92E: mov     ecx, [esp+24h+var_C]
0x56A932: mov     large fs:0, ecx
0x56A939: pop     ecx
0x56A93A: pop     edi
0x56A93B: pop     esi
0x56A93C: pop     ebp
0x56A93D: pop     ebx
0x56A93E: add     esp, 10h
0x56A941: retn    4

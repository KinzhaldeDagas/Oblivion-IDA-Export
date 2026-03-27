0x98670B: push    10h
0x98670D: push    offset stru_AFFAB8
0x986712: call    __SEH_prolog4
0x986717: xor     eax, eax
0x986719: mov     [ebp+var_20], eax
0x98671C: mov     [ebp+ms_exc.registration.TryLevel], eax
0x98671F: mov     [ebp+var_1C], eax
0x986722: mov     eax, [ebp+var_1C]
0x986725: cmp     eax, [ebp+arg_C]
0x986728: jge     short loc_986741
0x98672A: push    [ebp+arg_4]; void *
0x98672D: mov     ecx, [ebp+arg_0]; void *
0x986730: call    [ebp+arg_10]
0x986733: mov     eax, [ebp+arg_8]
0x986736: add     [ebp+arg_0], eax
0x986739: add     [ebp+arg_4], eax
0x98673C: inc     [ebp+var_1C]
0x98673F: jmp     short loc_986722
0x986741: mov     [ebp+var_20], 1
0x986748: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98674F: call    ??__C@YGXPAX0IHP6EX00@ZP6EX0@Z@Z___$LN11_3

0x984BCF: push    10h
0x984BD1: push    offset stru_AFFA78
0x984BD6: call    __SEH_prolog4
0x984BDB: xor     eax, eax
0x984BDD: mov     [ebp+var_20], eax
0x984BE0: mov     [ebp+ms_exc.registration.TryLevel], eax
0x984BE3: mov     [ebp+var_1C], eax
0x984BE6: mov     eax, [ebp+var_1C]
0x984BE9: cmp     eax, [ebp+size]
0x984BEC: jge     short loc_984C01
0x984BEE: mov     esi, [ebp+arg_0]
0x984BF1: mov     ecx, esi
0x984BF3: call    [ebp+arg_C]
0x984BF6: add     esi, [ebp+arg_4]
0x984BF9: mov     [ebp+arg_0], esi
0x984BFC: inc     [ebp+var_1C]
0x984BFF: jmp     short loc_984BE6
0x984C01: mov     [ebp+var_20], 1
0x984C08: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x984C0F: call    loc_984C1C
0x984C14: call    __SEH_epilog4
0x984C19: retn    14h
0x984C1C: cmp     [ebp+var_20], 0
0x984C20: jnz     short loc_984C33
0x984C22: push    [ebp+arg_10]; void (__thiscall *)(void *)
0x984C25: push    [ebp+var_1C]; int
0x984C28: push    [ebp+arg_4]; unsigned int
0x984C2B: push    [ebp+arg_0]; void *
0x984C2E: call    ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
0x984C33: retn

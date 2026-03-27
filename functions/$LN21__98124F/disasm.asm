0x98124F: push    0Ch
0x981251: push    offset stru_AFF860
0x981256: call    __SEH_prolog4
0x98125B: and     [ebp+var_1C], 0
0x98125F: mov     esi, [ebp+arg_4]
0x981262: mov     eax, esi
0x981264: imul    eax, [ebp+arg_8]
0x981268: add     [ebp+arg_0], eax
0x98126B: and     [ebp+ms_exc.registration.TryLevel], 0
0x98126F: dec     [ebp+arg_8]
0x981272: js      short loc_98127F
0x981274: sub     [ebp+arg_0], esi
0x981277: mov     ecx, [ebp+arg_0]; void *
0x98127A: call    [ebp+arg_C]
0x98127D: jmp     short loc_98126F
0x98127F: mov     [ebp+var_1C], 1
0x981286: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98128D: call    loc_98129A
0x981292: call    __SEH_epilog4
0x981297: retn    10h
0x98129A: cmp     [ebp+var_1C], 0
0x98129E: jnz     short loc_9812B1
0x9812A0: push    [ebp+arg_C]; void (__thiscall *)(void *)
0x9812A3: push    [ebp+arg_8]; int
0x9812A6: push    [ebp+arg_4]; unsigned int
0x9812A9: push    [ebp+arg_0]; void *
0x9812AC: call    ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
0x9812B1: retn

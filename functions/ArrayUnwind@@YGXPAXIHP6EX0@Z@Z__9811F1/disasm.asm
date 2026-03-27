0x9811F1: push    14h
0x9811F3: push    offset stru_AFF840
0x9811F8: call    __SEH_prolog4
0x9811FD: and     [ebp+ms_exc.registration.TryLevel], 0
0x981201: dec     [ebp+arg_8]
0x981204: js      short loc_981240
0x981206: mov     ecx, [ebp+arg_0]
0x981209: sub     ecx, [ebp+arg_4]; void *
0x98120C: mov     [ebp+arg_0], ecx
0x98120F: call    [ebp+arg_C]
0x981212: jmp     short loc_981201
0x981214: mov     eax, [ebp+ms_exc.exc_ptr]
0x981217: mov     [ebp+var_1C], eax
0x98121A: mov     eax, [ebp+var_1C]
0x98121D: mov     eax, [eax]
0x98121F: mov     [ebp+var_20], eax
0x981222: mov     eax, [ebp+var_20]
0x981225: cmp     dword ptr [eax], 0E06D7363h
0x98122B: jz      short loc_981238
0x98122D: mov     [ebp+var_24], 0
0x981234: mov     eax, [ebp+var_24]
0x981237: retn
0x981238: call    ?terminate@@YAXXZ
0x98123D: mov     esp, [ebp+ms_exc.old_esp]
0x981240: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x981247: call    __SEH_epilog4
0x98124C: retn    10h

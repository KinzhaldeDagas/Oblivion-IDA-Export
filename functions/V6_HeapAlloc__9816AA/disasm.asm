0x9816AA: push    0Ch
0x9816AC: push    offset stru_AFF880
0x9816B1: call    __SEH_prolog4
0x9816B6: and     [ebp+var_1C], 0
0x9816BA: mov     esi, [ebp+arg_0]
0x9816BD: cmp     esi, ds:0BAABCCh
0x9816C3: ja      short _V6_HeapAlloc___$LN9_0
0x9816C5: push    4
0x9816C7: call    __lock
0x9816CC: pop     ecx
0x9816CD: and     [ebp+ms_exc.registration.TryLevel], 0
0x9816D1: push    esi
0x9816D2: call    ___sbh_alloc_block
0x9816D7: pop     ecx
0x9816D8: mov     [ebp+var_1C], eax
0x9816DB: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x9816E2: call    _V6_HeapAlloc___$LN8_0

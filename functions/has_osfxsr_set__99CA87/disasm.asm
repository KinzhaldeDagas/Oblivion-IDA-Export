0x99CA87: push    0Ch
0x99CA89: push    offset stru_B000A8
0x99CA8E: call    __SEH_prolog4
0x99CA93: and     [ebp+ms_exc.registration.TryLevel], 0
0x99CA97: movapd  xmm0, xmm1
0x99CA9B: mov     [ebp+var_1C], 1
0x99CAA2: jmp     short loc_99CAC7
0x99CAA4: mov     eax, [ebp+ms_exc.exc_ptr]
0x99CAA7: mov     eax, [eax]
0x99CAA9: mov     eax, [eax]
0x99CAAB: cmp     eax, 0C0000005h
0x99CAB0: jz      short loc_99CABC
0x99CAB2: cmp     eax, 0C000001Dh
0x99CAB7: jz      short loc_99CABC
0x99CAB9: xor     eax, eax
0x99CABB: retn
0x99CABC: xor     eax, eax
0x99CABE: inc     eax
0x99CABF: retn
0x99CAC0: mov     esp, [ebp+ms_exc.old_esp]
0x99CAC3: and     [ebp+var_1C], 0
0x99CAC7: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x99CACE: mov     eax, [ebp+var_1C]
0x99CAD1: call    __SEH_epilog4
0x99CAD6: retn

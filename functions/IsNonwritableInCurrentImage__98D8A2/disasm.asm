0x98D8A2: push    8
0x98D8A4: push    offset stru_AFFE68
0x98D8A9: call    __SEH_prolog4
0x98D8AE: and     [ebp+ms_exc.registration.TryLevel], 0
0x98D8B2: mov     edx, 400000h
0x98D8B7: push    edx
0x98D8B8: call    __ValidateImageBase
0x98D8BD: pop     ecx
0x98D8BE: test    eax, eax
0x98D8C0: jz      short loc_98D8FF
0x98D8C2: mov     eax, [ebp+arg_0]
0x98D8C5: sub     eax, edx
0x98D8C7: push    eax
0x98D8C8: push    edx
0x98D8C9: call    __FindPESection
0x98D8CE: pop     ecx
0x98D8CF: pop     ecx
0x98D8D0: test    eax, eax
0x98D8D2: jz      short loc_98D8FF
0x98D8D4: mov     eax, [eax+24h]
0x98D8D7: shr     eax, 1Fh
0x98D8DA: not     eax
0x98D8DC: and     eax, 1
0x98D8DF: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98D8E6: jmp     short loc_98D908
0x98D8E8: mov     eax, [ebp+ms_exc.exc_ptr]
0x98D8EB: mov     eax, [eax]
0x98D8ED: mov     eax, [eax]
0x98D8EF: xor     ecx, ecx
0x98D8F1: cmp     eax, 0C0000005h
0x98D8F6: setz    cl
0x98D8F9: mov     eax, ecx
0x98D8FB: retn
0x98D8FC: mov     esp, [ebp+ms_exc.old_esp]
0x98D8FF: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98D906: xor     eax, eax
0x98D908: call    __SEH_epilog4
0x98D90D: retn

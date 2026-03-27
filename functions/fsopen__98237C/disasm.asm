0x98237C: push    0Ch
0x98237E: push    offset stru_AFF9A0
0x982383: call    __SEH_prolog4
0x982388: xor     ebx, ebx
0x98238A: mov     [ebp+var_1C], ebx
0x98238D: xor     eax, eax
0x98238F: mov     edi, [ebp+Filename]
0x982392: cmp     edi, ebx
0x982394: setnz   al
0x982397: cmp     eax, ebx
0x982399: jnz     short loc_9823B7
0x98239B: call    __errno
0x9823A0: mov     dword ptr [eax], 16h
0x9823A6: push    ebx
0x9823A7: push    ebx
0x9823A8: push    ebx
0x9823A9: push    ebx
0x9823AA: push    ebx
0x9823AB: call    __invalid_parameter
0x9823B0: add     esp, 14h
0x9823B3: xor     eax, eax
0x9823B5: jmp     short loc_982430
0x9823B7: xor     eax, eax
0x9823B9: mov     esi, [ebp+Mode]
0x9823BC: cmp     esi, ebx
0x9823BE: setnz   al
0x9823C1: cmp     eax, ebx
0x9823C3: jz      short loc_98239B
0x9823C5: xor     eax, eax
0x9823C7: cmp     [esi], bl
0x9823C9: setnz   al
0x9823CC: cmp     eax, ebx
0x9823CE: jz      short loc_98239B
0x9823D0: call    __getstream
0x9823D5: mov     [ebp+Filename], eax
0x9823D8: cmp     eax, ebx
0x9823DA: jnz     short loc_9823E9
0x9823DC: call    __errno
0x9823E1: mov     dword ptr [eax], 18h
0x9823E7: jmp     short loc_9823B3
0x9823E9: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x9823EC: cmp     [edi], bl
0x9823EE: jnz     short loc_982410
0x9823F0: call    __errno
0x9823F5: mov     dword ptr [eax], 16h
0x9823FB: push    0FFFFFFFEh
0x9823FD: lea     eax, [ebp+ms_exc.registration]
0x982400: push    eax
0x982401: push    offset ___security_cookie
0x982406: call    __local_unwind4
0x98240B: add     esp, 0Ch
0x98240E: jmp     short loc_9823B3
0x982410: push    eax
0x982411: push    [ebp+ShFlag]
0x982414: push    esi
0x982415: push    edi
0x982416: call    __openfile
0x98241B: add     esp, 10h
0x98241E: mov     [ebp+var_1C], eax
0x982421: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x982428: call    __fsopen___$LN12_0

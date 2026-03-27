0x9932CD: push    10h
0x9932CF: push    offset stru_AFFFA8
0x9932D4: call    __SEH_prolog4
0x9932D9: mov     eax, [ebp+arg_0]
0x9932DC: cmp     eax, 0FFFFFFFEh
0x9932DF: jnz     short loc_9932FC
0x9932E1: call    ___doserrno
0x9932E6: and     dword ptr [eax], 0
0x9932E9: call    __errno
0x9932EE: mov     dword ptr [eax], 9
0x9932F4: or      eax, 0FFFFFFFFh
0x9932F7: jmp     loc_993399
0x9932FC: xor     edi, edi
0x9932FE: cmp     eax, edi
0x993300: jl      short loc_99330A
0x993302: cmp     eax, uNumber
0x993308: jb      short loc_99332B
0x99330A: call    ___doserrno
0x99330F: mov     [eax], edi
0x993311: call    __errno
0x993316: mov     dword ptr [eax], 9
0x99331C: push    edi
0x99331D: push    edi
0x99331E: push    edi
0x99331F: push    edi
0x993320: push    edi
0x993321: call    __invalid_parameter
0x993326: add     esp, 14h
0x993329: jmp     short loc_9932F4
0x99332B: mov     ecx, eax
0x99332D: sar     ecx, 5
0x993330: lea     ebx, ds:0BAAAC0h[ecx*4]
0x993337: mov     esi, eax
0x993339: and     esi, 1Fh
0x99333C: imul    esi, 28h ; '('
0x99333F: mov     ecx, [ebx]
0x993341: movzx   ecx, byte ptr [ecx+esi+4]
0x993346: and     ecx, 1
0x993349: jz      short loc_99330A
0x99334B: push    eax
0x99334C: call    ___lock_fhandle
0x993351: pop     ecx
0x993352: mov     [ebp+ms_exc.registration.TryLevel], edi
0x993355: mov     eax, [ebx]
0x993357: test    byte ptr [eax+esi+4], 1
0x99335C: jz      short loc_993374
0x99335E: push    [ebp+dwMoveMethod]; dwMoveMethod
0x993361: push    [ebp+lDistanceToMove]; lDistanceToMove
0x993364: push    [ebp+arg_0]; int
0x993367: call    __lseek_nolock
0x99336C: add     esp, 0Ch
0x99336F: mov     [ebp+var_1C], eax
0x993372: jmp     short loc_99338A
0x993374: call    __errno
0x993379: mov     dword ptr [eax], 9
0x99337F: call    ___doserrno
0x993384: mov     [eax], edi
0x993386: or      [ebp+var_1C], 0FFFFFFFFh
0x99338A: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x993391: call    loc_99339F
0x993396: mov     eax, [ebp+var_1C]
0x993399: call    __SEH_epilog4
0x99339E: retn
0x99339F: push    [ebp+arg_0]
0x9933A2: call    __unlock_fhandle
0x9933A7: pop     ecx
0x9933A8: retn

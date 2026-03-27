0x999393: push    10h
0x999395: push    offset stru_AFFFE8
0x99939A: call    __SEH_prolog4
0x99939F: mov     eax, [ebp+arg_0]
0x9993A2: cmp     eax, 0FFFFFFFEh
0x9993A5: jnz     short loc_9993C2
0x9993A7: call    ___doserrno
0x9993AC: and     dword ptr [eax], 0
0x9993AF: call    __errno
0x9993B4: mov     dword ptr [eax], 9
0x9993BA: or      eax, 0FFFFFFFFh
0x9993BD: jmp     loc_99945F
0x9993C2: xor     edi, edi
0x9993C4: cmp     eax, edi
0x9993C6: jl      short loc_9993D0
0x9993C8: cmp     eax, uNumber
0x9993CE: jb      short loc_9993F1
0x9993D0: call    ___doserrno
0x9993D5: mov     [eax], edi
0x9993D7: call    __errno
0x9993DC: mov     dword ptr [eax], 9
0x9993E2: push    edi
0x9993E3: push    edi
0x9993E4: push    edi
0x9993E5: push    edi
0x9993E6: push    edi
0x9993E7: call    __invalid_parameter
0x9993EC: add     esp, 14h
0x9993EF: jmp     short loc_9993BA
0x9993F1: mov     ecx, eax
0x9993F3: sar     ecx, 5
0x9993F6: lea     ebx, ds:0BAAAC0h[ecx*4]
0x9993FD: mov     esi, eax
0x9993FF: and     esi, 1Fh
0x999402: imul    esi, 28h ; '('
0x999405: mov     ecx, [ebx]
0x999407: movzx   ecx, byte ptr [ecx+esi+4]
0x99940C: and     ecx, 1
0x99940F: jz      short loc_9993D0
0x999411: push    eax
0x999412: call    ___lock_fhandle
0x999417: pop     ecx
0x999418: mov     [ebp+ms_exc.registration.TryLevel], edi
0x99941B: mov     eax, [ebx]
0x99941D: test    byte ptr [eax+esi+4], 1
0x999422: jz      short loc_99943A
0x999424: push    [ebp+nNumberOfBytesToRead]; nNumberOfBytesToRead
0x999427: push    [ebp+lpWideCharStr]; lpWideCharStr
0x99942A: push    [ebp+arg_0]; int
0x99942D: call    __read_nolock
0x999432: add     esp, 0Ch
0x999435: mov     [ebp+var_1C], eax
0x999438: jmp     short loc_999450
0x99943A: call    __errno
0x99943F: mov     dword ptr [eax], 9
0x999445: call    ___doserrno
0x99944A: mov     [eax], edi
0x99944C: or      [ebp+var_1C], 0FFFFFFFFh
0x999450: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x999457: call    loc_999465
0x99945C: mov     eax, [ebp+var_1C]
0x99945F: call    __SEH_epilog4
0x999464: retn
0x999465: push    [ebp+arg_0]
0x999468: call    __unlock_fhandle
0x99946D: pop     ecx
0x99946E: retn

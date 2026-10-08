0x99D491: mov     eax, [esp+arg_0]; MEF v56 copied read-only descriptor resolution contract: descriptor<nhandleBAAAA0, page=pioinfoBAAAC0[fd>>5], entry stride28h, open flagbit1 at+4, HANDLE at+0. Uses GetFileSizeEx directly so no FILE seek/buffer disturbance or _get_osfhandle invalid-parameter dispatch. LastError restored; invalid bounds/handles disable optional reserve.
0x99D495: cmp     eax, 0FFFFFFFEh
0x99D498: jnz     short loc_99D4B1
0x99D49A: call    ___doserrno
0x99D49F: and     dword ptr [eax], 0
0x99D4A2: call    __errno
0x99D4A7: mov     dword ptr [eax], 9
0x99D4AD: or      eax, 0FFFFFFFFh
0x99D4B0: retn
0x99D4B1: push    esi
0x99D4B2: xor     esi, esi
0x99D4B4: cmp     eax, esi
0x99D4B6: jl      short loc_99D4DA
0x99D4B8: cmp     eax, ds:0BAAAA0h
0x99D4BE: jnb     short loc_99D4DA
0x99D4C0: mov     ecx, eax
0x99D4C2: and     eax, 1Fh
0x99D4C5: imul    eax, 28h ; '('
0x99D4C8: sar     ecx, 5
0x99D4CB: mov     ecx, dword ptr unk_BAAAC0[ecx*4]
0x99D4D2: add     eax, ecx
0x99D4D4: test    byte ptr [eax+4], 1
0x99D4D8: jnz     short loc_99D4FE
0x99D4DA: call    ___doserrno
0x99D4DF: mov     [eax], esi
0x99D4E1: call    __errno
0x99D4E6: push    esi
0x99D4E7: push    esi
0x99D4E8: push    esi
0x99D4E9: push    esi
0x99D4EA: push    esi
0x99D4EB: mov     dword ptr [eax], 9
0x99D4F1: call    __invalid_parameter
0x99D4F6: add     esp, 14h
0x99D4F9: or      eax, 0FFFFFFFFh
0x99D4FC: pop     esi
0x99D4FD: retn
0x99D4FE: mov     eax, [eax]
0x99D500: pop     esi
0x99D501: retn

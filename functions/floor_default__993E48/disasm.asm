0x993E48: push    ebp
0x993E49: mov     ebp, esp
0x993E4B: push    ecx
0x993E4C: push    ecx
0x993E4D: push    ebx
0x993E4E: push    esi
0x993E4F: mov     esi, 0FFFFh
0x993E54: push    esi
0x993E55: push    dword_B31CC0
0x993E5B: call    __ctrlfp
0x993E60: fld     [ebp+arg_0]
0x993E63: pop     ecx
0x993E64: pop     ecx
0x993E65: mov     ebx, eax
0x993E67: mov     eax, dword ptr [ebp+arg_0+6]
0x993E6A: push    ecx
0x993E6B: and     ax, 7FF0h
0x993E6F: cmp     ax, 7FF0h
0x993E73: push    ecx
0x993E74: fstp    [esp+18h+var_18]; int
0x993E77: jnz     short loc_993ECE
0x993E79: call    __sptype
0x993E7E: test    eax, eax
0x993E80: pop     ecx
0x993E81: pop     ecx
0x993E82: jle     short loc_993EB1
0x993E84: cmp     eax, 2
0x993E87: jle     short loc_993EA3
0x993E89: cmp     eax, 3
0x993E8C: jnz     short loc_993EB1
0x993E8E: fld     [ebp+arg_0]
0x993E91: push    ebx; int
0x993E92: push    ecx
0x993E93: push    ecx
0x993E94: fstp    qword ptr [esp]; double
0x993E97: push    0Bh; int
0x993E99: call    __handle_qnan1
0x993E9E: add     esp, 10h
0x993EA1: jmp     short loc_993F15
0x993EA3: push    esi
0x993EA4: push    ebx
0x993EA5: call    __ctrlfp
0x993EAA: fld     [ebp+arg_0]
0x993EAD: pop     ecx
0x993EAE: pop     ecx
0x993EAF: jmp     short loc_993F15
0x993EB1: fld     [ebp+arg_0]
0x993EB4: push    ebx
0x993EB5: fadd    ds:dbl_A2F928
0x993EBB: sub     esp, 10h
0x993EBE: fstp    qword ptr [esp+8]
0x993EC2: fld     [ebp+arg_0]
0x993EC5: fstp    [esp+24h+var_24]
0x993EC8: push    0Bh
0x993ECA: push    8
0x993ECC: jmp     short loc_993F0D
0x993ECE: call    __frnd
0x993ED3: fstp    [ebp+var_8]
0x993ED6: fld     [ebp+arg_0]
0x993ED9: pop     ecx
0x993EDA: fcomp   [ebp+var_8]
0x993EDD: pop     ecx
0x993EDE: fnstsw  ax
0x993EE0: test    ah, 44h
0x993EE3: jp      short loc_993EF3
0x993EE5: push    esi
0x993EE6: push    ebx
0x993EE7: call    __ctrlfp
0x993EEC: fld     [ebp+var_8]
0x993EEF: pop     ecx
0x993EF0: pop     ecx
0x993EF1: jmp     short loc_993F15
0x993EF3: test    bl, 20h
0x993EF6: jnz     short loc_993EE5
0x993EF8: fld     [ebp+var_8]
0x993EFB: push    ebx; int
0x993EFC: sub     esp, 10h
0x993EFF: fstp    qword ptr [esp+8]; int
0x993F03: fld     [ebp+arg_0]
0x993F06: fstp    [esp+24h+var_24]; int
0x993F09: push    0Bh; int
0x993F0B: push    10h; dwExceptionCode
0x993F0D: call    __except1
0x993F12: add     esp, 1Ch
0x993F15: pop     esi
0x993F16: pop     ebx
0x993F17: leave
0x993F18: retn

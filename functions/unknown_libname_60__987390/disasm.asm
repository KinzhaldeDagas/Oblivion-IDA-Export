0x987390: sub     esp, 100h
0x987396: push    ebx
0x987397: mov     ebx, [esp+104h+arg_0]
0x98739E: test    ebx, ebx
0x9873A0: push    esi
0x9873A1: mov     esi, [esp+108h+arg_4]
0x9873A8: jnz     short loc_9873D4
0x9873AA: test    esi, esi
0x9873AC: jz      short loc_9873D4
0x9873AE: call    __errno
0x9873B3: push    0
0x9873B5: push    0
0x9873B7: push    0
0x9873B9: push    0
0x9873BB: push    0
0x9873BD: mov     dword ptr [eax], 16h
0x9873C3: call    __invalid_parameter
0x9873C8: add     esp, 14h
0x9873CB: pop     esi
0x9873CC: pop     ebx
0x9873CD: add     esp, 100h
0x9873D3: retn
0x9873D4: push    ebp
0x9873D5: mov     ebp, [esp+10Ch+arg_8]
0x9873DC: test    ebp, ebp
0x9873DE: jbe     short loc_9873EA
0x9873E0: cmp     [esp+10Ch+arg_C], 0
0x9873E8: jnz     short loc_987411
0x9873EA: call    __errno
0x9873EF: push    0
0x9873F1: push    0
0x9873F3: push    0
0x9873F5: push    0
0x9873F7: push    0
0x9873F9: mov     dword ptr [eax], 16h
0x9873FF: call    __invalid_parameter
0x987404: add     esp, 14h
0x987407: pop     ebp
0x987408: pop     esi
0x987409: pop     ebx
0x98740A: add     esp, 100h
0x987410: retn
0x987411: cmp     esi, 2
0x987414: jb      loc_98762D
0x98741A: add     esi, 0FFFFFFFFh
0x98741D: imul    esi, ebp
0x987420: add     esi, ebx
0x987422: mov     [esp+10Ch+var_F4], 0
0x98742A: mov     [esp+10Ch+var_100], ebx
0x98742E: mov     [esp+10Ch+var_FC], esi
0x987432: push    edi

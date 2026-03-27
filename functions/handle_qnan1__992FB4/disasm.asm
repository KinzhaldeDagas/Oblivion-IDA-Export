0x992FB4: push    ebp
0x992FB5: mov     ebp, esp
0x992FB7: cmp     dword_B320E8, 0
0x992FBE: jnz     short loc_992FE8
0x992FC0: push    [ebp+arg_C]; int
0x992FC3: fld     [ebp+arg_4]
0x992FC6: sub     esp, 18h
0x992FC9: fstp    [esp+1Ch+var_C]; double
0x992FCD: fldz
0x992FCF: fstp    [esp+1Ch+var_14]; int
0x992FD3: fld     [ebp+arg_4]
0x992FD6: fstp    [esp+1Ch+var_1C]; int
0x992FD9: push    [ebp+arg_0]; int
0x992FDC: push    1; int
0x992FDE: call    __umatherr
0x992FE3: add     esp, 24h
0x992FE6: pop     ebp
0x992FE7: retn
0x992FE8: call    __errno
0x992FED: push    0FFFFh
0x992FF2: push    [ebp+arg_C]
0x992FF5: mov     dword ptr [eax], 21h ; '!'
0x992FFB: call    __ctrlfp
0x993000: fld     [ebp+arg_4]
0x993003: pop     ecx
0x993004: pop     ecx
0x993005: pop     ebp
0x993006: retn

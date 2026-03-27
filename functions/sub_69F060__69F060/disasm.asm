0x69F060: push    ecx
0x69F061: push    esi
0x69F062: mov     esi, ecx
0x69F064: mov     ecx, offset ActorProcessManager_ptr
0x69F069: call    sub_673B00
0x69F06E: fstp    [esp+8+var_4]
0x69F072: fld     [esp+8+var_4]
0x69F076: fld     st
0x69F078: fsub    dword ptr [esi+78h]
0x69F07B: fstp    [esp+8+var_4]
0x69F07F: fld     dword ptr [esi+78h]
0x69F082: fcomp   st(1)
0x69F084: fnstsw  ax
0x69F086: fldz
0x69F088: test    ah, 41h
0x69F08B: jz      short loc_69F097
0x69F08D: fcom    dword ptr [esi+78h]
0x69F090: fnstsw  ax
0x69F092: test    ah, 41h
0x69F095: jnz     short loc_69F0B9
0x69F097: fst     [esp+8+var_4]
0x69F09B: fcomp   st(1)
0x69F09D: fnstsw  ax
0x69F09F: test    ah, 5
0x69F0A2: jp      short loc_69F0BB
0x69F0A4: fld     dword ptr ds:0A3744Ch
0x69F0AA: fcomp   st(1)
0x69F0AC: fnstsw  ax
0x69F0AE: test    ah, 41h
0x69F0B1: jnz     short loc_69F0BB
0x69F0B3: fst     [esp+8+var_4]
0x69F0B7: jmp     short loc_69F0BB
0x69F0B9: fstp    st
0x69F0BB: fstp    dword ptr [esi+78h]
0x69F0BE: mov     ecx, ds:0B3A6B0h
0x69F0C4: push    2
0x69F0C6: call    sub_572EA0
0x69F0CB: fcomp   dword ptr ds:0A2FAA8h
0x69F0D1: fnstsw  ax
0x69F0D3: test    ah, 41h
0x69F0D6: jz      short loc_69F0F4
0x69F0D8: fld     [esp+8+var_4]
0x69F0DC: mov     eax, [esi]
0x69F0DE: mov     edx, [eax+204h]
0x69F0E4: fld     st
0x69F0E6: fadd    dword ptr [esi+64h]
0x69F0E9: push    ecx
0x69F0EA: mov     ecx, esi
0x69F0EC: fstp    dword ptr [esi+64h]
0x69F0EF: fstp    [esp+0Ch+var_C]
0x69F0F2: call    edx
0x69F0F4: pop     esi
0x69F0F5: pop     ecx
0x69F0F6: retn    4

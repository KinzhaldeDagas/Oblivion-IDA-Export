0x5474A0: push    ecx
0x5474A1: mov     eax, [esp+4+arg_4]
0x5474A5: mov     ecx, [esp+4+arg_0]
0x5474A9: push    eax
0x5474AA: push    ecx
0x5474AB: call    Calc_LuckModifiedSkill
0x5474B0: fstp    [esp+0Ch+var_4]
0x5474B4: fld     [esp+0Ch+var_4]
0x5474B8: add     esp, 8
0x5474BB: cmp     byte ptr [esp+4+arg_C], 0
0x5474C0: fmul    qword ptr ds:0A3B150h
0x5474C6: fmul    dword ptr ds:0B36EF0h
0x5474CC: fadd    dword ptr ds:0B36EE8h
0x5474D2: fstp    [esp+4+var_4]
0x5474D5: jz      short loc_5474DF
0x5474D7: fld     dword ptr ds:0B36F00h
0x5474DD: jmp     short loc_5474F0
0x5474DF: cmp     [esp+4+arg_10], 0
0x5474E4: jz      short loc_5474EE
0x5474E6: fld     dword ptr ds:0B36F08h
0x5474EC: jmp     short loc_5474F0
0x5474EE: fld1
0x5474F0: fstp    [esp+4+arg_C]
0x5474F4: push    ecx
0x5474F5: fld     [esp+8+arg_8]
0x5474F9: fstp    [esp+8+var_8]; float
0x5474FC: call    Calc_FatigueFactor
0x547501: fmul    [esp+8+var_4]
0x547505: add     esp, 4
0x547508: fmul    [esp+4+arg_C]
0x54750C: fstp    [esp+4+arg_C]
0x547510: fld     [esp+4+arg_C]
0x547514: fld     dword ptr ds:0B36EF8h
0x54751A: fcom    st(1)
0x54751C: fnstsw  ax
0x54751E: test    ah, 41h
0x547521: jnz     short loc_54752F
0x547523: fstp    st
0x547525: fstp    [esp+4+arg_C]
0x547529: fld     [esp+4+arg_C]
0x54752D: pop     ecx
0x54752E: retn
0x54752F: fstp    st(1)
0x547531: fstp    [esp+4+arg_C]
0x547535: fld     [esp+4+arg_C]
0x547539: pop     ecx
0x54753A: retn

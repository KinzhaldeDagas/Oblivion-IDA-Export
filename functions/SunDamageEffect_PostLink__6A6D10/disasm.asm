0x6A6D10: mov     eax, [esp+arg_0]
0x6A6D14: push    esi
0x6A6D15: push    eax
0x6A6D16: mov     esi, ecx
0x6A6D18: call    ActiveEffect_Base_PostLink
0x6A6D1D: cmp     byte ptr [esi+10h], 0
0x6A6D21: jz      loc_6A6DD0
0x6A6D27: fld1
0x6A6D29: fcom    dword ptr [esi+38h]
0x6A6D2C: fnstsw  ax
0x6A6D2E: test    ah, 5
0x6A6D31: jp      loc_6A6DCE
0x6A6D37: cmp     byte ptr ds:0B43070h, 0
0x6A6D3E: jz      short loc_6A6D76
0x6A6D40: fld     dword ptr [esi+38h]
0x6A6D43: fdiv    qword ptr ds:0A563D0h
0x6A6D49: fstp    [esp+4+arg_0]
0x6A6D4D: fld     [esp+4+arg_0]
0x6A6D51: fcom    qword ptr ds:0A2F928h
0x6A6D57: fnstsw  ax
0x6A6D59: test    ah, 5
0x6A6D5C: jp      short loc_6A6D6A
0x6A6D5E: fstp    st
0x6A6D60: pop     esi
0x6A6D61: fstp    dword ptr ds:0B2C7A4h
0x6A6D67: retn    4
0x6A6D6A: fstp    st(1)
0x6A6D6C: pop     esi
0x6A6D6D: fstp    dword ptr ds:0B2C7A4h
0x6A6D73: retn    4
0x6A6D76: mov     ecx, ds:0B06D54h
0x6A6D7C: fstp    st
0x6A6D7E: fld     dword ptr ds:0B06D64h
0x6A6D84: mov     edx, ds:0B06D44h
0x6A6D8A: fmul    dword ptr [esi+38h]
0x6A6D8D: mov     eax, ds:0B06D3Ch
0x6A6D92: push    ecx; int
0x6A6D93: sub     esp, 0Ch
0x6A6D96: fstp    [esp+14h+arg_0]
0x6A6D9A: fld     [esp+14h+arg_0]
0x6A6D9E: fstp    [esp+14h+var_C]; float
0x6A6DA2: fld     dword ptr ds:0B06D5Ch
0x6A6DA8: fmul    dword ptr [esi+38h]
0x6A6DAB: fstp    [esp+14h+arg_0]
0x6A6DAF: fld     [esp+14h+arg_0]
0x6A6DB3: fstp    [esp+14h+var_10]; float
0x6A6DB7: fld     dword ptr ds:0B06D4Ch
0x6A6DBD: fstp    [esp+14h+var_14]; float
0x6A6DC0: push    edx; int
0x6A6DC1: push    eax; int
0x6A6DC2: call    sub_7B4830
0x6A6DC7: add     esp, 18h
0x6A6DCA: pop     esi
0x6A6DCB: retn    4
0x6A6DCE: fstp    st
0x6A6DD0: pop     esi
0x6A6DD1: retn    4

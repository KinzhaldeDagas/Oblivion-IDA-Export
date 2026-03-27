0x692D00: push    esi
0x692D01: mov     esi, [esp+4+arg_0]
0x692D05: push    esi
0x692D06: call    ValueModifierEffect_PostLink
0x692D0B: mov     eax, [esi]
0x692D0D: mov     edx, [eax+288h]
0x692D13: push    46h ; 'F'
0x692D15: mov     ecx, esi
0x692D17: call    edx
0x692D19: fdiv    qword ptr ds:0A309F0h
0x692D1F: fld1
0x692D21: fsubrp  st(1), st
0x692D23: fstp    [esp+4+arg_0]
0x692D27: fldz
0x692D29: fld     [esp+4+arg_0]
0x692D2D: fcom    st(1)
0x692D2F: fnstsw  ax
0x692D31: test    ah, 5
0x692D34: jp      short loc_692D3E
0x692D36: fstp    st
0x692D38: fstp    [esp+4+arg_0]
0x692D3C: jmp     short loc_692D55
0x692D3E: fstp    st(1)
0x692D40: fld1
0x692D42: fcom    st(1)
0x692D44: fnstsw  ax
0x692D46: fstp    st(1)
0x692D48: test    ah, 5
0x692D4B: jp      short loc_692D53
0x692D4D: fstp    [esp+4+arg_0]
0x692D51: jmp     short loc_692D55
0x692D53: fstp    st
0x692D55: mov     esi, [esi+3Ch]
0x692D58: test    esi, esi
0x692D5A: jz      short loc_692D6D
0x692D5C: fld     [esp+4+arg_0]
0x692D60: push    ecx
0x692D61: fstp    [esp+8+var_8]; float
0x692D64: push    esi; int
0x692D65: call    sub_7B8440
0x692D6A: add     esp, 8
0x692D6D: pop     esi
0x692D6E: retn    4

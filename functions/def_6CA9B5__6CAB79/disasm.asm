0x6CAB79: cmp     byte ptr [esp+arg_10], 0; jumptable 006CA9B5 default case
0x6CAB7E: jz      loc_6CAC34
0x6CAB84: fld     dword ptr [esi+54h]
0x6CAB87: fld     dword ptr ds:0A7DEB4h
0x6CAB8D: fchs
0x6CAB8F: fucompp
0x6CAB91: fnstsw  ax
0x6CAB93: test    ah, 44h
0x6CAB96: jnp     short loc_6CAB9F
0x6CAB98: fstp    st
0x6CAB9A: fld     dword ptr [esi+54h]
0x6CAB9D: jmp     short loc_6CABF0
0x6CAB9F: mov     ecx, [esi+58h]; int
0x6CABA2: test    ecx, ecx
0x6CABA4: jz      short loc_6CABED
0x6CABA6: fld     dword ptr [ecx+34h]
0x6CABA9: fld     dword ptr [ecx+48h]
0x6CABAC: fadd    st, st(2)
0x6CABAE: fucompp
0x6CABB0: fnstsw  ax
0x6CABB2: test    ah, 44h
0x6CABB5: jnp     short loc_6CABC6
0x6CABB7: push    0; int
0x6CABB9: push    ecx
0x6CABBA: fstp    [esp+8+var_8]; float
0x6CABBD: call    sub_6CA950
0x6CABC2: fld     [esp+arg_C]
0x6CABC6: mov     eax, [esi+58h]
0x6CABC9: fadd    dword ptr [eax+48h]
0x6CABCC: push    ecx
0x6CABCD: mov     ecx, esi
0x6CABCF: fstp    [esp+4+arg_10]
0x6CABD3: fld     [esp+4+arg_10]
0x6CABD7: fstp    [esp+4+var_4]; float
0x6CABDA: push    eax; int
0x6CABDB: call    sub_6C6B30
0x6CABE0: fstp    [esp+arg_10]
0x6CABE4: fld     [esp+arg_10]
0x6CABE8: fdiv    dword ptr [esi+28h]
0x6CABEB: jmp     short loc_6CABF0
0x6CABED: fadd    dword ptr [esi+48h]
0x6CABF0: fstp    [esp+arg_10]
0x6CABF4: push    1; char
0x6CABF6: fld     [esp+4+arg_10]
0x6CABFA: push    ecx
0x6CABFB: mov     ecx, esi
0x6CABFD: fstp    [esp+8+var_8]; float
0x6CAC00: call    sub_6C5FC0
0x6CAC05: sub     esp, 0Ch
0x6CAC08: fstp    [esp+0Ch+var_4]; float
0x6CAC0C: mov     ecx, esi
0x6CAC0E: fld     [esp+0Ch+arg_0]
0x6CAC12: fstp    [esp+0Ch+var_8]; float
0x6CAC16: fld     dword ptr [esi+1Ch]
0x6CAC19: fmul    [esp+0Ch+arg_4]
0x6CAC1D: fstp    [esp+0Ch+arg_10]
0x6CAC21: fld     [esp+0Ch+arg_10]
0x6CAC25: fstp    [esp+0Ch+var_C]; float
0x6CAC28: call    sub_6C6DC0
0x6CAC2D: pop     esi
0x6CAC2E: add     esp, 8
0x6CAC31: retn    8
0x6CAC34: fstp    st
0x6CAC36: pop     esi
0x6CAC37: add     esp, 8
0x6CAC3A: retn    8

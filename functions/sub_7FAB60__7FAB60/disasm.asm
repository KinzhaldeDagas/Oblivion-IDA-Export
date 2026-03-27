0x7FAB60: sub     esp, 0Ch
0x7FAB63: push    esi
0x7FAB64: mov     esi, [esp+10h+arg_0]
0x7FAB68: test    esi, esi
0x7FAB6A: jz      loc_7FAC30
0x7FAB70: push    edi
0x7FAB71: mov     edi, [esp+14h+arg_8]
0x7FAB75: lea     eax, [edi-156h]
0x7FAB7B: cmp     eax, 2
0x7FAB7E: ja      loc_7FAC2F
0x7FAB84: cmp     byte ptr [esi+0E4h], 0
0x7FAB8B: jz      short loc_7FABEE
0x7FAB8D: cmp     edi, 158h
0x7FAB93: mov     eax, [esp+14h+arg_4]
0x7FAB97: mov     ecx, [eax+40h]
0x7FAB9A: mov     edx, [eax+44h]
0x7FAB9D: mov     eax, [eax+48h]
0x7FABA0: mov     [esp+14h+var_C], ecx
0x7FABA4: fld     [esp+14h+var_C]
0x7FABA8: fmul    qword ptr ds:0A90628h
0x7FABAE: mov     [esp+14h+var_8], edx
0x7FABB2: mov     [esp+14h+var_4], eax
0x7FABB6: fstp    dword ptr ds:0B46FF8h
0x7FABBC: jnz     short loc_7FAC2F
0x7FABBE: push    1
0x7FABC0: push    0
0x7FABC2: call    GetTimer
0x7FABC7: fdiv    qword ptr ds:0A2F938h
0x7FABCD: add     esp, 8
0x7FABD0: pop     edi
0x7FABD1: pop     esi
0x7FABD2: fmul    qword ptr ds:0A56E20h
0x7FABD8: fmul    [esp+0Ch+var_8]
0x7FABDC: fmul    qword ptr ds:0A3DDD8h
0x7FABE2: fstp    dword ptr ds:0B46DF8h
0x7FABE8: add     esp, 0Ch
0x7FABEB: retn    0Ch
0x7FABEE: mov     ecx, esi
0x7FABF0: call    sub_7C8480
0x7FABF5: fstp    dword ptr ds:0B46FF8h
0x7FABFB: cmp     edi, 158h
0x7FAC01: jnz     short loc_7FAC2F
0x7FAC03: mov     ecx, [esi+0ECh]
0x7FAC09: push    1
0x7FAC0B: push    0
0x7FAC0D: mov     [esp+1Ch+arg_0], ecx
0x7FAC11: call    GetTimer
0x7FAC16: fdiv    qword ptr ds:0A2F938h
0x7FAC1C: add     esp, 8
0x7FAC1F: fmul    qword ptr ds:0A56E20h
0x7FAC25: fimul   [esp+14h+arg_0]
0x7FAC29: fstp    dword ptr ds:0B46DF8h
0x7FAC2F: pop     edi
0x7FAC30: pop     esi
0x7FAC31: add     esp, 0Ch
0x7FAC34: retn    0Ch

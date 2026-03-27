0x5A9980: push    esi
0x5A9981: push    edi; a3
0x5A9982: mov     edi, [esp+8+arg_0]
0x5A9986: test    edi, edi
0x5A9988: mov     esi, ecx
0x5A998A: jz      loc_5A9AEF
0x5A9990: mov     eax, [esi+24h]
0x5A9993: sub     eax, 2
0x5A9996: jz      short loc_5A99A4
0x5A9998: sub     eax, 2
0x5A999B: jnz     short loc_5A99A9
0x5A999D: call    sub_584390
0x5A99A2: jmp     short loc_5A99A9
0x5A99A4: call    sub_584820
0x5A99A9: cmp     [esp+8+arg_8], 2
0x5A99AE: jnz     short loc_5A99CB
0x5A99B0: fld     [esp+8+arg_C]
0x5A99B4: push    0; int
0x5A99B6: push    0; int
0x5A99B8: push    ecx
0x5A99B9: fstp    [esp+14h+var_14]; float
0x5A99BC: push    edi; int
0x5A99BD: mov     ecx, esi
0x5A99BF: call    sub_5A95C0
0x5A99C4: pop     edi
0x5A99C5: mov     al, 1
0x5A99C7: pop     esi
0x5A99C8: retn    10h
0x5A99CB: mov     ecx, [esi+28h]
0x5A99CE: push    ebp; a3
0x5A99CF: push    edi
0x5A99D0: push    0FDEh
0x5A99D5: call    Tile_SetString
0x5A99DA: fld     dword ptr ds:0A379B4h
0x5A99E0: push    ecx
0x5A99E1: mov     ecx, [esi+28h]; this
0x5A99E4: fstp    [esp+10h+a2]; a3
0x5A99E7: push    0FA1h; a2
0x5A99EC: call    Tile_SetFloat
0x5A99F1: call    sub_5A47B0
0x5A99F6: mov     [esp+0Ch+arg_0], eax
0x5A99FA: fild    [esp+0Ch+arg_0]
0x5A99FE: push    ecx
0x5A99FF: mov     ecx, [esi+28h]; this
0x5A9A02: fstp    [esp+10h+a2]; a3
0x5A9A05: push    0FAFh; a2
0x5A9A0A: call    Tile_SetFloat
0x5A9A0F: fld     dword ptr ds:0A379B4h
0x5A9A15: mov     ebp, [esp+0Ch+arg_4]
0x5A9A19: test    ebp, ebp
0x5A9A1B: jz      short loc_5A9A4B
0x5A9A1D: fcom    [esp+0Ch+arg_C]
0x5A9A21: fnstsw  ax
0x5A9A23: test    ah, 1
0x5A9A26: jnz     short loc_5A9A4B
0x5A9A28: mov     ecx, ebp
0x5A9A2A: fstp    st
0x5A9A2C: call    sub_6B7340
0x5A9A31: movzx   eax, ax
0x5A9A34: mov     [esp+0Ch+arg_0], eax
0x5A9A38: fild    [esp+0Ch+arg_0]
0x5A9A3C: fdiv    qword ptr ds:0A2FC70h
0x5A9A42: fstp    dword ptr [esi+3Ch]
0x5A9A45: fld     dword ptr ds:0A379B4h
0x5A9A4B: fcom    [esp+0Ch+arg_C]
0x5A9A4F: fnstsw  ax
0x5A9A51: test    ah, 41h
0x5A9A54: jnz     short loc_5A9AC6
0x5A9A56: fcom    dword ptr [esi+3Ch]
0x5A9A59: fnstsw  ax
0x5A9A5B: test    ah, 41h
0x5A9A5E: jnz     short loc_5A9AC6
0x5A9A60: mov     eax, edi
0x5A9A62: lea     edx, [eax+1]
0x5A9A65: mov     cl, [eax]
0x5A9A67: add     eax, 1
0x5A9A6A: test    cl, cl
0x5A9A6C: jnz     short loc_5A9A65
0x5A9A6E: sub     eax, edx
0x5A9A70: test    eax, eax
0x5A9A72: mov     [esp+0Ch+arg_C], eax
0x5A9A76: fild    [esp+0Ch+arg_C]
0x5A9A7A: jge     short loc_5A9A82
0x5A9A7C: fadd    dword ptr ds:0A2FC78h
0x5A9A82: fmul    dword ptr ds:0B394F8h
0x5A9A88: fstp    [esp+0Ch+arg_C]
0x5A9A8C: fld     [esp+0Ch+arg_C]
0x5A9A90: fld     dword ptr ds:0B394F0h
0x5A9A96: fcomp   st(1)
0x5A9A98: fnstsw  ax
0x5A9A9A: test    ah, 5
0x5A9A9D: jp      short loc_5A9AA5
0x5A9A9F: fstp    [esp+0Ch+arg_C]
0x5A9AA3: jmp     short loc_5A9ABF
0x5A9AA5: fstp    st(1)
0x5A9AA7: mov     ecx, offset flt_B394F0
0x5A9AAC: fstp    st
0x5A9AAE: call    GameSetting_GetSafeFloatPointer
0x5A9AB3: fld     dword ptr [eax]
0x5A9AB5: fstp    [esp+0Ch+arg_C]
0x5A9AB9: fld     dword ptr ds:0A379B4h
0x5A9ABF: fld     [esp+0Ch+arg_C]
0x5A9AC3: fstp    dword ptr [esi+3Ch]
0x5A9AC6: fcom    dword ptr [esi+3Ch]
0x5A9AC9: fnstsw  ax
0x5A9ACB: test    ah, 5
0x5A9ACE: jp      short loc_5A9AD5
0x5A9AD0: fstp    st
0x5A9AD2: fld     dword ptr [esi+3Ch]
0x5A9AD5: fstp    [esp+0Ch+arg_C]
0x5A9AD9: mov     [esi+40h], ebp
0x5A9ADC: fld     [esp+0Ch+arg_C]
0x5A9AE0: pop     ebp
0x5A9AE1: pop     edi
0x5A9AE2: fstp    dword ptr [esi+3Ch]
0x5A9AE5: mov     byte ptr [esi+38h], 2
0x5A9AE9: mov     al, 1
0x5A9AEB: pop     esi
0x5A9AEC: retn    10h
0x5A9AEF: pop     edi
0x5A9AF0: xor     al, al
0x5A9AF2: pop     esi
0x5A9AF3: retn    10h

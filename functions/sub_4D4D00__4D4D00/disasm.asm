0x4D4D00: sub     esp, 3Ch
0x4D4D03: push    ebx
0x4D4D04: push    ebp
0x4D4D05: push    esi
0x4D4D06: mov     esi, ecx
0x4D4D08: test    byte ptr [esi+24h], 1
0x4D4D0C: jz      short loc_4D4D18
0x4D4D0E: lea     ecx, [esi+28h]
0x4D4D11: call    sub_424180
0x4D4D16: jmp     short loc_4D4D1D
0x4D4D18: mov     eax, ds:0B35C24h
0x4D4D1D: mov     cl, [esi+24h]
0x4D4D20: and     cl, 1
0x4D4D23: mov     [esp+48h+var_3C], eax
0x4D4D27: jnz     short loc_4D4D34
0x4D4D29: mov     eax, [esi+3Ch]
0x4D4D2C: test    eax, eax
0x4D4D2E: jz      short loc_4D4D34
0x4D4D30: mov     ebp, [eax]
0x4D4D32: jmp     short loc_4D4D36
0x4D4D34: xor     ebp, ebp
0x4D4D36: test    cl, cl
0x4D4D38: jnz     short loc_4D4D46
0x4D4D3A: mov     eax, [esi+3Ch]
0x4D4D3D: test    eax, eax
0x4D4D3F: jz      short loc_4D4D46
0x4D4D41: mov     ebx, [eax+4]
0x4D4D44: jmp     short loc_4D4D48
0x4D4D46: xor     ebx, ebx
0x4D4D48: lea     ecx, [esi+28h]
0x4D4D4B: call    sub_41F950
0x4D4D50: cmp     [esp+48h+var_3C], 0
0x4D4D55: jz      short loc_4D4DB7
0x4D4D57: test    eax, eax
0x4D4D59: jz      short loc_4D4DB7
0x4D4D5B: fld1
0x4D4D5D: mov     edx, [esp+48h+var_3C]
0x4D4D61: fstp    [esp+48h+var_4]
0x4D4D65: shl     ebp, 0Ch
0x4D4D68: mov     [esp+48h+var_38], ebp
0x4D4D6C: fild    [esp+48h+var_38]
0x4D4D70: fld     qword ptr ds:0A30F70h
0x4D4D76: push    edi
0x4D4D77: mov     ecx, 9
0x4D4D7C: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4D4D81: fadd    st(1), st
0x4D4D83: lea     edi, [esp+4Ch+var_34]
0x4D4D87: rep movsd
0x4D4D89: fxch    st(1)
0x4D4D8B: fstp    [esp+4Ch+var_10]
0x4D4D8F: shl     ebx, 0Ch
0x4D4D92: mov     [esp+4Ch+var_38], ebx
0x4D4D96: push    offset dword_B27110
0x4D4D9B: lea     ecx, [esp+50h+var_10]
0x4D4D9F: fiadd   [esp+50h+var_38]
0x4D4DA3: push    ecx
0x4D4DA4: push    edx
0x4D4DA5: mov     ecx, eax
0x4D4DA7: fstp    [esp+58h+var_C]
0x4D4DAB: fldz
0x4D4DAD: fstp    [esp+58h+var_8]
0x4D4DB1: call    sub_532F50
0x4D4DB6: pop     edi
0x4D4DB7: pop     esi
0x4D4DB8: pop     ebp
0x4D4DB9: pop     ebx
0x4D4DBA: add     esp, 3Ch
0x4D4DBD: retn

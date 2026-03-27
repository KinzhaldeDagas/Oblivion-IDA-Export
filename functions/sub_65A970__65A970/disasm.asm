0x65A970: mov     eax, ds:0B33398h
0x65A975: sub     esp, 0Ch
0x65A978: push    ebp
0x65A979: push    esi
0x65A97A: push    edi
0x65A97B: mov     edi, [eax+24h]
0x65A97E: xor     esi, esi
0x65A980: test    edi, edi
0x65A982: mov     ebp, ecx
0x65A984: jz      loc_65AA48
0x65A98A: mov     edx, [ebp+0]
0x65A98D: mov     eax, [edx+154h]
0x65A993: call    eax
0x65A995: test    eax, eax
0x65A997: jz      loc_65AA48
0x65A99D: mov     ecx, [esp+18h+arg_0]
0x65A9A1: push    ecx
0x65A9A2: mov     ecx, ds:0B33A98h
0x65A9A8: call    sub_447490
0x65A9AD: test    eax, eax
0x65A9AF: jz      loc_65AA48
0x65A9B5: mov     edx, [esp+18h+arg_C]
0x65A9B9: mov     eax, [eax+0Ch]
0x65A9BC: push    ebx
0x65A9BD: mov     ebx, [esp+1Ch+arg_8]
0x65A9C1: push    edx
0x65A9C2: push    ebx
0x65A9C3: push    eax
0x65A9C4: mov     ecx, edi
0x65A9C6: call    OSGLobals_PlaySound
0x65A9CB: mov     esi, eax
0x65A9CD: test    esi, esi
0x65A9CF: jz      short loc_65AA3E
0x65A9D1: test    bl, 2
0x65A9D4: jz      short loc_65AA23
0x65A9D6: mov     eax, [ebp+0]
0x65A9D9: mov     edx, [eax+174h]
0x65A9DF: mov     ecx, ebp
0x65A9E1: call    edx
0x65A9E3: mov     ecx, [eax]
0x65A9E5: mov     edx, [eax+4]
0x65A9E8: mov     eax, [eax+8]
0x65A9EB: sub     esp, 0Ch
0x65A9EE: mov     [esp+28h+var_4], eax
0x65A9F2: fld     [esp+28h+var_4]
0x65A9F6: fstp    [esp+28h+var_20]; float
0x65A9FA: mov     [esp+28h+var_8], edx
0x65A9FE: fld     [esp+28h+var_8]
0x65AA02: mov     [esp+28h+var_C], ecx
0x65AA06: fstp    [esp+28h+var_24]; float
0x65AA0A: mov     ecx, esi
0x65AA0C: fld     [esp+28h+var_C]
0x65AA10: fstp    [esp+28h+var_28]; float
0x65AA13: call    sub_6B7360
0x65AA18: mov     ecx, [esi]
0x65AA1A: push    ebp
0x65AA1B: push    ecx
0x65AA1C: mov     ecx, edi
0x65AA1E: call    sub_6AC3E0
0x65AA23: fld1
0x65AA25: push    ecx
0x65AA26: mov     ecx, esi
0x65AA28: fstp    [esp+20h+var_20]; float
0x65AA2B: call    sub_6B7280
0x65AA30: mov     edx, [esp+1Ch+arg_4]
0x65AA34: push    edx
0x65AA35: mov     ecx, esi
0x65AA37: call    sub_6B7190
0x65AA3C: mov     eax, esi
0x65AA3E: pop     ebx
0x65AA3F: pop     edi
0x65AA40: pop     esi
0x65AA41: pop     ebp
0x65AA42: add     esp, 0Ch
0x65AA45: retn    10h
0x65AA48: pop     edi
0x65AA49: mov     eax, esi
0x65AA4B: pop     esi
0x65AA4C: pop     ebp
0x65AA4D: add     esp, 0Ch
0x65AA50: retn    10h

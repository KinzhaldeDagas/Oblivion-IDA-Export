0x4DB9D0: sub     esp, 30h
0x4DB9D3: push    ebx
0x4DB9D4: push    edi
0x4DB9D5: mov     edi, ecx
0x4DB9D7: mov     eax, [edi]
0x4DB9D9: mov     edx, [eax+170h]
0x4DB9DF: xor     bl, bl
0x4DB9E1: call    edx
0x4DB9E3: cmp     byte ptr [eax+4], 20h ; ' '
0x4DB9E7: jnz     loc_4DBAD5
0x4DB9ED: mov     eax, [edi]
0x4DB9EF: mov     edx, [eax+154h]
0x4DB9F5: mov     ecx, edi
0x4DB9F7: call    edx
0x4DB9F9: test    eax, eax
0x4DB9FB: jz      loc_4DBAD5
0x4DBA01: mov     eax, [edi]
0x4DBA03: mov     edx, [eax+170h]
0x4DBA09: mov     ecx, edi
0x4DBA0B: call    edx
0x4DBA0D: test    eax, eax
0x4DBA0F: jz      loc_4DBAD5
0x4DBA15: mov     eax, [edi]
0x4DBA17: mov     edx, [eax+154h]
0x4DBA1D: mov     ecx, edi
0x4DBA1F: call    edx
0x4DBA21: push    eax; NiObjectNET *
0x4DBA22: call    NiObjectNET__GetBSFornitureMarker
0x4DBA27: add     esp, 4
0x4DBA2A: test    eax, eax
0x4DBA2C: jz      loc_4DBAD5
0x4DBA32: movzx   edx, word ptr [eax+18h]
0x4DBA36: mov     ecx, [esp+38h+arg_0]
0x4DBA3A: cmp     edx, ecx
0x4DBA3C: jbe     loc_4DBAD5
0x4DBA42: mov     eax, [eax+10h]
0x4DBA45: shl     ecx, 4
0x4DBA48: add     eax, ecx
0x4DBA4A: mov     ecx, [eax]
0x4DBA4C: push    esi
0x4DBA4D: mov     esi, [esp+3Ch+arg_4]
0x4DBA51: mov     [esi], ecx
0x4DBA53: mov     edx, [eax+4]
0x4DBA56: mov     [esi+4], edx
0x4DBA59: mov     ecx, [eax+8]
0x4DBA5C: mov     [esi+8], ecx
0x4DBA5F: mov     edx, [eax+0Ch]
0x4DBA62: mov     [esi+0Ch], edx
0x4DBA65: mov     eax, [esi]
0x4DBA67: mov     edx, [esi+8]
0x4DBA6A: mov     ecx, [esi+4]
0x4DBA6D: mov     [esp+3Ch+var_30], eax
0x4DBA71: push    esi
0x4DBA72: lea     eax, [esp+40h+var_30]
0x4DBA76: mov     [esp+40h+var_28], edx
0x4DBA7A: mov     edx, [edi]
0x4DBA7C: push    eax
0x4DBA7D: mov     eax, [edx+174h]
0x4DBA83: mov     [esp+44h+var_2C], ecx
0x4DBA87: push    1
0x4DBA89: mov     ecx, edi
0x4DBA8B: mov     bl, 1
0x4DBA8D: call    eax
0x4DBA8F: push    eax
0x4DBA90: lea     ecx, [esp+4Ch+var_24]
0x4DBA94: push    ecx
0x4DBA95: mov     ecx, edi
0x4DBA97: call    sub_4D7AF0
0x4DBA9C: push    eax
0x4DBA9D: call    sub_710580
0x4DBAA2: movzx   edx, word ptr [esi+0Ch]
0x4DBAA6: mov     [esp+50h+arg_0], edx
0x4DBAAA: add     esp, 10h
0x4DBAAD: mov     ecx, esi
0x4DBAAF: fild    [esp+40h+arg_0]
0x4DBAB3: fdiv    qword ptr ds:0A2FC70h
0x4DBAB9: fstp    [esp+40h+arg_0]
0x4DBABD: fld     [esp+40h+arg_0]
0x4DBAC1: fadd    dword ptr [edi+28h]
0x4DBAC4: fstp    [esp+40h+arg_0]
0x4DBAC8: fld     [esp+40h+arg_0]
0x4DBACC: fstp    [esp+40h+var_40]; float
0x4DBACF: call    sub_6FAEE0
0x4DBAD4: pop     esi
0x4DBAD5: pop     edi
0x4DBAD6: mov     al, bl
0x4DBAD8: pop     ebx
0x4DBAD9: add     esp, 30h
0x4DBADC: retn    8

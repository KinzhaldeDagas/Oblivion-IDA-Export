0x72CB90: push    ebx
0x72CB91: mov     ebx, [esp+4+arg_0]
0x72CB95: push    ebp
0x72CB96: push    esi
0x72CB97: mov     esi, ecx
0x72CB99: mov     eax, [esi]
0x72CB9B: mov     edx, [eax+4]
0x72CB9E: push    edi
0x72CB9F: push    ebx
0x72CBA0: call    edx
0x72CBA2: mov     ebp, eax
0x72CBA4: mov     eax, [esi+8]
0x72CBA7: mov     edi, [eax+ebp*4]
0x72CBAA: test    edi, edi
0x72CBAC: jz      short loc_72CBC8
0x72CBAE: mov     edi, edi
0x72CBB0: mov     eax, [edi+4]
0x72CBB3: mov     edx, [esi]
0x72CBB5: mov     edx, [edx+8]
0x72CBB8: push    eax
0x72CBB9: push    ebx
0x72CBBA: mov     ecx, esi
0x72CBBC: call    edx
0x72CBBE: test    al, al
0x72CBC0: jnz     short loc_72CBFF
0x72CBC2: mov     edi, [edi]
0x72CBC4: test    edi, edi
0x72CBC6: jnz     short loc_72CBB0
0x72CBC8: mov     eax, [esi]
0x72CBCA: mov     edx, [eax+14h]
0x72CBCD: mov     ecx, esi
0x72CBCF: call    edx
0x72CBD1: fld     [esp+10h+arg_4]
0x72CBD5: push    ecx
0x72CBD6: fstp    [esp+14h+var_14]
0x72CBD9: mov     edi, eax
0x72CBDB: mov     eax, [esi]
0x72CBDD: mov     edx, [eax+0Ch]
0x72CBE0: push    ebx
0x72CBE1: push    edi
0x72CBE2: mov     ecx, esi
0x72CBE4: call    edx
0x72CBE6: mov     eax, [esi+8]
0x72CBE9: mov     ecx, [eax+ebp*4]
0x72CBEC: mov     [edi], ecx
0x72CBEE: mov     edx, [esi+8]
0x72CBF1: mov     [edx+ebp*4], edi
0x72CBF4: add     dword ptr [esi+0Ch], 1
0x72CBF8: pop     edi
0x72CBF9: pop     esi
0x72CBFA: pop     ebp
0x72CBFB: pop     ebx
0x72CBFC: retn    8
0x72CBFF: mov     eax, [esi]
0x72CC01: mov     edx, [eax+10h]
0x72CC04: push    edi
0x72CC05: mov     ecx, esi
0x72CC07: call    edx
0x72CC09: fld     [esp+10h+arg_4]
0x72CC0D: mov     eax, [esi]
0x72CC0F: mov     edx, [eax+0Ch]
0x72CC12: push    ecx
0x72CC13: fstp    [esp+14h+var_14]
0x72CC16: push    ebx
0x72CC17: push    edi
0x72CC18: mov     ecx, esi
0x72CC1A: call    edx
0x72CC1C: pop     edi
0x72CC1D: pop     esi
0x72CC1E: pop     ebp
0x72CC1F: pop     ebx
0x72CC20: retn    8

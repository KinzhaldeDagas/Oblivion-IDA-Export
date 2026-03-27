0x89E370: push    esi
0x89E371: push    edi
0x89E372: mov     edi, [esp+8+arg_0]
0x89E376: push    edi
0x89E377: mov     esi, ecx
0x89E379: call    sub_89E060
0x89E37E: fldz
0x89E380: test    esi, esi
0x89E382: jz      short loc_89E394
0x89E384: mov     eax, [esi+8]
0x89E387: test    eax, eax
0x89E389: jz      short loc_89E394
0x89E38B: fld     dword ptr [eax+40h]
0x89E38E: fstp    [esp+8+arg_0]
0x89E392: jmp     short loc_89E398
0x89E394: fst     [esp+8+arg_0]
0x89E398: test    esi, esi
0x89E39A: fld     [esp+8+arg_0]
0x89E39E: fstp    dword ptr [edi+30h]
0x89E3A1: jz      short loc_89E3B3
0x89E3A3: mov     eax, [esi+8]
0x89E3A6: test    eax, eax
0x89E3A8: jz      short loc_89E3B3
0x89E3AA: fld     dword ptr [eax+44h]
0x89E3AD: fstp    [esp+8+arg_0]
0x89E3B1: jmp     short loc_89E3B7
0x89E3B3: fst     [esp+8+arg_0]
0x89E3B7: test    esi, esi
0x89E3B9: fld     [esp+8+arg_0]
0x89E3BD: fstp    dword ptr [edi+34h]
0x89E3C0: jz      short loc_89E3D2
0x89E3C2: mov     eax, [esi+8]
0x89E3C5: test    eax, eax
0x89E3C7: jz      short loc_89E3D2
0x89E3C9: fld     dword ptr [eax+4Ch]
0x89E3CC: fstp    [esp+8+arg_0]
0x89E3D0: jmp     short loc_89E3D6
0x89E3D2: fst     [esp+8+arg_0]
0x89E3D6: test    esi, esi
0x89E3D8: fld     [esp+8+arg_0]
0x89E3DC: fstp    dword ptr [edi+3Ch]
0x89E3DF: jz      short loc_89E40D
0x89E3E1: mov     esi, [esi+8]
0x89E3E4: test    esi, esi
0x89E3E6: jz      short loc_89E40D
0x89E3E8: lea     eax, [esi+20h]
0x89E3EB: fstp    st
0x89E3ED: push    eax
0x89E3EE: lea     ecx, [edi+10h]
0x89E3F1: call    sub_47DCD0
0x89E3F6: lea     ecx, [esi+30h]
0x89E3F9: push    ecx
0x89E3FA: lea     ecx, [edi+20h]
0x89E3FD: call    sub_47DCD0
0x89E402: fld     dword ptr [esi+48h]
0x89E405: fstp    dword ptr [edi+38h]
0x89E408: pop     edi
0x89E409: pop     esi
0x89E40A: retn    4
0x89E40D: fst     dword ptr [edi+10h]
0x89E410: fst     dword ptr [edi+14h]
0x89E413: fst     dword ptr [edi+18h]
0x89E416: fst     dword ptr [edi+1Ch]
0x89E419: fst     dword ptr [edi+20h]
0x89E41C: fst     dword ptr [edi+24h]
0x89E41F: fst     dword ptr [edi+28h]
0x89E422: fst     dword ptr [edi+2Ch]
0x89E425: fstp    dword ptr [edi+38h]
0x89E428: pop     edi
0x89E429: pop     esi
0x89E42A: retn    4

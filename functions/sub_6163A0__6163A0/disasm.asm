0x6163A0: sub     esp, 30h
0x6163A3: mov     eax, ds:0B3F9A8h
0x6163A8: mov     edx, ds:0B3F9B0h
0x6163AE: push    esi
0x6163AF: mov     esi, ecx
0x6163B1: mov     ecx, ds:0B3F9ACh
0x6163B7: mov     dword ptr [esp+34h+var_24+4], ecx
0x6163BB: mov     ecx, esi
0x6163BD: mov     dword ptr [esp+34h+var_24], eax
0x6163C1: mov     [esp+34h+var_1C], edx
0x6163C5: call    sub_6135F0
0x6163CA: test    eax, eax
0x6163CC: jz      loc_61651C
0x6163D2: mov     ecx, esi
0x6163D4: call    sub_6135F0
0x6163D9: mov     ecx, eax
0x6163DB: call    sub_5E05B0
0x6163E0: test    al, al
0x6163E2: jz      loc_61651C
0x6163E8: mov     ecx, esi
0x6163EA: call    sub_6135F0
0x6163EF: mov     edx, [eax]
0x6163F1: mov     edx, [edx+1D0h]
0x6163F7: lea     ecx, [esp+34h+var_24]
0x6163FB: push    ecx
0x6163FC: mov     ecx, eax
0x6163FE: call    edx
0x616400: fldz
0x616402: mov     ecx, esi
0x616404: fstp    [esp+34h+var_1C]
0x616408: call    sub_6135F0
0x61640D: mov     edx, [eax]
0x61640F: mov     ecx, eax
0x616411: mov     eax, [edx+174h]
0x616417: call    eax
0x616419: fld     dword ptr [eax+4]
0x61641C: fadd    dword ptr [esp+34h+var_24+4]
0x616420: fstp    [esp+34h+var_30]
0x616424: fld     dword ptr [eax+8]
0x616427: fadd    [esp+34h+var_1C]
0x61642B: fstp    [esp+34h+var_2C]
0x61642F: fld     dword ptr [eax]
0x616431: fadd    dword ptr [esp+34h+var_24]
0x616435: fstp    [esp+34h+var_18]
0x616439: fld     [esp+34h+var_30]
0x61643D: fstp    [esp+34h+var_14]
0x616441: fld     [esp+34h+var_2C]
0x616445: fstp    [esp+34h+var_10]
0x616449: fldz
0x61644B: fcomp   dword ptr [esi+184h]
0x616451: fnstsw  ax
0x616453: test    ah, 41h
0x616456: jnz     short loc_616476
0x616458: push    edi; a5
0x616459: mov     edi, [esi+3Ch]; a1
0x61645C: push    0; a4
0x61645E: mov     ecx, esi
0x616460: call    sub_6135F0
0x616465: push    eax; a3
0x616466: push    edi; a2
0x616467: call    TESObjectREFR_GetDistanceBetween?
0x61646C: fstp    dword ptr [esi+184h]
0x616472: add     esp, 0Ch
0x616475: pop     edi
0x616476: fld     dword ptr [esi+184h]
0x61647C: mov     ecx, [esi+3Ch]
0x61647F: fstp    [esp+34h+var_28]
0x616483: call    sub_5E05B0
0x616488: test    al, al
0x61648A: mov     ecx, [esi+3Ch]
0x61648D: jnz     short loc_61649B
0x61648F: lea     edx, [esp+34h+var_18]
0x616493: push    edx
0x616494: call    sub_4D7E30
0x616499: jmp     short loc_6164F6
0x61649B: mov     eax, [ecx]
0x61649D: mov     edx, [eax+174h]
0x6164A3: call    edx
0x6164A5: fld     dword ptr [eax]
0x6164A7: fsub    [esp+34h+var_18]
0x6164AB: fstp    [esp+34h+var_C]
0x6164AF: fld     dword ptr [eax+4]
0x6164B2: fsub    [esp+34h+var_14]
0x6164B6: fstp    [esp+34h+var_8]
0x6164BA: fld     dword ptr [eax+8]
0x6164BD: fsub    [esp+34h+var_10]
0x6164C1: fstp    [esp+34h+var_4]
0x6164C5: fld     [esp+34h+var_8]
0x6164C9: fld     [esp+34h+var_C]
0x6164CD: fld     [esp+34h+var_4]
0x6164D1: fld     st(1)
0x6164D3: fmulp   st(2), st
0x6164D5: fld     st(2)
0x6164D7: fmulp   st(3), st
0x6164D9: fxch    st(1)
0x6164DB: faddp   st(2), st
0x6164DD: fmul    st, st
0x6164DF: faddp   st(1), st
0x6164E1: fstp    [esp+34h+var_2C]
0x6164E5: fld     [esp+34h+var_2C]
0x6164E9: call    __CIsqrt
0x6164EE: fstp    [esp+34h+var_2C]
0x6164F2: fld     [esp+34h+var_2C]
0x6164F6: fstp    [esp+34h+var_30]
0x6164FA: fld     [esp+34h+var_30]
0x6164FE: fld     [esp+34h+var_28]
0x616502: fcompp
0x616504: fnstsw  ax
0x616506: test    ah, 41h
0x616509: jp      short loc_616515
0x61650B: mov     eax, 1
0x616510: pop     esi
0x616511: add     esp, 30h
0x616514: retn
0x616515: xor     eax, eax
0x616517: pop     esi
0x616518: add     esp, 30h
0x61651B: retn
0x61651C: xor     al, al
0x61651E: pop     esi
0x61651F: add     esp, 30h
0x616522: retn

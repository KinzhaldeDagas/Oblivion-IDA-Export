0x4D8440: sub     esp, 44h
0x4D8443: push    ebx
0x4D8444: push    esi
0x4D8445: mov     esi, [esp+4Ch+arg_4]
0x4D8449: xor     ebx, ebx
0x4D844B: cmp     esi, ebx
0x4D844D: jz      loc_4D86B7
0x4D8453: push    edi
0x4D8454: mov     edi, [esp+50h+arg_0]
0x4D8458: cmp     edi, ebx
0x4D845A: jz      loc_4D86BF
0x4D8460: mov     ecx, edi
0x4D8462: call    TESFile_GetRecordType
0x4D8467: cmp     eax, 31h ; '1'
0x4D846A: jnz     loc_4D86BF
0x4D8470: fld1
0x4D8472: xor     eax, eax
0x4D8474: mov     [esi], eax
0x4D8476: fstp    [esp+50h+arg_4]
0x4D847A: fldz
0x4D847C: mov     [esi+4], eax
0x4D847F: mov     [esi+8], eax
0x4D8482: fst     dword ptr [esp+50h+Dst]
0x4D8486: mov     [esi+0Ch], eax
0x4D8489: fstp    [esp+50h+var_2C]
0x4D848D: fld     dword ptr ds:0A34F5Ch
0x4D8493: mov     [esi+10h], eax
0x4D8496: mov     [esi+14h], eax
0x4D8499: fstp    [esp+50h+var_28]
0x4D849D: mov     [esi+18h], eax
0x4D84A0: mov     ecx, edi
0x4D84A2: mov     dword ptr [esp+50h+var_18], eax
0x4D84A6: mov     [esp+50h+var_14], eax
0x4D84AA: mov     [esp+50h+var_10], eax
0x4D84AE: mov     [esp+50h+var_C], eax
0x4D84B2: mov     [esp+50h+var_8], eax
0x4D84B6: mov     [esp+50h+var_4], eax
0x4D84BA: mov     [esi+1Ch], eax
0x4D84BD: call    TESFile_GetChunkType
0x4D84C2: cmp     eax, ebx
0x4D84C4: jz      loc_4D855A
0x4D84CA: lea     ebx, [ebx+0]
0x4D84D0: cmp     eax, 454D414Eh
0x4D84D5: jg      short loc_4D8518
0x4D84D7: jz      short loc_4D84F7
0x4D84D9: cmp     eax, 41544144h
0x4D84DE: jz      short loc_4D854C
0x4D84E0: cmp     eax, 444F4C58h
0x4D84E5: jnz     short loc_4D852D
0x4D84E7: push    0Ch; a4
0x4D84E9: lea     eax, [esp+54h+Dst]
0x4D84ED: push    eax; Dst
0x4D84EE: mov     ecx, edi; a1
0x4D84F0: call    TESFile_GetChunkData
0x4D84F5: jmp     short loc_4D8534
0x4D84F7: lea     ecx, [esp+50h+a1]
0x4D84FB: push    ecx
0x4D84FC: mov     ecx, edi
0x4D84FE: mov     [esp+54h+a1], ebx
0x4D8502: call    TESFile_GetChunkData4
0x4D8507: mov     edx, [esp+50h+a1]
0x4D850B: push    edx; a1
0x4D850C: call    TESForm_LookupByFormID
0x4D8511: add     esp, 4
0x4D8514: mov     [esi], eax
0x4D8516: jmp     short loc_4D8534
0x4D8518: cmp     eax, 4C435358h
0x4D851D: jnz     short loc_4D852D
0x4D851F: lea     eax, [esp+50h+arg_4]
0x4D8523: push    eax
0x4D8524: mov     ecx, edi
0x4D8526: call    TESFile_GetChunkData4
0x4D852B: jmp     short loc_4D8534
0x4D852D: cmp     eax, 41544144h
0x4D8532: jz      short loc_4D855A
0x4D8534: mov     ecx, edi
0x4D8536: call    TESFile_GetNextChunk
0x4D853B: test    al, al
0x4D853D: jz      short loc_4D855A
0x4D853F: mov     ecx, edi
0x4D8541: call    TESFile_GetChunkType
0x4D8546: cmp     eax, ebx
0x4D8548: jnz     short loc_4D84D0
0x4D854A: jmp     short loc_4D855A
0x4D854C: push    18h; a4
0x4D854E: lea     ecx, [esp+54h+var_18]
0x4D8552: push    ecx; Dst
0x4D8553: mov     ecx, edi; a1
0x4D8555: call    TESFile_GetChunkData
0x4D855A: cmp     [esi], ebx
0x4D855C: jz      loc_4D86BF
0x4D8562: fld     dword ptr [esp+50h+Dst]
0x4D8566: fld     qword ptr ds:0A2FAA0h
0x4D856C: fmul    st(1), st
0x4D856E: fadd    st(1), st
0x4D8570: fxch    st(1)
0x4D8572: fstp    dword ptr [esp+50h+Dst]
0x4D8576: fld     dword ptr [esp+50h+Dst]
0x4D857A: fld     qword ptr ds:0A46B18h
0x4D8580: fcom    st(1)
0x4D8582: fnstsw  ax
0x4D8584: fstp    st(1)
0x4D8586: test    ah, 41h
0x4D8589: fld     dword ptr ds:0A34F5Ch
0x4D858F: jp      short loc_4D8595
0x4D8591: fst     dword ptr [esp+50h+Dst]
0x4D8595: fld     [esp+50h+var_2C]
0x4D8599: fmul    st, st(3)
0x4D859B: fadd    st, st(3)
0x4D859D: fstp    [esp+50h+var_2C]
0x4D85A1: fld     [esp+50h+var_2C]
0x4D85A5: fcomp   st(2)
0x4D85A7: fnstsw  ax
0x4D85A9: test    ah, 1
0x4D85AC: jnz     short loc_4D85B2
0x4D85AE: fst     [esp+50h+var_2C]
0x4D85B2: fld     [esp+50h+var_28]
0x4D85B6: fmul    st, st(3)
0x4D85B8: faddp   st(3), st
0x4D85BA: fxch    st(2)
0x4D85BC: fstp    [esp+50h+var_28]
0x4D85C0: fld     [esp+50h+var_28]
0x4D85C4: fcompp
0x4D85C6: fnstsw  ax
0x4D85C8: test    ah, 1
0x4D85CB: jnz     short loc_4D85D3
0x4D85CD: fstp    [esp+50h+var_28]
0x4D85D1: jmp     short loc_4D85D5
0x4D85D3: fstp    st
0x4D85D5: fld     [esp+50h+var_10]
0x4D85D9: fistp   [esp+50h+var_44]
0x4D85DD: mov     edx, [esp+50h+var_44]
0x4D85E1: mov     [esp+50h+var_34], edx
0x4D85E5: fld     [esp+50h+var_14]
0x4D85E9: fistp   [esp+50h+a1]
0x4D85ED: mov     eax, [esp+50h+a1]
0x4D85F1: mov     [esp+50h+var_38], eax
0x4D85F5: fld     dword ptr [esp+50h+var_18]
0x4D85F9: fistp   [esp+50h+var_3C]
0x4D85FD: fild    [esp+50h+var_3C]
0x4D8601: sub     esp, 8
0x4D8604: fstp    [esp+58h+var_24]
0x4D8608: mov     ecx, [esp+58h+var_24]
0x4D860C: fild    [esp+58h+var_38]
0x4D8610: mov     [esi+4], ecx
0x4D8613: fstp    [esp+58h+var_20]
0x4D8617: mov     edx, [esp+58h+var_20]
0x4D861B: fild    [esp+58h+var_34]
0x4D861F: mov     [esi+8], edx
0x4D8622: fstp    [esp+58h+var_1C]
0x4D8626: mov     eax, [esp+58h+var_1C]
0x4D862A: fld     dword ptr [esp+58h+Dst]
0x4D862E: mov     [esi+0Ch], eax
0x4D8631: fadd    dword ptr [esi+4]
0x4D8634: fstp    [esp+58h+var_24]
0x4D8638: mov     ecx, [esp+58h+var_24]
0x4D863C: fld     dword ptr [esi+8]
0x4D863F: fadd    [esp+58h+var_2C]
0x4D8643: fstp    [esp+58h+var_20]
0x4D8647: mov     edx, [esp+58h+var_20]
0x4D864B: fld     dword ptr [esi+0Ch]
0x4D864E: mov     [esi+4], ecx
0x4D8651: fadd    [esp+58h+var_28]
0x4D8655: mov     [esi+8], edx
0x4D8658: fstp    [esp+58h+var_1C]
0x4D865C: mov     eax, [esp+58h+var_1C]
0x4D8660: fld     [esp+58h+arg_4]
0x4D8664: mov     [esi+0Ch], eax
0x4D8667: fmul    qword ptr ds:0A309F0h
0x4D866D: fstp    [esp+58h+arg_4]
0x4D8671: fld     [esp+58h+arg_4]
0x4D8675: fstp    [esp+58h+var_58]; double
0x4D8678: call    _floor
0x4D867D: mov     ecx, [esp+58h+var_C]
0x4D8681: fstp    [esp+58h+arg_4]
0x4D8685: fld     [esp+58h+arg_4]
0x4D8689: mov     edx, [esp+58h+var_8]
0x4D868D: mov     eax, [esp+58h+var_4]
0x4D8691: fstp    [esp+58h+arg_4]
0x4D8695: fld     [esp+58h+arg_4]
0x4D8699: add     esp, 8
0x4D869C: fadd    qword ptr ds:0A46B18h
0x4D86A2: mov     [esi+14h], ecx
0x4D86A5: mov     [esi+18h], edx
0x4D86A8: pop     edi
0x4D86A9: mov     [esi+1Ch], eax
0x4D86AC: fstp    dword ptr [esi+10h]
0x4D86AF: pop     esi
0x4D86B0: mov     al, 1
0x4D86B2: pop     ebx
0x4D86B3: add     esp, 44h
0x4D86B6: retn
0x4D86B7: pop     esi
0x4D86B8: mov     al, bl
0x4D86BA: pop     ebx
0x4D86BB: add     esp, 44h
0x4D86BE: retn
0x4D86BF: pop     edi
0x4D86C0: pop     esi
0x4D86C1: mov     al, bl
0x4D86C3: pop     ebx
0x4D86C4: add     esp, 44h
0x4D86C7: retn

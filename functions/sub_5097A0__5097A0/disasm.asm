0x5097A0: push    ebp
0x5097A1: mov     ebp, esp
0x5097A3: and     esp, 0FFFFFFC0h
0x5097A6: sub     esp, 34h
0x5097A9: push    ebx
0x5097AA: push    esi
0x5097AB: mov     esi, [ebp+arg_8]
0x5097AE: test    esi, esi
0x5097B0: push    edi
0x5097B1: mov     [esp+40h+var_15], 1
0x5097B6: jz      loc_5099C0
0x5097BC: mov     ecx, esi
0x5097BE: call    sub_4D7240
0x5097C3: test    eax, eax
0x5097C5: jz      loc_50990C
0x5097CB: mov     ecx, esi
0x5097CD: call    sub_4D7240
0x5097D2: mov     ecx, esi; this
0x5097D4: mov     edi, eax
0x5097D6: call    sub_4D7250
0x5097DB: cmp     dword ptr [edi+4Ch], 0
0x5097DF: mov     ebx, eax
0x5097E1: lea     eax, [edi+48h]
0x5097E4: jnz     short loc_50980A
0x5097E6: cmp     dword ptr [eax], 0
0x5097E9: jnz     short loc_50980A
0x5097EB: mov     eax, [edi]
0x5097ED: mov     edx, [eax+0D4h]
0x5097F3: mov     ecx, edi
0x5097F5: call    edx
0x5097F7: push    eax
0x5097F8: push    offset aNoVariablesInS; "No variables in script %s"
0x5097FD: call    Interface_ConsolePrint
0x509802: add     esp, 8
0x509805: jmp     loc_509907
0x50980A: test    ebx, ebx
0x50980C: jz      loc_509904
0x509812: test    eax, eax
0x509814: jz      loc_509904
0x50981A: mov     esi, [eax]
0x50981C: test    esi, esi
0x50981E: jz      loc_509904
0x509824: mov     ecx, [esi]
0x509826: mov     eax, [eax+4]
0x509829: push    ecx
0x50982A: mov     ecx, ebx
0x50982C: mov     [esp+44h+var_14], eax
0x509830: call    sub_4FA1B0
0x509835: test    al, al
0x509837: push    0; a3
0x509839: jz      short loc_50988C
0x50983B: mov     edx, [esi]
0x50983D: push    edx; ArgList
0x50983E: mov     ecx, ebx; this
0x509840: mov     [esp+48h+var_10], 0
0x509848: call    sub_4FA110
0x50984D: fstp    [esp+40h+var_8]
0x509851: lea     eax, [esp+40h+var_8]
0x509855: push    eax
0x509856: lea     ecx, [esp+44h+var_10]
0x50985A: push    ecx
0x50985B: call    sub_4F9FC0
0x509860: mov     edx, [esp+48h+var_10]
0x509864: mov     esi, [esi+18h]
0x509867: mov     eax, [edi]
0x509869: add     esp, 8
0x50986C: push    edx
0x50986D: mov     edx, [eax+0D4h]
0x509873: push    esi
0x509874: mov     ecx, edi
0x509876: call    edx
0x509878: push    eax
0x509879: push    offset aSS08x_0; "%s->%s = (%08X)"
0x50987E: call    Interface_ConsolePrint
0x509883: mov     eax, [esp+50h+var_14]
0x509887: add     esp, 10h
0x50988A: jmp     short loc_509812
0x50988C: cmp     byte ptr [esi+10h], 0
0x509890: mov     ecx, [esi]
0x509892: mov     eax, [esi+18h]
0x509895: push    ecx; ArgList
0x509896: mov     [esp+48h+var_10], eax
0x50989A: mov     ecx, ebx; this
0x50989C: jz      short loc_5098D1
0x50989E: call    sub_4FA110
0x5098A3: call    Double_To_SInt32
0x5098A8: mov     edx, [esp+40h+var_10]
0x5098AC: push    eax
0x5098AD: mov     eax, [edi]
0x5098AF: push    edx
0x5098B0: mov     edx, [eax+0D4h]
0x5098B6: mov     ecx, edi
0x5098B8: call    edx
0x5098BA: push    eax
0x5098BB: push    offset aSSD; "%s->%s = %d"
0x5098C0: call    Interface_ConsolePrint
0x5098C5: mov     eax, [esp+50h+var_14]
0x5098C9: add     esp, 10h
0x5098CC: jmp     loc_509812
0x5098D1: call    sub_4FA110
0x5098D6: mov     edx, [esp+40h+var_10]
0x5098DA: mov     eax, [edi]
0x5098DC: sub     esp, 8
0x5098DF: fstp    [esp+48h+var_48]
0x5098E2: push    edx
0x5098E3: mov     edx, [eax+0D4h]
0x5098E9: mov     ecx, edi
0x5098EB: call    edx
0x5098ED: push    eax
0x5098EE: push    offset aSS0_4f; "%s->%s = %0.4f"
0x5098F3: call    Interface_ConsolePrint
0x5098F8: mov     eax, [esp+54h+var_14]
0x5098FC: add     esp, 14h
0x5098FF: jmp     loc_509812
0x509904: mov     esi, [ebp+arg_8]
0x509907: mov     [esp+40h+var_15], 0
0x50990C: mov     ecx, esi; this
0x50990E: call    TESObjectREFR_GetContainer
0x509913: test    eax, eax
0x509915: jz      loc_5099B5
0x50991B: push    eax
0x50991C: push    esi; a1
0x50991D: call    ContainerExtraData_GetContainerExtraDataForRef
0x509922: mov     ebx, eax
0x509924: add     esp, 8
0x509927: mov     ecx, ebx
0x509929: mov     [esp+40h+var_C], ebx
0x50992D: call    ContainerExtraData_GetCount
0x509932: xor     esi, esi
0x509934: test    eax, eax
0x509936: mov     dword ptr [esp+40h+var_8], eax
0x50993A: mov     [esp+40h+var_14], esi
0x50993E: jle     short loc_5099B5
0x509940: push    esi
0x509941: mov     ecx, ebx
0x509943: call    ContainerExtraData_GetEntryForItem
0x509948: mov     edi, eax
0x50994A: test    edi, edi
0x50994C: jz      short loc_5099A8
0x50994E: mov     ecx, edi
0x509950: call    sub_484F20
0x509955: test    eax, eax
0x509957: jz      short loc_5099A8
0x509959: mov     ecx, edi
0x50995B: call    sub_484F20
0x509960: mov     ecx, edi
0x509962: mov     esi, eax
0x509964: call    sub_484F50
0x509969: cmp     dword ptr [esi+4Ch], 0
0x50996D: lea     ecx, [esi+48h]
0x509970: mov     ebx, eax
0x509972: jnz     loc_509A48
0x509978: cmp     dword ptr [ecx], 0
0x50997B: jnz     loc_509A48
0x509981: mov     eax, [esi]
0x509983: mov     edx, [eax+0D4h]
0x509989: mov     ecx, esi
0x50998B: call    edx
0x50998D: push    eax
0x50998E: push    offset aNoVariablesInS; "No variables in script %s"
0x509993: call    Interface_ConsolePrint
0x509998: add     esp, 8
0x50999B: mov     ebx, [esp+40h+var_C]
0x50999F: mov     esi, [esp+40h+var_14]
0x5099A3: mov     [esp+40h+var_15], 0
0x5099A8: add     esi, 1
0x5099AB: cmp     esi, dword ptr [esp+40h+var_8]
0x5099AF: mov     [esp+40h+var_14], esi
0x5099B3: jl      short loc_509940
0x5099B5: cmp     [esp+40h+var_15], 0
0x5099BA: jz      loc_509B23
0x5099C0: mov     edi, ds:0B33A98h
0x5099C6: add     edi, 74h ; 't'
0x5099C9: jz      loc_509B23
0x5099CF: cmp     dword ptr [edi+4], 0
0x5099D3: jnz     short loc_5099DE
0x5099D5: cmp     dword ptr [edi], 0
0x5099D8: jz      loc_509B23
0x5099DE: push    offset aGlobalVariab_0; "--- Global Variables ------------------"...
0x5099E3: call    Interface_ConsolePrint
0x5099E8: add     esp, 4
0x5099EB: jmp     short loc_5099F0
0x5099ED: align 10h
0x5099F0: mov     esi, [edi]
0x5099F2: test    esi, esi
0x5099F4: jz      loc_509B18
0x5099FA: mov     al, [esi+20h]
0x5099FD: cmp     al, 66h ; 'f'
0x5099FF: jz      loc_509AED
0x509A05: cmp     al, 6Ch ; 'l'
0x509A07: jz      loc_509AD7
0x509A0D: cmp     al, 73h ; 's'
0x509A0F: jnz     loc_509B18
0x509A15: fld     dword ptr [esi+24h]
0x509A18: fstp    dword ptr [esp+40h+var_8]
0x509A1C: fld     dword ptr [esp+40h+var_8]
0x509A20: call    Double_To_SInt32
0x509A25: movsx   ecx, ax
0x509A28: push    ecx
0x509A29: mov     edx, [esi]
0x509A2B: mov     eax, [edx+0D4h]
0x509A31: mov     ecx, esi
0x509A33: call    eax
0x509A35: push    eax
0x509A36: push    offset aSD; "%s = %d"
0x509A3B: call    Interface_ConsolePrint
0x509A40: add     esp, 0Ch
0x509A43: jmp     loc_509B18
0x509A48: test    ebx, ebx
0x509A4A: jz      loc_50999B
0x509A50: test    ecx, ecx
0x509A52: jz      loc_50999B
0x509A58: mov     eax, [ecx]
0x509A5A: test    eax, eax
0x509A5C: jz      loc_50999B
0x509A62: cmp     byte ptr [eax+10h], 0
0x509A66: mov     ecx, [ecx+4]
0x509A69: mov     edi, [eax+18h]
0x509A6C: mov     [esp+40h+var_10], ecx
0x509A70: push    0; a3
0x509A72: mov     ecx, ebx; this
0x509A74: jz      short loc_509AA5
0x509A76: mov     edx, [eax]
0x509A78: push    edx; ArgList
0x509A79: call    sub_4FA110
0x509A7E: call    Double_To_SInt32
0x509A83: push    eax
0x509A84: mov     eax, [esi]
0x509A86: mov     edx, [eax+0D4h]
0x509A8C: push    edi
0x509A8D: mov     ecx, esi
0x509A8F: call    edx
0x509A91: push    eax
0x509A92: push    offset aSSD; "%s->%s = %d"
0x509A97: call    Interface_ConsolePrint
0x509A9C: mov     ecx, [esp+50h+var_10]
0x509AA0: add     esp, 10h
0x509AA3: jmp     short loc_509A50
0x509AA5: mov     eax, [eax]
0x509AA7: push    eax; ArgList
0x509AA8: call    sub_4FA110
0x509AAD: mov     edx, [esi]
0x509AAF: mov     eax, [edx+0D4h]
0x509AB5: sub     esp, 8
0x509AB8: fstp    [esp+48h+var_48]
0x509ABB: push    edi
0x509ABC: mov     ecx, esi
0x509ABE: call    eax
0x509AC0: push    eax
0x509AC1: push    offset aSS0_4f; "%s->%s = %0.4f"
0x509AC6: call    Interface_ConsolePrint
0x509ACB: mov     ecx, [esp+54h+var_10]
0x509ACF: add     esp, 14h
0x509AD2: jmp     loc_509A50
0x509AD7: fld     dword ptr [esi+24h]
0x509ADA: fstp    dword ptr [esp+40h+var_8]
0x509ADE: fld     dword ptr [esp+40h+var_8]
0x509AE2: call    Double_To_SInt32
0x509AE7: push    eax
0x509AE8: jmp     loc_509A29
0x509AED: fld     dword ptr [esi+24h]
0x509AF0: mov     edx, [esi]
0x509AF2: mov     eax, [edx+0D4h]
0x509AF8: fstp    dword ptr [esp+40h+var_8]
0x509AFC: fld     dword ptr [esp+40h+var_8]
0x509B00: sub     esp, 8
0x509B03: mov     ecx, esi
0x509B05: fstp    [esp+48h+var_48]
0x509B08: call    eax
0x509B0A: push    eax
0x509B0B: push    offset aS0_4f; "%s = %0.4f"
0x509B10: call    Interface_ConsolePrint
0x509B15: add     esp, 10h
0x509B18: mov     edi, [edi+4]
0x509B1B: test    edi, edi
0x509B1D: jnz     loc_5099F0
0x509B23: pop     edi
0x509B24: pop     esi
0x509B25: mov     al, 1
0x509B27: pop     ebx
0x509B28: mov     esp, ebp
0x509B2A: pop     ebp
0x509B2B: retn

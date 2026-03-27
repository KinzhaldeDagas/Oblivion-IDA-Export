0x513FC0: sub     esp, 20Ch
0x513FC6: mov     eax, ds:0B30AACh
0x513FCB: xor     eax, esp
0x513FCD: mov     [esp+20Ch+var_4], eax
0x513FD4: mov     edx, [esp+20Ch+a4]
0x513FDB: fldz
0x513FDD: mov     ecx, [esp+20Ch+arg_4]
0x513FE4: push    ebx
0x513FE5: mov     ebx, [esp+210h+arg_10]
0x513FEC: push    ebp
0x513FED: mov     ebp, [esp+214h+arg_1C]
0x513FF4: mov     eax, [esp+214h+a1]
0x513FFB: push    esi
0x513FFC: mov     esi, [esp+218h+arg_C]
0x514003: push    edi
0x514004: mov     edi, [esp+21Ch+arg_14]
0x51400B: mov     [esp+21Ch+a3], ebp
0x51400F: lea     ebp, [esp+21Ch+var_204]
0x514013: push    ebp; UInt16
0x514014: mov     [esp+220h+l], edi
0x514018: mov     ebp, [esp+220h+l]
0x51401C: mov     edi, [esp+220h+arg_18]
0x514023: push    ebp; l
0x514024: fstp    qword ptr [edi]
0x514026: push    ebx; a6
0x514027: push    esi; a5
0x514028: push    edx; a4
0x514029: mov     edx, [esp+230h+a3]
0x51402D: push    edx; a3
0x51402E: push    ecx; a2
0x51402F: push    eax; a1
0x514030: call    Script_ExtractArgs
0x514035: add     esp, 20h
0x514038: test    al, al
0x51403A: jz      loc_5140E7
0x514040: lea     eax, [esp+21Ch+l]
0x514044: push    eax
0x514045: lea     ecx, [esp+220h+var_204]
0x514049: push    ecx
0x51404A: mov     ecx, offset dword_B35574
0x51404F: mov     [esp+224h+l], 0
0x514057: call    NiTMap_GetAt
0x51405C: mov     esi, [esp+21Ch+l]
0x514060: test    esi, esi
0x514062: jz      short loc_5140D1
0x514064: mov     edx, [esi+4]
0x514067: push    edx
0x514068: call    Setting_GetTypeFromName
0x51406D: add     esp, 4
0x514070: sub     eax, 3
0x514073: jz      short loc_5140BF
0x514075: sub     eax, 2
0x514078: jz      short loc_5140A0
0x51407A: sub     eax, 1
0x51407D: jz      short loc_514092
0x51407F: mov     eax, [esi+4]
0x514082: push    eax
0x514083: push    offset aGamesettingSUn; "GameSetting %s >> UNKNOWN TYPE"
0x514088: call    Interface_ConsolePrint
0x51408D: add     esp, 8
0x514090: jmp     short loc_5140E5
0x514092: mov     ecx, [esi]
0x514094: mov     edx, [esi+4]
0x514097: push    ecx
0x514098: push    edx
0x514099: push    offset aGamesettingSS; "GameSetting %s >> '%s'"
0x51409E: jmp     short loc_5140DD
0x5140A0: fld     dword ptr [esi]
0x5140A2: mov     eax, [esi+4]
0x5140A5: fstp    qword ptr [edi]
0x5140A7: sub     esp, 8
0x5140AA: fld     dword ptr [esi]
0x5140AC: fstp    [esp+224h+var_224]
0x5140AF: push    eax
0x5140B0: push    offset aGamesettingS_2; "GameSetting %s >> %.2f"
0x5140B5: call    Interface_ConsolePrint
0x5140BA: add     esp, 10h
0x5140BD: jmp     short loc_5140E5
0x5140BF: fild    dword ptr [esi]
0x5140C1: mov     edx, [esi+4]
0x5140C4: fstp    qword ptr [edi]
0x5140C6: mov     ecx, [esi]
0x5140C8: push    ecx
0x5140C9: push    edx
0x5140CA: push    offset aGamesettingSI; "GameSetting %s >> %i"
0x5140CF: jmp     short loc_5140DD
0x5140D1: push    0
0x5140D3: lea     eax, [esp+220h+var_204]
0x5140D7: push    eax
0x5140D8: push    offset aGamesettingSNo; "GameSetting %s >> NOT FOUND"
0x5140DD: call    Interface_ConsolePrint
0x5140E2: add     esp, 0Ch
0x5140E5: mov     al, 1
0x5140E7: mov     ecx, [esp+21Ch+var_4]
0x5140EE: pop     edi
0x5140EF: pop     esi
0x5140F0: pop     ebp
0x5140F1: pop     ebx
0x5140F2: xor     ecx, esp
0x5140F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5140F9: add     esp, 20Ch
0x5140FF: retn

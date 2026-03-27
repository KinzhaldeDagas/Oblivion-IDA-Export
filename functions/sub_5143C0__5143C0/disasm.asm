0x5143C0: sub     esp, 408h
0x5143C6: mov     eax, ds:0B30AACh
0x5143CB: xor     eax, esp
0x5143CD: mov     [esp+408h+var_4], eax
0x5143D4: mov     edx, [esp+408h+a4]
0x5143DB: push    ebx
0x5143DC: mov     ebx, [esp+40Ch+l]
0x5143E3: push    ebp
0x5143E4: mov     ebp, [esp+410h+arg_1C]
0x5143EB: mov     ecx, [esp+410h+arg_4]
0x5143F2: mov     eax, [esp+410h+a1]
0x5143F9: push    esi
0x5143FA: mov     esi, [esp+414h+arg_C]
0x514401: push    edi
0x514402: mov     edi, [esp+418h+arg_10]
0x514409: mov     [esp+418h+a3], ebp
0x51440D: lea     ebp, [esp+418h+Str]
0x514411: push    ebp
0x514412: lea     ebp, [esp+41Ch+var_204]
0x514419: push    ebp; UInt16
0x51441A: push    ebx; l
0x51441B: push    edi; a6
0x51441C: push    esi; a5
0x51441D: push    edx; a4
0x51441E: mov     edx, [esp+430h+a3]
0x514422: push    edx; a3
0x514423: push    ecx; a2
0x514424: push    eax; a1
0x514425: call    Script_ExtractArgs
0x51442A: add     esp, 24h
0x51442D: test    al, al
0x51442F: jz      loc_5144CA
0x514435: lea     eax, [esp+418h+a3]
0x514439: push    eax
0x51443A: lea     ecx, [esp+41Ch+var_204]
0x514441: push    ecx
0x514442: mov     ecx, offset INISettingCollection
0x514447: mov     [esp+420h+a3], 0
0x51444F: call    sub_50EC30
0x514454: mov     esi, [esp+418h+a3]
0x514458: test    esi, esi
0x51445A: jz      short loc_5144B3
0x51445C: mov     edx, [esi+4]
0x51445F: push    edx
0x514460: call    Setting_GetTypeFromName
0x514465: add     esp, 4
0x514468: cmp     eax, 6; switch 7 cases
0x51446B: ja      short def_51446D; jumptable 0051446D default case, cases 1,2,4
0x51446D: jmp     ds:jpt_51446D[eax*4]; switch jump
0x514474: lea     eax, [esp+418h+Str]; jumptable 0051446D cases 0,3
0x514478: push    eax; Str
0x514479: call    j__atol
0x51447E: add     esp, 4
0x514481: mov     [esi], eax
0x514483: jmp     short loc_5144C8
0x514485: lea     ecx, [esp+418h+Str]; jumptable 0051446D case 5
0x514489: push    ecx; String
0x51448A: call    _atof
0x51448F: fstp    dword ptr [esi]
0x514491: add     esp, 4
0x514494: jmp     short loc_5144C8
0x514496: lea     edx, [esp+418h+Str]; jumptable 0051446D case 6
0x51449A: push    edx
0x51449B: mov     ecx, esi
0x51449D: call    Setting_SetStringValue
0x5144A2: jmp     short loc_5144C8
0x5144A4: lea     eax, [esp+418h+var_204]; jumptable 0051446D default case, cases 1,2,4
0x5144AB: push    eax
0x5144AC: push    offset aInisettingSUnk; "INISetting %s >> UNKNOWN TYPE"
0x5144B1: jmp     short loc_5144C0
0x5144B3: lea     ecx, [esp+418h+var_204]
0x5144BA: push    ecx
0x5144BB: push    offset aInisettingSNot; "INISetting %s >> NOT FOUND"
0x5144C0: call    Interface_ConsolePrint
0x5144C5: add     esp, 8
0x5144C8: mov     al, 1
0x5144CA: mov     ecx, [esp+418h+var_4]
0x5144D1: pop     edi
0x5144D2: pop     esi
0x5144D3: pop     ebp
0x5144D4: pop     ebx
0x5144D5: xor     ecx, esp
0x5144D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5144DC: add     esp, 408h
0x5144E2: retn

0x514100: sub     esp, 408h
0x514106: mov     eax, ds:0B30AACh
0x51410B: xor     eax, esp
0x51410D: mov     [esp+408h+var_4], eax
0x514114: mov     edx, [esp+408h+a4]
0x51411B: push    ebx
0x51411C: mov     ebx, [esp+40Ch+l]
0x514123: push    ebp
0x514124: mov     ebp, [esp+410h+arg_1C]
0x51412B: mov     ecx, [esp+410h+arg_4]
0x514132: mov     eax, [esp+410h+a1]
0x514139: push    esi
0x51413A: mov     esi, [esp+414h+arg_C]
0x514141: push    edi
0x514142: mov     edi, [esp+418h+arg_10]
0x514149: mov     [esp+418h+a3], ebp
0x51414D: lea     ebp, [esp+418h+String]
0x514151: push    ebp
0x514152: lea     ebp, [esp+41Ch+var_204]
0x514159: push    ebp; UInt16
0x51415A: push    ebx; l
0x51415B: push    edi; a6
0x51415C: push    esi; a5
0x51415D: push    edx; a4
0x51415E: mov     edx, [esp+430h+a3]
0x514162: push    edx; a3
0x514163: push    ecx; a2
0x514164: push    eax; a1
0x514165: call    Script_ExtractArgs
0x51416A: add     esp, 24h
0x51416D: test    al, al
0x51416F: jz      loc_51420D
0x514175: lea     eax, [esp+418h+a3]
0x514179: push    eax
0x51417A: lea     ecx, [esp+41Ch+var_204]
0x514181: push    ecx
0x514182: mov     ecx, offset dword_B35574
0x514187: mov     [esp+420h+a3], 0
0x51418F: call    NiTMap_GetAt
0x514194: mov     esi, [esp+418h+a3]
0x514198: test    esi, esi
0x51419A: jz      short loc_5141F6
0x51419C: mov     edx, [esi+4]
0x51419F: push    edx
0x5141A0: call    Setting_GetTypeFromName
0x5141A5: add     esp, 4
0x5141A8: sub     eax, 3
0x5141AB: jz      short loc_5141E5
0x5141AD: sub     eax, 2
0x5141B0: jz      short loc_5141D4
0x5141B2: sub     eax, 1
0x5141B5: jz      short loc_5141C6
0x5141B7: lea     eax, [esp+418h+var_204]
0x5141BE: push    eax
0x5141BF: push    offset aGamesettingSUn; "GameSetting %s >> UNKNOWN TYPE"
0x5141C4: jmp     short loc_514203
0x5141C6: lea     ecx, [esp+418h+String]
0x5141CA: push    ecx
0x5141CB: mov     ecx, esi
0x5141CD: call    Setting_SetStringValue
0x5141D2: jmp     short loc_51420B
0x5141D4: lea     edx, [esp+418h+String]
0x5141D8: push    edx; String
0x5141D9: call    _atof
0x5141DE: fstp    dword ptr [esi]
0x5141E0: add     esp, 4
0x5141E3: jmp     short loc_51420B
0x5141E5: lea     eax, [esp+418h+String]
0x5141E9: push    eax; Str
0x5141EA: call    j__atol
0x5141EF: add     esp, 4
0x5141F2: mov     [esi], eax
0x5141F4: jmp     short loc_51420B
0x5141F6: lea     ecx, [esp+418h+var_204]
0x5141FD: push    ecx
0x5141FE: push    offset aGamesettingSNo; "GameSetting %s >> NOT FOUND"
0x514203: call    Interface_ConsolePrint
0x514208: add     esp, 8
0x51420B: mov     al, 1
0x51420D: mov     ecx, [esp+418h+var_4]
0x514214: pop     edi
0x514215: pop     esi
0x514216: pop     ebp
0x514217: pop     ebx
0x514218: xor     ecx, esp
0x51421A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51421F: add     esp, 408h
0x514225: retn

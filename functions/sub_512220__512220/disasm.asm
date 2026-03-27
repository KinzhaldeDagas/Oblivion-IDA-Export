0x512220: sub     esp, 114h
0x512226: mov     eax, ds:0B30AACh
0x51222B: xor     eax, esp
0x51222D: mov     [esp+114h+var_4], eax
0x512234: mov     edx, [esp+114h+a4]
0x51223B: mov     ecx, [esp+114h+arg_4]
0x512242: mov     eax, [esp+114h+a1]
0x512249: push    ebx
0x51224A: mov     ebx, [esp+118h+l]
0x512251: push    ebp
0x512252: mov     ebp, [esp+11Ch+arg_1C]
0x512259: push    esi
0x51225A: mov     esi, [esp+120h+arg_C]
0x512261: push    edi
0x512262: mov     edi, [esp+124h+arg_10]
0x512269: mov     [esp+124h+a3], ebp
0x51226D: lea     ebp, [esp+124h+var_10C]
0x512271: push    ebp; UInt16
0x512272: push    ebx; l
0x512273: push    edi; a6
0x512274: push    esi; a5
0x512275: push    edx; a4
0x512276: mov     edx, [esp+138h+a3]
0x51227A: push    edx; a3
0x51227B: push    ecx; a2
0x51227C: push    eax; a1
0x51227D: mov     dword ptr [esp+144h+var_10C], 0
0x512285: call    Script_ExtractArgs
0x51228A: add     esp, 20h
0x51228D: test    al, al
0x51228F: jz      loc_512379
0x512295: xor     eax, eax
0x512297: push    eax
0x512298: push    eax
0x512299: mov     [esp+12Ch+a3], eax
0x51229D: mov     [esp+12Ch+var_110], eax
0x5122A1: mov     eax, dword ptr [esp+12Ch+var_10C]
0x5122A5: push    eax
0x5122A6: lea     ecx, [esp+130h+a3]
0x5122AA: push    ecx
0x5122AB: call    sub_52A8A0
0x5122B0: add     esp, 10h
0x5122B3: lea     ebx, [esp+124h+a3]
0x5122B7: cmp     dword ptr [ebx], 0
0x5122BA: jz      loc_512377
0x5122C0: mov     esi, [ebx]
0x5122C2: mov     edi, [esi+68h]
0x5122C5: mov     ebx, [ebx+4]
0x5122C8: push    104h
0x5122CD: lea     edx, [esp+128h+var_108]
0x5122D1: push    0
0x5122D3: push    edx
0x5122D4: call    __memset
0x5122D9: add     esp, 0Ch
0x5122DC: push    edi
0x5122DD: mov     ecx, esi
0x5122DF: call    QuestStageItem_GetLogText
0x5122E4: push    103h; size_t
0x5122E9: push    eax; unsigned __int8 *
0x5122EA: lea     eax, [esp+12Ch+var_108]
0x5122EE: push    eax; unsigned __int8 *
0x5122EF: call    __mbsnbcpy
0x5122F4: mov     edi, [esi+64h]
0x5122F7: push    offset asc_A4D4CC; "---------------------------------------"...
0x5122FC: call    Interface_ConsolePrint
0x512301: add     esp, 10h
0x512304: mov     ecx, edi
0x512306: call    QuestStageItem_GetMonth
0x51230B: mov     eax, ds:0B06FA4h[eax*4]
0x512312: test    eax, eax
0x512314: jz      short loc_51231A
0x512316: mov     ebp, [eax]
0x512318: jmp     short loc_51231C
0x51231A: xor     ebp, ebp
0x51231C: mov     ecx, edi
0x51231E: call    QuestStageItem_GetYear
0x512323: movzx   ecx, ax
0x512326: push    ecx
0x512327: push    ebp
0x512328: mov     ecx, edi
0x51232A: call    QuestStageItem_GetDay
0x51232F: movzx   edx, ax
0x512332: push    edx
0x512333: push    offset aDOfSD; "%d of %s, %d"
0x512338: call    Interface_ConsolePrint
0x51233D: mov     esi, [esi+68h]
0x512340: add     esi, 30h ; '0'
0x512343: mov     esi, [esi+4]
0x512346: add     esp, 10h
0x512349: test    esi, esi
0x51234B: jnz     short loc_512352
0x51234D: mov     esi, offset EmptyString
0x512352: push    esi
0x512353: push    offset aS; "%s"
0x512358: call    Interface_ConsolePrint
0x51235D: lea     eax, [esp+12Ch+var_108]
0x512361: push    eax
0x512362: push    offset aS; "%s"
0x512367: call    Interface_ConsolePrint
0x51236C: add     esp, 10h
0x51236F: test    ebx, ebx
0x512371: jnz     loc_5122B7
0x512377: mov     al, 1
0x512379: mov     ecx, [esp+124h+var_4]
0x512380: pop     edi
0x512381: pop     esi
0x512382: pop     ebp
0x512383: pop     ebx
0x512384: xor     ecx, esp
0x512386: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51238B: add     esp, 114h
0x512391: retn

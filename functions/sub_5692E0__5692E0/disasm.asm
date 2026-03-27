0x5692E0: sub     esp, 1Ch
0x5692E3: push    ebx
0x5692E4: push    ebp
0x5692E5: push    esi
0x5692E6: mov     esi, [esp+28h+arg_0]
0x5692EA: push    edi
0x5692EB: mov     edi, ecx
0x5692ED: mov     ecx, [esi+58h]
0x5692F0: mov     eax, [ecx]
0x5692F2: mov     edx, [eax+34h]
0x5692F5: mov     [esp+2Ch+var_14], edi
0x5692F9: call    edx
0x5692FB: mov     ecx, [esi+58h]
0x5692FE: mov     ebx, eax
0x569300: mov     eax, [ecx]
0x569302: mov     edx, [eax+38h]
0x569305: call    edx
0x569307: mov     ecx, [esi+58h]
0x56930A: mov     [esp+2Ch+var_1C], eax
0x56930E: mov     eax, [ecx]
0x569310: mov     edx, [eax+3Ch]
0x569313: call    edx
0x569315: fld     [esp+2Ch+arg_C]
0x569319: mov     ecx, offset TimeGlobals
0x56931E: fstp    [esp+2Ch+arg_C]
0x569322: call    TimeGlobals_GetGameDay
0x569327: movsx   eax, al
0x56932A: mov     ecx, offset TimeGlobals
0x56932F: mov     [esp+2Ch+var_8], eax
0x569333: call    TimeGlobals_GetGameMonth
0x569338: test    ebx, ebx
0x56933A: mov     [esp+2Ch+var_4], eax
0x56933E: jz      loc_5694B0
0x569344: jmp     short loc_56934E
0x569346: mov     edi, [esp+2Ch+var_14]
0x56934A: mov     esi, [esp+2Ch+arg_0]
0x56934E: mov     ecx, esi
0x569350: mov     [esp+2Ch+var_18], edi
0x569354: call    sub_5E0380
0x569359: cmp     dword ptr [edi+4], 0
0x56935D: mov     [esp+2Ch+var_C], eax
0x569361: jnz     short loc_569370
0x569363: cmp     dword ptr [edi], 0
0x569366: jz      loc_5694B0
0x56936C: lea     esp, [esp+0]
0x569370: mov     ecx, [esp+2Ch+var_18]
0x569374: mov     edi, [ecx]
0x569376: test    edi, edi
0x569378: jz      loc_569423
0x56937E: lea     esi, [edi+2Ch]
0x569381: test    esi, esi
0x569383: jz      loc_569410
0x569389: mov     al, [esi]
0x56938B: cmp     al, 0FFh
0x56938D: jz      short loc_569398
0x56938F: movsx   edx, al
0x569392: cmp     edx, [esp+2Ch+var_1C]
0x569396: jg      short loc_569410
0x569398: mov     al, [esi+2]
0x56939B: test    al, al
0x56939D: jz      short loc_5693A6
0x56939F: movsx   eax, al
0x5693A2: cmp     eax, ebx
0x5693A4: jg      short loc_569410
0x5693A6: mov     al, [esi+1]
0x5693A9: cmp     al, 0FFh
0x5693AB: jz      short loc_5693BE
0x5693AD: mov     ecx, offset TimeGlobals
0x5693B2: movsx   ebp, al
0x5693B5: call    TimeGlobals_GetGameDayOfWeek
0x5693BA: cmp     ebp, eax
0x5693BC: jg      short loc_569410
0x5693BE: mov     al, [esi+3]
0x5693C1: cmp     al, 0FFh
0x5693C3: jz      short loc_5693DD
0x5693C5: movsx   ecx, al
0x5693C8: mov     [esp+2Ch+var_10], ecx
0x5693CC: fild    [esp+2Ch+var_10]
0x5693D0: fld     [esp+2Ch+arg_C]
0x5693D4: fcompp
0x5693D6: fnstsw  ax
0x5693D8: test    ah, 41h
0x5693DB: jnz     short loc_569410
0x5693DD: cmp     edi, [esp+2Ch+var_C]
0x5693E1: jz      short loc_569410
0x5693E3: mov     esi, [esp+2Ch+arg_4]
0x5693E7: test    esi, esi
0x5693E9: mov     eax, esi
0x5693EB: jz      short loc_5693FB
0x5693ED: lea     ecx, [ecx+0]
0x5693F0: cmp     [eax], edi
0x5693F2: jz      short loc_569410
0x5693F4: mov     eax, [eax+4]
0x5693F7: test    eax, eax
0x5693F9: jnz     short loc_5693F0
0x5693FB: cmp     dword ptr [edi+18h], 0FFFFFFFFh
0x5693FF: jnz     short loc_569408
0x569401: mov     ecx, edi
0x569403: call    sub_5672A0
0x569408: push    edi
0x569409: mov     ecx, esi
0x56940B: call    BSSimpleList_PushBack
0x569410: mov     edx, [esp+2Ch+var_18]
0x569414: mov     eax, [edx+4]
0x569417: test    eax, eax
0x569419: mov     [esp+2Ch+var_18], eax
0x56941D: jnz     loc_569370
0x569423: fld     [esp+2Ch+arg_C]
0x569427: fadd    qword ptr ds:0A2F928h
0x56942D: fstp    [esp+2Ch+arg_C]
0x569431: fld     dword ptr ds:0A675E4h
0x569437: fcomp   [esp+2Ch+arg_C]
0x56943B: fnstsw  ax
0x56943D: test    ah, 5
0x569440: jp      short loc_56947A
0x569442: movsx   eax, byte ptr [esp+2Ch+var_1C]
0x569447: fldz
0x569449: push    eax
0x56944A: fstp    [esp+30h+arg_C]
0x56944E: add     ebx, 1
0x569451: call    sub_47D2B0
0x569456: movzx   eax, ax
0x569459: movzx   eax, ax
0x56945C: add     esp, 4
0x56945F: cmp     ebx, eax
0x569461: jle     short loc_56947A
0x569463: sub     ebx, eax
0x569465: mov     eax, [esp+2Ch+var_1C]
0x569469: add     eax, 1
0x56946C: cmp     eax, 0Ch
0x56946F: mov     [esp+2Ch+var_1C], eax
0x569473: jl      short loc_56947A
0x569475: sub     [esp+2Ch+var_1C], 0Ch
0x56947A: cmp     ebx, [esp+2Ch+var_8]
0x56947E: jnz     short loc_5694A8
0x569480: mov     ecx, [esp+2Ch+var_4]
0x569484: cmp     [esp+2Ch+var_1C], ecx
0x569488: jnz     short loc_5694A8
0x56948A: mov     ecx, offset TimeGlobals
0x56948F: call    TimeGlobals_GetGameHour
0x569494: call    Double_To_SInt32
0x569499: fld     [esp+2Ch+arg_C]
0x56949D: mov     esi, eax
0x56949F: call    Double_To_SInt32
0x5694A4: cmp     eax, esi
0x5694A6: jge     short loc_5694B0
0x5694A8: test    ebx, ebx
0x5694AA: jnz     loc_569346
0x5694B0: mov     eax, [esp+2Ch+arg_4]
0x5694B4: test    eax, eax
0x5694B6: mov     ebx, eax
0x5694B8: jz      short loc_56952B
0x5694BA: xor     ecx, ecx
0x5694BC: lea     esp, [esp+0]
0x5694C0: cmp     dword ptr [eax], 0
0x5694C3: jz      short loc_5694C8
0x5694C5: add     ecx, 1
0x5694C8: mov     eax, [eax+4]
0x5694CB: test    eax, eax
0x5694CD: jnz     short loc_5694C0
0x5694CF: test    ecx, ecx
0x5694D1: mov     [esp+2Ch+arg_4], ecx
0x5694D5: mov     al, 1
0x5694D7: jz      short loc_56952B
0x5694D9: jmp     short loc_5694E4
0x5694DB: jmp     short loc_5694E0
0x5694DD: align 10h
0x5694E0: mov     al, byte ptr [esp+2Ch+arg_0]
0x5694E4: test    al, al
0x5694E6: jz      short loc_56952B
0x5694E8: test    ebx, ebx
0x5694EA: mov     byte ptr [esp+2Ch+arg_0], 0
0x5694EF: mov     ebp, ebx
0x5694F1: jz      short loc_569521
0x5694F3: mov     esi, [ebp+0]
0x5694F6: mov     edi, [ebx]
0x5694F8: lea     edx, [esi+2Ch]
0x5694FB: push    edx
0x5694FC: mov     ecx, edi
0x5694FE: call    sub_567B80
0x569503: cmp     eax, 1
0x569506: jnz     short loc_56951A
0x569508: test    esi, esi
0x56950A: jz      short loc_56950E
0x56950C: mov     [ebx], esi
0x56950E: test    edi, edi
0x569510: jz      short loc_569515
0x569512: mov     [ebp+0], edi
0x569515: mov     byte ptr [esp+2Ch+arg_0], 1
0x56951A: mov     ebp, [ebp+4]
0x56951D: test    ebp, ebp
0x56951F: jnz     short loc_5694F3
0x569521: sub     [esp+2Ch+arg_4], 1
0x569526: mov     ebx, [ebx+4]
0x569529: jnz     short loc_5694E0
0x56952B: pop     edi
0x56952C: pop     esi
0x56952D: pop     ebp
0x56952E: pop     ebx
0x56952F: add     esp, 1Ch
0x569532: retn    10h

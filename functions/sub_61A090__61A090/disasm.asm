0x61A090: sub     esp, 174h
0x61A096: mov     eax, ds:0B30AACh
0x61A09B: xor     eax, esp
0x61A09D: mov     [esp+174h+var_4], eax
0x61A0A4: mov     eax, [esp+174h+arg_4]
0x61A0AB: mov     ecx, [esp+174h+arg_14]
0x61A0B2: mov     dl, byte ptr [esp+174h+arg_8]
0x61A0B9: test    dl, dl
0x61A0BB: push    ebx
0x61A0BC: push    ebp
0x61A0BD: mov     ebp, [esp+17Ch+arg_0]
0x61A0C4: mov     [esp+17Ch+var_15C], eax
0x61A0C8: mov     eax, [esp+17Ch+arg_10]
0x61A0CF: push    esi
0x61A0D0: mov     esi, [ecx]
0x61A0D2: mov     [esp+180h+var_158], eax
0x61A0D6: mov     eax, [eax]
0x61A0D8: push    edi
0x61A0D9: mov     [esp+184h+var_150], ebp
0x61A0DD: mov     [esp+184h+var_154], ecx
0x61A0E1: mov     [esp+184h+var_14C], eax
0x61A0E5: mov     [esp+184h+var_148], esi
0x61A0E9: jz      short loc_61A0F3
0x61A0EB: mov     ecx, ds:0B02E24h
0x61A0F1: jmp     short loc_61A0FE
0x61A0F3: mov     ecx, 500h
0x61A0F8: sub     ecx, ds:0B02E24h
0x61A0FE: mov     [esp+184h+var_16C], ecx
0x61A102: fild    [esp+184h+var_16C]
0x61A106: xor     ecx, ecx
0x61A108: test    dl, dl
0x61A10A: setz    cl
0x61A10D: test    dl, dl
0x61A10F: fstp    [esp+184h+var_170]
0x61A113: mov     ebx, eax
0x61A115: lea     ecx, [ecx+ecx+1]
0x61A119: mov     edi, ecx
0x61A11B: mov     [esp+184h+var_16C], edi
0x61A11F: jnz     short loc_61A123
0x61A121: mov     ebx, esi
0x61A123: mov     edx, [ebp+8]
0x61A126: shr     edx, 0Bh
0x61A129: test    dl, 1
0x61A12C: mov     [esp+184h+var_174], ebx
0x61A130: mov     [esp+184h+var_144], offset aNormal; "NORMAL"
0x61A138: mov     [esp+184h+var_140], offset aForward; "FORWARD"
0x61A140: mov     [esp+184h+var_13C], offset aBack; "BACK"
0x61A148: mov     [esp+184h+var_138], offset aLeft; "LEFT"
0x61A150: mov     [esp+184h+var_134], offset aRight; "RIGHT"
0x61A158: jz      short loc_61A193
0x61A15A: fild    [esp+184h+var_174]
0x61A15E: push    0FFFFFFFFh; int
0x61A160: push    edi; int
0x61A161: sub     esp, 8
0x61A164: fstp    [esp+194h+var_194+4]; float
0x61A168: fld     [esp+194h+var_170]
0x61A16C: fstp    [esp+194h+var_194]; float
0x61A16F: push    offset aDisabled_0; "DISABLED"
0x61A174: call    InterfaceMgr_DebugTextLine
0x61A179: add     esp, 14h
0x61A17C: add     ebx, [esp+184h+arg_C]
0x61A183: mov     [esp+184h+var_174], ebx
0x61A187: mov     ebx, [esp+184h+arg_8]
0x61A18E: jmp     loc_61A4B7
0x61A193: mov     eax, [ebp+0]
0x61A196: mov     edx, [eax+25Ch]
0x61A19C: mov     ecx, ebp
0x61A19E: call    edx
0x61A1A0: test    al, al
0x61A1A2: mov     esi, [esp+184h+arg_C]
0x61A1A9: jz      short loc_61A1D3
0x61A1AB: fild    [esp+184h+var_174]
0x61A1AF: push    0FFFFFFFFh; int
0x61A1B1: push    edi; int
0x61A1B2: sub     esp, 8
0x61A1B5: fstp    [esp+194h+var_194+4]; float
0x61A1B9: fld     [esp+194h+var_170]
0x61A1BD: fstp    [esp+194h+var_194]; float
0x61A1C0: push    offset aOverEncumbered; "OVER-ENCUMBERED"
0x61A1C5: call    InterfaceMgr_DebugTextLine
0x61A1CA: add     esp, 14h
0x61A1CD: add     ebx, esi
0x61A1CF: mov     [esp+184h+var_174], ebx
0x61A1D3: cmp     esi, 1Eh
0x61A1D6: mov     ecx, ebp
0x61A1D8: jl      loc_61A2DE
0x61A1DE: push    8
0x61A1E0: call    Actor_GetBaseCalcAVi
0x61A1E5: push    eax
0x61A1E6: mov     eax, [ebp+0]
0x61A1E9: mov     edx, [eax+288h]
0x61A1EF: push    8
0x61A1F1: mov     ecx, ebp
0x61A1F3: call    edx
0x61A1F5: sub     esp, 8
0x61A1F8: fstp    qword ptr [esp+188h+var_18C+4]
0x61A1FB: lea     eax, [esp+188h+var_128]
0x61A1FF: push    offset aHealth_2fD; "HEALTH:%.2f/%d"
0x61A204: push    eax
0x61A205: call    __sprintf
0x61A20A: fild    [esp+190h+var_16C]
0x61A20E: add     esp, 14h
0x61A211: push    0FFFFFFFFh; int
0x61A213: push    edi; int
0x61A214: sub     esp, 8
0x61A217: fstp    [esp+18Ch+var_18C+4]; float
0x61A21B: lea     ecx, [esp+18Ch+var_128]
0x61A21F: fld     [esp+18Ch+var_168]
0x61A223: fstp    [esp+18Ch+var_18C]; float
0x61A226: push    ecx; int
0x61A227: call    InterfaceMgr_DebugTextLine
0x61A22C: add     esp, 14h
0x61A22F: add     ebx, esi
0x61A231: push    0Ah
0x61A233: mov     ecx, ebp
0x61A235: mov     [esp+180h+var_16C], ebx
0x61A239: call    Actor_GetBaseCalcAVi
0x61A23E: mov     edx, [ebp+0]
0x61A241: push    eax
0x61A242: mov     eax, [edx+288h]
0x61A248: push    0Ah
0x61A24A: mov     ecx, ebp
0x61A24C: call    eax
0x61A24E: sub     esp, 8
0x61A251: fstp    qword ptr [esp+18Ch+var_18C]
0x61A254: lea     ecx, [esp+18Ch+var_12C]
0x61A258: push    offset aFatigue_2fD; "FATIGUE:%.2f/%d"
0x61A25D: push    ecx
0x61A25E: call    __sprintf
0x61A263: fild    [esp+194h+var_170]
0x61A267: add     esp, 14h
0x61A26A: push    0FFFFFFFFh; int
0x61A26C: push    edi; int
0x61A26D: sub     esp, 8
0x61A270: fstp    [esp+190h+var_18C]; float
0x61A274: lea     edx, [esp+190h+var_12C]
0x61A278: fld     [esp+190h+var_16C]
0x61A27C: fstp    [esp+190h+var_194+4]; float
0x61A27F: push    edx; int
0x61A280: call    InterfaceMgr_DebugTextLine
0x61A285: add     esp, 14h
0x61A288: add     ebx, esi
0x61A28A: push    9
0x61A28C: mov     ecx, ebp
0x61A28E: mov     [esp+184h+var_170], ebx
0x61A292: call    Actor_GetBaseCalcAVi
0x61A297: push    eax
0x61A298: mov     eax, [ebp+0]
0x61A29B: mov     edx, [eax+288h]
0x61A2A1: push    9
0x61A2A3: mov     ecx, ebp
0x61A2A5: call    edx
0x61A2A7: sub     esp, 8
0x61A2AA: fstp    qword ptr [esp+190h+var_194+4]
0x61A2AD: lea     eax, [esp+190h+var_130]
0x61A2B1: push    offset aMagicka_2fD; "MAGICKA:%.2f/%d"
0x61A2B6: push    eax
0x61A2B7: call    __sprintf
0x61A2BC: fild    [esp+198h+var_174]
0x61A2C0: add     esp, 14h
0x61A2C3: push    0FFFFFFFFh
0x61A2C5: push    edi
0x61A2C6: sub     esp, 8
0x61A2C9: fstp    [esp+194h+var_194+4]
0x61A2CD: lea     ecx, [esp+194h+var_130]
0x61A2D1: fld     [esp+194h+var_170]
0x61A2D5: fstp    [esp+194h+var_194]
0x61A2D8: push    ecx
0x61A2D9: jmp     loc_61A365
0x61A2DE: push    9
0x61A2E0: call    Actor_GetBaseCalcAVi
0x61A2E5: mov     edx, [ebp+0]
0x61A2E8: push    eax
0x61A2E9: mov     eax, [edx+288h]
0x61A2EF: push    9
0x61A2F1: mov     ecx, ebp
0x61A2F3: call    eax
0x61A2F5: sub     esp, 8
0x61A2F8: fstp    qword ptr [esp+188h+var_18C+4]
0x61A2FB: push    0Ah
0x61A2FD: mov     ecx, ebp
0x61A2FF: call    Actor_GetBaseCalcAVi
0x61A304: mov     edx, [ebp+0]
0x61A307: push    eax
0x61A308: mov     eax, [edx+288h]
0x61A30E: push    0Ah
0x61A310: mov     ecx, ebp
0x61A312: call    eax
0x61A314: sub     esp, 8
0x61A317: fstp    [esp+198h+var_19C+4]
0x61A31A: push    8
0x61A31C: mov     ecx, ebp
0x61A31E: call    Actor_GetBaseCalcAVi
0x61A323: mov     edx, [ebp+0]
0x61A326: push    eax
0x61A327: mov     eax, [edx+288h]
0x61A32D: push    8
0x61A32F: mov     ecx, ebp
0x61A331: call    eax
0x61A333: sub     esp, 8
0x61A336: fstp    [esp+1A8h+var_1AC+4]
0x61A339: lea     ecx, [esp+1A8h+var_130]
0x61A33D: push    offset aH_2fDF_2fDM_2f; "H:%.2f/%d F:%.2f/%d M:%.2f/%d"
0x61A342: push    ecx
0x61A343: call    __sprintf
0x61A348: fild    [esp+1B0h+var_174]
0x61A34C: add     esp, 2Ch
0x61A34F: push    0FFFFFFFFh; int
0x61A351: push    edi; int
0x61A352: sub     esp, 8
0x61A355: fstp    [esp+194h+var_194+4]; float
0x61A359: lea     edx, [esp+194h+var_130]
0x61A35D: fld     [esp+194h+var_170]
0x61A361: fstp    [esp+194h+var_194]; float
0x61A364: push    edx; int
0x61A365: call    InterfaceMgr_DebugTextLine
0x61A36A: add     ebx, esi
0x61A36C: add     esp, 14h
0x61A36F: cmp     [esp+184h+var_15C], 0
0x61A374: mov     [esp+184h+var_174], ebx
0x61A378: jz      short loc_61A3C7
0x61A37A: mov     ecx, [esp+184h+var_15C]
0x61A37E: mov     eax, [ebp+0]
0x61A381: mov     edx, [eax+224h]
0x61A387: push    ecx
0x61A388: mov     ecx, ebp
0x61A38A: call    edx
0x61A38C: push    eax
0x61A38D: lea     eax, [esp+188h+var_130]
0x61A391: push    offset aDispositionToO; "Disposition to Opponent: %d"
0x61A396: push    eax
0x61A397: call    __sprintf
0x61A39C: fild    [esp+190h+var_174]
0x61A3A0: add     esp, 0Ch
0x61A3A3: push    0FFFFFFFFh; int
0x61A3A5: push    edi; int
0x61A3A6: sub     esp, 8
0x61A3A9: fstp    [esp+194h+var_194+4]; float
0x61A3AD: lea     ecx, [esp+194h+var_130]
0x61A3B1: fld     [esp+194h+var_170]
0x61A3B5: fstp    [esp+194h+var_194]; float
0x61A3B8: push    ecx; int
0x61A3B9: call    InterfaceMgr_DebugTextLine
0x61A3BE: add     esp, 14h
0x61A3C1: add     ebx, esi
0x61A3C3: mov     [esp+184h+var_174], ebx
0x61A3C7: mov     edx, [ebp+0]
0x61A3CA: mov     eax, [edx+330h]
0x61A3D0: mov     ecx, ebp
0x61A3D2: call    eax
0x61A3D4: cmp     ebp, ds:0B333C4h
0x61A3DA: mov     edi, eax
0x61A3DC: jnz     loc_61A4EB
0x61A3E2: mov     ecx, [esp+184h+var_16C]
0x61A3E6: fild    [esp+184h+var_174]
0x61A3EA: push    0FFFFFFFFh; int
0x61A3EC: push    ecx; int
0x61A3ED: sub     esp, 8
0x61A3F0: fstp    [esp+194h+var_194+4]; float
0x61A3F4: fld     [esp+194h+var_170]
0x61A3F8: fstp    [esp+194h+var_194]; float
0x61A3FB: push    offset aTargetIsPlayer; "Target is PLAYER. No AI info."
0x61A400: call    InterfaceMgr_DebugTextLine
0x61A405: add     esp, 14h
0x61A408: add     ebx, esi
0x61A40A: mov     [esp+184h+var_174], ebx
0x61A40E: mov     ebx, [esp+184h+arg_8]
0x61A415: mov     ebp, [esp+184h+var_150]
0x61A419: mov     edx, [ebp+0]
0x61A41C: mov     eax, [edx+19Ch]
0x61A422: mov     ecx, ebp
0x61A424: call    eax
0x61A426: test    al, al
0x61A428: mov     edi, [esp+184h+var_16C]
0x61A42C: jz      short loc_61A454
0x61A42E: fild    [esp+184h+var_174]
0x61A432: push    0FFFFFFFFh; int
0x61A434: push    edi; int
0x61A435: sub     esp, 8
0x61A438: fstp    [esp+194h+var_194+4]; float
0x61A43C: fld     [esp+194h+var_170]
0x61A440: fstp    [esp+194h+var_194]; float
0x61A443: push    offset aKnockedDownOut; "KNOCKED DOWN/OUT"
0x61A448: call    InterfaceMgr_DebugTextLine
0x61A44D: add     esp, 14h
0x61A450: add     [esp+184h+var_174], esi
0x61A454: mov     ecx, ebp
0x61A456: call    Actor_GetCurrentAction
0x61A45B: cmp     eax, 7
0x61A45E: jnz     short loc_61A486
0x61A460: fild    [esp+184h+var_174]
0x61A464: push    0FFFFFFFFh; int
0x61A466: push    edi; int
0x61A467: sub     esp, 8
0x61A46A: fstp    [esp+194h+var_194+4]; float
0x61A46E: fld     [esp+194h+var_170]
0x61A472: fstp    [esp+194h+var_194]; float
0x61A475: push    offset aRecoiling; "RECOILING"
0x61A47A: call    InterfaceMgr_DebugTextLine
0x61A47F: add     esp, 14h
0x61A482: add     [esp+184h+var_174], esi
0x61A486: mov     ecx, ebp
0x61A488: call    sub_5E6FE0
0x61A48D: test    al, al
0x61A48F: jz      short loc_61A4B7
0x61A491: fild    [esp+184h+var_174]
0x61A495: push    0FFFFFFFFh; int
0x61A497: push    edi; int
0x61A498: sub     esp, 8
0x61A49B: fstp    [esp+194h+var_194+4]; float
0x61A49F: fld     [esp+194h+var_170]
0x61A4A3: fstp    [esp+194h+var_194]; float
0x61A4A6: push    offset aSurfacing; "SURFACING"
0x61A4AB: call    InterfaceMgr_DebugTextLine
0x61A4B0: add     esp, 14h
0x61A4B3: add     [esp+184h+var_174], esi
0x61A4B7: pop     edi
0x61A4B8: pop     esi
0x61A4B9: pop     ebp
0x61A4BA: test    bl, bl
0x61A4BC: pop     ebx
0x61A4BD: jz      loc_61B13F
0x61A4C3: mov     ecx, [esp+174h+var_158]
0x61A4C7: mov     edx, [esp+174h+var_174]
0x61A4CA: mov     eax, [esp+174h+var_148]
0x61A4CE: mov     [ecx], edx
0x61A4D0: mov     ecx, [esp+174h+var_154]
0x61A4D4: mov     [ecx], eax
0x61A4D6: mov     ecx, [esp+174h+var_4]
0x61A4DD: xor     ecx, esp
0x61A4DF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x61A4E4: add     esp, 174h
0x61A4EA: retn
0x61A4EB: test    edi, edi
0x61A4ED: jz      loc_61A40E
0x61A4F3: cmp     byte ptr [edi+1BDh], 0
0x61A4FA: jz      short loc_61A540
0x61A4FC: movsx   edx, byte ptr [edi+1ACh]
0x61A503: push    edx
0x61A504: lea     eax, [esp+188h+var_130]
0x61A508: push    offset aInitializingD; "INITIALIZING (%d)"
0x61A50D: push    eax
0x61A50E: call    __sprintf
0x61A513: mov     ecx, [esp+190h+var_16C]
0x61A517: fild    [esp+190h+var_174]
0x61A51B: add     esp, 0Ch
0x61A51E: push    0FFFFFFFFh; int
0x61A520: push    ecx; int
0x61A521: sub     esp, 8
0x61A524: lea     edx, [esp+194h+var_130]
0x61A528: fstp    [esp+194h+var_194+4]; float
0x61A52C: fld     [esp+194h+var_170]
0x61A530: fstp    [esp+194h+var_194]; float
0x61A533: push    edx; int
0x61A534: call    InterfaceMgr_DebugTextLine
0x61A539: add     esp, 14h
0x61A53C: add     [esp+184h+var_174], esi
0x61A540: cmp     [esp+184h+var_15C], 0
0x61A545: jz      short loc_61A5A2
0x61A547: fld     dword ptr [edi+0CCh]
0x61A54D: sub     esp, 8
0x61A550: fmul    qword ptr ds:0A30DC8h
0x61A556: mov     ecx, edi
0x61A558: fstp    qword ptr [esp+18Ch+var_18C]
0x61A55B: call    sub_615980
0x61A560: sub     esp, 8
0x61A563: fstp    qword ptr [esp+194h+var_194]
0x61A566: lea     eax, [esp+194h+var_130]
0x61A56A: push    offset aDistance_2fPos; "Distance: %.2f Position: %.2fdeg"
0x61A56F: push    eax
0x61A570: call    __sprintf
0x61A575: fild    [esp+19Ch+var_174]
0x61A579: mov     ecx, [esp+19Ch+var_16C]
0x61A57D: add     esp, 18h
0x61A580: push    0FFFFFFFFh; int
0x61A582: push    ecx; int
0x61A583: sub     esp, 8
0x61A586: fstp    [esp+194h+var_194+4]; float
0x61A58A: lea     edx, [esp+194h+var_130]
0x61A58E: fld     [esp+194h+var_170]
0x61A592: fstp    [esp+194h+var_194]; float
0x61A595: push    edx; int
0x61A596: call    InterfaceMgr_DebugTextLine
0x61A59B: add     esp, 14h
0x61A59E: add     [esp+184h+var_174], esi
0x61A5A2: mov     ebp, [edi+70h]
0x61A5A5: fldz
0x61A5A7: cmp     ebp, 2
0x61A5AA: jz      short loc_61A5B1
0x61A5AC: cmp     ebp, 4
0x61A5AF: jnz     short loc_61A5F0
0x61A5B1: lea     eax, [esp+184h+var_168]
0x61A5B5: fst     [esp+184h+var_164]
0x61A5B9: push    eax
0x61A5BA: fstp    [esp+188h+var_168]
0x61A5BE: lea     ecx, [esp+188h+var_164]
0x61A5C2: push    ecx
0x61A5C3: mov     ecx, edi
0x61A5C5: call    sub_6142D0
0x61A5CA: fld     [esp+184h+var_168]
0x61A5CE: sub     esp, 10h
0x61A5D1: fstp    qword ptr [esp+194h+var_18C]
0x61A5D5: lea     edx, [esp+194h+var_130]
0x61A5D9: fld     [esp+194h+var_164]
0x61A5DD: fstp    qword ptr [esp+194h+var_194]
0x61A5E0: push    offset aAttackRange_2f; "Attack Range: %.2f(optimal) %.2f(max)"
0x61A5E5: push    edx
0x61A5E6: call    __sprintf
0x61A5EB: add     esp, 18h
0x61A5EE: jmp     short loc_61A611
0x61A5F0: mov     ecx, edi
0x61A5F2: fstp    st
0x61A5F4: call    sub_615520
0x61A5F9: sub     esp, 8
0x61A5FC: fstp    qword ptr [esp+18Ch+var_18C]
0x61A5FF: lea     eax, [esp+18Ch+var_130]
0x61A603: push    offset aAttackReach_2f; "Attack Reach: %.2f"
0x61A608: push    eax
0x61A609: call    __sprintf
0x61A60E: add     esp, 10h
0x61A611: mov     ecx, [esp+184h+var_16C]
0x61A615: fild    [esp+184h+var_174]
0x61A619: push    0FFFFFFFFh; int
0x61A61B: push    ecx; int
0x61A61C: sub     esp, 8
0x61A61F: fstp    [esp+194h+var_194+4]; float
0x61A623: lea     edx, [esp+194h+var_130]
0x61A627: fld     [esp+194h+var_170]
0x61A62B: fstp    [esp+194h+var_194]; float
0x61A62E: push    edx; int
0x61A62F: call    InterfaceMgr_DebugTextLine
0x61A634: add     [esp+198h+var_174], esi
0x61A638: mov     eax, [edi+74h]
0x61A63B: mov     ebx, [edi+6Ch]
0x61A63E: add     esp, 14h
0x61A641: test    ebp, ebp
0x61A643: mov     [esp+184h+var_160], eax
0x61A647: jnz     short loc_61A653
0x61A649: mov     eax, offset aHandToHand; "HAND TO HAND"
0x61A64E: jmp     loc_61A6F8
0x61A653: cmp     ebp, 1
0x61A656: jnz     short loc_61A662
0x61A658: mov     eax, offset aMelee_weapon; "MELEE_WEAPON"
0x61A65D: jmp     loc_61A6F8
0x61A662: cmp     ebp, 2
0x61A665: jnz     short loc_61A671
0x61A667: mov     eax, offset aRanged_weapon; "RANGED_WEAPON"
0x61A66C: jmp     loc_61A6F8
0x61A671: cmp     ebp, 3
0x61A674: jnz     short loc_61A67D
0x61A676: mov     eax, offset aMelee_magic; "MELEE_MAGIC"
0x61A67B: jmp     short loc_61A6F8
0x61A67D: cmp     ebp, 4
0x61A680: jnz     short loc_61A689
0x61A682: mov     eax, offset aRanged_magic; "RANGED_MAGIC"
0x61A687: jmp     short loc_61A6F8
0x61A689: cmp     ebp, 5
0x61A68C: jnz     short loc_61A695
0x61A68E: mov     eax, offset aYield; "YIELD"
0x61A693: jmp     short loc_61A6F8
0x61A695: cmp     ebp, 6
0x61A698: jnz     short loc_61A6A1
0x61A69A: mov     eax, offset aPost_yield; "POST_YIELD"
0x61A69F: jmp     short loc_61A6F8
0x61A6A1: cmp     ebp, 7
0x61A6A4: jnz     short loc_61A6AD
0x61A6A6: mov     eax, offset aFlee; "FLEE"
0x61A6AB: jmp     short loc_61A6F8
0x61A6AD: cmp     ebp, 0Ch
0x61A6B0: jnz     short loc_61A6B9
0x61A6B2: mov     eax, offset aSwim_flee; "SWIM_FLEE"
0x61A6B7: jmp     short loc_61A6F8
0x61A6B9: cmp     ebp, 8
0x61A6BC: jnz     short loc_61A6C5
0x61A6BE: mov     eax, offset aBuff; "BUFF"
0x61A6C3: jmp     short loc_61A6F8
0x61A6C5: cmp     ebp, 9
0x61A6C8: jnz     short loc_61A6D1
0x61A6CA: mov     eax, offset aRestore; "RESTORE"
0x61A6CF: jmp     short loc_61A6F8
0x61A6D1: cmp     ebp, 0Ah
0x61A6D4: jnz     short loc_61A6DD
0x61A6D6: mov     eax, offset aSwitch; "SWITCH"
0x61A6DB: jmp     short loc_61A6F8
0x61A6DD: cmp     ebp, 0Bh
0x61A6E0: jnz     short loc_61A6E9
0x61A6E2: mov     eax, offset aCalmed; "CALMED"
0x61A6E7: jmp     short loc_61A6F8
0x61A6E9: cmp     ebp, 0Dh
0x61A6EC: mov     eax, offset aNone_0; "NONE"
0x61A6F1: jz      short loc_61A6F8
0x61A6F3: mov     eax, offset aUnknown; "UNKNOWN"
0x61A6F8: push    eax
0x61A6F9: lea     ecx, [esp+188h+var_130]
0x61A6FD: push    offset aStrategyS; "Strategy: %s"
0x61A702: push    ecx
0x61A703: call    __sprintf
0x61A708: fild    [esp+190h+var_174]
0x61A70C: mov     ebp, [esp+190h+var_16C]
0x61A710: add     esp, 0Ch
0x61A713: push    0FFFFFFFFh; int
0x61A715: push    ebp; int
0x61A716: sub     esp, 8
0x61A719: fstp    [esp+194h+var_194+4]; float
0x61A71D: lea     edx, [esp+194h+var_130]
0x61A721: fld     [esp+194h+var_170]
0x61A725: fstp    [esp+194h+var_194]; float
0x61A728: push    edx; int
0x61A729: call    InterfaceMgr_DebugTextLine
0x61A72E: mov     eax, [esp+198h+var_150]
0x61A732: mov     ecx, [eax+58h]
0x61A735: mov     edx, [ecx]
0x61A737: mov     eax, [edx+2C0h]
0x61A73D: add     [esp+198h+var_174], esi
0x61A741: add     esp, 14h
0x61A744: call    eax
0x61A746: push    63h ; 'c'
0x61A748: movzx   ecx, ax
0x61A74B: lea     edx, [esp+188h+var_67]
0x61A752: push    0
0x61A754: push    edx
0x61A755: mov     [esp+190h+var_164], ecx
0x61A759: mov     [esp+190h+var_68], 0
0x61A761: call    __memset
0x61A766: lea     eax, [ebx-1]; switch 16 cases
0x61A769: add     esp, 0Ch
0x61A76C: cmp     eax, 0Fh
0x61A76F: ja      def_61A77C; jumptable 0061A77C default case, cases 5-10,12,13,15
0x61A775: movzx   eax, ds:byte_61B180[eax]
0x61A77C: jmp     ds:jpt_61A77C[eax*4]; switch jump
0x61A783: mov     al, byte ptr [esp+184h+var_164]; jumptable 0061A77C case 2
0x61A787: test    al, 1
0x61A789: jz      short loc_61A792
0x61A78B: mov     eax, offset aForward_0; " FORWARD "
0x61A790: jmp     short loc_61A7B6
0x61A792: test    al, 2
0x61A794: jz      short loc_61A79D
0x61A796: mov     eax, offset aBackward; " BACKWARD "
0x61A79B: jmp     short loc_61A7B6
0x61A79D: test    al, 4
0x61A79F: jz      short loc_61A7A8
0x61A7A1: mov     eax, offset aLeft_0; " LEFT "
0x61A7A6: jmp     short loc_61A7B6
0x61A7A8: test    al, 8
0x61A7AA: mov     eax, offset aRight_0; " RIGHT "
0x61A7AF: jnz     short loc_61A7B6
0x61A7B1: mov     eax, offset EmptyString
0x61A7B6: fld     dword ptr [edi+0D8h]
0x61A7BC: sub     esp, 10h
0x61A7BF: fstp    qword ptr [esp+194h+var_18C]
0x61A7C3: lea     ecx, [esp+194h+var_68]
0x61A7CA: fld     dword ptr [edi+44h]
0x61A7CD: fsub    dword ptr [edi+0D4h]
0x61A7D3: fstp    [esp+194h+var_168]
0x61A7D7: fld     [esp+194h+var_168]
0x61A7DB: fstp    qword ptr [esp+194h+var_194]
0x61A7DE: push    eax
0x61A7DF: push    offset aS_2f_2f; "%s %.2f/%.2f"
0x61A7E4: push    ecx
0x61A7E5: call    __sprintf
0x61A7EA: add     esp, 1Ch
0x61A7ED: jmp     loc_61A8F1
0x61A7F2: fld     dword ptr [edi+0D8h]; jumptable 0061A77C cases 1,11
0x61A7F8: sub     esp, 10h
0x61A7FB: fstp    qword ptr [esp+194h+var_18C]
0x61A7FF: lea     edx, [esp+194h+var_68]
0x61A806: fld     dword ptr [edi+44h]
0x61A809: fsub    dword ptr [edi+0D4h]
0x61A80F: fstp    [esp+194h+var_168]
0x61A813: fld     [esp+194h+var_168]
0x61A817: fstp    qword ptr [esp+194h+var_194]
0x61A81A: push    offset a_2f_2f_0; "%.2f/%.2f"
0x61A81F: push    edx
0x61A820: call    __sprintf
0x61A825: add     esp, 18h
0x61A828: jmp     loc_61A8F1
0x61A82D: fld     dword ptr [edi+0FCh]; jumptable 0061A77C case 3
0x61A833: sub     esp, 10h
0x61A836: fstp    qword ptr [esp+194h+var_18C]
0x61A83A: lea     eax, [esp+194h+var_68]
0x61A841: fld     dword ptr [edi+44h]
0x61A844: fsub    dword ptr [edi+0F8h]
0x61A84A: fstp    [esp+194h+var_168]
0x61A84E: fld     [esp+194h+var_168]
0x61A852: fstp    qword ptr [esp+194h+var_194]
0x61A855: push    offset a_2f_2f_0; "%.2f/%.2f"
0x61A85A: push    eax
0x61A85B: call    __sprintf
0x61A860: add     esp, 18h
0x61A863: jmp     loc_61A8F1
0x61A868: fld     dword ptr [edi+44h]; jumptable 0061A77C case 4
0x61A86B: mov     ecx, [edi+28h]
0x61A86E: fsub    dword ptr [edi+0ECh]
0x61A874: mov     ebp, [edi+24h]
0x61A877: fstp    [esp+184h+var_168]
0x61A87B: call    sub_452A60
0x61A880: push    eax
0x61A881: mov     ecx, ebp
0x61A883: call    TESPackage_LocationData_GetRadius
0x61A888: fld     dword ptr [edi+0F0h]
0x61A88E: push    eax
0x61A88F: sub     esp, 10h
0x61A892: fstp    qword ptr [esp+19Ch+var_194]
0x61A896: lea     ecx, [esp+19Ch+var_68]
0x61A89D: fld     [esp+19Ch+var_168]
0x61A8A1: fstp    [esp+19Ch+var_19C]
0x61A8A4: push    offset a_2f_2fPkgRadiu; "%.2f/%.2f pkg radius/tgt val: %d/%d"
0x61A8A9: push    ecx
0x61A8AA: call    __sprintf
0x61A8AF: mov     ebp, [esp+1A4h+var_16C]
0x61A8B3: add     esp, 20h
0x61A8B6: jmp     short loc_61A8F1
0x61A8B8: mov     ecx, [edi+3Ch]; jumptable 0061A77C cases 14,16
0x61A8BB: call    sub_5E0F50
0x61A8C0: mov     edx, [eax]
0x61A8C2: mov     ecx, eax
0x61A8C4: mov     eax, [edx+154h]
0x61A8CA: call    eax
0x61A8CC: sub     esp, 8
0x61A8CF: fstp    qword ptr [esp+18Ch+var_18C]
0x61A8D2: lea     ecx, [esp+18Ch+var_68]
0x61A8D9: push    offset aRange_2f; "range %.2f"
0x61A8DE: push    ecx
0x61A8DF: call    __sprintf
0x61A8E4: add     esp, 10h
0x61A8E7: jmp     short loc_61A8F1
0x61A8E9: mov     [esp+184h+var_68], 0; jumptable 0061A77C default case, cases 5-10,12,13,15
0x61A8F1: test    ebx, ebx
0x61A8F3: jnz     short loc_61A8FF
0x61A8F5: mov     eax, offset aEngage; "ENGAGE"
0x61A8FA: jmp     loc_61A9D3
0x61A8FF: cmp     ebx, 0Ah
0x61A902: jnz     short loc_61A90E
0x61A904: mov     eax, offset aRanged_alert; "RANGED_ALERT"
0x61A909: jmp     loc_61A9D3
0x61A90E: cmp     ebx, 0Fh
0x61A911: jnz     short loc_61A91D
0x61A913: mov     eax, offset aMelee_alert; "MELEE_ALERT"
0x61A918: jmp     loc_61A9D3
0x61A91D: cmp     ebx, 0Bh
0x61A920: jnz     short loc_61A92C
0x61A922: mov     eax, offset aOn_station; "ON_STATION"
0x61A927: jmp     loc_61A9D3
0x61A92C: cmp     ebx, 0Ch
0x61A92F: jnz     short loc_61A93B
0x61A931: mov     eax, offset aReposition; "REPOSITION"
0x61A936: jmp     loc_61A9D3
0x61A93B: cmp     ebx, 1
0x61A93E: jnz     short loc_61A94A
0x61A940: mov     eax, offset aIdle; "IDLE"
0x61A945: jmp     loc_61A9D3
0x61A94A: cmp     ebx, 2
0x61A94D: jnz     short loc_61A956
0x61A94F: mov     eax, offset aDodge; "DODGE"
0x61A954: jmp     short loc_61A9D3
0x61A956: cmp     ebx, 3
0x61A959: jnz     short loc_61A970
0x61A95B: test    byte ptr [esp+184h+var_164], 1
0x61A960: jz      short loc_61A969
0x61A962: mov     eax, offset aCloseForward; "CLOSE FORWARD"
0x61A967: jmp     short loc_61A9D3
0x61A969: mov     eax, offset aCloseBackward; "CLOSE BACKWARD"
0x61A96E: jmp     short loc_61A9D3
0x61A970: cmp     ebx, 4
0x61A973: jnz     short loc_61A97C
0x61A975: mov     eax, offset aAdvance; "ADVANCE"
0x61A97A: jmp     short loc_61A9D3
0x61A97C: cmp     ebx, 5
0x61A97F: jnz     short loc_61A988
0x61A981: mov     eax, offset aWithdraw; "WITHDRAW"
0x61A986: jmp     short loc_61A9D3
0x61A988: cmp     ebx, 6
0x61A98B: jnz     short loc_61A994
0x61A98D: mov     eax, offset aTake_cover; "TAKE_COVER"
0x61A992: jmp     short loc_61A9D3
0x61A994: cmp     ebx, 7
0x61A997: jnz     short loc_61A9A0
0x61A999: mov     eax, offset aAcquire; "ACQUIRE"
0x61A99E: jmp     short loc_61A9D3
0x61A9A0: cmp     ebx, 0Eh
0x61A9A3: jnz     short loc_61A9AC
0x61A9A5: mov     eax, offset aStandoff; "STANDOFF"
0x61A9AA: jmp     short loc_61A9D3
0x61A9AC: cmp     ebx, 10h
0x61A9AF: jnz     short loc_61A9B8
0x61A9B1: mov     eax, offset aStandoffBackup; "STANDOFF (backup)"
0x61A9B6: jmp     short loc_61A9D3
0x61A9B8: cmp     ebx, 0Dh
0x61A9BB: jnz     short loc_61A9C4
0x61A9BD: mov     eax, offset aDisarmed; "DISARMED"
0x61A9C2: jmp     short loc_61A9D3
0x61A9C4: cmp     ebx, 8
0x61A9C7: mov     eax, offset aRun_away; "RUN_AWAY"
0x61A9CC: jz      short loc_61A9D3
0x61A9CE: mov     eax, offset aUnknown; "UNKNOWN"
0x61A9D3: lea     edx, [esp+184h+var_68]
0x61A9DA: push    edx
0x61A9DB: push    eax
0x61A9DC: lea     eax, [esp+18Ch+var_130]
0x61A9E0: push    offset aManeuverSS; "Maneuver: %s %s"
0x61A9E5: push    eax
0x61A9E6: call    __sprintf
0x61A9EB: fild    [esp+194h+var_174]
0x61A9EF: add     esp, 10h
0x61A9F2: push    0FFFFFFFFh; int
0x61A9F4: push    ebp; int
0x61A9F5: sub     esp, 8
0x61A9F8: fstp    [esp+194h+var_194+4]; float
0x61A9FC: lea     ecx, [esp+194h+var_130]
0x61AA00: fld     [esp+194h+var_170]
0x61AA04: fstp    [esp+194h+var_194]; float
0x61AA07: push    ecx; int
0x61AA08: call    InterfaceMgr_DebugTextLine
0x61AA0D: add     [esp+198h+var_174], esi
0x61AA11: add     esp, 14h
0x61AA14: cmp     byte ptr [edi+17Dh], 0
0x61AA1B: jz      short loc_61AA43
0x61AA1D: fild    [esp+184h+var_174]
0x61AA21: push    0FFFFFFFFh; int
0x61AA23: push    ebp; int
0x61AA24: sub     esp, 8
0x61AA27: fstp    [esp+194h+var_194+4]; float
0x61AA2B: fld     [esp+194h+var_170]
0x61AA2F: fstp    [esp+194h+var_194]; float
0x61AA32: push    offset aPlayingTurning; "Playing turning animation"
0x61AA37: call    InterfaceMgr_DebugTextLine
0x61AA3C: add     esp, 14h
0x61AA3F: add     [esp+184h+var_174], esi
0x61AA43: mov     ecx, [esp+184h+var_160]
0x61AA47: mov     eax, ecx
0x61AA49: sub     eax, 0
0x61AA4C: jz      short loc_61AAAD
0x61AA4E: sub     eax, 2
0x61AA51: jz      short loc_61AA6D
0x61AA53: test    ecx, ecx
0x61AA55: mov     [esp+184h+var_68], 0
0x61AA5D: jnz     loc_61AB25
0x61AA63: mov     eax, offset aAttack; "ATTACK"
0x61AA68: jmp     loc_61AB4C
0x61AA6D: fld     dword ptr [edi+0E4h]
0x61AA73: sub     esp, 10h
0x61AA76: fstp    qword ptr [esp+194h+var_18C]
0x61AA7A: lea     edx, [esp+194h+var_68]
0x61AA81: fld     dword ptr [edi+44h]
0x61AA84: fsub    dword ptr [edi+0E0h]
0x61AA8A: fstp    [esp+194h+var_160]
0x61AA8E: fld     [esp+194h+var_160]
0x61AA92: fstp    qword ptr [esp+194h+var_194]
0x61AA95: push    offset a_2f_2f_0; "%.2f/%.2f"
0x61AA9A: push    edx
0x61AA9B: call    __sprintf
0x61AAA0: add     esp, 18h
0x61AAA3: mov     eax, offset aHold; "HOLD"
0x61AAA8: jmp     loc_61AB4C
0x61AAAD: mov     eax, [edi+50h]
0x61AAB0: cmp     eax, 14h
0x61AAB3: jnz     short loc_61AABC
0x61AAB5: mov     eax, offset aLeft; "LEFT"
0x61AABA: jmp     short loc_61AB07
0x61AABC: cmp     eax, 15h
0x61AABF: jnz     short loc_61AAC8
0x61AAC1: mov     eax, offset aRight; "RIGHT"
0x61AAC6: jmp     short loc_61AB07
0x61AAC8: cmp     eax, 16h
0x61AACB: jnz     short loc_61AAD4
0x61AACD: mov     eax, offset aNormalPower; "NORMAL POWER"
0x61AAD2: jmp     short loc_61AB07
0x61AAD4: cmp     eax, 17h
0x61AAD7: jnz     short loc_61AAE0
0x61AAD9: mov     eax, offset aForwardPower; "FORWARD POWER"
0x61AADE: jmp     short loc_61AB07
0x61AAE0: cmp     eax, 18h
0x61AAE3: jnz     short loc_61AAEC
0x61AAE5: mov     eax, offset aBackPower; "BACK POWER"
0x61AAEA: jmp     short loc_61AB07
0x61AAEC: cmp     eax, 19h
0x61AAEF: jnz     short loc_61AAF8
0x61AAF1: mov     eax, offset aLeftPower; "LEFT POWER"
0x61AAF6: jmp     short loc_61AB07
0x61AAF8: cmp     eax, 1Ah
0x61AAFB: mov     eax, offset aRightPower; "RIGHT POWER"
0x61AB00: jz      short loc_61AB07
0x61AB02: mov     eax, offset EmptyString
0x61AB07: lea     edx, [esp+184h+var_68]
0x61AB0E: mov     edi, edi
0x61AB10: mov     cl, [eax]
0x61AB12: mov     [edx], cl
0x61AB14: add     eax, 1
0x61AB17: add     edx, 1
0x61AB1A: test    cl, cl
0x61AB1C: jnz     short loc_61AB10
0x61AB1E: mov     eax, offset aAttack; "ATTACK"
0x61AB23: jmp     short loc_61AB4C
0x61AB25: cmp     ecx, 1
0x61AB28: jnz     short loc_61AB31
0x61AB2A: mov     eax, offset aBlock; "BLOCK"
0x61AB2F: jmp     short loc_61AB4C
0x61AB31: cmp     ecx, 2
0x61AB34: jnz     short loc_61AB3D
0x61AB36: mov     eax, offset aHold; "HOLD"
0x61AB3B: jmp     short loc_61AB4C
0x61AB3D: cmp     ecx, 3
0x61AB40: mov     eax, offset aDone; "DONE"
0x61AB45: jz      short loc_61AB4C
0x61AB47: mov     eax, offset aUnknown; "UNKNOWN"
0x61AB4C: lea     ecx, [esp+184h+var_68]
0x61AB53: push    ecx
0x61AB54: push    eax
0x61AB55: lea     edx, [esp+18Ch+var_130]
0x61AB59: push    offset aMeleeSS; "Melee: %s %s"
0x61AB5E: push    edx
0x61AB5F: call    __sprintf
0x61AB64: fild    [esp+194h+var_174]
0x61AB68: mov     ebx, [esp+194h+var_16C]
0x61AB6C: add     esp, 10h
0x61AB6F: push    0FFFFFFFFh; int
0x61AB71: push    ebx; int
0x61AB72: sub     esp, 8
0x61AB75: fstp    [esp+194h+var_194+4]; float
0x61AB79: lea     eax, [esp+194h+var_130]
0x61AB7D: fld     [esp+194h+var_170]
0x61AB81: fstp    [esp+194h+var_194]; float
0x61AB84: push    eax; int
0x61AB85: call    InterfaceMgr_DebugTextLine
0x61AB8A: add     [esp+198h+var_174], esi
0x61AB8E: fild    [esp+198h+var_174]
0x61AB92: add     esp, 14h
0x61AB95: push    0FFFFFFFFh; int
0x61AB97: push    ebx; int
0x61AB98: sub     esp, 8
0x61AB9B: fstp    [esp+194h+var_194+4]; float
0x61AB9F: fld     [esp+194h+var_170]
0x61ABA3: fstp    [esp+194h+var_194]; float
0x61ABA6: push    offset aSelectedSpells; "Selected Spells"
0x61ABAB: call    InterfaceMgr_DebugTextLine
0x61ABB0: mov     ebx, [esp+198h+arg_8]
0x61ABB7: mov     edx, [edi+80h]
0x61ABBD: add     [esp+198h+var_174], esi
0x61ABC1: lea     ecx, [esp+198h+var_174]
0x61ABC5: push    ecx
0x61ABC6: push    esi
0x61ABC7: push    ebx
0x61ABC8: push    offset aRanged; "Ranged"
0x61ABCD: push    edx
0x61ABCE: call    sub_616840
0x61ABD3: mov     ecx, [edi+7Ch]
0x61ABD6: lea     eax, [esp+1ACh+var_174]
0x61ABDA: push    eax
0x61ABDB: push    esi
0x61ABDC: push    ebx
0x61ABDD: push    offset aMelee; "Melee"
0x61ABE2: push    ecx
0x61ABE3: call    sub_616840
0x61ABE8: mov     eax, [edi+84h]
0x61ABEE: lea     edx, [esp+1C0h+var_174]
0x61ABF2: push    edx
0x61ABF3: push    esi
0x61ABF4: push    ebx
0x61ABF5: push    offset aRestoration; "Restoration"
0x61ABFA: push    eax
0x61ABFB: call    sub_616840
0x61AC00: mov     edx, [edi+94h]
0x61AC06: add     esp, 50h
0x61AC09: lea     ecx, [esp+184h+var_174]
0x61AC0D: push    ecx
0x61AC0E: push    esi
0x61AC0F: push    ebx
0x61AC10: push    offset aBoundArmor; "Bound Armor"
0x61AC15: push    edx
0x61AC16: call    sub_616840
0x61AC1B: mov     ecx, [edi+98h]
0x61AC21: lea     eax, [esp+198h+var_174]
0x61AC25: push    eax
0x61AC26: push    esi
0x61AC27: push    ebx
0x61AC28: push    offset aBoundWeapon; "Bound Weapon"
0x61AC2D: push    ecx
0x61AC2E: call    sub_616840
0x61AC33: mov     eax, [edi+90h]
0x61AC39: lea     edx, [esp+1ACh+var_174]
0x61AC3D: push    edx
0x61AC3E: push    esi
0x61AC3F: push    ebx
0x61AC40: push    offset aBuff_0; "Buff"
0x61AC45: push    eax
0x61AC46: call    sub_616840
0x61AC4B: mov     edx, [edi+9Ch]
0x61AC51: lea     ecx, [esp+1C0h+var_174]
0x61AC55: push    ecx
0x61AC56: push    esi
0x61AC57: push    ebx
0x61AC58: push    offset aSummoning; "Summoning"
0x61AC5D: push    edx
0x61AC5E: call    sub_616840
0x61AC63: fild    [esp+1D4h+var_174]
0x61AC67: mov     eax, [esp+1D4h+var_16C]
0x61AC6B: mov     ebp, [edi+5Ch]
0x61AC6E: add     esp, 50h
0x61AC71: push    0FFFFFFFFh; int
0x61AC73: push    eax; int
0x61AC74: sub     esp, 8
0x61AC77: fstp    [esp+194h+var_194+4]; float
0x61AC7B: fld     [esp+194h+var_170]
0x61AC7F: fstp    [esp+194h+var_194]; float
0x61AC82: push    offset aAvailableSpell; "Available Spells"
0x61AC87: call    InterfaceMgr_DebugTextLine
0x61AC8C: add     [esp+198h+var_174], esi
0x61AC90: add     esp, 14h
0x61AC93: test    ebp, ebp
0x61AC95: jz      short loc_61ACC2
0x61AC97: cmp     dword ptr [ebp+4], 0
0x61AC9B: jnz     short loc_61ACA3
0x61AC9D: cmp     dword ptr [ebp+0], 0
0x61ACA1: jz      short loc_61ACC2
0x61ACA3: mov     edx, [ebp+0]
0x61ACA6: lea     ecx, [esp+184h+var_174]
0x61ACAA: push    ecx
0x61ACAB: push    esi
0x61ACAC: push    ebx
0x61ACAD: push    offset aRanged; "Ranged"
0x61ACB2: push    edx
0x61ACB3: call    sub_616840
0x61ACB8: mov     ebp, [ebp+4]
0x61ACBB: add     esp, 14h
0x61ACBE: test    ebp, ebp
0x61ACC0: jnz     short loc_61AC97
0x61ACC2: mov     ebp, [edi+60h]
0x61ACC5: test    ebp, ebp
0x61ACC7: jz      short loc_61ACFB
0x61ACC9: lea     esp, [esp+0]
0x61ACD0: cmp     dword ptr [ebp+4], 0
0x61ACD4: jnz     short loc_61ACDC
0x61ACD6: cmp     dword ptr [ebp+0], 0
0x61ACDA: jz      short loc_61ACFB
0x61ACDC: mov     ecx, [ebp+0]
0x61ACDF: lea     eax, [esp+184h+var_174]
0x61ACE3: push    eax
0x61ACE4: push    esi
0x61ACE5: push    ebx
0x61ACE6: push    offset aMelee; "Melee"
0x61ACEB: push    ecx
0x61ACEC: call    sub_616840
0x61ACF1: mov     ebp, [ebp+4]
0x61ACF4: add     esp, 14h
0x61ACF7: test    ebp, ebp
0x61ACF9: jnz     short loc_61ACD0
0x61ACFB: mov     ebp, [edi+64h]
0x61ACFE: test    ebp, ebp
0x61AD00: jz      short loc_61AD2D
0x61AD02: cmp     dword ptr [ebp+4], 0
0x61AD06: jnz     short loc_61AD0E
0x61AD08: cmp     dword ptr [ebp+0], 0
0x61AD0C: jz      short loc_61AD2D
0x61AD0E: mov     eax, [ebp+0]
0x61AD11: lea     edx, [esp+184h+var_174]
0x61AD15: push    edx
0x61AD16: push    esi
0x61AD17: push    ebx
0x61AD18: push    offset aRestore_0; "Restore"
0x61AD1D: push    eax
0x61AD1E: call    sub_616840
0x61AD23: mov     ebp, [ebp+4]
0x61AD26: add     esp, 14h
0x61AD29: test    ebp, ebp
0x61AD2B: jnz     short loc_61AD02
0x61AD2D: mov     ebp, [edi+68h]
0x61AD30: test    ebp, ebp
0x61AD32: jz      short loc_61AD5F
0x61AD34: cmp     dword ptr [ebp+4], 0
0x61AD38: jnz     short loc_61AD40
0x61AD3A: cmp     dword ptr [ebp+0], 0
0x61AD3E: jz      short loc_61AD5F
0x61AD40: mov     edx, [ebp+0]
0x61AD43: lea     ecx, [esp+184h+var_174]
0x61AD47: push    ecx
0x61AD48: push    esi
0x61AD49: push    ebx
0x61AD4A: push    offset aBackupBuffs; "Backup Buffs"
0x61AD4F: push    edx
0x61AD50: call    sub_616840
0x61AD55: mov     ebp, [ebp+4]
0x61AD58: add     esp, 14h
0x61AD5B: test    ebp, ebp
0x61AD5D: jnz     short loc_61AD34
0x61AD5F: cmp     byte ptr [edi+0C4h], 0
0x61AD66: jz      short loc_61ADD6
0x61AD68: xor     ebp, ebp
0x61AD6A: lea     ebx, [edi+0B0h]
0x61AD70: fldz
0x61AD72: fcomp   dword ptr [ebx]
0x61AD74: fnstsw  ax
0x61AD76: test    ah, 5
0x61AD79: jp      short loc_61ADC4
0x61AD7B: fld     dword ptr [ebx]
0x61AD7D: mov     eax, [esp+ebp*4+184h+var_144]
0x61AD81: sub     esp, 8
0x61AD84: fstp    qword ptr [esp+18Ch+var_18C]
0x61AD87: push    eax
0x61AD88: lea     ecx, [esp+190h+var_130]
0x61AD8C: push    offset aSPowerAttackRa; "%s Power Attack Range: %.2f"
0x61AD91: push    ecx
0x61AD92: call    __sprintf
0x61AD97: fild    [esp+198h+var_174]
0x61AD9B: mov     edx, [esp+198h+var_16C]
0x61AD9F: add     esp, 14h
0x61ADA2: push    0FFFFFFFFh; int
0x61ADA4: push    edx; int
0x61ADA5: sub     esp, 8
0x61ADA8: fstp    [esp+194h+var_194+4]; float
0x61ADAC: lea     eax, [esp+194h+var_130]
0x61ADB0: fld     [esp+194h+var_170]
0x61ADB4: fstp    [esp+194h+var_194]; float
0x61ADB7: push    eax; int
0x61ADB8: call    InterfaceMgr_DebugTextLine
0x61ADBD: add     esp, 14h
0x61ADC0: add     [esp+184h+var_174], esi
0x61ADC4: add     ebp, 1
0x61ADC7: add     ebx, 4
0x61ADCA: cmp     ebp, 5
0x61ADCD: jl      short loc_61AD70
0x61ADCF: mov     ebx, [esp+184h+arg_8]
0x61ADD6: cmp     [esp+184h+var_15C], 0
0x61ADDB: jz      loc_61AF4D
0x61ADE1: cmp     byte ptr [edi+158h], 0
0x61ADE8: mov     eax, offset aCanSeeMainTarg; "Can see main target"
0x61ADED: jnz     short loc_61ADF4
0x61ADEF: mov     eax, offset aCannotSeeMainT; "Cannot see main target"
0x61ADF4: mov     ebp, [esp+184h+var_16C]
0x61ADF8: fild    [esp+184h+var_174]
0x61ADFC: push    0FFFFFFFFh; int
0x61ADFE: push    ebp; int
0x61ADFF: sub     esp, 8
0x61AE02: fstp    [esp+194h+var_194+4]; float
0x61AE06: fld     [esp+194h+var_170]
0x61AE0A: fstp    [esp+194h+var_194]; float
0x61AE0D: push    eax; int
0x61AE0E: call    InterfaceMgr_DebugTextLine
0x61AE13: add     [esp+198h+var_174], esi
0x61AE17: add     esp, 14h
0x61AE1A: cmp     byte ptr [edi+158h], 0
0x61AE21: jz      short loc_61AE8F
0x61AE23: mov     eax, [edi+180h]
0x61AE29: sub     eax, 0
0x61AE2C: jz      short loc_61AE57
0x61AE2E: sub     eax, 1
0x61AE31: jz      short loc_61AE4B
0x61AE33: sub     eax, 1
0x61AE36: jz      short loc_61AE3F
0x61AE38: push    offset aNoSegmentInVie; "\tNo Segment in view"
0x61AE3D: jmp     short loc_61AE5C
0x61AE3F: push    offset aTopSegmentInVi; "\tTop Segment in view"
0x61AE44: lea     edx, [esp+188h+var_130]
0x61AE48: push    edx
0x61AE49: jmp     short loc_61AE61
0x61AE4B: push    offset aMiddleSegmentI; "\tMiddle Segment in view"
0x61AE50: lea     eax, [esp+188h+var_130]
0x61AE54: push    eax
0x61AE55: jmp     short loc_61AE61
0x61AE57: push    offset aBottomSegmentI; "\tBottom Segment in view"
0x61AE5C: lea     ecx, [esp+188h+var_130]
0x61AE60: push    ecx
0x61AE61: call    __sprintf
0x61AE66: fild    [esp+18Ch+var_174]
0x61AE6A: add     esp, 8
0x61AE6D: push    0FFFFFFFFh; int
0x61AE6F: push    ebp; int
0x61AE70: sub     esp, 8
0x61AE73: fstp    [esp+194h+var_194+4]; float
0x61AE77: lea     edx, [esp+194h+var_130]
0x61AE7B: fld     [esp+194h+var_170]
0x61AE7F: fstp    [esp+194h+var_194]; float
0x61AE82: push    edx; int
0x61AE83: call    InterfaceMgr_DebugTextLine
0x61AE88: add     esp, 14h
0x61AE8B: add     [esp+184h+var_174], esi
0x61AE8F: cmp     byte ptr [edi+159h], 0
0x61AE96: jz      short loc_61AEBE
0x61AE98: fild    [esp+184h+var_174]
0x61AE9C: push    0FFFFFFFFh; int
0x61AE9E: push    ebp; int
0x61AE9F: sub     esp, 8
0x61AEA2: fstp    [esp+194h+var_194+4]; float
0x61AEA6: fld     [esp+194h+var_170]
0x61AEAA: fstp    [esp+194h+var_194]; float
0x61AEAD: push    offset aAnAllyBlocksTh; "An ally blocks the main target"
0x61AEB2: call    InterfaceMgr_DebugTextLine
0x61AEB7: add     esp, 14h
0x61AEBA: add     [esp+184h+var_174], esi
0x61AEBE: cmp     byte ptr [edi+15Bh], 0
0x61AEC5: jz      short loc_61AEED
0x61AEC7: fild    [esp+184h+var_174]
0x61AECB: push    0FFFFFFFFh; int
0x61AECD: push    ebp; int
0x61AECE: sub     esp, 8
0x61AED1: fstp    [esp+194h+var_194+4]; float
0x61AED5: fld     [esp+194h+var_170]
0x61AED9: fstp    [esp+194h+var_194]; float
0x61AEDC: push    offset aTheLastArrowHi; "The last arrow hit an obstruction on th"...
0x61AEE1: call    InterfaceMgr_DebugTextLine
0x61AEE6: add     esp, 14h
0x61AEE9: add     [esp+184h+var_174], esi
0x61AEED: mov     ecx, edi
0x61AEEF: call    sub_614290
0x61AEF4: test    al, al
0x61AEF6: jnz     short loc_61AF1E
0x61AEF8: fild    [esp+184h+var_174]
0x61AEFC: push    0FFFFFFFFh; int
0x61AEFE: push    ebp; int
0x61AEFF: sub     esp, 8
0x61AF02: fstp    [esp+194h+var_194+4]; float
0x61AF06: fld     [esp+194h+var_170]
0x61AF0A: fstp    [esp+194h+var_194]; float
0x61AF0D: push    offset aCannotPathToTa; "Cannot path to target"
0x61AF12: call    InterfaceMgr_DebugTextLine
0x61AF17: add     esp, 14h
0x61AF1A: add     [esp+184h+var_174], esi
0x61AF1E: cmp     byte ptr [edi+17Ch], 0
0x61AF25: jz      short loc_61AF4D
0x61AF27: fild    [esp+184h+var_174]
0x61AF2B: push    0FFFFFFFFh; int
0x61AF2D: push    ebp; int
0x61AF2E: sub     esp, 8
0x61AF31: fstp    [esp+194h+var_194+4]; float
0x61AF35: fld     [esp+194h+var_170]
0x61AF39: fstp    [esp+194h+var_194]; float
0x61AF3C: push    offset aDonTUseAreaSpe; "Don't use area spells, allies too close"
0x61AF41: call    InterfaceMgr_DebugTextLine
0x61AF46: add     esp, 14h
0x61AF49: add     [esp+184h+var_174], esi
0x61AF4D: cmp     byte ptr [edi+15Ah], 0
0x61AF54: jz      short loc_61AFB5
0x61AF56: fld     dword ptr [edi+168h]
0x61AF5C: sub     esp, 10h
0x61AF5F: fstp    qword ptr [esp+194h+var_18C]
0x61AF63: lea     eax, [esp+194h+var_130]
0x61AF67: fld     dword ptr [edi+44h]
0x61AF6A: fsub    dword ptr [edi+164h]
0x61AF70: fstp    [esp+194h+var_160]
0x61AF74: fld     [esp+194h+var_160]
0x61AF78: fstp    qword ptr [esp+194h+var_194]
0x61AF7B: push    offset aInTheWay_2f_2f; "In the way: %.2f/%.2f"
0x61AF80: push    eax
0x61AF81: call    __sprintf
0x61AF86: fild    [esp+19Ch+var_174]
0x61AF8A: mov     ebp, [esp+19Ch+var_16C]
0x61AF8E: add     esp, 18h
0x61AF91: push    0FFFFFFFFh; int
0x61AF93: push    ebp; int
0x61AF94: sub     esp, 8
0x61AF97: fstp    [esp+194h+var_194+4]; float
0x61AF9B: lea     ecx, [esp+194h+var_130]
0x61AF9F: fld     [esp+194h+var_170]
0x61AFA3: fstp    [esp+194h+var_194]; float
0x61AFA6: push    ecx; int
0x61AFA7: call    InterfaceMgr_DebugTextLine
0x61AFAC: add     esp, 14h
0x61AFAF: add     [esp+184h+var_174], esi
0x61AFB3: jmp     short loc_61AFB9
0x61AFB5: mov     ebp, [esp+184h+var_16C]
0x61AFB9: movzx   ecx, word ptr [edi+192h]
0x61AFC0: test    cx, cx
0x61AFC3: jz      loc_61B08A
0x61AFC9: mov     eax, [edi+6Ch]
0x61AFCC: cmp     eax, 4
0x61AFCF: jz      loc_61B08A
0x61AFD5: cmp     eax, 7
0x61AFD8: jz      loc_61B08A
0x61AFDE: cmp     eax, 9
0x61AFE1: jz      loc_61B08A
0x61AFE7: cmp     eax, 8
0x61AFEA: jz      loc_61B08A
0x61AFF0: movzx   eax, cx
0x61AFF3: mov     edx, eax
0x61AFF5: shr     edx, 1
0x61AFF7: not     dl
0x61AFF9: test    dl, 1
0x61AFFC: mov     edx, offset aY_0; "Y"
0x61B001: jnz     short loc_61B008
0x61B003: mov     edx, offset aN; "N"
0x61B008: mov     cl, al
0x61B00A: not     cl
0x61B00C: test    cl, 1
0x61B00F: mov     [esp+184h+var_164], offset aY_0; "Y"
0x61B017: jnz     short loc_61B021
0x61B019: mov     [esp+184h+var_164], offset aN; "N"
0x61B021: mov     ecx, eax
0x61B023: shr     ecx, 3
0x61B026: not     cl
0x61B028: test    cl, 1
0x61B02B: mov     ecx, offset aY_0; "Y"
0x61B030: jnz     short loc_61B037
0x61B032: mov     ecx, offset aN; "N"
0x61B037: shr     eax, 2
0x61B03A: not     al
0x61B03C: test    al, 1
0x61B03E: mov     eax, offset aY_0; "Y"
0x61B043: jnz     short loc_61B04A
0x61B045: mov     eax, offset aN; "N"
0x61B04A: push    edx
0x61B04B: mov     edx, [esp+188h+var_164]
0x61B04F: push    edx
0x61B050: push    ecx
0x61B051: push    eax
0x61B052: lea     eax, [esp+194h+var_130]
0x61B056: push    offset aMovementRestri; "Movement Restrictions: L:%s R:%s F:%s B"...
0x61B05B: push    eax
0x61B05C: call    __sprintf
0x61B061: fild    [esp+19Ch+var_174]
0x61B065: add     esp, 18h
0x61B068: push    0FFFFFFFFh; int
0x61B06A: push    ebp; int
0x61B06B: sub     esp, 8
0x61B06E: fstp    [esp+194h+var_194+4]; float
0x61B072: lea     ecx, [esp+194h+var_130]
0x61B076: fld     [esp+194h+var_170]
0x61B07A: fstp    [esp+194h+var_194]; float
0x61B07D: push    ecx; int
0x61B07E: call    InterfaceMgr_DebugTextLine
0x61B083: add     esp, 14h
0x61B086: add     [esp+184h+var_174], esi
0x61B08A: cmp     byte ptr [edi+191h], 0
0x61B091: jz      short loc_61B0B9
0x61B093: fild    [esp+184h+var_174]
0x61B097: push    0FFFFFFFFh; int
0x61B099: push    ebp; int
0x61B09A: sub     esp, 8
0x61B09D: fstp    [esp+194h+var_194+4]; float
0x61B0A1: fld     [esp+194h+var_170]
0x61B0A5: fstp    [esp+194h+var_194]; float
0x61B0A8: push    offset aResetMovementR; "Reset Movement restrictions"
0x61B0AD: call    InterfaceMgr_DebugTextLine
0x61B0B2: add     esp, 14h
0x61B0B5: add     [esp+184h+var_174], esi
0x61B0B9: mov     eax, [edi+1A8h]
0x61B0BF: test    eax, eax
0x61B0C1: mov     ecx, offset aUndetected; "UNDETECTED"
0x61B0C6: jle     short loc_61B0CD
0x61B0C8: mov     ecx, offset EmptyString
0x61B0CD: push    ecx
0x61B0CE: push    eax
0x61B0CF: lea     edx, [esp+18Ch+var_130]
0x61B0D3: push    offset aDetectionLevel; "Detection level on current target: %d ("...
0x61B0D8: push    edx
0x61B0D9: call    __sprintf
0x61B0DE: fild    [esp+194h+var_174]
0x61B0E2: add     esp, 10h
0x61B0E5: push    0FFFFFFFFh; int
0x61B0E7: push    ebp; int
0x61B0E8: sub     esp, 8
0x61B0EB: fstp    [esp+194h+var_194+4]; float
0x61B0EF: lea     eax, [esp+194h+var_130]
0x61B0F3: fld     [esp+194h+var_170]
0x61B0F7: fstp    [esp+194h+var_194]; float
0x61B0FA: push    eax; int
0x61B0FB: call    InterfaceMgr_DebugTextLine
0x61B100: add     [esp+198h+var_174], esi
0x61B104: add     esp, 14h
0x61B107: cmp     byte ptr [edi+1ADh], 0
0x61B10E: jz      loc_61A415
0x61B114: fild    [esp+184h+var_174]
0x61B118: push    0FFFFFFFFh; int
0x61B11A: push    ebp; int
0x61B11B: sub     esp, 8
0x61B11E: fstp    [esp+194h+var_194+4]; float
0x61B122: fld     [esp+194h+var_170]
0x61B126: fstp    [esp+194h+var_194]; float
0x61B129: push    offset aUnableToBuffSt; "Unable to buff standoff, don't bother n"...
0x61B12E: call    InterfaceMgr_DebugTextLine
0x61B133: add     esp, 14h
0x61B136: add     [esp+184h+var_174], esi
0x61B13A: jmp     loc_61A415
0x61B13F: mov     edx, [esp+174h+var_14C]
0x61B143: mov     eax, [esp+174h+var_158]
0x61B147: mov     ecx, [esp+174h+var_154]
0x61B14B: mov     [eax], edx
0x61B14D: mov     edx, [esp+174h+var_174]
0x61B150: mov     [ecx], edx
0x61B152: mov     ecx, [esp+174h+var_4]
0x61B159: xor     ecx, esp
0x61B15B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x61B160: add     esp, 174h
0x61B166: retn

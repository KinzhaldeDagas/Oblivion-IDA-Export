0x50D020: sub     esp, 20Ch
0x50D026: mov     eax, ds:0B30AACh
0x50D02B: xor     eax, esp
0x50D02D: mov     [esp+20Ch+var_4], eax
0x50D034: mov     edx, [esp+20Ch+a4]
0x50D03B: push    ebx
0x50D03C: mov     ebx, [esp+210h+l]
0x50D043: push    ebp
0x50D044: mov     ebp, [esp+214h+arg_1C]
0x50D04B: mov     ecx, [esp+214h+arg_4]
0x50D052: mov     eax, [esp+214h+a1]
0x50D059: push    esi
0x50D05A: mov     esi, [esp+218h+arg_C]
0x50D061: push    edi
0x50D062: mov     edi, [esp+21Ch+arg_10]
0x50D069: mov     [esp+21Ch+a3], ebp
0x50D06D: xor     ebp, ebp
0x50D06F: mov     dword ptr [esp+21Ch+var_200], ebp
0x50D073: mov     [esp+21Ch+var_20C], ebp
0x50D077: lea     ebp, [esp+21Ch+var_20C]
0x50D07B: push    ebp
0x50D07C: lea     ebp, [esp+220h+var_200]
0x50D080: push    ebp; UInt16
0x50D081: push    ebx; l
0x50D082: push    edi; a6
0x50D083: push    esi; a5
0x50D084: push    edx; a4
0x50D085: mov     edx, [esp+234h+a3]
0x50D089: push    edx; a3
0x50D08A: push    ecx; a2
0x50D08B: push    eax; a1
0x50D08C: call    Script_ExtractArgs
0x50D091: add     esp, 24h
0x50D094: test    al, al
0x50D096: jz      loc_50D3C3
0x50D09C: mov     eax, dword ptr [esp+21Ch+var_200]
0x50D0A0: push    eax
0x50D0A1: push    2
0x50D0A3: call    ActorValue_GetGroupOffsetFromAV
0x50D0A8: mov     ecx, ds:0B33A98h
0x50D0AE: add     esp, 8
0x50D0B1: push    eax
0x50D0B2: call    TESDataHandler_GetTESSkillByCode
0x50D0B7: mov     esi, eax
0x50D0B9: test    esi, esi
0x50D0BB: jz      loc_50D3C1
0x50D0C1: mov     eax, [esi+2Ch]
0x50D0C4: mov     ecx, ds:0B333C4h
0x50D0CA: push    eax
0x50D0CB: call    Actor_GetSkillMasteryLevel
0x50D0D0: cmp     [esp+21Ch+var_20C], 0
0x50D0D5: mov     ecx, ds:0B333C4h
0x50D0DB: mov     ebx, [ecx+184h]
0x50D0E1: mov     [esp+21Ch+var_1FC], eax
0x50D0E5: mov     ebp, eax
0x50D0E7: jz      loc_50D1CA
0x50D0ED: lea     ecx, [ecx+0]
0x50D0F0: mov     eax, [esi+2Ch]
0x50D0F3: mov     ecx, ds:0B333C4h
0x50D0F9: push    eax
0x50D0FA: call    sub_65FA90
0x50D0FF: fstp    [esp+21Ch+a3]
0x50D103: fld     [esp+21Ch+a3]
0x50D107: mov     ecx, ds:0B333C4h
0x50D10D: push    esi
0x50D10E: fstp    qword ptr [esp+220h+a3]
0x50D112: call    sub_65FAD0
0x50D117: fsubr   qword ptr [esp+21Ch+a3]
0x50D11B: mov     edx, [esi+2Ch]
0x50D11E: push    ecx
0x50D11F: mov     ecx, ds:0B333C4h
0x50D125: fstp    [esp+220h+a3]
0x50D129: fld     [esp+220h+a3]
0x50D12D: fstp    [esp+220h+duration]; float
0x50D130: push    edx; int
0x50D131: call    sub_65FA40
0x50D136: mov     edi, [esi+2Ch]
0x50D139: mov     ecx, ds:0B333C4h
0x50D13F: push    edi
0x50D140: call    Actor_GetBaseCalcAVi
0x50D145: mov     ecx, ds:0B333C4h
0x50D14B: add     eax, 1
0x50D14E: push    eax
0x50D14F: push    edi
0x50D150: call    Player_Actor_SetAViBase
0x50D155: mov     eax, [esi+2Ch]
0x50D158: mov     ecx, ds:0B333C4h
0x50D15E: push    eax
0x50D15F: call    Actor_GetSkillMasteryLevel
0x50D164: mov     ecx, ds:0B333C4h
0x50D16A: mov     ebp, eax
0x50D16C: mov     eax, [esi+2Ch]
0x50D16F: lea     eax, [ecx+eax*4+158h]
0x50D176: mov     edi, 1
0x50D17B: add     [eax], edi
0x50D17D: mov     edx, [esi+34h]
0x50D180: mov     ecx, ds:0B333C4h
0x50D186: push    edx
0x50D187: call    sub_65D5F0
0x50D18C: mov     eax, [esi+30h]
0x50D18F: mov     ecx, ds:0B333C4h
0x50D195: push    eax
0x50D196: call    sub_6648D0
0x50D19B: mov     eax, [esi+2Ch]
0x50D19E: mov     ecx, ds:0B333C4h
0x50D1A4: push    eax
0x50D1A5: call    Actor_GetBaseClass
0x50D1AA: mov     ecx, eax
0x50D1AC: call    sub_51C090
0x50D1B1: test    al, al
0x50D1B3: jz      short loc_50D1C0
0x50D1B5: mov     eax, ds:0B333C4h
0x50D1BA: add     [eax+184h], edi
0x50D1C0: sub     [esp+21Ch+var_20C], edi
0x50D1C4: jnz     loc_50D0F0
0x50D1CA: push    3ECh
0x50D1CF: xor     edi, edi
0x50D1D1: call    Menu_GetOpenMenuTile
0x50D1D6: add     esp, 4
0x50D1D9: test    eax, eax
0x50D1DB: jz      short loc_50D1FB
0x50D1DD: push    edi; int
0x50D1DE: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x50D1E3: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x50D1E8: push    edi; int
0x50D1E9: mov     ecx, eax
0x50D1EB: call    Tile_GetParentMenu
0x50D1F0: push    eax; void *
0x50D1F1: call    OblivionDynamicCast
0x50D1F6: add     esp, 14h
0x50D1F9: mov     edi, eax
0x50D1FB: mov     ecx, ds:0B333C4h
0x50D201: mov     eax, [ecx+184h]
0x50D207: cmp     ebx, eax
0x50D209: jz      loc_50D2BD
0x50D20F: cmp     eax, 0Ah
0x50D212: jl      loc_50D2BD
0x50D218: mov     ecx, edi
0x50D21A: call    sub_5A56C0
0x50D21F: test    al, al
0x50D221: jnz     loc_50D2BD
0x50D227: mov     edx, ds:0B383B8h
0x50D22D: mov     eax, ds:0B383A8h
0x50D232: mov     edi, ds:0B38D28h
0x50D238: push    edx
0x50D239: push    eax
0x50D23A: mov     ecx, esi
0x50D23C: call    sub_52EA90
0x50D241: push    eax
0x50D242: push    edi
0x50D243: lea     ecx, [esp+22Ch+string]
0x50D247: push    offset aSSS_S; "%s %s %s.  %s"
0x50D24C: push    ecx
0x50D24D: call    __sprintf
0x50D252: fld     dword ptr ds:0A46B10h
0x50D258: add     esp, 14h
0x50D25B: fstp    [esp+220h+duration]; duration
0x50D25E: push    1; unk2
0x50D260: lea     edx, [esp+224h+string]
0x50D264: push    0; unk1
0x50D266: push    edx; string
0x50D267: call    GameUI_QueueMessage
0x50D26C: mov     eax, ds:0B33398h
0x50D271: mov     ecx, [eax+24h]
0x50D274: add     esp, 10h
0x50D277: test    ecx, ecx
0x50D279: jz      short loc_50D2AB
0x50D27B: push    1
0x50D27D: push    121h
0x50D282: push    offset aUistatsskillup; "UIStatsSkillUp"
0x50D287: call    PlaySound???
0x50D28C: mov     edi, eax
0x50D28E: push    0
0x50D290: mov     ecx, edi
0x50D292: call    sub_6B7190
0x50D297: test    edi, edi
0x50D299: jz      short loc_50D2AB
0x50D29B: mov     ecx, edi; this
0x50D29D: call    sub_6B73E0
0x50D2A2: push    edi
0x50D2A3: call    FormHeapFree
0x50D2A8: add     esp, 4
0x50D2AB: mov     ecx, ds:0B333C4h
0x50D2B1: mov     byte ptr [ecx+1DCh], 1
0x50D2B8: jmp     loc_50D33D
0x50D2BD: mov     edx, ds:0B383A8h
0x50D2C3: mov     edi, ds:0B38D28h
0x50D2C9: push    edx
0x50D2CA: mov     ecx, esi
0x50D2CC: call    sub_52EA90
0x50D2D1: push    eax
0x50D2D2: push    edi
0x50D2D3: lea     eax, [esp+228h+string]
0x50D2D7: push    offset aSSS_; "%s %s %s."
0x50D2DC: push    eax
0x50D2DD: call    __sprintf
0x50D2E2: mov     ecx, ds:0B33398h
0x50D2E8: mov     ecx, [ecx+24h]
0x50D2EB: add     esp, 14h
0x50D2EE: test    ecx, ecx
0x50D2F0: jz      short loc_50D322
0x50D2F2: push    1
0x50D2F4: push    121h
0x50D2F9: push    offset aUistatsskillup; "UIStatsSkillUp"
0x50D2FE: call    PlaySound???
0x50D303: mov     edi, eax
0x50D305: push    0
0x50D307: mov     ecx, edi
0x50D309: call    sub_6B7190
0x50D30E: test    edi, edi
0x50D310: jz      short loc_50D322
0x50D312: mov     ecx, edi; this
0x50D314: call    sub_6B73E0
0x50D319: push    edi
0x50D31A: call    FormHeapFree
0x50D31F: add     esp, 4
0x50D322: fld     dword ptr ds:0A30634h
0x50D328: push    ecx
0x50D329: fstp    [esp+220h+duration]; duration
0x50D32C: push    1; unk2
0x50D32E: lea     edx, [esp+224h+string]
0x50D332: push    0; unk1
0x50D334: push    edx; string
0x50D335: call    GameUI_QueueMessage
0x50D33A: add     esp, 10h
0x50D33D: cmp     ebp, [esp+21Ch+var_1FC]
0x50D341: jz      short loc_50D3BC
0x50D343: mov     eax, ds:0B38CF0h
0x50D348: push    0
0x50D34A: push    eax
0x50D34B: push    1
0x50D34D: push    0
0x50D34F: push    ebp
0x50D350: mov     ecx, esi
0x50D352: call    TESSKill_GetMasteryDescription
0x50D357: push    eax
0x50D358: call    ShowUIMessageBox
0x50D35D: mov     esi, [esi+2Ch]
0x50D360: add     esp, 14h
0x50D363: cmp     esi, 0Eh
0x50D366: jz      short loc_50D370
0x50D368: add     esi, 0FFFFFFF0h
0x50D36B: cmp     esi, 1
0x50D36E: ja      short loc_50D3BC
0x50D370: mov     ecx, ds:0B333C4h; this
0x50D376: push    0; a2
0x50D378: call    Player_GetAnimData
0x50D37D: mov     esi, eax
0x50D37F: mov     ecx, esi
0x50D381: call    sub_471990
0x50D386: mov     ecx, ds:0B333C4h
0x50D38C: push    0
0x50D38E: push    ecx
0x50D38F: mov     ecx, esi
0x50D391: call    sub_476410
0x50D396: mov     ecx, ds:0B333C4h; this
0x50D39C: push    1; a2
0x50D39E: call    Player_GetAnimData
0x50D3A3: mov     esi, eax
0x50D3A5: mov     ecx, esi
0x50D3A7: call    sub_471990
0x50D3AC: mov     edx, ds:0B333C4h
0x50D3B2: push    0
0x50D3B4: push    edx
0x50D3B5: mov     ecx, esi
0x50D3B7: call    sub_476410
0x50D3BC: call    sub_57A7D0
0x50D3C1: mov     al, 1
0x50D3C3: mov     ecx, [esp+21Ch+var_4]
0x50D3CA: pop     edi
0x50D3CB: pop     esi
0x50D3CC: pop     ebp
0x50D3CD: pop     ebx
0x50D3CE: xor     ecx, esp
0x50D3D0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50D3D5: add     esp, 20Ch
0x50D3DB: retn

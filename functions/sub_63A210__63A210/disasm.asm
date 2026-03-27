0x63A210: sub     esp, 154h
0x63A216: mov     eax, ds:0B30AACh
0x63A21B: xor     eax, esp
0x63A21D: mov     [esp+154h+var_4], eax
0x63A224: push    ebx
0x63A225: mov     ebx, [esp+158h+arg_0]
0x63A22C: test    ebx, ebx
0x63A22E: push    esi
0x63A22F: mov     esi, ecx
0x63A231: mov     [esp+15Ch+var_140], ebx
0x63A235: jz      loc_63ADB2
0x63A23B: mov     eax, [ebx]
0x63A23D: mov     edx, [eax+154h]
0x63A243: mov     ecx, ebx
0x63A245: call    edx
0x63A247: test    eax, eax
0x63A249: jz      loc_63ADB2
0x63A24F: mov     eax, [ebx+8]
0x63A252: mov     ecx, eax
0x63A254: shr     ecx, 5
0x63A257: test    cl, 1
0x63A25A: jnz     loc_63ADB2
0x63A260: shr     eax, 0Bh
0x63A263: test    al, 1
0x63A265: jnz     loc_63ADB2
0x63A26B: mov     ecx, ebx; this
0x63A26D: call    TESObjectREFR_GetParentCell
0x63A272: test    eax, eax
0x63A274: jz      loc_63ADB2
0x63A27A: mov     ecx, ebx; this
0x63A27C: call    TESObjectREFR_GetParentCell
0x63A281: cmp     byte ptr [eax+26h], 6
0x63A285: jnz     loc_63ADB2
0x63A28B: mov     edx, [ebx]
0x63A28D: mov     eax, [edx+190h]
0x63A293: mov     ecx, ebx
0x63A295: call    eax
0x63A297: test    al, al
0x63A299: jz      short loc_63A2A8
0x63A29B: cmp     dword ptr [esi+2BCh], 4
0x63A2A2: jz      loc_63ADB2
0x63A2A8: cmp     dword ptr [esi+2BCh], 3
0x63A2AF: jz      loc_63ADB2
0x63A2B5: mov     ecx, [esi+17Ch]
0x63A2BB: test    ecx, ecx
0x63A2BD: jz      loc_63ADB2
0x63A2C3: call    sub_471730
0x63A2C8: test    al, al
0x63A2CA: jnz     loc_63ADB2
0x63A2D0: mov     edx, [ebx]
0x63A2D2: mov     eax, [edx+190h]
0x63A2D8: push    edi
0x63A2D9: mov     ecx, ebx
0x63A2DB: xor     edi, edi
0x63A2DD: call    eax
0x63A2DF: test    al, al
0x63A2E1: jz      short loc_63A2E5
0x63A2E3: mov     edi, ebx
0x63A2E5: test    edi, edi
0x63A2E7: fld     dword ptr [esi+22Ch]
0x63A2ED: fsub    dword ptr ds:0B33E9Ch
0x63A2F3: mov     al, [esi+1D1h]
0x63A2F9: push    ebp; int
0x63A2FA: mov     byte ptr [esi+1D1h], 0
0x63A301: fstp    dword ptr [esi+22Ch]
0x63A307: jz      loc_63AD44
0x63A30D: test    al, al
0x63A30F: jz      short loc_63A318
0x63A311: mov     ecx, edi; int
0x63A313: call    sub_5EB400
0x63A318: cmp     dword ptr [esi+1ECh], 0
0x63A31F: jz      short loc_63A349
0x63A321: mov     edx, [edi]
0x63A323: mov     eax, [edx+154h]
0x63A329: mov     ecx, edi
0x63A32B: call    eax
0x63A32D: test    eax, eax
0x63A32F: jz      short loc_63A349
0x63A331: mov     edx, [edi]
0x63A333: mov     eax, [edx+380h]
0x63A339: mov     ecx, edi
0x63A33B: call    eax
0x63A33D: test    eax, eax
0x63A33F: jnz     short loc_63A349
0x63A341: push    edi
0x63A342: mov     ecx, esi
0x63A344: call    sub_635E20
0x63A349: cmp     byte ptr [esi+1D0h], 0
0x63A350: jz      short loc_63A35A
0x63A352: push    edi
0x63A353: mov     ecx, esi
0x63A355: call    sub_63A020
0x63A35A: movzx   eax, byte ptr [esi+16Ah]
0x63A361: test    al, al
0x63A363: jnz     short loc_63A36D
0x63A365: cmp     ds:0B3C0ABh, al
0x63A36B: jz      short loc_63A37D
0x63A36D: push    eax
0x63A36E: push    edi
0x63A36F: call    sub_693210
0x63A374: add     esp, 8
0x63A377: mov     [esi+16Ah], al
0x63A37D: mov     ecx, edi; this
0x63A37F: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x63A384: cmp     eax, 3
0x63A387: jnz     short loc_63A3A3
0x63A389: fld1
0x63A38B: sub     esp, 8
0x63A38E: fst     [esp+16Ch+var_168]; int
0x63A392: mov     ecx, edi
0x63A394: fstp    [esp+16Ch+var_16C]; float
0x63A397: call    Actor_ProcessAction
0x63A39C: mov     ecx, ebx
0x63A39E: jmp     loc_63ADA6
0x63A3A3: mov     ecx, ds:0B33B00h
0x63A3A9: call    sub_45A500
0x63A3AE: test    al, al
0x63A3B0: jnz     short loc_63A420
0x63A3B2: mov     edx, [edi]
0x63A3B4: mov     eax, [edx+334h]
0x63A3BA: push    1; int
0x63A3BC: mov     ecx, edi
0x63A3BE: call    eax
0x63A3C0: test    al, al
0x63A3C2: jz      short loc_63A420
0x63A3C4: mov     edx, [edi]
0x63A3C6: mov     eax, [edx+330h]
0x63A3CC: mov     ecx, edi
0x63A3CE: call    eax
0x63A3D0: test    eax, eax
0x63A3D2: jnz     short loc_63A420
0x63A3D4: mov     ecx, edi
0x63A3D6: call    sub_5E2E00
0x63A3DB: push    0
0x63A3DD: mov     ecx, edi
0x63A3DF: mov     ebx, eax
0x63A3E1: mov     byte ptr [esp+168h+var_14C], 0
0x63A3E6: call    sub_5E6CD0
0x63A3EB: test    al, al
0x63A3ED: jz      short loc_63A3F4
0x63A3EF: mov     byte ptr [esp+164h+var_14C], 1
0x63A3F4: mov     ecx, edi; int
0x63A3F6: call    sub_5EAE70
0x63A3FB: mov     eax, [esp+164h+var_14C]
0x63A3FF: mov     edx, [esi]
0x63A401: push    1
0x63A403: push    0
0x63A405: push    0
0x63A407: push    0
0x63A409: push    0
0x63A40B: push    0
0x63A40D: push    eax
0x63A40E: push    eax
0x63A40F: mov     eax, [edx+228h]
0x63A415: push    ebx
0x63A416: push    edi
0x63A417: mov     ecx, esi
0x63A419: call    eax
0x63A41B: jmp     loc_63ADB0
0x63A420: cmp     byte ptr [esi+1A0h], 0
0x63A427: jz      short loc_63A44E
0x63A429: push    3F1h
0x63A42E: call    Menu_GetOpenMenuTile
0x63A433: add     esp, 4
0x63A436: test    eax, eax
0x63A438: jnz     short loc_63A44E
0x63A43A: push    edi
0x63A43B: mov     ecx, esi
0x63A43D: call    sub_6347E0
0x63A442: mov     byte ptr [esi+1A0h], 0
0x63A449: jmp     loc_63ADB0
0x63A44E: fld     dword ptr ds:0A3D65Ch
0x63A454: push    ecx
0x63A455: mov     ecx, edi; this
0x63A457: fstp    [esp+168h+var_168]; float
0x63A45A: lea     ebx, [edi+2Ch]
0x63A45D: call    TESObjectREFR_GetParentCell
0x63A462: push    eax; int
0x63A463: push    ebx; int
0x63A464: mov     ecx, edi
0x63A466: call    Actor_IsUnderwater??
0x63A46B: test    al, al
0x63A46D: jz      short loc_63A48E
0x63A46F: mov     eax, [esi+0E8h]
0x63A475: test    eax, eax
0x63A477: jz      short loc_63A4EB
0x63A479: mov     ecx, [eax+8]
0x63A47C: push    0
0x63A47E: push    0
0x63A480: push    0
0x63A482: push    1
0x63A484: push    ecx
0x63A485: mov     ecx, edi
0x63A487: call    sub_5E4260
0x63A48C: jmp     short loc_63A4EB
0x63A48E: fldz
0x63A490: fcomp   dword ptr [esi+0BCh]
0x63A496: fnstsw  ax
0x63A498: test    ah, 1
0x63A49B: jz      short loc_63A4E4
0x63A49D: mov     ecx, edi; this
0x63A49F: call    TESObjectREFR_GetParentCell
0x63A4A4: mov     ecx, eax; this
0x63A4A6: call    TESObjectCELL_IsInterior
0x63A4AB: test    al, al
0x63A4AD: jnz     short loc_63A4D0
0x63A4AF: fld     dword ptr [esi+0BCh]
0x63A4B5: mov     ecx, offset fTorchEvaluationTimer
0x63A4BA: fstp    qword ptr [esp+164h+var_14C+4]
0x63A4BE: call    GameSetting_GetSafeFloatPointer
0x63A4C3: fld     dword ptr [eax]
0x63A4C5: fcomp   qword ptr [esp+164h+var_14C+4]
0x63A4C9: fnstsw  ax
0x63A4CB: test    ah, 5
0x63A4CE: jnp     short loc_63A4E4
0x63A4D0: fld     dword ptr [esi+0BCh]
0x63A4D6: fsub    dword ptr ds:0B33E9Ch
0x63A4DC: fstp    dword ptr [esi+0BCh]
0x63A4E2: jmp     short loc_63A4EB
0x63A4E4: mov     ecx, edi
0x63A4E6: call    sub_603160
0x63A4EB: fldz
0x63A4ED: fcom    dword ptr [esi+2B0h]
0x63A4F3: fnstsw  ax
0x63A4F5: test    ah, 5
0x63A4F8: jp      short loc_63A510
0x63A4FA: fstp    st
0x63A4FC: fld     dword ptr [esi+2B0h]
0x63A502: fsub    dword ptr ds:0B33E9Ch
0x63A508: fstp    dword ptr [esi+2B0h]
0x63A50E: jmp     short loc_63A516
0x63A510: fstp    dword ptr [esi+2ACh]
0x63A516: cmp     byte ptr [esi+290h], 0
0x63A51D: jz      short loc_63A58A
0x63A51F: fld     dword ptr [esi+28Ch]
0x63A525: push    ecx
0x63A526: fsub    dword ptr ds:0B33E9Ch
0x63A52C: mov     ecx, edi; this
0x63A52E: fstp    dword ptr [esi+28Ch]
0x63A534: fld     dword ptr ds:0A3D65Ch
0x63A53A: fstp    [esp+168h+var_168]; float
0x63A53D: call    TESObjectREFR_GetParentCell
0x63A542: push    eax; int
0x63A543: push    ebx; int
0x63A544: mov     ecx, edi
0x63A546: call    Actor_IsUnderwater??
0x63A54B: test    al, al
0x63A54D: jnz     short loc_63A578
0x63A54F: fldz
0x63A551: fcomp   dword ptr [esi+28Ch]
0x63A557: fnstsw  ax
0x63A559: test    ah, 1
0x63A55C: jnz     short loc_63A58A
0x63A55E: mov     edx, [esi]
0x63A560: mov     eax, [edx+588h]
0x63A566: push    0
0x63A568: push    0
0x63A56A: push    edi
0x63A56B: mov     ecx, esi
0x63A56D: call    eax
0x63A56F: mov     byte ptr [esi+290h], 0
0x63A576: jmp     short loc_63A58A
0x63A578: mov     ecx, offset flt_B36C88
0x63A57D: call    GameSetting_GetSafeFloatPointer
0x63A582: fld     dword ptr [eax]
0x63A584: fstp    dword ptr [esi+28Ch]
0x63A58A: cmp     edi, ds:0B333C4h
0x63A590: jz      short loc_63A599
0x63A592: mov     ecx, edi
0x63A594: call    sub_603320
0x63A599: mov     edx, [esi]
0x63A59B: mov     eax, [edx+184h]
0x63A5A1: mov     ecx, esi
0x63A5A3: mov     byte ptr [esp+164h+var_150], 0
0x63A5A8: mov     byte ptr [esp+164h+var_14C], 0
0x63A5AD: call    eax
0x63A5AF: cmp     edi, ds:0B333C4h
0x63A5B5: mov     ebx, eax
0x63A5B7: jz      short loc_63A604
0x63A5B9: mov     edx, [edi]
0x63A5BB: mov     eax, [edx+380h]
0x63A5C1: mov     ecx, edi
0x63A5C3: call    eax
0x63A5C5: test    eax, eax
0x63A5C7: jz      short loc_63A604
0x63A5C9: mov     ecx, edi; this
0x63A5CB: call    Actor_IsNPC
0x63A5D0: test    al, al
0x63A5D2: jz      short loc_63A604
0x63A5D4: test    ebx, ebx
0x63A5D6: jz      short loc_63A604
0x63A5D8: cmp     byte ptr [ebx+20h], 16h
0x63A5DC: jnz     short loc_63A604
0x63A5DE: mov     edx, [edi]
0x63A5E0: mov     eax, [edx+380h]
0x63A5E6: push    1
0x63A5E8: push    edi
0x63A5E9: mov     ecx, edi
0x63A5EB: call    eax
0x63A5ED: mov     ecx, eax
0x63A5EF: call    TESOBjectREFR_IsOwnedBy
0x63A5F4: test    al, al
0x63A5F6: jnz     short loc_63A604
0x63A5F8: mov     ecx, edi; int
0x63A5FA: call    sub_5EAE70
0x63A5FF: jmp     loc_63ADB0
0x63A604: fldz
0x63A606: fcomp   dword ptr [esi+260h]
0x63A60C: fnstsw  ax
0x63A60E: test    ah, 44h
0x63A611: jnp     loc_63A6AB
0x63A617: mov     ecx, offset TimeGlobals
0x63A61C: call    TimeGlobals_GetGameHour
0x63A621: fstp    [esp+164h+var_154]
0x63A625: fld     [esp+164h+var_154]
0x63A629: fsub    dword ptr [esi+0Ch]
0x63A62C: fstp    [esp+164h+var_154]
0x63A630: fld     [esp+164h+var_154]
0x63A634: fabs
0x63A636: fstp    [esp+164h+var_154]
0x63A63A: fld     [esp+164h+var_154]
0x63A63E: fmul    qword ptr ds:0A309F0h
0x63A644: fstp    [esp+164h+var_154]
0x63A648: fld     [esp+164h+var_154]
0x63A64C: fld     dword ptr [esi+260h]
0x63A652: fcompp
0x63A654: fnstsw  ax
0x63A656: test    ah, 41h
0x63A659: jp      short loc_63A6AB
0x63A65B: mov     edx, [esi]
0x63A65D: fldz
0x63A65F: mov     eax, [edx+188h]
0x63A665: fstp    dword ptr [esi+1ACh]
0x63A66B: push    3
0x63A66D: push    edi
0x63A66E: mov     ecx, esi
0x63A670: mov     byte ptr [esp+16Ch+var_14C], 1
0x63A675: call    eax
0x63A677: push    400h
0x63A67C: lea     ebp, [edi+44h]
0x63A67F: push    ebp
0x63A680: push    ebx
0x63A681: call    Script_AddEventToExtraScript
0x63A686: add     esp, 0Ch
0x63A689: test    ebx, ebx
0x63A68B: jz      short loc_63A6AB
0x63A68D: mov     ecx, ebx
0x63A68F: call    sub_565DF0
0x63A694: test    al, al
0x63A696: jz      short loc_63A6AB
0x63A698: mov     ecx, offset TimeGlobals
0x63A69D: call    TimeGlobals_GetGameDay
0x63A6A2: mov     ecx, ebp
0x63A6A4: push    eax
0x63A6A5: push    ebx
0x63A6A6: call    sub_41FFC0
0x63A6AB: mov     ecx, [esi+8]
0x63A6AE: test    ecx, ecx
0x63A6B0: jz      short loc_63A6BB
0x63A6B2: call    sub_5660E0
0x63A6B7: mov     byte ptr [esp+164h+var_14C], al
0x63A6BB: cmp     edi, ds:0B333C4h
0x63A6C1: jz      short loc_63A6EF
0x63A6C3: cmp     dword ptr [esi+0C0h], 0
0x63A6CA: jnz     short loc_63A6EF
0x63A6CC: mov     ecx, [esi+8]
0x63A6CF: test    ecx, ecx
0x63A6D1: jz      short loc_63A6DC
0x63A6D3: call    sub_567770
0x63A6D8: test    al, al
0x63A6DA: jnz     short loc_63A6EF
0x63A6DC: mov     eax, [esp+164h+var_14C]
0x63A6E0: mov     edx, [esi]
0x63A6E2: mov     edx, [edx+18h]
0x63A6E5: push    eax
0x63A6E6: push    edi
0x63A6E7: mov     ecx, esi
0x63A6E9: call    edx
0x63A6EB: mov     byte ptr [esp+164h+var_150], al
0x63A6EF: mov     eax, [esi]
0x63A6F1: mov     edx, [eax+184h]
0x63A6F7: mov     ecx, esi
0x63A6F9: call    edx
0x63A6FB: cmp     byte ptr [esp+164h+var_150], 0
0x63A700: jnz     short loc_63A716
0x63A702: test    eax, eax
0x63A704: jnz     loc_63A7B3
0x63A70A: cmp     [esi+0D0h], al
0x63A710: jnz     loc_63A7B3
0x63A716: mov     eax, [esi]
0x63A718: mov     edx, [eax+3C0h]
0x63A71E: push    edi
0x63A71F: mov     ecx, esi
0x63A721: call    edx
0x63A723: mov     eax, [esi]
0x63A725: mov     edx, [eax+184h]
0x63A72B: mov     ecx, esi
0x63A72D: call    edx
0x63A72F: mov     ebx, eax
0x63A731: mov     eax, [edi]
0x63A733: mov     edx, [eax+380h]
0x63A739: mov     ecx, edi
0x63A73B: call    edx
0x63A73D: test    eax, eax
0x63A73F: jz      short loc_63A793
0x63A741: mov     eax, [esi+8]
0x63A744: test    eax, eax
0x63A746: jz      short loc_63A793
0x63A748: mov     eax, [eax+1Ch]
0x63A74B: shr     eax, 17h
0x63A74E: test    al, 1
0x63A750: jnz     short loc_63A793
0x63A752: mov     edx, [edi]
0x63A754: mov     eax, [edx+380h]
0x63A75A: mov     ecx, edi
0x63A75C: call    eax
0x63A75E: mov     ecx, eax
0x63A760: call    sub_5E9A60
0x63A765: test    al, al
0x63A767: jnz     short loc_63A784
0x63A769: mov     edx, [edi]
0x63A76B: mov     eax, [edx+380h]
0x63A771: mov     ecx, edi
0x63A773: call    eax
0x63A775: mov     ecx, eax; int
0x63A777: call    sub_5F80D0
0x63A77C: fldz
0x63A77E: fstp    dword ptr [esi+1A8h]
0x63A784: mov     edx, [edi]
0x63A786: mov     eax, [edx+230h]
0x63A78C: mov     ecx, edi
0x63A78E: jmp     loc_63ADAE
0x63A793: test    ebx, ebx
0x63A795: jz      short loc_63A7B3
0x63A797: mov     ebx, [ebx+28h]
0x63A79A: test    ebx, ebx
0x63A79C: jz      short loc_63A7B3
0x63A79E: mov     ecx, ebx
0x63A7A0: call    TargetData__GetTargetType
0x63A7A5: test    eax, eax
0x63A7A7: jz      short loc_63A7B3
0x63A7A9: mov     ecx, ebx
0x63A7AB: call    sub_452A60
0x63A7B0: mov     [esi+38h], eax
0x63A7B3: cmp     dword ptr [esi+0C0h], 0
0x63A7BA: jnz     short def_63A7D7; jumptable 0063A7D7 default case, cases 4,6-9
0x63A7BC: mov     edx, [esi]
0x63A7BE: mov     eax, [edx+36Ch]
0x63A7C4: mov     ecx, esi
0x63A7C6: call    eax
0x63A7C8: add     eax, 0FFFFFFFEh; switch 9 cases
0x63A7CB: cmp     eax, 8
0x63A7CE: ja      short def_63A7D7; jumptable 0063A7D7 default case, cases 4,6-9
0x63A7D0: movzx   ecx, ds:byte_63B96C[eax]
0x63A7D7: jmp     ds:jpt_63A7D7[ecx*4]; switch jump
0x63A7DE: mov     edx, [edi]; jumptable 0063A7D7 cases 5,10
0x63A7E0: mov     eax, [edx+380h]
0x63A7E6: mov     ecx, edi
0x63A7E8: call    eax
0x63A7EA: test    eax, eax
0x63A7EC: mov     edx, [edi]
0x63A7EE: mov     ecx, edi
0x63A7F0: jz      short loc_63A7FC
0x63A7F2: mov     eax, [edx+230h]
0x63A7F8: call    eax
0x63A7FA: jmp     short def_63A7D7; jumptable 0063A7D7 default case, cases 4,6-9
0x63A7FC: mov     eax, [edx+320h]
0x63A802: call    eax
0x63A804: jmp     short def_63A7D7; jumptable 0063A7D7 default case, cases 4,6-9
0x63A806: mov     edx, [edi]; jumptable 0063A7D7 cases 2,3
0x63A808: mov     eax, [edx+380h]
0x63A80E: mov     ecx, edi
0x63A810: call    eax
0x63A812: test    eax, eax
0x63A814: jz      short def_63A7D7; jumptable 0063A7D7 default case, cases 4,6-9
0x63A816: mov     ebx, [edi]
0x63A818: mov     edx, [ebx+380h]
0x63A81E: mov     ecx, edi
0x63A820: call    edx
0x63A822: push    eax
0x63A823: mov     eax, [ebx+22Ch]
0x63A829: mov     ecx, edi
0x63A82B: call    eax
0x63A82D: mov     edx, [esi]; jumptable 0063A7D7 default case, cases 4,6-9
0x63A82F: mov     eax, [edx+184h]
0x63A835: mov     ecx, esi
0x63A837: call    eax
0x63A839: mov     edx, [esi]
0x63A83B: mov     ebx, eax
0x63A83D: mov     eax, [edx+90h]
0x63A843: push    edi
0x63A844: mov     ecx, esi
0x63A846: call    eax
0x63A848: cmp     byte ptr [esp+164h+var_150], 0
0x63A84D: jz      short loc_63A863
0x63A84F: mov     ecx, edi
0x63A851: call    sub_5E7BE0
0x63A856: mov     edx, [esi]
0x63A858: mov     eax, [edx+55Ch]
0x63A85E: push    edi
0x63A85F: mov     ecx, esi
0x63A861: call    eax
0x63A863: mov     edx, [esi]
0x63A865: mov     eax, [edx+174h]
0x63A86B: mov     ecx, esi
0x63A86D: call    eax
0x63A86F: test    eax, eax
0x63A871: jnz     loc_63A900
0x63A877: test    ebx, ebx
0x63A879: jz      loc_63A900
0x63A87F: mov     ecx, ebx
0x63A881: call    sub_567770
0x63A886: test    al, al
0x63A888: jnz     short loc_63A900
0x63A88A: mov     eax, [esi+8]
0x63A88D: test    eax, eax
0x63A88F: jz      short loc_63A900
0x63A891: mov     ecx, [eax+18h]
0x63A894: mov     edx, [esi+4]
0x63A897: mov     eax, ds:0B152B0h[ecx*4]
0x63A89E: cmp     dword ptr [eax+edx*4], 0
0x63A8A2: jz      short loc_63A900
0x63A8A4: mov     edx, [esi]
0x63A8A6: mov     eax, [edx+388h]
0x63A8AC: mov     ecx, esi
0x63A8AE: call    eax
0x63A8B0: test    al, al
0x63A8B2: jnz     short loc_63A8E3
0x63A8B4: mov     ecx, [ebx+1Ch]
0x63A8B7: shr     ecx, 9
0x63A8BA: test    cl, 1
0x63A8BD: jz      short loc_63A900
0x63A8BF: test    byte ptr [ebx+1Ch], 1
0x63A8C3: jz      short loc_63A900
0x63A8C5: mov     ecx, edi; this
0x63A8C7: call    TESObjectREFR_GetParentCell
0x63A8CC: test    eax, eax
0x63A8CE: jz      short loc_63A900
0x63A8D0: push    edi
0x63A8D1: mov     ecx, edi; this
0x63A8D3: call    TESObjectREFR_GetParentCell
0x63A8D8: mov     ecx, eax
0x63A8DA: call    sub_4CAAC0
0x63A8DF: test    al, al
0x63A8E1: jz      short loc_63A900
0x63A8E3: mov     edx, [esi]
0x63A8E5: mov     eax, [edx+158h]
0x63A8EB: push    0
0x63A8ED: push    edi
0x63A8EE: mov     ecx, esi
0x63A8F0: call    eax
0x63A8F2: mov     edx, [esi]
0x63A8F4: mov     eax, [edx+184h]
0x63A8FA: mov     ecx, esi
0x63A8FC: call    eax
0x63A8FE: mov     ebx, eax
0x63A900: fldz
0x63A902: fcom    dword ptr [esi+248h]
0x63A908: fnstsw  ax
0x63A90A: test    ah, 5
0x63A90D: jp      short loc_63A985
0x63A90F: fld     dword ptr [esi+248h]
0x63A915: fsub    dword ptr ds:0B33E9Ch
0x63A91B: fstp    [esp+164h+var_154]
0x63A91F: fld     [esp+164h+var_154]
0x63A923: fst     dword ptr [esi+248h]
0x63A929: fcompp
0x63A92B: fnstsw  ax
0x63A92D: test    ah, 41h
0x63A930: jp      short loc_63A987
0x63A932: push    0
0x63A934: mov     ecx, edi
0x63A936: call    sub_5E6CD0
0x63A93B: test    al, al
0x63A93D: jnz     short loc_63A987
0x63A93F: mov     edx, [esi]
0x63A941: fldz
0x63A943: mov     eax, [edx+194h]
0x63A949: fstp    dword ptr [esi+248h]
0x63A94F: push    edi
0x63A950: mov     ecx, esi
0x63A952: call    eax
0x63A954: mov     edx, [esi]
0x63A956: mov     eax, [edx+178h]
0x63A95C: push    0
0x63A95E: mov     ecx, esi
0x63A960: call    eax
0x63A962: mov     edx, [esi]
0x63A964: mov     eax, [edx+49Ch]
0x63A96A: mov     ecx, esi
0x63A96C: call    eax
0x63A96E: mov     edx, [esi]
0x63A970: mov     eax, [edx+184h]
0x63A976: mov     ecx, esi
0x63A978: mov     dword ptr [esi+2Ch], 0
0x63A97F: call    eax
0x63A981: mov     ebx, eax
0x63A983: jmp     short loc_63A987
0x63A985: fstp    st
0x63A987: mov     edx, [esi]
0x63A989: mov     eax, [edx+574h]
0x63A98F: mov     ecx, esi
0x63A991: call    eax
0x63A993: cmp     edi, ds:0B333C4h
0x63A999: jz      loc_63AA37
0x63A99F: mov     edx, [esi]
0x63A9A1: mov     eax, [edx+210h]
0x63A9A7: mov     ecx, esi
0x63A9A9: call    eax
0x63A9AB: test    al, al
0x63A9AD: jnz     short loc_63A9B7
0x63A9AF: cmp     [esi+244h], al
0x63A9B5: jz      short loc_63A9CB
0x63A9B7: mov     edx, [esi]
0x63A9B9: mov     eax, [edx+304h]
0x63A9BF: mov     ecx, esi
0x63A9C1: call    eax
0x63A9C3: test    al, al
0x63A9C5: jnz     short loc_63A9CB
0x63A9C7: push    1
0x63A9C9: jmp     short loc_63AA30
0x63A9CB: mov     edx, [esi]
0x63A9CD: mov     eax, [edx+210h]
0x63A9D3: mov     ecx, esi
0x63A9D5: call    eax
0x63A9D7: test    al, al
0x63A9D9: jnz     short loc_63AA37
0x63A9DB: cmp     [esi+244h], al
0x63A9E1: jnz     short loc_63AA37
0x63A9E3: mov     edx, [esi]
0x63A9E5: mov     eax, [edx+304h]
0x63A9EB: mov     ecx, esi
0x63A9ED: call    eax
0x63A9EF: test    al, al
0x63A9F1: jz      short loc_63AA37
0x63A9F3: mov     edx, [edi]
0x63A9F5: mov     eax, [edx+334h]
0x63A9FB: push    1
0x63A9FD: mov     ecx, edi
0x63A9FF: call    eax
0x63AA01: test    al, al
0x63AA03: jnz     short loc_63AA37
0x63AA05: cmp     dword ptr [esi+0E4h], 0
0x63AA0C: jz      short loc_63AA2E
0x63AA0E: mov     edx, [edi]
0x63AA10: mov     ebp, [esi]
0x63AA12: mov     eax, [edx+168h]
0x63AA18: mov     ecx, edi
0x63AA1A: add     ebp, 124h
0x63AA20: call    eax
0x63AA22: mov     edx, [ebp+0]
0x63AA25: push    eax
0x63AA26: mov     ecx, esi
0x63AA28: call    edx
0x63AA2A: test    eax, eax
0x63AA2C: jz      short loc_63AA37
0x63AA2E: push    0
0x63AA30: mov     ecx, edi
0x63AA32: call    sub_5E6D70
0x63AA37: test    ebx, ebx
0x63AA39: jz      short loc_63AA8A
0x63AA3B: cmp     byte ptr [ebx+20h], 12h
0x63AA3F: jnz     short loc_63AA8A
0x63AA41: mov     ebp, [esi+2Ch]
0x63AA44: test    ebp, ebp
0x63AA46: jz      short loc_63AA8A
0x63AA48: mov     eax, [esi]
0x63AA4A: mov     edx, [eax+8]
0x63AA4D: mov     ecx, esi
0x63AA4F: call    edx
0x63AA51: mov     ecx, ebp; this
0x63AA53: mov     [esp+164h+var_154], eax
0x63AA57: call    Actor__GetProcessLevel
0x63AA5C: mov     ecx, [esp+164h+var_154]
0x63AA60: cmp     eax, ecx
0x63AA62: jz      short loc_63AA8A
0x63AA64: mov     eax, [edi]
0x63AA66: mov     edx, [eax+30Ch]
0x63AA6C: mov     ecx, edi
0x63AA6E: call    edx
0x63AA70: mov     eax, [esi]
0x63AA72: mov     edx, [eax+184h]
0x63AA78: mov     ecx, esi
0x63AA7A: call    edx
0x63AA7C: mov     ebx, eax
0x63AA7E: mov     eax, [esi]
0x63AA80: mov     edx, [eax+574h]
0x63AA86: mov     ecx, esi
0x63AA88: call    edx
0x63AA8A: mov     eax, [edi]
0x63AA8C: mov     edx, [eax+380h]
0x63AA92: mov     ecx, edi
0x63AA94: call    edx
0x63AA96: test    eax, eax
0x63AA98: jz      short loc_63AAC8
0x63AA9A: mov     eax, [edi]
0x63AA9C: mov     edx, [eax+18Ch]
0x63AAA2: mov     ecx, edi
0x63AAA4: call    edx
0x63AAA6: test    eax, eax
0x63AAA8: jnz     short loc_63AAC8
0x63AAAA: test    ebx, ebx
0x63AAAC: jz      short loc_63AAC8
0x63AAAE: cmp     byte ptr [ebx+20h], 16h
0x63AAB2: jz      short loc_63AAC8
0x63AAB4: mov     eax, [edi]
0x63AAB6: mov     edx, [eax+380h]
0x63AABC: mov     ecx, edi
0x63AABE: call    edx
0x63AAC0: push    eax
0x63AAC1: mov     ecx, edi
0x63AAC3: call    sub_602050
0x63AAC8: mov     eax, [edi]
0x63AACA: mov     edx, [eax+380h]
0x63AAD0: mov     ecx, edi
0x63AAD2: call    edx
0x63AAD4: test    eax, eax
0x63AAD6: jnz     loc_63AB90
0x63AADC: mov     eax, [edi]
0x63AADE: mov     edx, [eax+358h]
0x63AAE4: mov     ecx, edi
0x63AAE6: call    edx
0x63AAE8: test    al, al
0x63AAEA: jnz     loc_63AB90
0x63AAF0: mov     eax, [esi]
0x63AAF2: mov     edx, [eax+36Ch]
0x63AAF8: mov     ecx, esi
0x63AAFA: call    edx
0x63AAFC: test    eax, eax
0x63AAFE: jz      loc_63AB90
0x63AB04: mov     eax, [esi]
0x63AB06: mov     edx, [eax+36Ch]
0x63AB0C: mov     ecx, esi
0x63AB0E: call    edx
0x63AB10: cmp     eax, 9
0x63AB13: jz      short loc_63AB90
0x63AB15: mov     eax, [esi]
0x63AB17: mov     edx, [eax+36Ch]
0x63AB1D: mov     ecx, esi
0x63AB1F: call    edx
0x63AB21: cmp     eax, 4
0x63AB24: jz      short loc_63AB90
0x63AB26: test    ebx, ebx
0x63AB28: jz      short loc_63AB58
0x63AB2A: mov     eax, [esi]
0x63AB2C: mov     edx, [eax+180h]
0x63AB32: mov     ebp, [ebx+18h]
0x63AB35: mov     ecx, esi
0x63AB37: call    edx
0x63AB39: mov     ecx, ds:0B152B0h[ebp*4]
0x63AB40: cmp     dword ptr [ecx+eax*4], 16h
0x63AB44: jnz     short loc_63AB58
0x63AB46: push    edi
0x63AB47: mov     ecx, esi
0x63AB49: call    sub_654F10
0x63AB4E: test    al, al
0x63AB50: jz      loc_63ADB0
0x63AB56: jmp     short loc_63AB90
0x63AB58: mov     edx, [esi]
0x63AB5A: mov     eax, [edx+1B4h]
0x63AB60: push    edi
0x63AB61: mov     ecx, esi
0x63AB63: call    eax
0x63AB65: test    al, al
0x63AB67: jnz     short loc_63AB90
0x63AB69: cmp     dword ptr [esi+120h], 0
0x63AB70: mov     edx, [esi]
0x63AB72: mov     ecx, esi
0x63AB74: jz      short loc_63AB81
0x63AB76: mov     eax, [edx+1B0h]
0x63AB7C: push    edi
0x63AB7D: call    eax
0x63AB7F: jmp     short loc_63AB90
0x63AB81: mov     eax, [edx+370h]
0x63AB87: push    7Fh
0x63AB89: push    0
0x63AB8B: push    0
0x63AB8D: push    edi
0x63AB8E: call    eax
0x63AB90: test    ebx, ebx
0x63AB92: jz      loc_63AD44
0x63AB98: cmp     dword ptr [ebx+18h], 0FFFFFFFFh
0x63AB9C: jz      loc_63AD44
0x63ABA2: push    1
0x63ABA4: call    sub_571F90
0x63ABA9: mov     ecx, ds:0B139A4h
0x63ABAF: sub     ecx, ds:0B13980h
0x63ABB5: add     esp, 4
0x63ABB8: mov     [esp+164h+var_154], ecx
0x63ABBC: fild    [esp+164h+var_154]
0x63ABC0: push    1; int
0x63ABC2: sub     esp, 8
0x63ABC5: fstp    [esp+170h+var_16C]; float
0x63ABC9: mov     ecx, eax
0x63ABCB: fild    dword ptr ds:0B1399Ch
0x63ABD1: fstp    [esp+170h+var_170]; float
0x63ABD4: call    sub_571720
0x63ABD9: mov     ecx, [ebx+24h]
0x63ABDC: test    ecx, ecx
0x63ABDE: mov     [esp+164h+var_14C], eax
0x63ABE2: jz      short loc_63AC46
0x63ABE4: call    sub_569A10
0x63ABE9: test    al, al
0x63ABEB: jz      short loc_63AC46
0x63ABED: mov     edx, [esi]
0x63ABEF: mov     eax, [edx+180h]
0x63ABF5: mov     ebp, [ebx+18h]
0x63ABF8: mov     ecx, esi
0x63ABFA: call    eax
0x63ABFC: mov     ecx, ds:0B152B0h[ebp*4]
0x63AC03: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x63AC07: jz      short loc_63AC46
0x63AC09: mov     ecx, [esi+30h]
0x63AC0C: test    ecx, ecx
0x63AC0E: jnz     short loc_63AC1F
0x63AC10: mov     edx, [esi]
0x63AC12: mov     eax, [edx+55Ch]
0x63AC18: push    edi
0x63AC19: mov     ecx, esi
0x63AC1B: call    eax
0x63AC1D: jmp     short loc_63AC38
0x63AC1F: call    sub_4D74B0
0x63AC24: test    al, al
0x63AC26: jz      short loc_63AC46
0x63AC28: mov     edx, [edi]
0x63AC2A: mov     eax, [edx+18Ch]
0x63AC30: mov     ecx, edi
0x63AC32: call    eax
0x63AC34: test    eax, eax
0x63AC36: jnz     short loc_63AC46
0x63AC38: mov     edx, [esi]
0x63AC3A: mov     eax, [edx+17Ch]
0x63AC40: push    0
0x63AC42: mov     ecx, esi
0x63AC44: call    eax
0x63AC46: cmp     edi, ds:0B333C4h
0x63AC4C: jz      short loc_63ACB7
0x63AC4E: test    byte ptr [esi+1FCh], 0Fh
0x63AC55: jz      short loc_63ACB7
0x63AC57: mov     edx, [esi]
0x63AC59: mov     eax, [edx+36Ch]
0x63AC5F: mov     ecx, esi
0x63AC61: call    eax
0x63AC63: cmp     eax, 9
0x63AC66: jz      short loc_63AC79
0x63AC68: mov     edx, [esi]
0x63AC6A: mov     eax, [edx+36Ch]
0x63AC70: mov     ecx, esi
0x63AC72: call    eax
0x63AC74: cmp     eax, 4
0x63AC77: jnz     short loc_63ACB7
0x63AC79: mov     edx, [edi]
0x63AC7B: mov     eax, [edx+380h]
0x63AC81: mov     ecx, edi
0x63AC83: call    eax
0x63AC85: test    eax, eax
0x63AC87: jz      short loc_63AC92
0x63AC89: mov     ecx, edi
0x63AC8B: call    sub_5F0410
0x63AC90: jmp     short loc_63ACB7
0x63AC92: cmp     dword ptr [esi+120h], 0
0x63AC99: jz      short loc_63ACA4
0x63AC9B: mov     ecx, edi
0x63AC9D: call    sub_5E4140
0x63ACA2: jmp     short loc_63ACB7
0x63ACA4: mov     edx, [esi]
0x63ACA6: mov     eax, [edx+370h]
0x63ACAC: push    7Fh
0x63ACAE: push    0
0x63ACB0: push    0
0x63ACB2: push    edi
0x63ACB3: mov     ecx, esi
0x63ACB5: call    eax
0x63ACB7: mov     edx, [esi]
0x63ACB9: mov     eax, [edx+180h]
0x63ACBF: mov     ebp, [ebx+18h]
0x63ACC2: mov     ecx, esi
0x63ACC4: call    eax
0x63ACC6: mov     ecx, ds:0B152B0h[ebp*4]
0x63ACCD: mov     eax, [ecx+eax*4]
0x63ACD0: cmp     eax, 2Ch; switch 45 cases
0x63ACD3: ja      short def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63ACD5: jmp     ds:jpt_63ACD5[eax*4]; switch jump
0x63ACDC: mov     eax, [esp+164h+var_150]; jumptable 0063ACD5 case 0
0x63ACE0: mov     edx, [esi]
0x63ACE2: mov     edx, [edx+58Ch]
0x63ACE8: push    0FFFFFFFFh
0x63ACEA: push    1
0x63ACEC: push    eax
0x63ACED: push    edi
0x63ACEE: mov     ecx, esi
0x63ACF0: call    edx
0x63ACF2: jmp     short def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63ACF4: mov     eax, [esi]; jumptable 0063ACD5 case 40
0x63ACF6: mov     edx, [eax+540h]
0x63ACFC: push    edi
0x63ACFD: mov     ecx, esi
0x63ACFF: call    edx
0x63AD01: mov     edx, [esi]; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AD03: mov     eax, [edx+36Ch]
0x63AD09: mov     ecx, esi
0x63AD0B: call    eax
0x63AD0D: cmp     eax, 4
0x63AD10: jnz     short loc_63AD44
0x63AD12: mov     edx, [edi]
0x63AD14: mov     eax, [edx+380h]
0x63AD1A: mov     ecx, edi
0x63AD1C: call    eax
0x63AD1E: test    eax, eax
0x63AD20: jz      short loc_63AD44
0x63AD22: mov     edx, [edi]
0x63AD24: mov     eax, [edx+380h]
0x63AD2A: mov     ecx, edi
0x63AD2C: call    eax
0x63AD2E: fld     dword ptr ds:0B33E9Ch
0x63AD34: mov     edx, [eax]
0x63AD36: push    ecx
0x63AD37: mov     ecx, eax
0x63AD39: fstp    [esp+168h+var_168]
0x63AD3C: mov     eax, [edx+228h]
0x63AD42: call    eax
0x63AD44: mov     edx, [edi]
0x63AD46: mov     eax, [edx+154h]
0x63AD4C: mov     ecx, edi
0x63AD4E: call    eax
0x63AD50: test    eax, eax
0x63AD52: jz      short loc_63AD79
0x63AD54: mov     eax, ds:0B333C4h
0x63AD59: cmp     edi, eax
0x63AD5B: jnz     short loc_63AD66
0x63AD5D: cmp     byte ptr [eax+588h], 0
0x63AD64: jz      short loc_63AD79
0x63AD66: fld1
0x63AD68: sub     esp, 8
0x63AD6B: fst     [esp+16Ch+var_168]; int
0x63AD6F: mov     ecx, edi
0x63AD71: fstp    [esp+16Ch+var_16C]; float
0x63AD74: call    Actor_ProcessAction
0x63AD79: cmp     byte ptr ds:0B15800h, 0
0x63AD80: jz      short loc_63ADA2
0x63AD82: mov     ecx, ds:0B3BF80h
0x63AD88: test    ecx, ecx
0x63AD8A: jz      short loc_63ADA2
0x63AD8C: push    edi
0x63AD8D: call    sub_6825C0
0x63AD92: test    al, al
0x63AD94: jnz     short loc_63ADB0
0x63AD96: mov     ecx, ds:0B3BF80h
0x63AD9C: push    edi
0x63AD9D: call    sub_6826D0
0x63ADA2: mov     ecx, [esp+164h+var_140]
0x63ADA6: mov     ecx, [ecx+58h]
0x63ADA9: mov     edx, [ecx]
0x63ADAB: mov     eax, [edx+20h]
0x63ADAE: call    eax
0x63ADB0: pop     ebp
0x63ADB1: pop     edi
0x63ADB2: mov     ecx, [esp+15Ch+var_4]
0x63ADB9: pop     esi
0x63ADBA: pop     ebx
0x63ADBB: xor     ecx, esp
0x63ADBD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x63ADC2: add     esp, 154h
0x63ADC8: retn    4
0x63ADCB: mov     eax, [esi]; jumptable 0063ACD5 case 30
0x63ADCD: mov     edx, [eax+530h]
0x63ADD3: push    edi
0x63ADD4: mov     ecx, esi
0x63ADD6: jmp     loc_63ACFF
0x63ADDB: push    edi; jumptable 0063ACD5 case 33
0x63ADDC: mov     ecx, esi
0x63ADDE: call    sub_628330
0x63ADE3: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63ADE8: mov     eax, [esi]; jumptable 0063ACD5 case 37
0x63ADEA: mov     edx, [eax+588h]
0x63ADF0: push    0
0x63ADF2: push    1
0x63ADF4: push    edi
0x63ADF5: mov     ecx, esi
0x63ADF7: call    edx
0x63ADF9: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63ADFE: mov     eax, [esi]; jumptable 0063ACD5 case 39
0x63AE00: mov     edx, [eax+544h]
0x63AE06: push    edi
0x63AE07: mov     ecx, esi
0x63AE09: jmp     loc_63ACFF
0x63AE0E: mov     eax, [esi]; jumptable 0063ACD5 case 41
0x63AE10: mov     edx, [eax+53Ch]
0x63AE16: push    edi
0x63AE17: mov     ecx, esi
0x63AE19: jmp     loc_63ACFF
0x63AE1E: mov     eax, [esi]; jumptable 0063ACD5 case 2
0x63AE20: mov     edx, [eax+51Ch]
0x63AE26: push    1
0x63AE28: push    edi
0x63AE29: mov     ecx, esi
0x63AE2B: call    edx
0x63AE2D: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AE32: mov     eax, [esi]; jumptable 0063ACD5 case 35
0x63AE34: mov     edx, [eax+534h]
0x63AE3A: push    edi
0x63AE3B: mov     ecx, esi
0x63AE3D: jmp     loc_63ACFF
0x63AE42: mov     eax, [esi]; jumptable 0063ACD5 case 27
0x63AE44: mov     edx, [eax+548h]
0x63AE4A: push    edi
0x63AE4B: mov     ecx, esi
0x63AE4D: jmp     loc_63ACFF
0x63AE52: mov     eax, [esi]; jumptable 0063ACD5 case 28
0x63AE54: mov     edx, [eax+550h]
0x63AE5A: push    edi
0x63AE5B: mov     ecx, esi
0x63AE5D: jmp     loc_63ACFF
0x63AE62: mov     eax, [esi]; jumptable 0063ACD5 case 26
0x63AE64: mov     edx, [eax+54Ch]
0x63AE6A: push    edi
0x63AE6B: mov     ecx, esi
0x63AE6D: jmp     loc_63ACFF
0x63AE72: mov     eax, [esi]; jumptable 0063ACD5 case 3
0x63AE74: mov     edx, [eax+524h]
0x63AE7A: push    edi
0x63AE7B: mov     ecx, esi
0x63AE7D: jmp     loc_63ACFF
0x63AE82: mov     eax, [esi]; jumptable 0063ACD5 case 36
0x63AE84: mov     edx, [eax+538h]
0x63AE8A: push    edi
0x63AE8B: mov     ecx, esi
0x63AE8D: jmp     loc_63ACFF
0x63AE92: push    edi; jumptable 0063ACD5 case 38
0x63AE93: mov     ecx, esi
0x63AE95: call    sub_62B5C0
0x63AE9A: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AE9F: mov     eax, [esi]; jumptable 0063ACD5 case 29
0x63AEA1: mov     edx, [eax+520h]
0x63AEA7: push    edi
0x63AEA8: mov     ecx, esi
0x63AEAA: jmp     loc_63ACFF
0x63AEAF: mov     eax, [esi]; jumptable 0063ACD5 case 31
0x63AEB1: mov     edx, [eax+528h]
0x63AEB7: push    edi
0x63AEB8: mov     ecx, esi
0x63AEBA: jmp     loc_63ACFF
0x63AEBF: mov     eax, [esi]; jumptable 0063ACD5 case 32
0x63AEC1: mov     edx, [eax+52Ch]
0x63AEC7: push    edi
0x63AEC8: mov     ecx, esi
0x63AECA: jmp     loc_63ACFF
0x63AECF: push    edi; jumptable 0063ACD5 case 43
0x63AED0: mov     ecx, esi
0x63AED2: call    sub_630100
0x63AED7: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AEDC: mov     eax, [esi]; jumptable 0063ACD5 case 34
0x63AEDE: mov     edx, [eax+2A8h]
0x63AEE4: mov     ecx, esi
0x63AEE6: call    edx
0x63AEE8: test    eax, eax
0x63AEEA: jnz     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AEF0: mov     eax, [esi]
0x63AEF2: mov     edx, [eax+188h]
0x63AEF8: push    1
0x63AEFA: push    edi
0x63AEFB: mov     ecx, esi
0x63AEFD: call    edx
0x63AEFF: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AF04: cmp     dword ptr [esi+2Ch], 0; jumptable 0063ACD5 case 13
0x63AF08: jnz     short loc_63AF17
0x63AF0A: mov     eax, [esi]
0x63AF0C: mov     edx, [eax+558h]
0x63AF12: push    edi; int
0x63AF13: mov     ecx, esi
0x63AF15: call    edx
0x63AF17: mov     ebp, [esi+2Ch]
0x63AF1A: test    ebp, ebp
0x63AF1C: jnz     short loc_63AF3B
0x63AF1E: mov     eax, [esi]
0x63AF20: mov     edx, [eax+188h]
0x63AF26: push    1
0x63AF28: push    edi
0x63AF29: mov     ecx, esi
0x63AF2B: call    edx
0x63AF2D: push    30h ; '0'
0x63AF2F: mov     ecx, edi
0x63AF31: call    sub_5E05F0
0x63AF36: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AF3B: mov     al, [ebx+20h]
0x63AF3E: cmp     al, 12h
0x63AF40: mov     ecx, ds:0B333C4h
0x63AF46: jnz     short loc_63AF61
0x63AF48: cmp     ebp, ecx
0x63AF4A: jnz     short loc_63AF61
0x63AF4C: mov     ecx, edi; int
0x63AF4E: call    sub_5EAE70
0x63AF53: push    30h ; '0'
0x63AF55: mov     ecx, edi
0x63AF57: call    sub_5E05F0
0x63AF5C: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AF61: cmp     al, 1
0x63AF63: jnz     short loc_63AF93
0x63AF65: call    sub_663A00
0x63AF6A: cmp     eax, ds:0B36A80h
0x63AF70: jge     loc_63B238
0x63AF76: mov     eax, [esi]
0x63AF78: mov     edx, [eax+188h]
0x63AF7E: push    1
0x63AF80: push    edi
0x63AF81: mov     ecx, esi
0x63AF83: call    edx
0x63AF85: push    30h ; '0'
0x63AF87: mov     ecx, edi
0x63AF89: call    sub_5E05F0
0x63AF8E: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63AF93: mov     ecx, [ebp+8]
0x63AF96: mov     eax, ecx
0x63AF98: shr     eax, 5
0x63AF9B: and     al, 1
0x63AF9D: jnz     loc_63B20B
0x63AFA3: shr     ecx, 0Bh
0x63AFA6: test    cl, 1
0x63AFA9: jnz     loc_63B20B
0x63AFAF: mov     eax, [ebp+0]
0x63AFB2: mov     edx, [eax+198h]
0x63AFB8: push    1
0x63AFBA: mov     ecx, ebp
0x63AFBC: call    edx
0x63AFBE: test    al, al
0x63AFC0: jz      short loc_63AFE4
0x63AFC2: mov     eax, [esi+2Ch]
0x63AFC5: push    1
0x63AFC7: push    eax
0x63AFC8: mov     ecx, ebx
0x63AFCA: call    sub_566870
0x63AFCF: mov     edx, [edi]
0x63AFD1: mov     eax, [esi+2Ch]
0x63AFD4: mov     edx, [edx+2F8h]
0x63AFDA: push    eax
0x63AFDB: mov     ecx, edi
0x63AFDD: call    edx
0x63AFDF: jmp     loc_63ADB0
0x63AFE4: cmp     byte ptr [ebx+20h], 12h
0x63AFE8: jz      loc_63B238
0x63AFEE: test    byte ptr [ebx+1Eh], 1
0x63AFF2: jnz     loc_63B238
0x63AFF8: mov     ecx, edi
0x63AFFA: call    sub_5E0380
0x63AFFF: cmp     byte ptr [eax+20h], 1
0x63B003: jnz     short loc_63B054
0x63B005: mov     ecx, [ebx+28h]
0x63B008: call    sub_452A60
0x63B00D: mov     [esp+164h+var_154], eax
0x63B011: fild    [esp+164h+var_154]
0x63B015: mov     eax, [esi+2Ch]
0x63B018: push    0; unk000
0x63B01A: push    eax; a2
0x63B01B: fstp    [esp+16Ch+var_154]
0x63B01F: mov     ecx, edi; this
0x63B021: call    TesObjectREF_GetDistance
0x63B026: fld     [esp+164h+var_154]
0x63B02A: fcompp
0x63B02C: fnstsw  ax
0x63B02E: test    ah, 5
0x63B031: jp      loc_63B238
0x63B037: mov     edx, [esi]
0x63B039: mov     eax, [edx+188h]
0x63B03F: push    1
0x63B041: push    edi
0x63B042: mov     ecx, esi
0x63B044: call    eax
0x63B046: push    30h ; '0'
0x63B048: mov     ecx, edi
0x63B04A: call    sub_5E05F0
0x63B04F: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B054: cmp     dword ptr [ebx+18h], 16h
0x63B058: jnz     short loc_63B0AE
0x63B05A: mov     ecx, offset TimeGlobals
0x63B05F: call    TimeGlobals_GetGameHour
0x63B064: fstp    [esp+164h+var_154]
0x63B068: mov     ecx, offset unk_B36B40
0x63B06D: call    GameSetting_GetSafeFloatPointer
0x63B072: fld     [esp+164h+var_154]
0x63B076: fld     dword ptr [eax]
0x63B078: fadd    dword ptr [esi+198h]
0x63B07E: fcomp   st(1)
0x63B080: fnstsw  ax
0x63B082: test    ah, 41h
0x63B085: jp      loc_63B236
0x63B08B: mov     edx, [esi]
0x63B08D: fstp    dword ptr [esi+198h]
0x63B093: mov     eax, [edx+188h]
0x63B099: push    0FFFFFFFFh
0x63B09B: push    edi
0x63B09C: mov     ecx, esi
0x63B09E: call    eax
0x63B0A0: push    30h ; '0'
0x63B0A2: mov     ecx, edi
0x63B0A4: call    sub_5E05F0
0x63B0A9: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B0AE: mov     ecx, edi
0x63B0B0: call    sub_5E0380
0x63B0B5: cmp     byte ptr [eax+20h], 2
0x63B0B9: jnz     short loc_63B10B
0x63B0BB: mov     ecx, [esi+2Ch]
0x63B0BE: test    ecx, ecx
0x63B0C0: jz      short loc_63B10B
0x63B0C2: mov     edx, [ecx]
0x63B0C4: mov     eax, [edx+190h]
0x63B0CA: call    eax
0x63B0CC: test    al, al
0x63B0CE: jz      short loc_63B10B
0x63B0D0: mov     ebp, [esi+2Ch]
0x63B0D3: test    ebp, ebp
0x63B0D5: jz      short loc_63B10B
0x63B0D7: cmp     ebp, ds:0B333C4h
0x63B0DD: jz      short loc_63B10B
0x63B0DF: mov     ecx, ebp
0x63B0E1: call    sub_5E0380
0x63B0E6: test    eax, eax
0x63B0E8: jz      short loc_63B0FC
0x63B0EA: cmp     byte ptr [eax+20h], 1
0x63B0EE: jnz     short loc_63B0FC
0x63B0F0: mov     ecx, [ebp+58h]
0x63B0F3: mov     dword ptr [ecx+4], 1
0x63B0FA: jmp     short loc_63B10B
0x63B0FC: mov     edx, [esi]
0x63B0FE: mov     eax, [edx+188h]
0x63B104: push    0FFFFFFFEh
0x63B106: push    edi
0x63B107: mov     ecx, esi
0x63B109: call    eax
0x63B10B: mov     ecx, [ebx+28h]
0x63B10E: call    sub_452A60
0x63B113: test    eax, eax
0x63B115: mov     [esp+164h+var_14C], eax
0x63B119: jg      short loc_63B123
0x63B11B: mov     [esp+164h+var_14C], 0C8h ; 'È'
0x63B123: mov     ecx, [esi+2Ch]
0x63B126: cmp     ecx, ds:0B333C4h
0x63B12C: jnz     short loc_63B134
0x63B12E: fild    [esp+164h+var_14C]
0x63B132: jmp     short loc_63B164
0x63B134: mov     ecx, edi; this
0x63B136: call    TESObjectREFR_GetParentCell
0x63B13B: mov     ecx, eax; this
0x63B13D: call    TESObjectCELL_IsInterior
0x63B142: test    al, al
0x63B144: jz      short loc_63B154
0x63B146: mov     ecx, offset flt_B36AA0
0x63B14B: call    GameSetting_GetSafeFloatPointer
0x63B150: fld     dword ptr [eax]
0x63B152: jmp     short loc_63B164
0x63B154: mov     ecx, offset flt_B36A98
0x63B159: call    GameSetting_GetSafeFloatPointer
0x63B15E: fild    [esp+164h+var_14C]
0x63B162: fmul    dword ptr [eax]
0x63B164: mov     ecx, [esi+2Ch]
0x63B167: fstp    [esp+164h+var_150]
0x63B16B: mov     edx, [ecx]
0x63B16D: mov     eax, [edx+190h]
0x63B173: call    eax
0x63B175: test    al, al
0x63B177: jz      short loc_63B1CE
0x63B179: mov     ebx, [esi+2Ch]
0x63B17C: test    ebx, ebx
0x63B17E: jz      short loc_63B1CE
0x63B180: mov     ecx, ebx
0x63B182: call    sub_5E05B0
0x63B187: test    al, al
0x63B189: jnz     short loc_63B1CE
0x63B18B: cmp     ebx, ds:0B333C4h
0x63B191: jz      short loc_63B1CE
0x63B193: mov     ecx, [esi+2Ch]
0x63B196: push    0; unk000
0x63B198: push    ecx; a2
0x63B199: mov     ecx, edi; this
0x63B19B: call    TesObjectREF_GetDistance
0x63B1A0: fld     [esp+164h+var_150]
0x63B1A4: fcompp
0x63B1A6: fnstsw  ax
0x63B1A8: test    ah, 1
0x63B1AB: jnz     loc_63B238
0x63B1B1: mov     edx, [esi]
0x63B1B3: mov     eax, [edx+188h]
0x63B1B9: push    1
0x63B1BB: push    edi
0x63B1BC: mov     ecx, esi
0x63B1BE: call    eax
0x63B1C0: push    30h ; '0'
0x63B1C2: mov     ecx, edi
0x63B1C4: call    sub_5E05F0
0x63B1C9: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B1CE: mov     ecx, [esi+2Ch]
0x63B1D1: push    0; unk000
0x63B1D3: push    ecx; a2
0x63B1D4: mov     ecx, edi; this
0x63B1D6: call    TesObjectREF_GetDistance
0x63B1DB: fld     [esp+164h+var_150]
0x63B1DF: fmul    qword ptr ds:0A2FAA0h
0x63B1E5: fcompp
0x63B1E7: fnstsw  ax
0x63B1E9: test    ah, 1
0x63B1EC: jnz     short loc_63B238
0x63B1EE: mov     edx, [esi]
0x63B1F0: mov     eax, [edx+188h]
0x63B1F6: push    1
0x63B1F8: push    edi
0x63B1F9: mov     ecx, esi
0x63B1FB: call    eax
0x63B1FD: push    30h ; '0'
0x63B1FF: mov     ecx, edi
0x63B201: call    sub_5E05F0
0x63B206: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B20B: test    al, al
0x63B20D: jz      short loc_63B219
0x63B20F: push    1
0x63B211: push    ebp
0x63B212: mov     ecx, ebx
0x63B214: call    sub_566870
0x63B219: mov     edx, [esi]
0x63B21B: mov     eax, [edx+188h]
0x63B221: push    1
0x63B223: push    edi
0x63B224: mov     ecx, esi
0x63B226: call    eax
0x63B228: push    30h ; '0'
0x63B22A: mov     ecx, edi
0x63B22C: call    sub_5E05F0
0x63B231: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B236: fstp    st
0x63B238: push    30h ; '0'
0x63B23A: mov     ecx, edi
0x63B23C: call    sub_5E05F0
0x63B241: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B246: mov     edx, [esi]; jumptable 0063ACD5 case 12
0x63B248: mov     eax, [edx+584h]
0x63B24E: push    edi
0x63B24F: mov     ecx, esi
0x63B251: call    eax
0x63B253: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B258: mov     edx, [esi]; jumptable 0063ACD5 case 16
0x63B25A: mov     eax, [edx+1A4h]
0x63B260: push    1
0x63B262: push    0
0x63B264: push    0
0x63B266: push    0
0x63B268: push    edi
0x63B269: mov     ecx, esi
0x63B26B: call    eax
0x63B26D: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B272: mov     edx, [esi]; jumptable 0063ACD5 case 20
0x63B274: mov     eax, [edx+1ACh]
0x63B27A: push    edi
0x63B27B: mov     ecx, esi
0x63B27D: call    eax
0x63B27F: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B284: push    edi; jumptable 0063ACD5 case 21
0x63B285: mov     ecx, esi
0x63B287: call    sub_62A0E0
0x63B28C: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B291: push    edi; jumptable 0063ACD5 case 22
0x63B292: mov     ecx, esi
0x63B294: call    sub_654F10
0x63B299: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B29E: mov     edx, [esi]; jumptable 0063ACD5 case 24
0x63B2A0: mov     eax, [edx+564h]
0x63B2A6: mov     ecx, esi
0x63B2A8: push    edi
0x63B2A9: call    eax
0x63B2AB: test    al, al
0x63B2AD: jnz     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B2B3: mov     edx, [esi]
0x63B2B5: mov     eax, [edx+188h]
0x63B2BB: push    1
0x63B2BD: mov     ecx, esi
0x63B2BF: push    edi
0x63B2C0: call    eax
0x63B2C2: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B2C7: mov     edx, [esi]; jumptable 0063ACD5 case 23
0x63B2C9: mov     eax, [edx+560h]
0x63B2CF: jmp     short loc_63B2A6
0x63B2D1: cmp     dword ptr [esi+2Ch], 0; jumptable 0063ACD5 case 17
0x63B2D5: jnz     short loc_63B30F
0x63B2D7: mov     edx, [esi]
0x63B2D9: mov     eax, [edx+558h]
0x63B2DF: push    edi
0x63B2E0: mov     ecx, esi
0x63B2E2: call    eax
0x63B2E4: cmp     dword ptr [esi+2Ch], 0
0x63B2E8: jnz     short loc_63B30F
0x63B2EA: mov     edx, [esi]
0x63B2EC: mov     eax, [edx+188h]
0x63B2F2: push    1
0x63B2F4: push    edi
0x63B2F5: mov     ecx, esi
0x63B2F7: call    eax
0x63B2F9: cmp     byte ptr [esi+0D0h], 0
0x63B300: jnz     short loc_63B30F
0x63B302: mov     edx, [esi]
0x63B304: mov     eax, [edx+194h]
0x63B30A: push    edi
0x63B30B: mov     ecx, esi
0x63B30D: call    eax
0x63B30F: mov     eax, [esi+2Ch]
0x63B312: test    eax, eax
0x63B314: jz      short loc_63B2B3
0x63B316: cmp     eax, ds:0B333C4h
0x63B31C: jz      short loc_63B2B3
0x63B31E: mov     edx, [esi]
0x63B320: mov     eax, [edx+84h]
0x63B326: push    0
0x63B328: push    ebx
0x63B329: push    edi
0x63B32A: mov     ecx, esi
0x63B32C: call    eax
0x63B32E: mov     edx, [esi]
0x63B330: mov     eax, [edx+188h]
0x63B336: push    1
0x63B338: mov     ecx, esi
0x63B33A: push    edi
0x63B33B: call    eax
0x63B33D: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B342: mov     edx, [esi]; jumptable 0063ACD5 case 14
0x63B344: mov     eax, [edx+51Ch]
0x63B34A: push    0
0x63B34C: mov     ecx, esi
0x63B34E: push    edi
0x63B34F: call    eax
0x63B351: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B356: push    edi; jumptable 0063ACD5 case 1
0x63B357: mov     ecx, esi
0x63B359: call    sub_6384B0
0x63B35E: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B363: mov     edx, [esi]; jumptable 0063ACD5 case 4
0x63B365: mov     eax, [edx+50Ch]
0x63B36B: push    edi
0x63B36C: mov     ecx, esi
0x63B36E: call    eax
0x63B370: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B375: mov     edx, [esi]; jumptable 0063ACD5 case 18
0x63B377: mov     eax, [edx+1A8h]
0x63B37D: push    edi
0x63B37E: mov     ecx, esi
0x63B380: call    eax
0x63B382: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B387: mov     edx, [esi]; jumptable 0063ACD5 case 5
0x63B389: mov     eax, [edx+510h]
0x63B38F: push    edi
0x63B390: mov     ecx, esi
0x63B392: call    eax
0x63B394: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B399: mov     edx, [esi]; jumptable 0063ACD5 case 6
0x63B39B: mov     eax, [edx+198h]
0x63B3A1: push    0
0x63B3A3: push    0FFFFFFFFh
0x63B3A5: push    1
0x63B3A7: push    edi
0x63B3A8: mov     ecx, esi
0x63B3AA: call    eax
0x63B3AC: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B3B1: mov     edx, [esi]; jumptable 0063ACD5 case 7
0x63B3B3: mov     eax, [edx+508h]
0x63B3B9: push    edi
0x63B3BA: mov     ecx, esi
0x63B3BC: call    eax
0x63B3BE: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B3C3: mov     edx, [esi]; jumptable 0063ACD5 case 8
0x63B3C5: mov     eax, [edx+518h]
0x63B3CB: push    edi
0x63B3CC: mov     ecx, esi
0x63B3CE: call    eax
0x63B3D0: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B3D5: mov     ebx, [esi+2Ch]; jumptable 0063ACD5 case 15
0x63B3D8: mov     edx, [esi]
0x63B3DA: mov     eax, [edx+3B0h]
0x63B3E0: push    ebx
0x63B3E1: mov     ecx, esi
0x63B3E3: call    eax
0x63B3E5: test    ebx, ebx
0x63B3E7: jz      short loc_63B405
0x63B3E9: test    eax, eax
0x63B3EB: jnz     short loc_63B3FE
0x63B3ED: mov     edx, [esi]
0x63B3EF: mov     eax, [edx+3B4h]
0x63B3F5: push    3
0x63B3F7: push    ebx
0x63B3F8: mov     ecx, esi
0x63B3FA: call    eax
0x63B3FC: jmp     short loc_63B405
0x63B3FE: mov     dword ptr [eax+4], 3
0x63B405: mov     edx, [esi]
0x63B407: mov     eax, [edx+19Ch]
0x63B40D: push    0FFFFFFFFh
0x63B40F: push    1
0x63B411: push    0
0x63B413: push    edi
0x63B414: mov     ecx, esi
0x63B416: call    eax
0x63B418: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B41D: mov     edx, [esi]; jumptable 0063ACD5 case 10
0x63B41F: mov     eax, [edx+1A0h]
0x63B425: push    edi
0x63B426: mov     ecx, esi
0x63B428: call    eax
0x63B42A: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B42F: push    edi; jumptable 0063ACD5 case 42
0x63B430: mov     ecx, esi
0x63B432: call    sub_633DF0
0x63B437: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B43C: cmp     dword ptr [esi+0C0h], 0; jumptable 0063ACD5 case 44
0x63B443: jnz     short loc_63B44D
0x63B445: fldz
0x63B447: fstp    dword ptr [esi+260h]
0x63B44D: mov     eax, [ebx+18h]
0x63B450: cmp     eax, 1
0x63B453: jz      loc_63B6D3
0x63B459: cmp     eax, 5
0x63B45C: jz      loc_63B6D3
0x63B462: cmp     eax, 4
0x63B465: jz      loc_63B6D3
0x63B46B: cmp     eax, 1Eh
0x63B46E: jnz     short loc_63B494
0x63B470: mov     ecx, [ebx+28h]
0x63B473: test    ecx, ecx
0x63B475: jz      short loc_63B494
0x63B477: call    sub_452A60
0x63B47C: test    eax, eax
0x63B47E: jnz     short loc_63B494
0x63B480: mov     edx, [esi]
0x63B482: mov     eax, [edx+188h]
0x63B488: push    0FFFFFFFDh
0x63B48A: push    edi
0x63B48B: mov     ecx, esi
0x63B48D: call    eax
0x63B48F: jmp     loc_63ADB0
0x63B494: mov     ecx, [ebx+18h]
0x63B497: test    ecx, ecx
0x63B499: jnz     loc_63B61D
0x63B49F: fld     dword ptr ds:0A30634h
0x63B4A5: push    ecx
0x63B4A6: fstp    [esp+168h+var_168]; float
0x63B4A9: push    ecx; char
0x63B4AA: push    edi; int
0x63B4AB: mov     ecx, ebx
0x63B4AD: call    sub_566DC0
0x63B4B2: test    al, al
0x63B4B4: jz      loc_63B6D3
0x63B4BA: mov     ecx, [ebx+24h]
0x63B4BD: xor     ebp, ebp
0x63B4BF: test    ecx, ecx
0x63B4C1: jz      short loc_63B4CA
0x63B4C3: call    sub_5697E0
0x63B4C8: mov     ebp, eax
0x63B4CA: mov     eax, [esi+30h]
0x63B4CD: test    eax, eax
0x63B4CF: jz      short loc_63B4D3
0x63B4D1: mov     ebp, eax
0x63B4D3: test    ebp, ebp
0x63B4D5: jz      short loc_63B4EC
0x63B4D7: mov     edx, [ebp+0]
0x63B4DA: mov     eax, [edx+170h]
0x63B4E0: mov     ecx, ebp
0x63B4E2: call    eax
0x63B4E4: cmp     eax, ds:0B35EB0h
0x63B4EA: jz      short loc_63B505
0x63B4EC: mov     ecx, [ebx+24h]
0x63B4EF: test    ecx, ecx
0x63B4F1: jz      loc_63B651
0x63B4F7: call    sub_569740
0x63B4FC: cmp     eax, 3
0x63B4FF: jnz     loc_63B651
0x63B505: mov     ecx, esi
0x63B507: call    sub_64ADA0
0x63B50C: test    al, al
0x63B50E: jnz     loc_63B651
0x63B514: mov     edx, [edi]
0x63B516: mov     eax, [edx+18Ch]
0x63B51C: mov     ecx, edi
0x63B51E: call    eax
0x63B520: test    eax, eax
0x63B522: jnz     loc_63B651
0x63B528: mov     edx, [esi]
0x63B52A: mov     eax, [edx+4DCh]
0x63B530: mov     ecx, esi
0x63B532: call    eax
0x63B534: test    al, al
0x63B536: jnz     loc_63B651
0x63B53C: test    ebp, ebp
0x63B53E: jz      short loc_63B545
0x63B540: fld     dword ptr [ebp+28h]
0x63B543: jmp     short loc_63B559
0x63B545: mov     edx, [edi]
0x63B547: mov     edx, [edx+0F0h]
0x63B54D: lea     eax, [esp+164h+var_13C]
0x63B551: push    eax
0x63B552: mov     ecx, edi
0x63B554: call    edx
0x63B556: fld     dword ptr [eax+8]
0x63B559: fstp    [esp+164h+var_150]
0x63B55D: fldz
0x63B55F: fld     [esp+164h+var_150]
0x63B563: fcom    st(1)
0x63B565: fnstsw  ax
0x63B567: fstp    st(1)
0x63B569: test    ah, 5
0x63B56C: fld     qword ptr ds:0A3D5B0h
0x63B572: jp      short loc_63B591
0x63B574: call    unknown_libname_14
0x63B579: fstp    [esp+164h+var_154]
0x63B57D: fld     [esp+164h+var_154]
0x63B581: fadd    qword ptr ds:0A3D5B0h
0x63B587: fstp    [esp+164h+var_150]
0x63B58B: fld     [esp+164h+var_150]
0x63B58F: jmp     short loc_63B5B3
0x63B591: fcom    st(1)
0x63B593: fnstsw  ax
0x63B595: test    ah, 41h
0x63B598: jp      short loc_63B5B1
0x63B59A: call    unknown_libname_14
0x63B59F: fstp    [esp+164h+var_154]
0x63B5A3: fld     [esp+164h+var_154]
0x63B5A7: fstp    [esp+164h+var_150]
0x63B5AB: fld     [esp+164h+var_150]
0x63B5AF: jmp     short loc_63B5B3
0x63B5B1: fstp    st
0x63B5B3: fldz
0x63B5B5: lea     eax, [esp+164h+var_154]
0x63B5B9: push    eax; int
0x63B5BA: fstp    [esp+168h+var_154]
0x63B5BE: push    ecx
0x63B5BF: fstp    [esp+16Ch+var_16C]; float
0x63B5C2: push    edi; int
0x63B5C3: call    sub_683D80
0x63B5C8: fstp    [esp+170h+var_14C+4]
0x63B5CC: fld     [esp+170h+var_14C+4]
0x63B5D0: add     esp, 0Ch
0x63B5D3: fabs
0x63B5D5: fstp    [esp+164h+var_14C+4]
0x63B5D9: fld     [esp+164h+var_14C+4]
0x63B5DD: fild    dword ptr ds:0B36C18h
0x63B5E3: fmul    qword ptr ds:0A31C78h
0x63B5E9: fstp    [esp+164h+var_14C+4]
0x63B5ED: fld     [esp+164h+var_14C+4]
0x63B5F1: fcompp
0x63B5F3: fnstsw  ax
0x63B5F5: test    ah, 5
0x63B5F8: jp      short loc_63B612
0x63B5FA: fld     [esp+164h+var_150]
0x63B5FE: push    1; char
0x63B600: push    ecx
0x63B601: fstp    [esp+16Ch+var_16C]; float
0x63B604: push    edi; Concurrency::details::SchedulerBase *
0x63B605: call    sub_685530
0x63B60A: add     esp, 0Ch
0x63B60D: jmp     loc_63ADB0
0x63B612: push    30h ; '0'
0x63B614: mov     ecx, edi
0x63B616: call    sub_5E05F0
0x63B61B: jmp     short loc_63B651
0x63B61D: mov     al, [ebx+20h]
0x63B620: cmp     al, 3
0x63B622: jz      loc_63B6D3
0x63B628: cmp     al, 4
0x63B62A: jz      loc_63B6D3
0x63B630: cmp     ecx, 7
0x63B633: jnz     short loc_63B651
0x63B635: fld     dword ptr ds:0A30634h
0x63B63B: push    ecx
0x63B63C: fstp    [esp+168h+var_168]; float
0x63B63F: push    0; char
0x63B641: push    edi; int
0x63B642: mov     ecx, ebx
0x63B644: call    sub_566DC0
0x63B649: test    al, al
0x63B64B: jz      loc_63B6D3
0x63B651: mov     edx, [esi]
0x63B653: mov     eax, [edx+194h]
0x63B659: push    edi
0x63B65A: mov     ecx, esi
0x63B65C: call    eax
0x63B65E: cmp     byte ptr [esi+25Ch], 0
0x63B665: jz      short loc_63B689
0x63B667: mov     edx, [esi]
0x63B669: mov     eax, [edx+188h]
0x63B66F: push    0FFFFFFFFh
0x63B671: push    edi
0x63B672: mov     ecx, esi
0x63B674: call    eax
0x63B676: mov     edx, [esi]
0x63B678: mov     eax, [edx+0BCh]
0x63B67E: push    0
0x63B680: mov     ecx, esi
0x63B682: call    eax
0x63B684: jmp     loc_63ADB0
0x63B689: push    400h
0x63B68E: lea     ebp, [edi+44h]
0x63B691: push    ebp
0x63B692: push    ebx
0x63B693: call    Script_AddEventToExtraScript
0x63B698: add     esp, 0Ch
0x63B69B: mov     ecx, ebx
0x63B69D: call    sub_565DF0
0x63B6A2: test    al, al
0x63B6A4: jz      short loc_63B6B9
0x63B6A6: mov     ecx, offset TimeGlobals
0x63B6AB: call    TimeGlobals_GetGameDay
0x63B6B0: mov     ecx, ebp
0x63B6B2: push    eax
0x63B6B3: push    ebx
0x63B6B4: call    sub_41FFC0
0x63B6B9: cmp     dword ptr [ebx+18h], 1Ah
0x63B6BD: jnz     short loc_63B6E7
0x63B6BF: mov     edx, [esi]
0x63B6C1: mov     eax, [edx+0C0h]
0x63B6C7: mov     ecx, esi
0x63B6C9: call    eax
0x63B6CB: test    al, al
0x63B6CD: jnz     loc_63ADB0
0x63B6D3: mov     edx, [esi]
0x63B6D5: mov     eax, [edx+188h]
0x63B6DB: push    0FFFFFFFFh
0x63B6DD: push    edi
0x63B6DE: mov     ecx, esi
0x63B6E0: call    eax
0x63B6E2: jmp     loc_63ADB0
0x63B6E7: call    sub_579440
0x63B6EC: cmp     eax, edi
0x63B6EE: jnz     short loc_63B743
0x63B6F0: mov     ecx, [esi+8]
0x63B6F3: movsx   eax, byte ptr [ecx+20h]
0x63B6F7: mov     edx, ds:0B12988h[eax*4]
0x63B6FE: push    edx
0x63B6FF: mov     ecx, edi; this
0x63B701: call    TESObjectREFR_GetName
0x63B706: push    eax
0x63B707: lea     eax, [esp+16Ch+var_130]
0x63B70B: push    offset aSIsDoneWithS; "%s is done with %s"
0x63B710: push    eax
0x63B711: call    __sprintf
0x63B716: add     esp, 10h
0x63B719: cmp     [esp+164h+var_14C], 0
0x63B71E: jz      short loc_63B736
0x63B720: mov     ecx, [esp+164h+var_14C]
0x63B724: push    ecx; unsigned __int8 *
0x63B725: lea     edx, [esp+168h+var_130]
0x63B729: push    edx; unsigned __int8 *
0x63B72A: call    __mbsicmp
0x63B72F: add     esp, 8
0x63B732: test    eax, eax
0x63B734: jz      short loc_63B743
0x63B736: lea     eax, [esp+164h+var_130]
0x63B73A: push    eax; Format
0x63B73B: call    Interface_ConsolePrint
0x63B740: add     esp, 4
0x63B743: cmp     dword ptr [ebx+30h], 0
0x63B747: jnz     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25
0x63B74D: cmp     dword ptr [esi+0C0h], 0
0x63B754: mov     dword ptr [esi+2Ch], 0
0x63B75B: jz      short loc_63B78F
0x63B75D: mov     edx, [esi]
0x63B75F: mov     eax, [edx+388h]
0x63B765: mov     ecx, esi
0x63B767: call    eax
0x63B769: test    al, al
0x63B76B: jnz     short loc_63B78F
0x63B76D: mov     ecx, [esi+0C0h]
0x63B773: test    ecx, ecx
0x63B775: jz      short loc_63B780
0x63B777: mov     edx, [ecx]
0x63B779: mov     eax, [edx+10h]
0x63B77C: push    1
0x63B77E: call    eax
0x63B780: mov     dword ptr [esi+0C0h], 0
0x63B78A: jmp     loc_63B8CC
0x63B78F: mov     ecx, [esi+8]
0x63B792: call    sub_5660A0
0x63B797: test    al, al
0x63B799: jz      loc_63B8CC
0x63B79F: mov     ebx, [esi+8]
0x63B7A2: mov     ecx, ebx
0x63B7A4: mov     [esp+164h+var_14C+4], ebx
0x63B7A8: call    sub_567770
0x63B7AD: test    al, al
0x63B7AF: jz      loc_63B8A0
0x63B7B5: mov     edx, [edi]
0x63B7B7: mov     eax, [edx+44h]
0x63B7BA: push    30000h
0x63B7BF: mov     ecx, edi
0x63B7C1: call    eax
0x63B7C3: mov     ecx, ebp
0x63B7C5: call    ExtraDataList__GetExtraPackage
0x63B7CA: test    eax, eax
0x63B7CC: jz      loc_63B85B
0x63B7D2: mov     ebx, [edi+58h]
0x63B7D5: mov     ecx, ebp
0x63B7D7: call    ExtraDataList__GetExtraPackage
0x63B7DC: mov     [ebx+8], eax
0x63B7DF: mov     ecx, [edi+58h]
0x63B7E2: mov     edx, [ecx+8]
0x63B7E5: push    edx
0x63B7E6: mov     ecx, edi
0x63B7E8: call    sub_5E8DE0
0x63B7ED: mov     ebx, [edi+58h]
0x63B7F0: mov     ecx, ebp
0x63B7F2: call    sub_41FB40
0x63B7F7: mov     [ebx+4], eax
0x63B7FA: mov     eax, [edi+58h]
0x63B7FD: mov     ebx, [eax]
0x63B7FF: mov     ecx, ebp
0x63B801: mov     [esp+15Ch+var_144], eax
0x63B805: add     ebx, 0D0h ; 'Ð'
0x63B80B: call    sub_41FB60
0x63B810: mov     ecx, [esp+15Ch+var_144]
0x63B814: push    eax
0x63B815: mov     eax, [ebx]
0x63B817: call    eax
0x63B819: mov     ebx, [edi]
0x63B81B: mov     ecx, ebp
0x63B81D: add     ebx, 17Ch
0x63B823: call    sub_41FB80
0x63B828: mov     edx, [ebx]
0x63B82A: mov     ecx, edi
0x63B82C: push    eax
0x63B82D: call    edx
0x63B82F: mov     eax, [edi+58h]
0x63B832: mov     ebx, [eax]
0x63B834: mov     ecx, ebp
0x63B836: mov     [esp+164h+var_14C], eax
0x63B83A: add     ebx, 394h
0x63B840: call    sub_41FBA0
0x63B845: mov     ecx, [esp+164h+var_14C]
0x63B849: push    eax
0x63B84A: mov     eax, [ebx]
0x63B84C: call    eax
0x63B84E: mov     ecx, ebp
0x63B850: call    sub_4246D0
0x63B855: mov     ebx, [esp+164h+var_14C+4]
0x63B859: jmp     short loc_63B8A7
0x63B85B: mov     ecx, [edi+58h]
0x63B85E: xor     ebp, ebp
0x63B860: mov     [ecx+8], ebp
0x63B863: mov     edx, [edi+58h]
0x63B866: mov     [edx+4], ebp
0x63B869: mov     ecx, [edi+58h]
0x63B86C: mov     eax, [ecx]
0x63B86E: mov     edx, [eax+0D0h]
0x63B874: push    ebp
0x63B875: call    edx
0x63B877: mov     eax, [edi]
0x63B879: mov     edx, [eax+17Ch]
0x63B87F: push    ebp
0x63B880: mov     ecx, edi
0x63B882: call    edx
0x63B884: mov     ecx, [edi+58h]
0x63B887: mov     eax, [ecx]
0x63B889: mov     edx, [eax+394h]
0x63B88F: push    ebp
0x63B890: call    edx
0x63B892: mov     ecx, [edi+58h]
0x63B895: mov     eax, [ecx]
0x63B897: mov     edx, [eax+18h]
0x63B89A: push    ebp
0x63B89B: push    edi
0x63B89C: call    edx
0x63B89E: jmp     short loc_63B8A7
0x63B8A0: mov     dword ptr [esi+8], 0
0x63B8A7: test    ebx, ebx
0x63B8A9: jz      short loc_63B8B6
0x63B8AB: mov     eax, [ebx]
0x63B8AD: mov     edx, [eax+10h]
0x63B8B0: push    1
0x63B8B2: mov     ecx, ebx
0x63B8B4: call    edx
0x63B8B6: cmp     byte ptr [esi+0D0h], 0
0x63B8BD: jnz     short loc_63B8CC
0x63B8BF: mov     eax, [esi]
0x63B8C1: mov     edx, [eax+194h]
0x63B8C7: push    edi
0x63B8C8: mov     ecx, esi
0x63B8CA: call    edx
0x63B8CC: mov     ecx, [esi+8]
0x63B8CF: xor     ebx, ebx
0x63B8D1: cmp     ecx, ebx
0x63B8D3: jz      short loc_63B8FC
0x63B8D5: call    sub_565DF0
0x63B8DA: test    al, al
0x63B8DC: jnz     short loc_63B8F4
0x63B8DE: mov     eax, [esi+8]
0x63B8E1: mov     eax, [eax+1Ch]
0x63B8E4: mov     ecx, eax
0x63B8E6: shr     ecx, 1
0x63B8E8: test    cl, 1
0x63B8EB: jnz     short loc_63B8F4
0x63B8ED: shr     eax, 2
0x63B8F0: test    al, 1
0x63B8F2: jz      short loc_63B8FC
0x63B8F4: fldz
0x63B8F6: fstp    dword ptr [esi+1ACh]
0x63B8FC: mov     eax, [esi+44h]
0x63B8FF: cmp     eax, ebx
0x63B901: jz      short loc_63B90C
0x63B903: push    eax
0x63B904: call    FormHeapFree
0x63B909: add     esp, 4
0x63B90C: mov     [esi+44h], ebx
0x63B90F: mov     [esi+24h], ebx
0x63B912: lea     ebx, [esi+3Ch]
0x63B915: mov     ecx, ebx
0x63B917: call    BSSimpleList_IsEmpty
0x63B91C: test    al, al
0x63B91E: jnz     short loc_63B942
0x63B920: mov     ebp, [ebx]
0x63B922: test    ebp, ebp
0x63B924: jz      short loc_63B92F
0x63B926: push    ebp
0x63B927: call    FormHeapFree
0x63B92C: add     esp, 4
0x63B92F: push    ebp
0x63B930: mov     ecx, ebx
0x63B932: call    BSSimpleList_Remove
0x63B937: mov     ecx, ebx
0x63B939: call    BSSimpleList_IsEmpty
0x63B93E: test    al, al
0x63B940: jz      short loc_63B920
0x63B942: fldz
0x63B944: lea     ecx, [esi+4Ch]
0x63B947: fstp    dword ptr [esi+198h]
0x63B94D: mov     dword ptr [esi+30h], 0
0x63B954: call    BSSimpleList_Clear
0x63B959: jmp     def_63ACD5; jumptable 0063ACD5 default case, cases 9,11,19,25

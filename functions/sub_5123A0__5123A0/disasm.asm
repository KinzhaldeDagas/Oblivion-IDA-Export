0x5123A0: sub     esp, 8
0x5123A3: mov     ecx, [esp+8+l]
0x5123A7: mov     edx, [esp+8+arg_10]
0x5123AB: push    esi
0x5123AC: mov     esi, [esp+0Ch+a4]
0x5123B0: lea     eax, [esp+0Ch+var_8]
0x5123B4: push    eax; UInt16
0x5123B5: mov     eax, [esp+10h+arg_C]
0x5123B9: push    ecx; l
0x5123BA: mov     ecx, [esp+14h+a3]
0x5123BE: push    edx; a6
0x5123BF: mov     edx, [esp+18h+arg_4]
0x5123C3: push    eax; a5
0x5123C4: mov     eax, [esp+1Ch+a1]
0x5123C8: push    esi; a4
0x5123C9: push    ecx; a3
0x5123CA: push    edx; a2
0x5123CB: push    eax; a1
0x5123CC: mov     dword ptr [esp+2Ch+var_8], 0
0x5123D4: call    Script_ExtractArgs
0x5123D9: add     esp, 20h
0x5123DC: test    al, al
0x5123DE: jnz     short loc_5123E5
0x5123E0: pop     esi
0x5123E1: add     esp, 8
0x5123E4: retn
0x5123E5: push    0; int
0x5123E7: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5123EC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5123F1: push    0; int
0x5123F3: push    esi; void *
0x5123F4: call    OblivionDynamicCast
0x5123F9: mov     esi, eax
0x5123FB: add     esp, 14h
0x5123FE: test    esi, esi
0x512400: jz      loc_512530
0x512406: cmp     dword ptr [esp+0Ch+var_8], 0
0x51240B: jz      loc_512530
0x512411: mov     ecx, esi
0x512413: call    sub_5E6B40
0x512418: test    al, al
0x51241A: jnz     loc_512530
0x512420: mov     eax, [esi+58h]
0x512423: test    eax, eax
0x512425: jz      loc_512530
0x51242B: mov     eax, [eax+8]
0x51242E: test    eax, eax
0x512430: jz      short loc_512444
0x512432: push    800h
0x512437: lea     ecx, [esi+44h]
0x51243A: push    ecx
0x51243B: push    eax
0x51243C: call    Script_AddEventToExtraScript
0x512441: add     esp, 0Ch
0x512444: mov     eax, dword ptr [esp+0Ch+var_8]
0x512448: push    200h
0x51244D: lea     edx, [esi+44h]
0x512450: push    edx
0x512451: push    eax
0x512452: call    Script_AddEventToExtraScript
0x512457: mov     ecx, dword ptr [esp+18h+var_8]
0x51245B: add     esp, 0Ch
0x51245E: cmp     dword ptr [ecx+18h], 0FFFFFFFFh
0x512462: jnz     short loc_512469
0x512464: call    sub_5672A0
0x512469: mov     edx, [esi]
0x51246B: fld     dword ptr [esi+28h]
0x51246E: mov     eax, [edx+174h]
0x512474: push    ecx
0x512475: mov     ecx, esi
0x512477: fstp    [esp+10h+var_10]; float
0x51247A: call    eax
0x51247C: push    eax; int
0x51247D: mov     ecx, esi; this
0x51247F: call    TESObjectREFR_GetParentCell
0x512484: push    eax; int
0x512485: mov     ecx, esi; this
0x512487: call    TESObjectREFR_GetWorldSpace
0x51248C: push    eax; int
0x51248D: mov     ecx, esi
0x51248F: call    sub_4D7A20
0x512494: mov     ecx, dword ptr [esp+0Ch+var_8]
0x512498: push    1
0x51249A: call    sub_5660C0
0x51249F: mov     ecx, dword ptr [esp+0Ch+var_8]
0x5124A3: push    0; a4
0x5124A5: push    0; a3
0x5124A7: push    ecx; a2
0x5124A8: mov     ecx, esi; this
0x5124AA: call    Actor_AddPackage?
0x5124AF: mov     ecx, [esi+58h]
0x5124B2: test    ecx, ecx
0x5124B4: jz      short loc_512530
0x5124B6: mov     edx, [ecx]
0x5124B8: mov     eax, [edx+8]
0x5124BB: call    eax
0x5124BD: test    eax, eax
0x5124BF: jz      short loc_512530
0x5124C1: push    ebx
0x5124C2: mov     ebx, [esi+58h]
0x5124C5: push    edi
0x5124C6: mov     edi, [ebx]
0x5124C8: mov     ecx, offset TimeGlobals
0x5124CD: add     edi, 1Ch
0x5124D0: call    TimeGlobals_GetGameHour
0x5124D5: fsub    qword ptr ds:0A2F928h
0x5124DB: mov     edx, [edi]
0x5124DD: push    ecx
0x5124DE: fstp    [esp+18h+var_4]
0x5124E2: mov     ecx, ebx
0x5124E4: fld     [esp+18h+var_4]
0x5124E8: fstp    [esp+18h+var_18]
0x5124EB: call    edx
0x5124ED: mov     ecx, [esi+58h]
0x5124F0: mov     eax, [ecx]
0x5124F2: mov     edx, [eax+8]
0x5124F5: call    edx
0x5124F7: cmp     eax, 1
0x5124FA: pop     edi
0x5124FB: pop     ebx
0x5124FC: jnz     short loc_512530
0x5124FE: mov     ecx, [esi+58h]
0x512501: mov     eax, [ecx]
0x512503: mov     edx, [eax+8]
0x512506: call    edx
0x512508: push    eax
0x512509: push    esi
0x51250A: mov     ecx, offset ActorProcessManager_ptr
0x51250F: call    sub_674550
0x512514: mov     ecx, [esi+58h]
0x512517: mov     eax, [ecx]
0x512519: mov     edx, [eax+8]
0x51251C: push    0
0x51251E: push    0
0x512520: push    0
0x512522: call    edx
0x512524: push    eax
0x512525: push    esi
0x512526: mov     ecx, offset ActorProcessManager_ptr
0x51252B: call    sub_673A90
0x512530: mov     al, 1
0x512532: pop     esi
0x512533: add     esp, 8
0x512536: retn

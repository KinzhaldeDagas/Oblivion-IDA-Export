0x62A350: sub     esp, 40h
0x62A353: push    ebx
0x62A354: push    ebp
0x62A355: push    esi
0x62A356: push    edi; int
0x62A357: mov     edi, ecx
0x62A359: mov     eax, [edi]
0x62A35B: mov     edx, [eax+184h]
0x62A361: call    edx
0x62A363: mov     ebp, eax
0x62A365: test    ebp, ebp
0x62A367: jz      loc_62A648
0x62A36D: cmp     byte ptr [ebp+20h], 13h
0x62A371: jnz     loc_62A648
0x62A377: lea     eax, [esp+50h+var_30]
0x62A37B: push    eax
0x62A37C: mov     ecx, ebp
0x62A37E: mov     [esp+54h+var_38], 201h
0x62A386: call    sub_67C830
0x62A38B: mov     esi, [esp+50h+arg_0]
0x62A38F: lea     ecx, [esp+50h+var_30]
0x62A393: push    ecx
0x62A394: mov     ecx, esi
0x62A396: call    sub_4D7E30
0x62A39B: fstp    [esp+50h+var_40]
0x62A39F: mov     ecx, esi; this
0x62A3A1: call    TESObjectREFR_GetParentCell
0x62A3A6: mov     ecx, [ebp+3Ch]
0x62A3A9: test    ecx, ecx
0x62A3AB: mov     ebx, eax
0x62A3AD: mov     byte ptr [esp+50h+arg_0], 0
0x62A3B2: jz      loc_62A633
0x62A3B8: call    sub_67CC60
0x62A3BD: test    al, al
0x62A3BF: jz      loc_62A633
0x62A3C5: test    ebx, ebx
0x62A3C7: jz      short loc_62A3FE
0x62A3C9: mov     ecx, ebx; this
0x62A3CB: call    TESObjectCELL_IsInterior
0x62A3D0: test    al, al
0x62A3D2: jz      short loc_62A3FE
0x62A3D4: mov     ecx, offset flt_B36B20
0x62A3D9: call    GameSetting_GetSafeFloatPointer
0x62A3DE: fld     dword ptr [eax]
0x62A3E0: mov     ecx, offset unk_B36B18
0x62A3E5: fstp    [esp+50h+var_3C]
0x62A3E9: call    GameSetting_GetSafeFloatPointer
0x62A3EE: fld     dword ptr [eax]
0x62A3F0: fstp    [esp+50h+var_34]
0x62A3F4: fld     [esp+50h+var_40]
0x62A3F8: fld     [esp+50h+var_3C]
0x62A3FC: jmp     short loc_62A41A
0x62A3FE: fld     dword ptr ds:0B36B10h
0x62A404: fstp    [esp+50h+var_3C]
0x62A408: fld     dword ptr ds:0B36B08h
0x62A40E: fstp    [esp+50h+var_34]
0x62A412: fld     [esp+50h+var_40]
0x62A416: fld     [esp+50h+var_34]
0x62A41A: fcompp
0x62A41C: fnstsw  ax
0x62A41E: test    ah, 41h
0x62A421: jnz     short loc_62A428
0x62A423: mov     byte ptr [esp+50h+arg_0], 1
0x62A428: cmp     byte ptr [edi+0D0h], 0
0x62A42F: jz      loc_62A4E9
0x62A435: cmp     byte ptr [esp+50h+arg_0], 0
0x62A43A: jz      loc_62A4DC
0x62A440: mov     ecx, edi
0x62A442: call    sub_64ADA0
0x62A447: lea     edx, [esp+50h+var_18]
0x62A44B: mov     ecx, ebp
0x62A44D: push    eax
0x62A44E: push    esi
0x62A44F: push    edx
0x62A450: call    sub_67C4A0
0x62A455: mov     ecx, ebx; this
0x62A457: call    TESObjectCELL_IsInterior
0x62A45C: test    al, al
0x62A45E: jnz     short loc_62A489
0x62A460: push    0; int
0x62A462: mov     ecx, esi; this
0x62A464: call    TESObjectREFR_GetWorldSpace
0x62A469: fld     [esp+54h+var_2C]
0x62A46D: mov     ecx, ds:0B33A98h
0x62A473: push    eax; int
0x62A474: sub     esp, 8
0x62A477: fstp    [esp+60h+var_5C]; float
0x62A47B: fld     [esp+60h+var_30]
0x62A47F: fstp    [esp+60h+var_60]; float
0x62A482: call    sub_44A270
0x62A487: mov     ebx, eax
0x62A489: mov     eax, [edi]
0x62A48B: mov     ecx, esi; this
0x62A48D: mov     [esp+50h+arg_0], eax
0x62A491: call    TESObjectREFR_GetWorldSpace
0x62A496: mov     ecx, [esp+50h+var_18]
0x62A49A: mov     edx, [esp+50h+var_14]
0x62A49E: push    eax
0x62A49F: push    ebx
0x62A4A0: sub     esp, 0Ch
0x62A4A3: mov     eax, esp
0x62A4A5: mov     [eax], ecx
0x62A4A7: mov     ecx, [esp+64h+var_10]
0x62A4AB: mov     [eax+4], edx
0x62A4AE: mov     edx, [esp+64h+arg_0]
0x62A4B2: mov     [eax+8], ecx
0x62A4B5: mov     eax, [edx+3DCh]
0x62A4BB: push    esi
0x62A4BC: mov     ecx, edi
0x62A4BE: call    eax
0x62A4C0: test    al, al
0x62A4C2: jz      loc_62A648
0x62A4C8: push    0
0x62A4CA: push    esi
0x62A4CB: mov     ecx, ebp
0x62A4CD: call    sub_67C7F0
0x62A4D2: push    0
0x62A4D4: push    esi
0x62A4D5: mov     ecx, ebp
0x62A4D7: call    sub_67C6E0
0x62A4DC: cmp     byte ptr [edi+0D0h], 0
0x62A4E3: jnz     loc_62A5F0
0x62A4E9: push    esi
0x62A4EA: lea     ecx, [esp+54h+var_C]
0x62A4EE: push    ecx
0x62A4EF: mov     ecx, ebp
0x62A4F1: call    sub_67C660
0x62A4F6: mov     edx, [eax]
0x62A4F8: mov     [esp+50h+var_24], edx
0x62A4FC: mov     ecx, [eax+4]
0x62A4FF: mov     [esp+50h+var_20], ecx
0x62A503: mov     edx, [eax+8]
0x62A506: lea     eax, [esp+50h+var_24]
0x62A50A: push    eax
0x62A50B: mov     ecx, esi
0x62A50D: mov     [esp+54h+var_1C], edx
0x62A511: call    sub_4D7E30
0x62A516: fstp    st
0x62A518: fld     [esp+50h+var_40]
0x62A51C: fld     [esp+50h+var_3C]
0x62A520: fmul    qword ptr ds:0A432F0h
0x62A526: fcompp
0x62A528: fnstsw  ax
0x62A52A: test    ah, 1
0x62A52D: jnz     short loc_62A54B
0x62A52F: mov     edx, [edi]
0x62A531: mov     eax, [edx+2C0h]
0x62A537: mov     ecx, edi
0x62A539: call    eax
0x62A53B: cmp     ax, 201h
0x62A53F: jnz     short loc_62A54B
0x62A541: mov     [esp+50h+var_38], 101h
0x62A549: jmp     short loc_62A5B7
0x62A54B: mov     edx, [edi]
0x62A54D: mov     eax, [edx+2C0h]
0x62A553: mov     ecx, edi
0x62A555: call    eax
0x62A557: cmp     ax, 101h
0x62A55B: jnz     short loc_62A567
0x62A55D: mov     [esp+50h+var_38], 101h
0x62A565: jmp     short loc_62A5B7
0x62A567: mov     ecx, esi; this
0x62A569: call    Actor_IsNPC
0x62A56E: test    al, al
0x62A570: jz      short loc_62A5B7
0x62A572: test    ebx, ebx
0x62A574: jz      short loc_62A5B7
0x62A576: mov     ecx, ebx; this
0x62A578: call    TESObjectCELL_IsInterior
0x62A57D: test    al, al
0x62A57F: jnz     short loc_62A5B7
0x62A581: mov     edx, [edi]
0x62A583: mov     eax, [edx+2C0h]
0x62A589: mov     ecx, edi
0x62A58B: call    eax
0x62A58D: cmp     ax, 102h
0x62A591: jz      short loc_62A59E
0x62A593: mov     ecx, esi
0x62A595: call    sub_5E05B0
0x62A59A: test    al, al
0x62A59C: jnz     short loc_62A5B7
0x62A59E: mov     ecx, edi
0x62A5A0: call    sub_64ADA0
0x62A5A5: test    al, al
0x62A5A7: jnz     short loc_62A5B7
0x62A5A9: lea     ecx, [esp+50h+var_30]
0x62A5AD: push    ecx
0x62A5AE: mov     ecx, esi
0x62A5B0: call    sub_4D7E30
0x62A5B5: fstp    st
0x62A5B7: mov     eax, [esp+50h+var_38]
0x62A5BB: mov     edx, [edi]
0x62A5BD: mov     edx, [edx+238h]
0x62A5C3: push    eax
0x62A5C4: push    esi
0x62A5C5: mov     ecx, edi
0x62A5C7: call    edx
0x62A5C9: fld     dword ptr ds:0A30634h
0x62A5CF: mov     ebp, [edi]
0x62A5D1: push    ecx
0x62A5D2: mov     ecx, esi; this
0x62A5D4: fstp    [esp+54h+var_54]
0x62A5D7: call    TESObjectREFR_GetWorldSpace
0x62A5DC: mov     edx, [ebp+414h]
0x62A5E2: push    eax
0x62A5E3: push    ebx
0x62A5E4: lea     eax, [esp+5Ch+var_24]
0x62A5E8: push    eax
0x62A5E9: push    esi
0x62A5EA: mov     ecx, edi
0x62A5EC: call    edx
0x62A5EE: jmp     short loc_62A60F
0x62A5F0: mov     ecx, esi; this
0x62A5F2: call    Actor_IsNPC
0x62A5F7: test    al, al
0x62A5F9: jz      short loc_62A60F
0x62A5FB: push    1
0x62A5FD: push    esi
0x62A5FE: mov     ecx, ebp
0x62A600: call    sub_67C7F0
0x62A605: push    1
0x62A607: push    esi
0x62A608: mov     ecx, ebp
0x62A60A: call    sub_67C6E0
0x62A60F: fld     [esp+50h+var_40]
0x62A613: fld     [esp+50h+var_34]
0x62A617: fadd    st, st
0x62A619: fcompp
0x62A61B: fnstsw  ax
0x62A61D: test    ah, 41h
0x62A620: jp      short loc_62A648
0x62A622: mov     ecx, esi; int
0x62A624: call    sub_5EAE70
0x62A629: pop     edi
0x62A62A: pop     esi
0x62A62B: pop     ebp
0x62A62C: pop     ebx
0x62A62D: add     esp, 40h
0x62A630: retn    4
0x62A633: mov     eax, [ebp+3Ch]
0x62A636: push    eax
0x62A637: mov     ecx, offset dword_B3BDB0
0x62A63C: call    sub_67BFD0
0x62A641: mov     ecx, esi; int
0x62A643: call    sub_5EAE70
0x62A648: pop     edi
0x62A649: pop     esi
0x62A64A: pop     ebp
0x62A64B: pop     ebx
0x62A64C: add     esp, 40h
0x62A64F: retn    4

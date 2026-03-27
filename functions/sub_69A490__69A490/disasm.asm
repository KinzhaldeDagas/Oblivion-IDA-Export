0x69A490: push    ebp
0x69A491: mov     ebp, esp
0x69A493: and     esp, 0FFFFFFF0h
0x69A496: sub     esp, 0A4h
0x69A49C: mov     eax, ds:0B30AACh
0x69A4A1: xor     eax, esp
0x69A4A3: mov     [esp+0A4h+var_4], eax
0x69A4AA: push    ebx
0x69A4AB: push    esi
0x69A4AC: mov     esi, [ebp+arg_C]
0x69A4AF: xor     ebx, ebx
0x69A4B1: cmp     esi, ebx
0x69A4B3: push    edi
0x69A4B4: jnz     short loc_69A4CF
0x69A4B6: xor     al, al
0x69A4B8: pop     edi
0x69A4B9: pop     esi
0x69A4BA: pop     ebx
0x69A4BB: mov     ecx, [esp+0A4h+var_4]
0x69A4C2: xor     ecx, esp
0x69A4C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x69A4C9: mov     esp, ebp
0x69A4CB: pop     ebp
0x69A4CC: retn    10h
0x69A4CF: mov     ecx, esi; this
0x69A4D1: call    TESObjectREFR_GetParentCell
0x69A4D6: test    eax, eax
0x69A4D8: jz      short loc_69A4B6
0x69A4DA: mov     ecx, esi; this
0x69A4DC: call    TESObjectREFR_GetParentCell
0x69A4E1: mov     edi, eax
0x69A4E3: mov     ecx, edi; this
0x69A4E5: call    TESObjectCELL_IsInterior
0x69A4EA: test    al, al
0x69A4EC: jz      short loc_69A4FA
0x69A4EE: lea     ecx, [edi+28h]
0x69A4F1: call    sub_424180
0x69A4F6: mov     edi, eax
0x69A4F8: jmp     short loc_69A500
0x69A4FA: mov     edi, ds:0B35C24h
0x69A500: cmp     edi, ebx
0x69A502: jz      short loc_69A4B6
0x69A504: push    1
0x69A506: push    1
0x69A508: push    1Ch
0x69A50A: call    sub_8A7F20
0x69A50F: push    1
0x69A511: push    13h
0x69A513: push    1Ch
0x69A515: call    sub_8A7F20
0x69A51A: push    1
0x69A51C: push    2
0x69A51E: push    1Ch
0x69A520: call    sub_8A7F20
0x69A525: push    ebx
0x69A526: push    3
0x69A528: push    1Ch
0x69A52A: call    sub_8A7F20
0x69A52F: push    ebx
0x69A530: push    4
0x69A532: push    1Ch
0x69A534: call    sub_8A7F20
0x69A539: push    ebx
0x69A53A: push    5
0x69A53C: push    1Ch
0x69A53E: call    sub_8A7F20
0x69A543: add     esp, 48h
0x69A546: push    ebx
0x69A547: push    6
0x69A549: push    1Ch
0x69A54B: call    sub_8A7F20
0x69A550: push    ebx
0x69A551: push    7
0x69A553: push    1Ch
0x69A555: call    sub_8A7F20
0x69A55A: push    ebx
0x69A55B: push    8
0x69A55D: push    1Ch
0x69A55F: call    sub_8A7F20
0x69A564: push    1
0x69A566: push    9
0x69A568: push    1Ch
0x69A56A: call    sub_8A7F20
0x69A56F: push    ebx
0x69A570: push    0Ah
0x69A572: push    1Ch
0x69A574: call    sub_8A7F20
0x69A579: push    ebx
0x69A57A: push    0Bh
0x69A57C: push    1Ch
0x69A57E: call    sub_8A7F20
0x69A583: add     esp, 48h
0x69A586: push    ebx
0x69A587: push    0Ch
0x69A589: push    1Ch
0x69A58B: call    sub_8A7F20
0x69A590: push    1
0x69A592: push    0Dh
0x69A594: push    1Ch
0x69A596: call    sub_8A7F20
0x69A59B: push    1
0x69A59D: push    0Eh
0x69A59F: push    1Ch
0x69A5A1: call    sub_8A7F20
0x69A5A6: push    ebx
0x69A5A7: push    0Fh
0x69A5A9: push    1Ch
0x69A5AB: call    sub_8A7F20
0x69A5B0: push    ebx
0x69A5B1: push    10h
0x69A5B3: push    1Ch
0x69A5B5: call    sub_8A7F20
0x69A5BA: push    1
0x69A5BC: push    11h
0x69A5BE: push    1Ch
0x69A5C0: call    sub_8A7F20
0x69A5C5: add     esp, 48h
0x69A5C8: push    ebx
0x69A5C9: push    12h
0x69A5CB: push    1Ch
0x69A5CD: call    sub_8A7F20
0x69A5D2: push    ebx
0x69A5D3: push    14h
0x69A5D5: push    1Ch
0x69A5D7: call    sub_8A7F20
0x69A5DC: push    ebx
0x69A5DD: push    15h
0x69A5DF: push    1Ch
0x69A5E1: call    sub_8A7F20
0x69A5E6: push    ebx
0x69A5E7: push    18h
0x69A5E9: push    1Ch
0x69A5EB: call    sub_8A7F20
0x69A5F0: push    ebx
0x69A5F1: push    1Ah
0x69A5F3: push    1Ch
0x69A5F5: call    sub_8A7F20
0x69A5FA: push    ebx
0x69A5FB: push    1Bh
0x69A5FD: push    1Ch
0x69A5FF: call    sub_8A7F20
0x69A604: add     esp, 48h
0x69A607: push    ebx
0x69A608: push    1Ch
0x69A60A: push    1Ch
0x69A60C: call    sub_8A7F20
0x69A611: push    ebx
0x69A612: push    1Dh
0x69A614: push    1Ch
0x69A616: call    sub_8A7F20
0x69A61B: push    ebx
0x69A61C: push    1Eh
0x69A61E: push    1Ch
0x69A620: call    sub_8A7F20
0x69A625: push    ebx
0x69A626: push    1Fh
0x69A628: push    1Ch
0x69A62A: call    sub_8A7F20
0x69A62F: mov     eax, [esi]
0x69A631: mov     edx, [eax+174h]
0x69A637: add     esp, 30h
0x69A63A: mov     ecx, esi
0x69A63C: call    edx
0x69A63E: mov     ecx, [eax]
0x69A640: mov     edx, [eax+4]
0x69A643: mov     eax, [eax+8]
0x69A646: mov     [esp+0B0h+a2.x], ecx
0x69A64A: mov     ecx, esi
0x69A64C: mov     [esp+0B0h+a2.y], edx
0x69A650: mov     [esp+0B0h+a2.z], eax
0x69A654: call    sub_5E0660
0x69A659: fmul    qword ptr ds:0A2FAA0h
0x69A65F: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x69A666: mov     ecx, esi; this
0x69A668: fadd    [esp+0B0h+a2.z]
0x69A66C: mov     [esp+0B0h+var_90.WorldRayCastInput.EnableShapeCollectionFilter], bl
0x69A670: mov     [esp+0B0h+var_90.WorldRayCastInput.FilterInfo], ebx
0x69A674: mov     [esp+0B0h+var_90.WorldRayCastOutput.RootCollidable], ebx
0x69A678: fstp    [esp+0B0h+a2.z]
0x69A67C: mov     [esp+0B0h+var_90.BroadPhaseAabbCache], ebx
0x69A683: fld1
0x69A685: mov     [esp+0B0h+var_90.RayHitCollector1], ebx
0x69A68C: fstp    [esp+0B0h+var_90.WorldRayCastOutput.HitFraction]
0x69A690: mov     [esp+0B0h+var_90.RayHitCollector2], ebx
0x69A697: movaps  xmmword ptr [esp+0B0h+var_90.unk60.x], xmm0
0x69A69F: call    MobileObject_GetCharProxy
0x69A6A4: test    eax, eax
0x69A6A6: jz      short loc_69A6DA
0x69A6A8: mov     ecx, esi; this
0x69A6AA: call    MobileObject_GetCharProxy
0x69A6AF: mov     eax, [eax+364h]
0x69A6B5: cmp     eax, ebx
0x69A6B7: jz      short loc_69A6D6
0x69A6B9: mov     eax, [eax+8]
0x69A6BC: cmp     eax, ebx
0x69A6BE: jz      short loc_69A6CF
0x69A6C0: add     eax, 14h
0x69A6C3: cmp     eax, ebx
0x69A6C5: jz      short loc_69A6CF
0x69A6C7: mov     eax, [eax+1Ch]
0x69A6CA: shr     eax, 10h
0x69A6CD: jmp     short loc_69A6F8
0x69A6CF: xor     eax, eax
0x69A6D1: shr     eax, 10h
0x69A6D4: jmp     short loc_69A6F8
0x69A6D6: xor     eax, eax
0x69A6D8: jmp     short loc_69A6F8
0x69A6DA: mov     eax, ds:0B2EB3Ch
0x69A6DF: add     eax, 1
0x69A6E2: and     eax, 0FFFFh
0x69A6E7: mov     ds:0B2EB3Ch, eax
0x69A6EC: jnz     short loc_69A6F8
0x69A6EE: mov     eax, 0Ah
0x69A6F3: mov     ds:0B2EB3Ch, eax
0x69A6F8: shl     eax, 10h
0x69A6FB: lea     ecx, [ebp+arg_0]
0x69A6FE: or      eax, 1Ch
0x69A701: push    ecx
0x69A702: lea     ecx, [esp+0B4h+var_90]
0x69A706: mov     [esp+0B4h+var_90.WorldRayCastInput.FilterInfo], eax
0x69A70A: call    bhkWorldRayCastData__SetCastInputFrom
0x69A70F: lea     edx, [esp+0B0h+a2]
0x69A713: push    edx; a2
0x69A714: lea     ecx, [esp+0B4h+var_90]; this
0x69A718: call    bhkWorldRayCastData__SetCastInputTo
0x69A71D: mov     eax, [edi]
0x69A71F: mov     edx, [eax+88h]
0x69A725: lea     ecx, [esp+0B0h+var_90]
0x69A729: push    ecx
0x69A72A: mov     ecx, edi
0x69A72C: call    edx
0x69A72E: mov     ecx, [esp+0B0h+var_4]
0x69A735: neg     al
0x69A737: pop     edi
0x69A738: pop     esi
0x69A739: pop     ebx
0x69A73A: sbb     eax, eax
0x69A73C: xor     ecx, esp
0x69A73E: add     eax, 1
0x69A741: call    @__security_check_cookie@4; __security_check_cookie(x)
0x69A746: mov     esp, ebp
0x69A748: pop     ebp
0x69A749: retn    10h

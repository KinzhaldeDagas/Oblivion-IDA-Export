0x4B7490: sub     esp, 8
0x4B7493: mov     eax, [esp+8+arg_8]
0x4B7497: push    ebp
0x4B7498: push    edi
0x4B7499: mov     edi, [esp+10h+arg_0]
0x4B749D: xor     ebp, ebp
0x4B749F: cmp     edi, ebp
0x4B74A1: mov     [esp+10h+var_5], 0
0x4B74A6: mov     [esp+10h+var_4], ebp
0x4B74AA: mov     byte ptr [eax], 0
0x4B74AD: jz      loc_4B768A
0x4B74B3: mov     edx, [edi]
0x4B74B5: mov     eax, [edx+170h]
0x4B74BB: mov     ecx, edi
0x4B74BD: call    eax
0x4B74BF: cmp     byte ptr [eax+4], 18h
0x4B74C3: jnz     loc_4B768A
0x4B74C9: push    esi
0x4B74CA: mov     esi, [esp+14h+arg_4]
0x4B74CE: cmp     esi, ebp
0x4B74D0: jz      loc_4B7689
0x4B74D6: push    ebx
0x4B74D7: mov     ecx, edi; this
0x4B74D9: call    GetTeleportExtraData
0x4B74DE: mov     ecx, edi
0x4B74E0: mov     ebx, eax
0x4B74E2: call    sub_4D7740
0x4B74E7: test    eax, eax
0x4B74E9: mov     [esp+18h+arg_0], eax
0x4B74ED: jz      loc_4B7683
0x4B74F3: test    ebx, ebx
0x4B74F5: jz      short loc_4B755C
0x4B74F7: mov     ecx, ebx
0x4B74F9: call    sub_42B460
0x4B74FE: cmp     esi, ds:0B333C4h
0x4B7504: mov     ebp, eax
0x4B7506: jz      short loc_4B755C
0x4B7508: mov     ecx, esi; this
0x4B750A: call    TESObjectREFR_GetParentCell
0x4B750F: test    eax, eax
0x4B7511: jz      short loc_4B755C
0x4B7513: mov     ecx, esi; this
0x4B7515: call    TESObjectREFR_GetParentCell
0x4B751A: mov     ecx, eax
0x4B751C: call    TESObjectCELL_GetOwner
0x4B7521: test    eax, eax
0x4B7523: jz      short loc_4B755C
0x4B7525: push    esi
0x4B7526: mov     ecx, esi; this
0x4B7528: call    TESObjectREFR_GetParentCell
0x4B752D: mov     ecx, eax
0x4B752F: call    sub_4CAAC0
0x4B7534: test    al, al
0x4B7536: jz      short loc_4B755C
0x4B7538: test    ebp, ebp
0x4B753A: jz      loc_4B7683
0x4B7540: mov     ecx, ebp
0x4B7542: call    TESObjectCELL_GetOwner
0x4B7547: test    eax, eax
0x4B7549: jz      loc_4B7683
0x4B754F: push    esi
0x4B7550: mov     ecx, ebp
0x4B7552: call    sub_4CAAC0
0x4B7557: jmp     loc_4B75F9
0x4B755C: push    1
0x4B755E: push    esi
0x4B755F: mov     ecx, edi
0x4B7561: call    TESOBjectREFR_IsOwnedBy
0x4B7566: test    al, al
0x4B7568: jnz     loc_4B7683
0x4B756E: mov     ecx, esi; this
0x4B7570: call    sub_5E6C60
0x4B7575: test    al, al
0x4B7577: jz      short loc_4B7588
0x4B7579: mov     ecx, esi
0x4B757B: call    sub_5E6BA0
0x4B7580: test    al, al
0x4B7582: jnz     loc_4B7683
0x4B7588: mov     ecx, ds:0B333C4h
0x4B758E: cmp     esi, ecx
0x4B7590: jnz     short loc_4B75CD
0x4B7592: mov     edx, [ecx]
0x4B7594: mov     eax, [edx+354h]
0x4B759A: call    eax
0x4B759C: test    al, al
0x4B759E: jz      short loc_4B75CD
0x4B75A0: test    ebx, ebx
0x4B75A2: jz      short loc_4B7601
0x4B75A4: mov     ecx, [esp+18h+arg_0]
0x4B75A8: cmp     byte ptr [ecx], 64h ; 'd'
0x4B75AB: jz      short loc_4B7601
0x4B75AD: test    ebp, ebp
0x4B75AF: jz      loc_4B7683
0x4B75B5: mov     ecx, ebp; this
0x4B75B7: call    TESObjectCELL_IsInterior
0x4B75BC: test    al, al
0x4B75BE: jz      loc_4B7683
0x4B75C4: mov     ecx, ebp
0x4B75C6: call    sub_4C9830
0x4B75CB: jmp     short loc_4B75F9
0x4B75CD: mov     ecx, esi
0x4B75CF: call    sub_5E3220
0x4B75D4: test    al, al
0x4B75D6: jz      short loc_4B7601
0x4B75D8: mov     ecx, [esi+58h]
0x4B75DB: mov     edx, [ecx]
0x4B75DD: mov     eax, [edx+0CCh]
0x4B75E3: call    eax
0x4B75E5: cmp     eax, ds:0B333C4h
0x4B75EB: jnz     short loc_4B7601
0x4B75ED: mov     edx, [esi]
0x4B75EF: mov     eax, [edx+354h]
0x4B75F5: mov     ecx, esi
0x4B75F7: call    eax
0x4B75F9: test    al, al
0x4B75FB: jnz     loc_4B7683
0x4B7601: mov     ecx, edi
0x4B7603: call    sub_4D7740
0x4B7608: mov     edi, eax
0x4B760A: test    edi, edi
0x4B760C: jz      short loc_4B7683
0x4B760E: mov     ecx, edi
0x4B7610: call    sub_428E70
0x4B7615: test    al, al
0x4B7617: jz      short loc_4B7683
0x4B7619: mov     eax, [edi+4]
0x4B761C: test    eax, eax
0x4B761E: jz      short loc_4B7637
0x4B7620: lea     ecx, [esp+18h+var_4]
0x4B7624: push    ecx
0x4B7625: push    0
0x4B7627: push    1
0x4B7629: push    0
0x4B762B: push    eax
0x4B762C: mov     ecx, esi
0x4B762E: call    sub_5E4A00
0x4B7633: test    al, al
0x4B7635: jnz     short loc_4B7683
0x4B7637: mov     ecx, edi
0x4B7639: call    sub_429990
0x4B763E: cmp     eax, 64h ; 'd'
0x4B7641: jge     short loc_4B7688
0x4B7643: mov     eax, ds:0B35EC8h
0x4B7648: lea     edx, [esp+18h+var_4]
0x4B764C: push    edx
0x4B764D: push    0
0x4B764F: push    1
0x4B7651: push    0
0x4B7653: push    eax
0x4B7654: mov     ecx, esi
0x4B7656: call    sub_5E4A00
0x4B765B: test    al, al
0x4B765D: jnz     short loc_4B767C
0x4B765F: mov     edx, ds:0B35ECCh
0x4B7665: lea     ecx, [esp+18h+var_4]
0x4B7669: push    ecx
0x4B766A: push    0
0x4B766C: push    1
0x4B766E: push    0
0x4B7670: push    edx
0x4B7671: mov     ecx, esi
0x4B7673: call    sub_5E4A00
0x4B7678: test    al, al
0x4B767A: jz      short loc_4B7688
0x4B767C: mov     eax, [esp+18h+arg_8]
0x4B7680: mov     byte ptr [eax], 1
0x4B7683: mov     [esp+18h+var_5], 1
0x4B7688: pop     ebx
0x4B7689: pop     esi
0x4B768A: mov     al, [esp+10h+var_5]
0x4B768E: pop     edi
0x4B768F: pop     ebp
0x4B7690: add     esp, 8
0x4B7693: retn

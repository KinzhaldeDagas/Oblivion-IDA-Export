0x62E3F0: sub     esp, 10h
0x62E3F3: push    ebx
0x62E3F4: push    esi
0x62E3F5: mov     esi, ecx
0x62E3F7: mov     eax, [esi]
0x62E3F9: mov     edx, [eax+184h]
0x62E3FF: mov     dword ptr [esi+2Ch], 0
0x62E406: call    edx
0x62E408: mov     ebx, eax
0x62E40A: test    ebx, ebx
0x62E40C: jz      loc_62E754
0x62E412: cmp     dword ptr [ebx+28h], 0
0x62E416: jz      loc_62E754
0x62E41C: cmp     byte ptr [ebx+20h], 2
0x62E420: push    edi
0x62E421: mov     edi, [esp+1Ch+arg_0]
0x62E425: jz      short loc_62E439
0x62E427: mov     ecx, [ebx+24h]
0x62E42A: test    ecx, ecx
0x62E42C: jz      short loc_62E439
0x62E42E: call    sub_5697E0
0x62E433: mov     [esp+1Ch+arg_0], eax
0x62E437: jmp     short loc_62E43D
0x62E439: mov     [esp+1Ch+arg_0], edi
0x62E43D: movsx   eax, byte ptr [ebx+20h]
0x62E441: test    eax, eax
0x62E443: push    ebp; a7
0x62E444: jle     short loc_62E468
0x62E446: cmp     eax, 2
0x62E449: jle     short loc_62E450
0x62E44B: cmp     eax, 7
0x62E44E: jnz     short loc_62E468
0x62E450: mov     ecx, ebx
0x62E452: call    sub_567CA0
0x62E457: test    al, al
0x62E459: jz      short loc_62E468
0x62E45B: push    edi
0x62E45C: mov     ecx, ebx
0x62E45E: call    sub_568BB0
0x62E463: jmp     loc_62E717
0x62E468: mov     ebp, [ebx+28h]
0x62E46B: test    ebp, ebp
0x62E46D: jz      loc_62E717
0x62E473: mov     ecx, ebp
0x62E475: call    TargetData__GetTargetType
0x62E47A: test    eax, eax
0x62E47C: jnz     short loc_62E4F1
0x62E47E: mov     ecx, ebp
0x62E480: call    sub_569E60
0x62E485: test    eax, eax
0x62E487: jz      loc_62E752
0x62E48D: mov     ecx, ebp
0x62E48F: call    sub_569E60
0x62E494: mov     edx, [eax]
0x62E496: mov     ecx, eax
0x62E498: mov     eax, [edx+198h]
0x62E49E: push    1
0x62E4A0: call    eax
0x62E4A2: test    al, al
0x62E4A4: jz      short loc_62E4D8
0x62E4A6: mov     ecx, ebx
0x62E4A8: call    sub_5660A0
0x62E4AD: test    al, al
0x62E4AF: jnz     short loc_62E4D8
0x62E4B1: mov     ecx, [esi+2Ch]
0x62E4B4: push    1
0x62E4B6: push    ecx
0x62E4B7: mov     ecx, ebx
0x62E4B9: call    sub_566870
0x62E4BE: mov     edx, [edi]
0x62E4C0: mov     eax, [esi+2Ch]
0x62E4C3: mov     edx, [edx+2F8h]
0x62E4C9: push    eax
0x62E4CA: mov     ecx, edi
0x62E4CC: call    edx
0x62E4CE: pop     ebp
0x62E4CF: pop     edi
0x62E4D0: pop     esi
0x62E4D1: pop     ebx
0x62E4D2: add     esp, 10h
0x62E4D5: retn    4
0x62E4D8: mov     edi, [esi]
0x62E4DA: mov     ecx, ebp
0x62E4DC: call    sub_569E60
0x62E4E1: push    eax
0x62E4E2: mov     eax, [edi+0D0h]
0x62E4E8: mov     ecx, esi
0x62E4EA: call    eax
0x62E4EC: jmp     loc_62E717
0x62E4F1: cmp     dword ptr [esi+40h], 0
0x62E4F5: jnz     loc_62E6A7
0x62E4FB: cmp     dword ptr [esi+3Ch], 0
0x62E4FF: jnz     loc_62E6A7
0x62E505: mov     ecx, edi; this
0x62E507: call    TESObjectREFR_GetParentCell
0x62E50C: mov     edx, [edi]
0x62E50E: mov     [esp+20h+var_10], eax
0x62E512: mov     eax, [edx+174h]
0x62E518: mov     ecx, edi
0x62E51A: call    eax
0x62E51C: mov     ecx, [eax]
0x62E51E: mov     ebp, [ebx+28h]
0x62E521: mov     [esp+20h+a1], ecx
0x62E525: mov     edx, [eax+4]
0x62E528: mov     [esp+20h+a2], edx
0x62E52C: mov     eax, [eax+8]
0x62E52F: mov     ecx, ebp
0x62E531: mov     [esp+20h+var_4], eax
0x62E535: call    TargetData__GetTargetType
0x62E53A: cmp     eax, 1
0x62E53D: jnz     short loc_62E574
0x62E53F: mov     ecx, ebp
0x62E541: call    sub_569E70
0x62E546: test    eax, eax
0x62E548: jz      short loc_62E56B
0x62E54A: mov     ecx, ebp
0x62E54C: call    sub_569E70
0x62E551: mov     edx, [eax]
0x62E553: mov     ecx, eax
0x62E555: mov     eax, [edx+0A4h]
0x62E55B: call    eax
0x62E55D: test    al, al
0x62E55F: jz      short loc_62E56B
0x62E561: mov     ecx, ebp
0x62E563: call    sub_569E70
0x62E568: mov     [esi+64h], eax
0x62E56B: mov     dword ptr [esi+6Ch], 0
0x62E572: jmp     short loc_62E590
0x62E574: cmp     eax, 2
0x62E577: jnz     short loc_62E590
0x62E579: mov     ecx, ebp
0x62E57B: mov     dword ptr [esi+64h], 0
0x62E582: call    sub_569E80
0x62E587: mov     [esi+6Ch], eax
0x62E58A: mov     [esi+0E0h], eax
0x62E590: cmp     dword ptr [esi+64h], 0
0x62E594: jnz     def_62E5AD; jumptable 0062E5AD default case, cases 1-12,14-20,23
0x62E59A: mov     eax, [esi+6Ch]
0x62E59D: cmp     eax, 23h; switch 36 cases
0x62E5A0: ja      def_62E5AD; jumptable 0062E5AD default case, cases 1-12,14-20,23
0x62E5A6: movzx   ecx, ds:byte_62E76C[eax]
0x62E5AD: jmp     ds:jpt_62E5AD[ecx*4]; switch jump
0x62E5B4: push    1; jumptable 0062E5AD cases 26-35
0x62E5B6: push    0FFFFFFFFh
0x62E5B8: push    eax
0x62E5B9: mov     ecx, edi
0x62E5BB: call    sub_5E91E0
0x62E5C0: mov     edx, [esi+6Ch]
0x62E5C3: mov     [esi+0E0h], edx
0x62E5C9: jmp     loc_62E696
0x62E5CE: mov     ecx, [ebx+28h]; jumptable 0062E5AD case 0
0x62E5D1: push    0; int
0x62E5D3: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x62E5D8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62E5DD: push    0; int
0x62E5DF: call    sub_569E70
0x62E5E4: push    eax; void *
0x62E5E5: call    OblivionDynamicCast
0x62E5EA: add     esp, 14h
0x62E5ED: test    eax, eax
0x62E5EF: jz      loc_62E696
0x62E5F5: mov     [esi+148h], eax
0x62E5FB: jmp     loc_62E696
0x62E600: mov     eax, [edi]; jumptable 0062E5AD cases 13,21,22,24,25
0x62E602: mov     edx, [eax+334h]
0x62E608: push    1
0x62E60A: mov     ecx, edi
0x62E60C: call    edx
0x62E60E: test    al, al
0x62E610: jnz     short def_62E5AD; jumptable 0062E5AD default case, cases 1-12,14-20,23
0x62E612: mov     eax, [esi+6Ch]
0x62E615: mov     ecx, [esp+20h+arg_0]
0x62E619: push    eax
0x62E61A: push    ecx
0x62E61B: push    edi
0x62E61C: mov     ecx, esi
0x62E61E: call    sub_647BD0
0x62E623: mov     edx, [esi+6Ch]
0x62E626: mov     [esi+0E0h], edx
0x62E62C: jmp     short loc_62E696
0x62E62E: mov     ecx, offset fAIAcquireObjectDistance; jumptable 0062E5AD default case, cases 1-12,14-20,23
0x62E633: call    GameSetting_GetSafeFloatPointer
0x62E638: mov     ecx, offset fAIAcquireObjectDistance
0x62E63D: mov     ebp, eax
0x62E63F: call    GameSetting_GetSafeFloatPointer
0x62E644: fld     dword ptr [ebp+0]
0x62E647: push    edi; a6
0x62E648: mov     [esp+24h+arg_0], eax
0x62E64C: mov     eax, [edi]
0x62E64E: mov     edx, [eax+174h]
0x62E654: push    offset sub_646600; a5
0x62E659: push    ecx
0x62E65A: mov     ecx, edi
0x62E65C: fstp    [esp+2Ch+var_2C]
0x62E65F: call    edx
0x62E661: mov     edx, [esp+28h+a1]
0x62E665: push    eax; a4
0x62E666: mov     eax, [esp+2Ch+arg_4]
0x62E66A: fld     dword ptr [eax]
0x62E66C: push    ecx
0x62E66D: fstp    [esp+30h+a3]; a3
0x62E670: lea     ecx, [esp+30h+a2]
0x62E674: push    ecx; a2
0x62E675: mov     ecx, ds:0B33A98h
0x62E67B: push    edx; a1
0x62E67C: call    sub_446B90
0x62E681: xor     eax, eax
0x62E683: mov     [esi+6Ch], eax
0x62E686: mov     [esi+64h], eax
0x62E689: mov     eax, [esi]
0x62E68B: mov     edx, [eax+568h]
0x62E691: push    edi
0x62E692: mov     ecx, esi
0x62E694: call    edx
0x62E696: mov     ebx, [ebx+28h]
0x62E699: test    ebx, ebx
0x62E69B: jz      short loc_62E6A7
0x62E69D: mov     ecx, ebx
0x62E69F: call    sub_452A60
0x62E6A4: mov     [esi+38h], eax
0x62E6A7: cmp     dword ptr [esi+40h], 0
0x62E6AB: lea     edi, [esi+3Ch]
0x62E6AE: jnz     short loc_62E6B5
0x62E6B0: cmp     dword ptr [edi], 0
0x62E6B3: jz      short loc_62E717
0x62E6B5: mov     eax, [edi]
0x62E6B7: mov     [esi+44h], eax
0x62E6BA: cmp     dword ptr [eax+1Ch], 2
0x62E6BE: mov     eax, [eax]
0x62E6C0: jnz     short loc_62E6FF
0x62E6C2: mov     edx, [eax]
0x62E6C4: mov     ecx, eax
0x62E6C6: mov     eax, [edx+190h]
0x62E6CC: call    eax
0x62E6CE: test    al, al
0x62E6D0: mov     eax, [esi+44h]
0x62E6D3: mov     ecx, [eax]; this
0x62E6D5: jz      short loc_62E6DA
0x62E6D7: push    ecx
0x62E6D8: jmp     short loc_62E700
0x62E6DA: call    TESObjectREFR_GetOwner
0x62E6DF: test    eax, eax
0x62E6E1: jz      short loc_62E70C
0x62E6E3: cmp     byte ptr [eax+4], 23h ; '#'
0x62E6E7: jnz     short loc_62E70C
0x62E6E9: mov     ebx, [esi]
0x62E6EB: push    eax
0x62E6EC: mov     ecx, offset ActorProcessManager_ptr
0x62E6F1: call    sub_675220
0x62E6F6: mov     edx, [ebx+0D0h]
0x62E6FC: push    eax
0x62E6FD: jmp     short loc_62E708
0x62E6FF: push    eax
0x62E700: mov     edx, [esi]
0x62E702: mov     edx, [edx+0D0h]
0x62E708: mov     ecx, esi
0x62E70A: call    edx
0x62E70C: mov     eax, [esi+44h]
0x62E70F: push    eax
0x62E710: mov     ecx, edi
0x62E712: call    BSSimpleList_Remove
0x62E717: mov     ecx, [esi+2Ch]
0x62E71A: test    ecx, ecx
0x62E71C: jz      short loc_62E742
0x62E71E: mov     edx, [ecx]
0x62E720: mov     eax, [edx+174h]
0x62E726: call    eax
0x62E728: mov     ecx, [eax]
0x62E72A: mov     [esi+0D4h], ecx
0x62E730: mov     edx, [eax+4]
0x62E733: mov     [esi+0D8h], edx
0x62E739: mov     eax, [eax+8]
0x62E73C: mov     [esi+0DCh], eax
0x62E742: mov     esi, [esi+2Ch]
0x62E745: test    esi, esi
0x62E747: jz      short loc_62E752
0x62E749: push    1
0x62E74B: mov     ecx, esi
0x62E74D: call    Actor__SetCompressedFlag
0x62E752: pop     ebp
0x62E753: pop     edi
0x62E754: pop     esi
0x62E755: pop     ebx
0x62E756: add     esp, 10h
0x62E759: retn    4

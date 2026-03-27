0x64A380: sub     esp, 4Ch
0x64A383: mov     eax, [esp+4Ch+arg_0]
0x64A387: push    ebx
0x64A388: push    ebp
0x64A389: push    esi
0x64A38A: push    edi
0x64A38B: xor     ebp, ebp
0x64A38D: push    ebp; int
0x64A38E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64A393: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64A398: mov     ebx, ecx
0x64A39A: push    ebp; int
0x64A39B: push    eax; void *
0x64A39C: mov     [esp+70h+var_40], ebx
0x64A3A0: call    OblivionDynamicCast
0x64A3A5: mov     edi, [ebx+8]
0x64A3A8: mov     esi, eax
0x64A3AA: add     esp, 14h
0x64A3AD: cmp     esi, ebp
0x64A3AF: jz      short loc_64A3B5
0x64A3B1: cmp     edi, ebp
0x64A3B3: jz      short loc_64A3E1
0x64A3B5: mov     ecx, [edi+1Ch]
0x64A3B8: shr     ecx, 2
0x64A3BB: test    cl, 1
0x64A3BE: jnz     loc_64A878
0x64A3C4: mov     ecx, edi
0x64A3C6: call    sub_5660B0
0x64A3CB: test    al, al
0x64A3CD: jnz     loc_64A878
0x64A3D3: mov     edx, [edi+1Ch]
0x64A3D6: shr     edx, 1
0x64A3D8: test    dl, 1
0x64A3DB: jnz     loc_64A878
0x64A3E1: push    8; Size
0x64A3E3: call    FormHeapAlloc
0x64A3E8: add     esp, 4
0x64A3EB: cmp     eax, ebp
0x64A3ED: jz      short loc_64A3FC
0x64A3EF: mov     edi, eax
0x64A3F1: mov     [eax], ebp
0x64A3F3: mov     [eax+4], ebp
0x64A3F6: mov     [esp+5Ch+a3], edi
0x64A3FA: jmp     short loc_64A402
0x64A3FC: mov     [esp+5Ch+a3], ebp
0x64A400: mov     edi, ebp
0x64A402: mov     eax, [ebx]
0x64A404: mov     edx, [eax+2Ch]
0x64A407: mov     ecx, ebx
0x64A409: call    edx
0x64A40B: test    eax, eax
0x64A40D: mov     [esp+5Ch+arg_0], eax
0x64A411: fild    [esp+5Ch+arg_0]
0x64A415: jge     short loc_64A41D
0x64A417: fadd    dword ptr ds:0A2FC78h
0x64A41D: push    ecx
0x64A41E: fstp    [esp+60h+var_60]; float
0x64A421: push    edi; int
0x64A422: mov     ecx, esi; int
0x64A424: call    sub_5E0340
0x64A429: xor     ebx, ebx
0x64A42B: cmp     [edi+4], ebx
0x64A42E: mov     ebp, edi
0x64A430: mov     [esp+5Ch+var_48], ebp
0x64A434: mov     [esp+5Ch+var_4C], ebx
0x64A438: mov     byte ptr [esp+5Ch+arg_0], bl
0x64A43C: jnz     short loc_64A446
0x64A43E: cmp     [edi], ebx
0x64A440: jz      loc_64A86F
0x64A446: cmp     dword ptr [ebp+4], 0
0x64A44A: jnz     short loc_64A456
0x64A44C: cmp     dword ptr [ebp+0], 0
0x64A450: jz      loc_64A823
0x64A456: mov     edi, [ebp+0]
0x64A459: mov     ecx, [edi+28h]
0x64A45C: xor     ebp, ebp
0x64A45E: test    ecx, ecx
0x64A460: jz      short loc_64A469
0x64A462: call    sub_569E60
0x64A467: mov     ebp, eax
0x64A469: mov     ecx, [esp+5Ch+var_40]
0x64A46D: mov     eax, [ecx]
0x64A46F: mov     edx, [eax+144h]
0x64A475: push    0
0x64A477: call    edx
0x64A479: push    ebp
0x64A47A: push    esi
0x64A47B: lea     ecx, [edi+34h]
0x64A47E: call    sub_56A950
0x64A483: test    al, al
0x64A485: jz      loc_64A80A
0x64A48B: cmp     byte ptr [esp+60h+arg_0], 0
0x64A490: jz      short loc_64A4B7
0x64A492: push    200h
0x64A497: lea     ebp, [esi+44h]
0x64A49A: push    ebp; a4
0x64A49B: push    edi; a3
0x64A49C: call    Script_AddEventToExtraScript
0x64A4A1: mov     eax, [esp+6Ch+a3]
0x64A4A5: mov     ecx, [eax+8]
0x64A4A8: push    400h; a2
0x64A4AD: push    ebp
0x64A4AE: push    ecx
0x64A4AF: call    Script_AddEventToExtraScript
0x64A4B4: add     esp, 18h
0x64A4B7: mov     ebp, [esp+60h+a3]
0x64A4BB: mov     ecx, esi; int
0x64A4BD: mov     [ebp+8], edi
0x64A4C0: call    sub_5E6E00
0x64A4C5: mov     edx, [ebp+0]
0x64A4C8: mov     eax, [edx+55Ch]
0x64A4CE: push    esi
0x64A4CF: mov     ecx, ebp
0x64A4D1: call    eax
0x64A4D3: movsx   eax, byte ptr [edi+20h]
0x64A4D7: cmp     eax, 6; switch 7 cases
0x64A4DA: ja      def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A4E0: jmp     ds:jpt_64A4E0[eax*4]; switch jump
0x64A4E7: push    esi; jumptable 0064A4E0 cases 5,6
0x64A4E8: lea     ecx, [esp+68h+a3]
0x64A4EC: push    ecx; a3
0x64A4ED: mov     ecx, edi
0x64A4EF: call    sub_566B30
0x64A4F4: mov     edx, [eax]
0x64A4F6: sub     esp, 0Ch
0x64A4F9: mov     ecx, esp
0x64A4FB: mov     [ecx], edx
0x64A4FD: mov     edx, [eax+4]
0x64A500: mov     eax, [eax+8]
0x64A503: mov     [ecx+4], edx
0x64A506: mov     [ecx+8], eax
0x64A509: mov     ecx, esi; this
0x64A50B: call    TESObjectREFR_SetPosition
0x64A510: push    esi
0x64A511: mov     ecx, edi
0x64A513: call    sub_566A40
0x64A518: push    esi
0x64A519: mov     ecx, edi
0x64A51B: mov     ebx, eax
0x64A51D: call    sub_566940
0x64A522: mov     ecx, [edi+24h]
0x64A525: test    ecx, ecx
0x64A527: mov     [esp+64h+var_54], eax
0x64A52B: jz      loc_64A77A
0x64A531: call    sub_569740
0x64A536: cmp     eax, 1
0x64A539: jnz     loc_64A77A
0x64A53F: mov     [esp+64h+var_4], al
0x64A543: jmp     def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A548: mov     ecx, [edi+28h]; jumptable 0064A4E0 case 0
0x64A54B: test    ecx, ecx
0x64A54D: jnz     short loc_64A58F
0x64A54F: push    esi; a4
0x64A550: lea     ecx, [esp+68h+var_38]
0x64A554: push    ecx; a3
0x64A555: mov     ecx, edi
0x64A557: call    sub_566B30
0x64A55C: mov     edx, [eax]
0x64A55E: sub     esp, 0Ch
0x64A561: mov     ecx, esp
0x64A563: mov     [ecx], edx
0x64A565: mov     edx, [eax+4]
0x64A568: mov     eax, [eax+8]
0x64A56B: mov     [ecx+4], edx
0x64A56E: mov     [ecx+8], eax
0x64A571: mov     ecx, esi; this
0x64A573: call    TESObjectREFR_SetPosition
0x64A578: push    esi
0x64A579: mov     ecx, edi
0x64A57B: call    sub_566A40
0x64A580: push    esi
0x64A581: mov     ecx, edi
0x64A583: mov     ebx, eax
0x64A585: call    sub_566940
0x64A58A: jmp     loc_64A776
0x64A58F: call    sub_569E60
0x64A594: mov     ebp, eax
0x64A596: test    ebp, ebp
0x64A598: jz      loc_64A623
0x64A59E: mov     ecx, [ebp+8]
0x64A5A1: shr     ecx, 5
0x64A5A4: test    cl, 1
0x64A5A7: jnz     short loc_64A623
0x64A5A9: mov     edx, [ebp+0]
0x64A5AC: mov     eax, [edx+174h]
0x64A5B2: mov     ecx, ebp
0x64A5B4: call    eax
0x64A5B6: mov     edx, [eax]
0x64A5B8: sub     esp, 0Ch
0x64A5BB: mov     ecx, esp
0x64A5BD: mov     [ecx], edx
0x64A5BF: mov     edx, [eax+4]
0x64A5C2: mov     eax, [eax+8]
0x64A5C5: mov     [ecx+4], edx
0x64A5C8: mov     [ecx+8], eax
0x64A5CB: mov     ecx, esi; this
0x64A5CD: call    TESObjectREFR_SetPosition
0x64A5D2: mov     edx, [ebp+0]
0x64A5D5: mov     eax, [edx+190h]
0x64A5DB: mov     ecx, ebp
0x64A5DD: mov     [esp+64h+var_4], 1
0x64A5E2: call    eax
0x64A5E4: test    al, al
0x64A5E6: jnz     short loc_64A60A
0x64A5E8: mov     eax, [ebp+8]
0x64A5EB: mov     ecx, eax
0x64A5ED: shr     ecx, 0Bh
0x64A5F0: test    cl, 1
0x64A5F3: jnz     short loc_64A60A
0x64A5F5: shr     eax, 5
0x64A5F8: test    al, 1
0x64A5FA: jnz     short loc_64A60A
0x64A5FC: push    1
0x64A5FE: push    0
0x64A600: push    0
0x64A602: push    esi
0x64A603: mov     ecx, ebp
0x64A605: call    ActivateRef
0x64A60A: mov     ecx, ebp; this
0x64A60C: call    TESObjectREFR_GetParentCell
0x64A611: mov     ecx, ebp; this
0x64A613: mov     ebx, eax
0x64A615: call    TESObjectREFR_GetWorldSpace
0x64A61A: mov     [esp+64h+var_54], eax
0x64A61E: jmp     def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A623: push    esi
0x64A624: lea     edx, [esp+68h+var_2C]
0x64A628: push    edx
0x64A629: jmp     loc_64A555
0x64A62E: push    esi; jumptable 0064A4E0 case 3
0x64A62F: lea     ecx, [esp+68h+var_20]
0x64A633: push    ecx; a3
0x64A634: mov     ecx, edi
0x64A636: call    sub_566B30
0x64A63B: mov     edx, [eax]
0x64A63D: sub     esp, 0Ch
0x64A640: mov     ecx, esp
0x64A642: mov     [ecx], edx
0x64A644: mov     edx, [eax+4]
0x64A647: mov     eax, [eax+8]
0x64A64A: mov     [ecx+4], edx
0x64A64D: mov     [ecx+8], eax
0x64A650: mov     ecx, esi; this
0x64A652: call    TESObjectREFR_SetPosition
0x64A657: push    esi
0x64A658: mov     ecx, edi
0x64A65A: call    sub_566A40
0x64A65F: push    esi
0x64A660: mov     ecx, edi
0x64A662: mov     ebx, eax
0x64A664: call    sub_566940
0x64A669: mov     ecx, [edi+24h]
0x64A66C: test    ecx, ecx
0x64A66E: mov     [esp+64h+var_54], eax
0x64A672: jz      loc_64A77A
0x64A678: call    sub_5697E0
0x64A67D: test    eax, eax
0x64A67F: jz      loc_64A77A
0x64A685: mov     [esp+64h+var_4], 1
0x64A68A: jmp     def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A68F: push    esi; jumptable 0064A4E0 case 4
0x64A690: lea     ecx, [esp+68h+var_14]
0x64A694: push    ecx; a3
0x64A695: mov     ecx, edi
0x64A697: call    sub_566B30
0x64A69C: mov     edx, [eax]
0x64A69E: sub     esp, 0Ch
0x64A6A1: mov     ecx, esp
0x64A6A3: mov     [ecx], edx
0x64A6A5: mov     edx, [eax+4]
0x64A6A8: mov     eax, [eax+8]
0x64A6AB: mov     [ecx+4], edx
0x64A6AE: mov     [ecx+8], eax
0x64A6B1: mov     ecx, esi; this
0x64A6B3: call    TESObjectREFR_SetPosition
0x64A6B8: push    esi
0x64A6B9: mov     ecx, edi
0x64A6BB: call    sub_566A40
0x64A6C0: push    esi
0x64A6C1: mov     ecx, edi
0x64A6C3: mov     ebx, eax
0x64A6C5: call    sub_566940
0x64A6CA: mov     ecx, [edi+24h]
0x64A6CD: test    ecx, ecx
0x64A6CF: mov     [esp+64h+var_54], eax
0x64A6D3: jz      loc_64A77A
0x64A6D9: call    sub_5697E0
0x64A6DE: test    eax, eax
0x64A6E0: jz      loc_64A77A
0x64A6E6: mov     [esp+64h+var_4], 1
0x64A6EB: jmp     def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A6F0: mov     ecx, [edi+28h]; jumptable 0064A4E0 case 1
0x64A6F3: test    ecx, ecx
0x64A6F5: jz      def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A6FB: call    sub_569E60
0x64A700: test    eax, eax
0x64A702: jnz     short loc_64A71C
0x64A704: mov     ecx, [edi+28h]
0x64A707: call    sub_569E70
0x64A70C: test    eax, eax
0x64A70E: jnz     short loc_64A71C
0x64A710: mov     ecx, [edi+28h]
0x64A713: call    sub_569E80
0x64A718: test    eax, eax
0x64A71A: jz      short def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A71C: mov     ecx, [edi+28h]
0x64A71F: call    sub_569E60
0x64A724: mov     ebp, eax
0x64A726: test    ebp, ebp
0x64A728: jz      short def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A72A: mov     ecx, [ebp+8]
0x64A72D: shr     ecx, 5
0x64A730: test    cl, 1
0x64A733: jnz     short def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A735: cmp     ebp, ds:0B333C4h
0x64A73B: jz      short def_64A4E0; jumptable 0064A4E0 default case, case 2
0x64A73D: mov     edx, [ebp+0]
0x64A740: mov     eax, [edx+174h]
0x64A746: mov     ecx, ebp
0x64A748: call    eax
0x64A74A: mov     edx, [eax]
0x64A74C: sub     esp, 0Ch
0x64A74F: mov     ecx, esp
0x64A751: mov     [ecx], edx
0x64A753: mov     edx, [eax+4]
0x64A756: mov     eax, [eax+8]
0x64A759: mov     [ecx+4], edx
0x64A75C: mov     [ecx+8], eax
0x64A75F: mov     ecx, esi; this
0x64A761: call    TESObjectREFR_SetPosition
0x64A766: mov     ecx, ebp; this
0x64A768: call    TESObjectREFR_GetParentCell
0x64A76D: mov     ecx, ebp; this
0x64A76F: mov     ebx, eax
0x64A771: call    TESObjectREFR_GetWorldSpace
0x64A776: mov     [esp+64h+var_54], eax
0x64A77A: mov     [esp+64h+var_4], 0
0x64A77F: mov     ecx, esi; jumptable 0064A4E0 default case, case 2
0x64A781: call    sub_5E6E00
0x64A786: mov     ecx, edi
0x64A788: call    sub_565DF0
0x64A78D: test    al, al
0x64A78F: jz      short loc_64A7A5
0x64A791: mov     ecx, offset TimeGlobals
0x64A796: call    TimeGlobals_GetGameDay
0x64A79B: lea     ecx, [esi+44h]
0x64A79E: push    eax
0x64A79F: push    edi
0x64A7A0: call    sub_41FFC0
0x64A7A5: mov     ecx, edi
0x64A7A7: call    sub_565DB0
0x64A7AC: test    al, al
0x64A7AE: jz      short loc_64A7B8
0x64A7B0: push    esi
0x64A7B1: push    offset sub_645A30
0x64A7B6: jmp     short loc_64A7C9
0x64A7B8: mov     ecx, edi
0x64A7BA: call    sub_565DC0
0x64A7BF: test    al, al
0x64A7C1: jz      short loc_64A80A
0x64A7C3: push    esi; a7
0x64A7C4: push    offset sub_645AF0; a6
0x64A7C9: mov     edx, [esi]
0x64A7CB: fld     dword ptr ds:0A5B6C0h
0x64A7D1: mov     eax, [edx+174h]
0x64A7D7: push    ecx
0x64A7D8: mov     ecx, esi
0x64A7DA: fstp    [esp+70h+a5]; a5
0x64A7DD: call    eax
0x64A7DF: fld     dword ptr ds:0A5B6C0h
0x64A7E5: mov     edx, [esi]
0x64A7E7: push    eax; a4
0x64A7E8: mov     eax, [edx+174h]
0x64A7EE: push    ecx
0x64A7EF: mov     ecx, esi
0x64A7F1: fstp    [esp+78h+var_78]; a3
0x64A7F4: call    eax
0x64A7F6: push    eax; a2
0x64A7F7: mov     ecx, esi; this
0x64A7F9: call    TESObjectREFR_GetParentCell
0x64A7FE: mov     ecx, ds:0B33A98h
0x64A804: push    eax; a1
0x64A805: call    sub_446B90
0x64A80A: mov     ecx, [esp+64h+var_50]
0x64A80E: mov     eax, [ecx+4]
0x64A811: test    eax, eax
0x64A813: mov     edi, [esp+64h+var_4C]
0x64A817: mov     [esp+64h+var_50], eax
0x64A81B: mov     ebp, eax
0x64A81D: jnz     loc_64A446
0x64A823: mov     ecx, edi
0x64A825: call    BSSimpleList_Clear
0x64A82A: push    edi
0x64A82B: call    FormHeapFree
0x64A830: add     esp, 4
0x64A833: test    ebx, ebx
0x64A835: jnz     short loc_64A83D
0x64A837: cmp     [esp+64h+var_54], ebx
0x64A83B: jz      short loc_64A86F
0x64A83D: cmp     [esp+64h+var_4], 0
0x64A842: jz      short loc_64A855
0x64A844: fld     dword ptr ds:0A32048h
0x64A84A: push    ecx
0x64A84B: mov     ecx, esi
0x64A84D: fstp    [esp+68h+var_68]; float
0x64A850: call    sub_4D89D0
0x64A855: mov     edx, [esp+68h+var_58]
0x64A859: push    edx; int
0x64A85A: push    ebx; int
0x64A85B: push    esi; Concurrency::details::SchedulerBase *
0x64A85C: call    sub_4DD4B0
0x64A861: mov     eax, [esp+74h+var_4C]
0x64A865: add     esp, 0Ch
0x64A868: mov     dword ptr [eax+8], 0
0x64A86F: push    ebp
0x64A870: call    FormHeapFree
0x64A875: add     esp, 4
0x64A878: mov     esi, [esi+58h]
0x64A87B: mov     edx, [esi]
0x64A87D: mov     eax, [edx+144h]
0x64A883: push    0
0x64A885: mov     ecx, esi
0x64A887: call    eax
0x64A889: pop     edi
0x64A88A: pop     esi
0x64A88B: pop     ebp
0x64A88C: pop     ebx
0x64A88D: add     esp, 4Ch
0x64A890: retn    8

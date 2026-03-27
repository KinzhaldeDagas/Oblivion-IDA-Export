0x633590: sub     esp, 1Ch
0x633593: push    ebx
0x633594: push    ebp
0x633595: push    esi
0x633596: mov     esi, [esp+28h+arg_0]
0x63359A: test    esi, esi
0x63359C: push    edi
0x63359D: mov     edi, ecx
0x63359F: mov     [esp+2Ch+var_19], 0
0x6335A4: jz      loc_633781
0x6335AA: mov     eax, [esi]
0x6335AC: mov     edx, [eax+330h]
0x6335B2: mov     ecx, esi
0x6335B4: call    edx
0x6335B6: test    eax, eax
0x6335B8: jz      loc_633781
0x6335BE: mov     eax, [esi]
0x6335C0: mov     edx, [eax+338h]
0x6335C6: mov     ecx, esi
0x6335C8: call    edx
0x6335CA: test    eax, eax
0x6335CC: jz      loc_633781
0x6335D2: mov     eax, [esi]
0x6335D4: mov     edx, [eax+330h]
0x6335DA: mov     ecx, esi
0x6335DC: call    edx
0x6335DE: mov     ebp, eax
0x6335E0: push    0
0x6335E2: mov     ecx, ebp
0x6335E4: call    sub_6135F0
0x6335E9: push    eax
0x6335EA: mov     ecx, esi
0x6335EC: call    TesObjectREF_GetDistance
0x6335F1: fld     [esp+2Ch+arg_4]
0x6335F5: fcompp
0x6335F7: fnstsw  ax
0x6335F9: test    ah, 41h
0x6335FC: jp      short loc_63360A
0x6335FE: mov     al, 1
0x633600: pop     edi
0x633601: pop     esi
0x633602: pop     ebp
0x633603: pop     ebx
0x633604: add     esp, 1Ch
0x633607: retn    0Ch
0x63360A: mov     eax, [ebp+120h]
0x633610: mov     [esp+2Ch+var_18], eax
0x633614: mov     ecx, [ebp+124h]
0x63361A: mov     [esp+2Ch+var_14], ecx
0x63361E: mov     edx, [ebp+128h]
0x633624: push    offset Vector3_InitValue?
0x633629: lea     ecx, [esp+30h+var_18]
0x63362D: mov     [esp+30h+var_10], edx
0x633631: call    sub_8AA350
0x633636: test    al, al
0x633638: jnz     short loc_633645
0x63363A: mov     ecx, edi
0x63363C: call    sub_64ADA0
0x633641: test    al, al
0x633643: jz      short loc_633698
0x633645: mov     ecx, edi
0x633647: call    sub_64ADA0
0x63364C: mov     ecx, ebp
0x63364E: push    eax; char
0x63364F: call    sub_6135F0
0x633654: fld     [esp+30h+arg_4]
0x633658: push    eax; int
0x633659: push    ecx
0x63365A: fstp    [esp+38h+var_38]; float
0x63365D: lea     eax, [esp+38h+var_C]
0x633661: push    esi; int
0x633662: push    eax; int
0x633663: call    sub_628790
0x633668: mov     ecx, [eax]
0x63366A: mov     [esp+40h+var_18], ecx
0x63366E: mov     edx, [eax+4]
0x633671: mov     [esp+40h+var_14], edx
0x633675: mov     ecx, [eax+8]
0x633678: mov     [esp+40h+var_10], ecx
0x63367C: mov     edx, [eax]
0x63367E: add     esp, 8
0x633681: mov     ecx, esp
0x633683: mov     [ecx], edx
0x633685: mov     edx, [eax+4]
0x633688: mov     eax, [eax+8]
0x63368B: mov     [ecx+4], edx
0x63368E: mov     [ecx+8], eax
0x633691: mov     ecx, ebp
0x633693: call    sub_6127E0
0x633698: lea     ecx, [esp+2Ch+var_18]
0x63369C: push    ecx
0x63369D: mov     ecx, esi
0x63369F: call    sub_4D7E30
0x6336A4: fcomp   qword ptr ds:0A3AA50h
0x6336AA: fnstsw  ax
0x6336AC: test    ah, 41h
0x6336AF: jp      short loc_633700
0x6336B1: cmp     byte ptr [edi+0D0h], 0
0x6336B8: jnz     short loc_6336C7
0x6336BA: mov     edx, [edi]
0x6336BC: mov     eax, [edx+194h]
0x6336C2: push    esi; float
0x6336C3: mov     ecx, edi
0x6336C5: call    eax
0x6336C7: mov     ecx, ds:0B3F9A8h
0x6336CD: mov     edx, ds:0B3F9ACh
0x6336D3: sub     esp, 0Ch
0x6336D6: mov     eax, esp
0x6336D8: mov     [eax], ecx
0x6336DA: mov     ecx, ds:0B3F9B0h
0x6336E0: mov     [eax+4], edx
0x6336E3: mov     [eax+8], ecx
0x6336E6: mov     ecx, ebp
0x6336E8: mov     [esp+38h+var_19], 1
0x6336ED: call    sub_6127E0
0x6336F2: mov     al, [esp+2Ch+var_19]
0x6336F6: pop     edi
0x6336F7: pop     esi
0x6336F8: pop     ebp
0x6336F9: pop     ebx
0x6336FA: add     esp, 1Ch
0x6336FD: retn    0Ch
0x633700: mov     ecx, esi; this
0x633702: call    TESObjectREFR_GetParentCell
0x633707: mov     ecx, esi; this
0x633709: mov     ebp, eax
0x63370B: call    TESObjectREFR_GetWorldSpace
0x633710: cmp     byte ptr [edi+0D0h], 0
0x633717: mov     ebx, eax
0x633719: jz      short loc_633751
0x63371B: mov     ecx, [esp+2Ch+var_18]
0x63371F: mov     edx, [edi]
0x633721: mov     edx, [edx+3DCh]
0x633727: push    ebx
0x633728: push    ebp
0x633729: sub     esp, 0Ch
0x63372C: mov     eax, esp
0x63372E: mov     [eax], ecx
0x633730: mov     ecx, [esp+40h+var_14]
0x633734: mov     [eax+4], ecx
0x633737: mov     ecx, [esp+40h+var_10]
0x63373B: mov     [eax+8], ecx
0x63373E: push    esi
0x63373F: mov     ecx, edi
0x633741: call    edx
0x633743: test    al, al
0x633745: jnz     short loc_633751
0x633747: pop     edi
0x633748: pop     esi
0x633749: pop     ebp
0x63374A: pop     ebx
0x63374B: add     esp, 1Ch
0x63374E: retn    0Ch
0x633751: mov     ecx, [esp+2Ch+arg_8]
0x633755: mov     eax, [edi]
0x633757: mov     edx, [eax+238h]
0x63375D: push    ecx
0x63375E: push    esi
0x63375F: mov     ecx, edi
0x633761: call    edx
0x633763: fld     dword ptr ds:0A30634h
0x633769: mov     eax, [edi]
0x63376B: mov     edx, [eax+414h]
0x633771: push    ecx
0x633772: fstp    [esp+30h+var_30]
0x633775: push    ebx
0x633776: push    ebp
0x633777: lea     ecx, [esp+38h+var_18]
0x63377B: push    ecx
0x63377C: push    esi
0x63377D: mov     ecx, edi
0x63377F: call    edx
0x633781: mov     al, [esp+2Ch+var_19]
0x633785: pop     edi
0x633786: pop     esi
0x633787: pop     ebp
0x633788: pop     ebx
0x633789: add     esp, 1Ch
0x63378C: retn    0Ch

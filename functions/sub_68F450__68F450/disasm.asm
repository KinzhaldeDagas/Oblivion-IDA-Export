0x68F450: push    ebp
0x68F451: mov     ebp, esp
0x68F453: and     esp, 0FFFFFFF0h
0x68F456: push    0FFFFFFFFh
0x68F458: push    offset SEH_68F450
0x68F45D: mov     eax, large fs:0
0x68F463: push    eax
0x68F464: sub     esp, 98h
0x68F46A: mov     eax, ds:0B30AACh
0x68F46F: xor     eax, esp
0x68F471: mov     [esp+0A4h+var_14], eax
0x68F478: push    ebx
0x68F479: push    esi
0x68F47A: push    edi
0x68F47B: mov     eax, ds:0B30AACh
0x68F480: xor     eax, esp
0x68F482: push    eax
0x68F483: lea     eax, [esp+0B4h+var_C]
0x68F48A: mov     large fs:0, eax
0x68F490: mov     ebx, [ebp+arg_0]
0x68F493: mov     eax, [ebx+20h]
0x68F496: push    eax
0x68F497: mov     edi, ecx
0x68F499: mov     [esp+0B8h+var_88], ebx
0x68F49D: xor     esi, esi
0x68F49F: call    sub_8AFCE0
0x68F4A4: add     esp, 4
0x68F4A7: test    eax, eax
0x68F4A9: jz      short loc_68F4B6
0x68F4AB: push    eax
0x68F4AC: call    sub_4DC270
0x68F4B1: add     esp, 4
0x68F4B4: mov     esi, eax
0x68F4B6: push    0; int
0x68F4B8: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x68F4BD: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x68F4C2: push    0; int
0x68F4C4: push    esi; void *
0x68F4C5: call    OblivionDynamicCast
0x68F4CA: xor     esi, esi
0x68F4CC: add     esp, 14h
0x68F4CF: cmp     eax, esi
0x68F4D1: mov     [esp+0B4h+var_8C], eax
0x68F4D5: jnz     short loc_68F4E1
0x68F4D7: mov     eax, [edi+1E0h]
0x68F4DD: mov     [esp+0B4h+var_8C], eax
0x68F4E1: mov     edx, [eax]
0x68F4E3: mov     ecx, eax
0x68F4E5: mov     eax, [edx+210h]
0x68F4EB: call    eax
0x68F4ED: test    al, al
0x68F4EF: jz      loc_68F93E
0x68F4F5: mov     eax, [ebx+28h]
0x68F4F8: push    eax
0x68F4F9: mov     [esp+0B8h+var_A0], esi
0x68F4FD: call    sub_8AFCE0
0x68F502: add     esp, 4
0x68F505: cmp     eax, esi
0x68F507: jz      short loc_68F52E
0x68F509: push    eax
0x68F50A: call    sub_4DC270
0x68F50F: add     esp, 4
0x68F512: cmp     eax, esi
0x68F514: mov     [esp+0B4h+var_A0], eax
0x68F518: jz      short loc_68F52E
0x68F51A: mov     ecx, eax
0x68F51C: mov     edx, [ecx]
0x68F51E: mov     eax, [edx+190h]
0x68F524: call    eax
0x68F526: test    al, al
0x68F528: jz      short loc_68F52E
0x68F52A: mov     esi, [esp+0B4h+var_A0]
0x68F52E: mov     eax, [ebx+28h]
0x68F531: cmp     byte ptr [eax+18h], 2
0x68F535: jnz     short loc_68F5B1
0x68F537: mov     ecx, [eax+10h]
0x68F53A: add     ecx, eax
0x68F53C: jz      short loc_68F5B1
0x68F53E: test    esi, esi
0x68F540: jz      loc_68F93E
0x68F546: mov     edx, [esi]
0x68F548: mov     eax, [edx+198h]
0x68F54E: push    0
0x68F550: mov     ecx, esi
0x68F552: call    eax
0x68F554: test    al, al
0x68F556: jnz     loc_68F93E
0x68F55C: mov     ecx, [esi+58h]
0x68F55F: test    ecx, ecx
0x68F561: jz      short loc_68F587
0x68F563: mov     edx, [ecx]
0x68F565: mov     eax, [edx+2E4h]
0x68F56B: call    eax
0x68F56D: test    eax, eax
0x68F56F: jz      short loc_68F587
0x68F571: mov     ecx, [esi+58h]
0x68F574: mov     edx, [ecx]
0x68F576: mov     eax, [edx+2E4h]
0x68F57C: call    eax
0x68F57E: cmp     eax, 6
0x68F581: jnz     loc_68F93E
0x68F587: mov     edx, [esi]
0x68F589: mov     eax, [edx+18Ch]
0x68F58F: mov     ecx, esi
0x68F591: call    eax
0x68F593: cmp     eax, 4
0x68F596: jz      loc_68F93E
0x68F59C: mov     edx, [esi]
0x68F59E: mov     eax, [edx+18Ch]
0x68F5A4: mov     ecx, esi
0x68F5A6: call    eax
0x68F5A8: cmp     eax, 9
0x68F5AB: jz      loc_68F93E
0x68F5B1: mov     eax, [esp+0B4h+var_A0]
0x68F5B5: test    eax, eax
0x68F5B7: jz      short loc_68F5CB
0x68F5B9: mov     ecx, ds:0B333C4h
0x68F5BF: cmp     eax, [ecx+578h]
0x68F5C5: jz      loc_68F93E
0x68F5CB: test    esi, esi
0x68F5CD: jz      short loc_68F5DE
0x68F5CF: mov     ecx, esi; this
0x68F5D1: call    Actor_IsGhost
0x68F5D6: test    al, al
0x68F5D8: jnz     loc_68F93E
0x68F5DE: cmp     byte ptr ds:0B15A68h, 0
0x68F5E5: jz      loc_68F81A
0x68F5EB: push    ebx
0x68F5EC: lea     ecx, [esp+0B8h+var_50]
0x68F5F0: call    sub_532210
0x68F5F5: mov     edi, [esp+0B4h+var_30]
0x68F5FC: mov     eax, [edi]
0x68F5FE: test    eax, eax
0x68F600: jz      short loc_68F607
0x68F602: mov     esi, [eax+8]
0x68F605: jmp     short loc_68F609
0x68F607: xor     esi, esi
0x68F609: test    esi, esi
0x68F60B: jz      loc_68F704
0x68F611: push    0DCh ; 'Ü'; Size
0x68F616: call    FormHeapAlloc
0x68F61B: add     esp, 4
0x68F61E: mov     [esp+0B4h+var_9C], eax
0x68F622: xor     ebx, ebx
0x68F624: cmp     eax, ebx
0x68F626: mov     [esp+0B4h+var_4], ebx
0x68F62D: jz      short loc_68F639
0x68F62F: push    ebx
0x68F630: mov     ecx, eax; this
0x68F632: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x68F637: mov     ebx, eax
0x68F639: mov     edx, [esi]
0x68F63B: mov     eax, [edx+90h]
0x68F641: push    ebx
0x68F642: mov     ecx, esi
0x68F644: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x68F64F: call    eax
0x68F651: mov     eax, [edi+8]
0x68F654: push    eax
0x68F655: lea     ecx, [esp+0B8h+var_74]
0x68F659: push    ecx
0x68F65A: call    sub_607740
0x68F65F: mov     edx, [esp+0BCh+var_30]
0x68F666: lea     edi, [ebx+30h]
0x68F669: mov     ecx, 9
0x68F66E: lea     esi, [esp+0BCh+var_74]
0x68F672: rep movsd
0x68F674: mov     eax, [edx+8]
0x68F677: add     eax, 30h ; '0'
0x68F67A: push    eax
0x68F67B: lea     eax, [esp+0C0h+var_98]
0x68F67F: push    eax
0x68F680: call    sub_43F3E0
0x68F685: mov     ecx, [esp+0C4h+var_98]
0x68F689: mov     edx, [esp+0C4h+var_94]
0x68F68D: mov     eax, [esp+0C4h+var_90]
0x68F691: mov     [ebx+54h], ecx
0x68F694: mov     [ebx+58h], edx
0x68F697: add     esp, 10h
0x68F69A: mov     [ebx+5Ch], eax
0x68F69D: call    sub_4E70B0
0x68F6A2: push    eax; a2
0x68F6A3: mov     ecx, ebx; this
0x68F6A5: call    sub_405680
0x68F6AA: push    1Ch; Size
0x68F6AC: call    FormHeapAlloc
0x68F6B1: add     esp, 4
0x68F6B4: mov     [esp+0B4h+var_9C], eax
0x68F6B8: test    eax, eax
0x68F6BA: mov     esi, 1
0x68F6BF: mov     [esp+0B4h+var_4], esi
0x68F6C6: jz      short loc_68F6D1
0x68F6C8: mov     ecx, eax
0x68F6CA: call    sub_4059D0
0x68F6CF: jmp     short loc_68F6D3
0x68F6D1: xor     eax, eax
0x68F6D3: or      [eax+18h], si
0x68F6D7: push    eax; a2
0x68F6D8: mov     ecx, ebx; this
0x68F6DA: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x68F6E5: call    sub_405680
0x68F6EA: fld     dword ptr ds:0A3D8F0h
0x68F6F0: push    ecx
0x68F6F1: mov     ecx, ds:0B333A0h
0x68F6F7: fstp    [esp+0B8h+var_B8]; float
0x68F6FA: push    ebx; int
0x68F6FB: call    sub_440E60
0x68F700: mov     ebx, [esp+0B4h+var_88]
0x68F704: mov     edi, [esp+0B4h+var_28]
0x68F70B: mov     eax, [edi]
0x68F70D: test    eax, eax
0x68F70F: jz      short loc_68F716
0x68F711: mov     esi, [eax+8]
0x68F714: jmp     short loc_68F718
0x68F716: xor     esi, esi
0x68F718: test    esi, esi
0x68F71A: jz      loc_68F81A
0x68F720: push    0DCh ; 'Ü'; Size
0x68F725: call    FormHeapAlloc
0x68F72A: add     esp, 4
0x68F72D: mov     [esp+0B4h+var_9C], eax
0x68F731: test    eax, eax
0x68F733: mov     [esp+0B4h+var_4], 2
0x68F73E: jz      short loc_68F74D
0x68F740: push    0
0x68F742: mov     ecx, eax; this
0x68F744: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x68F749: mov     ebx, eax
0x68F74B: jmp     short loc_68F74F
0x68F74D: xor     ebx, ebx
0x68F74F: mov     edx, [esi]
0x68F751: mov     eax, [edx+90h]
0x68F757: push    ebx
0x68F758: mov     ecx, esi
0x68F75A: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x68F765: call    eax
0x68F767: mov     eax, [edi+8]
0x68F76A: push    eax
0x68F76B: lea     ecx, [esp+0B8h+var_74]
0x68F76F: push    ecx
0x68F770: call    sub_607740
0x68F775: mov     edx, [esp+0BCh+var_28]
0x68F77C: lea     edi, [ebx+30h]
0x68F77F: mov     ecx, 9
0x68F784: lea     esi, [esp+0BCh+var_74]
0x68F788: rep movsd
0x68F78A: mov     eax, [edx+8]
0x68F78D: add     eax, 30h ; '0'
0x68F790: push    eax
0x68F791: lea     eax, [esp+0C0h+var_98]
0x68F795: push    eax
0x68F796: call    sub_43F3E0
0x68F79B: mov     ecx, [esp+0C4h+var_98]
0x68F79F: mov     edx, [esp+0C4h+var_94]
0x68F7A3: mov     eax, [esp+0C4h+var_90]
0x68F7A7: mov     [ebx+54h], ecx
0x68F7AA: mov     [ebx+58h], edx
0x68F7AD: add     esp, 10h
0x68F7B0: mov     [ebx+5Ch], eax
0x68F7B3: call    sub_4E70B0
0x68F7B8: push    eax; a2
0x68F7B9: mov     ecx, ebx; this
0x68F7BB: call    sub_405680
0x68F7C0: push    1Ch; Size
0x68F7C2: call    FormHeapAlloc
0x68F7C7: add     esp, 4
0x68F7CA: mov     [esp+0B4h+var_9C], eax
0x68F7CE: test    eax, eax
0x68F7D0: mov     [esp+0B4h+var_4], 3
0x68F7DB: jz      short loc_68F7E6
0x68F7DD: mov     ecx, eax
0x68F7DF: call    sub_4059D0
0x68F7E4: jmp     short loc_68F7E8
0x68F7E6: xor     eax, eax
0x68F7E8: or      word ptr [eax+18h], 1
0x68F7ED: push    eax; a2
0x68F7EE: mov     ecx, ebx; this
0x68F7F0: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x68F7FB: call    sub_405680
0x68F800: fld     dword ptr ds:0A3D8F0h
0x68F806: push    ecx
0x68F807: mov     ecx, ds:0B333A0h
0x68F80D: fstp    [esp+0B8h+var_B8]; float
0x68F810: push    ebx; int
0x68F811: call    sub_440E60
0x68F816: mov     ebx, [esp+0B4h+var_88]
0x68F81A: lea     ecx, [esp+0B4h+var_98]
0x68F81E: push    ebx
0x68F81F: push    ecx
0x68F820: call    sub_43F3E0
0x68F825: mov     ebx, [esp+0BCh+var_90]
0x68F829: add     esp, 8
0x68F82C: cmp     byte ptr ds:0B15A68h, 0
0x68F833: jz      short loc_68F896
0x68F835: fld1
0x68F837: lea     edx, [esp+0B4h+var_84]
0x68F83B: fst     [esp+0B4h+var_84]
0x68F83F: push    edx; int
0x68F840: fldz
0x68F842: push    ecx
0x68F843: fst     [esp+0BCh+var_80]
0x68F847: fstp    [esp+0BCh+var_7C]
0x68F84B: fstp    [esp+0BCh+var_78]
0x68F84F: fld     dword ptr ds:0A31E2Ch
0x68F855: fstp    [esp+0BCh+var_BC]; float
0x68F858: call    sub_47FD30
0x68F85D: add     esp, 8
0x68F860: mov     esi, eax
0x68F862: call    sub_4E70B0
0x68F867: push    eax; a2
0x68F868: mov     ecx, esi; this
0x68F86A: call    sub_405680
0x68F86F: fld     dword ptr ds:0A3D8F0h
0x68F875: mov     ecx, [esp+0B4h+var_94]
0x68F879: mov     eax, [esp+0B4h+var_98]
0x68F87D: mov     [esi+54h], eax
0x68F880: push    ecx
0x68F881: mov     [esi+58h], ecx
0x68F884: fstp    [esp+0B8h+var_B8]; float
0x68F887: mov     [esi+5Ch], ebx
0x68F88A: mov     ecx, ds:0B333A0h
0x68F890: push    esi; int
0x68F891: call    sub_440E60
0x68F896: mov     ecx, [esp+0B4h+var_A0]
0x68F89A: mov     edx, [esp+0B4h+var_8C]
0x68F89E: mov     edi, [edx+68h]
0x68F8A1: xor     esi, esi
0x68F8A3: test    ecx, ecx
0x68F8A5: mov     byte ptr [esp+0B4h+var_9C], 0
0x68F8AA: jz      short loc_68F8C3
0x68F8AC: mov     eax, [ecx]
0x68F8AE: mov     edx, [eax+190h]
0x68F8B4: call    edx
0x68F8B6: test    al, al
0x68F8B8: jz      short loc_68F8C3
0x68F8BA: mov     esi, [esp+0B4h+var_A0]
0x68F8BE: mov     byte ptr [esp+0B4h+var_9C], 1
0x68F8C3: test    edi, edi
0x68F8C5: jz      short loc_68F8F8
0x68F8C7: mov     ecx, edi; this
0x68F8C9: call    MagicCaster_GetParentActor
0x68F8CE: test    eax, eax
0x68F8D0: jz      short loc_68F8F8
0x68F8D2: mov     ecx, [esp+0B4h+var_9C]
0x68F8D6: mov     edx, [esp+0B4h+var_98]
0x68F8DA: push    esi
0x68F8DB: push    ecx
0x68F8DC: sub     esp, 0Ch
0x68F8DF: mov     ecx, esp
0x68F8E1: mov     [ecx], edx
0x68F8E3: mov     edx, [esp+0C8h+var_94]
0x68F8E7: mov     [ecx+4], edx
0x68F8EA: mov     [ecx+8], ebx
0x68F8ED: push    eax
0x68F8EE: mov     ecx, offset ActorProcessManager_ptr
0x68F8F3: call    sub_677760
0x68F8F8: mov     eax, [esp+0B4h+var_88]
0x68F8FC: mov     ecx, [eax+28h]
0x68F8FF: cmp     byte ptr [ecx+18h], 1
0x68F903: jnz     short loc_68F911
0x68F905: mov     eax, [ecx+10h]
0x68F908: add     eax, ecx
0x68F90A: jz      short loc_68F911
0x68F90C: mov     eax, [eax+0Ch]
0x68F90F: jmp     short loc_68F913
0x68F911: xor     eax, eax
0x68F913: mov     esi, [esp+0B4h+var_A0]
0x68F917: mov     ecx, [esp+0B4h+var_8C]
0x68F91B: mov     edx, [ecx]
0x68F91D: push    0
0x68F91F: push    esi
0x68F920: mov     esi, [esp+0BCh+var_98]
0x68F924: push    eax
0x68F925: sub     esp, 0Ch
0x68F928: mov     eax, esp
0x68F92A: mov     [eax], esi
0x68F92C: mov     esi, [esp+0CCh+var_94]
0x68F930: mov     [eax+4], esi
0x68F933: mov     [eax+8], ebx
0x68F936: mov     eax, [edx+208h]
0x68F93C: call    eax
0x68F93E: mov     ecx, [esp+0B4h+var_C]
0x68F945: mov     large fs:0, ecx
0x68F94C: pop     ecx
0x68F94D: pop     edi
0x68F94E: pop     esi
0x68F94F: pop     ebx
0x68F950: mov     ecx, [esp+0A4h+var_14]
0x68F957: xor     ecx, esp
0x68F959: call    @__security_check_cookie@4; __security_check_cookie(x)
0x68F95E: mov     esp, ebp
0x68F960: pop     ebp
0x68F961: retn    4

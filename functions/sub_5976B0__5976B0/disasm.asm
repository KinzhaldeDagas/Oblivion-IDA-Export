0x5976B0: push    0FFFFFFFFh
0x5976B2: push    offset SEH_5ACE20
0x5976B7: mov     eax, large fs:0
0x5976BD: push    eax
0x5976BE: sub     esp, 8
0x5976C1: push    ebx
0x5976C2: push    ebp
0x5976C3: push    esi
0x5976C4: push    edi
0x5976C5: mov     eax, ds:0B30AACh
0x5976CA: xor     eax, esp
0x5976CC: push    eax
0x5976CD: lea     eax, [esp+28h+var_C]
0x5976D1: mov     large fs:0, eax
0x5976D7: mov     esi, ecx
0x5976D9: call    sub_578FE0
0x5976DE: cmp     eax, 41Bh
0x5976E3: jnz     short loc_597700
0x5976E5: mov     byte ptr ds:0B3B274h, 1
0x5976EC: mov     ecx, [esp+28h+var_C]
0x5976F0: mov     large fs:0, ecx
0x5976F7: pop     ecx
0x5976F8: pop     edi
0x5976F9: pop     esi
0x5976FA: pop     ebp
0x5976FB: pop     ebx
0x5976FC: add     esp, 14h
0x5976FF: retn
0x597700: mov     eax, [esi]
0x597702: mov     edx, [eax+34h]
0x597705: mov     ecx, esi
0x597707: call    edx
0x597709: mov     edi, eax
0x59770B: call    sub_578FE0
0x597710: cmp     eax, edi
0x597712: jnz     def_597779
0x597718: xor     ebx, ebx
0x59771A: cmp     [esi+54h], bl
0x59771D: jnz     def_597779
0x597723: or      edi, 0FFFFFFFFh
0x597726: cmp     ds:0B3B274h, bl
0x59772C: jz      short loc_59776A
0x59772E: mov     eax, [esi]
0x597730: mov     edx, [eax+34h]
0x597733: mov     ecx, esi
0x597735: call    edx
0x597737: mov     ebp, eax
0x597739: call    sub_578FE0
0x59773E: cmp     eax, ebp
0x597740: jnz     short loc_59776A
0x597742: mov     eax, ds:0B3B738h
0x597747: cmp     eax, ebx
0x597749: mov     ds:0B3B274h, bl
0x59774F: jz      short loc_597767
0x597751: cmp     [eax], bl
0x597753: jz      short loc_597767
0x597755: push    eax
0x597756: lea     ecx, [esi+84h]
0x59775C: call    sub_488810
0x597761: add     dword ptr [esi+58h], 1
0x597765: jmp     short loc_59776A
0x597767: add     [esi+58h], edi
0x59776A: mov     eax, [esi+58h]
0x59776D: add     eax, 0FFFFFFFFh; switch 5 cases
0x597770: cmp     eax, 4
0x597773: ja      def_597779
0x597779: jmp     ds:jpt_597779[eax*4]; switch jump
0x597780: mov     eax, [esi+50h]; jumptable 00597779 case 1
0x597783: push    2
0x597785: push    eax
0x597786: call    sub_5D6390
0x59778B: add     esp, 8
0x59778E: mov     ecx, [esp+28h+var_C]
0x597792: mov     large fs:0, ecx
0x597799: pop     ecx
0x59779A: pop     edi
0x59779B: pop     esi
0x59779C: pop     ebp
0x59779D: pop     ebx
0x59779E: add     esp, 14h
0x5977A1: retn
0x5977A2: mov     ecx, [esi+4Ch]; jumptable 00597779 case 2
0x5977A5: push    1
0x5977A7: push    ecx
0x5977A8: call    sub_5D6390
0x5977AD: add     esp, 8
0x5977B0: mov     ecx, [esp+28h+var_C]
0x5977B4: mov     large fs:0, ecx
0x5977BB: pop     ecx
0x5977BC: pop     edi
0x5977BD: pop     esi
0x5977BE: pop     ebp
0x5977BF: pop     ebx
0x5977C0: add     esp, 14h
0x5977C3: retn
0x5977C4: mov     edx, [esi+48h]; jumptable 00597779 case 3
0x5977C7: push    ebx
0x5977C8: push    edx
0x5977C9: call    sub_5D6390
0x5977CE: add     esp, 8
0x5977D1: mov     ecx, [esp+28h+var_C]
0x5977D5: mov     large fs:0, ecx
0x5977DC: pop     ecx
0x5977DD: pop     edi
0x5977DE: pop     esi
0x5977DF: pop     ebp
0x5977E0: pop     ebx
0x5977E1: add     esp, 14h
0x5977E4: retn
0x5977E5: mov     esi, [esi+40h]; jumptable 00597779 case 4
0x5977E8: add     esi, 18h
0x5977EB: mov     esi, [esi+4]
0x5977EE: cmp     esi, ebx
0x5977F0: jnz     short loc_5977F7
0x5977F2: mov     esi, offset EmptyString
0x5977F7: mov     eax, ds:0B38658h
0x5977FC: push    esi
0x5977FD: push    eax
0x5977FE: call    TextMenu_Create
0x597803: add     esp, 8
0x597806: mov     ecx, [esp+28h+var_C]
0x59780A: mov     large fs:0, ecx
0x597811: pop     ecx
0x597812: pop     edi
0x597813: pop     esi
0x597814: pop     ebp
0x597815: pop     ebx
0x597816: add     esp, 14h
0x597819: retn
0x59781A: mov     byte ptr [esi+54h], 1; jumptable 00597779 case 5
0x59781E: mov     [esp+28h+var_14], ebx
0x597822: mov     [esp+28h+var_10], bx
0x597827: mov     [esp+28h+var_E], bx
0x59782C: cmp     [esi+34h], ebx
0x59782F: mov     eax, ds:0B38F40h
0x597834: mov     [esp+28h+var_4], ebx
0x597838: jz      short loc_597854
0x59783A: mov     esi, [esi+40h]
0x59783D: add     esi, 18h
0x597840: mov     esi, [esi+4]
0x597843: cmp     esi, ebx
0x597845: jnz     short loc_59784C
0x597847: mov     esi, offset EmptyString
0x59784C: mov     ecx, ds:0B38650h
0x597852: jmp     short loc_597860
0x597854: mov     esi, [esi+84h]
0x59785A: mov     ecx, ds:0B38648h
0x597860: push    eax
0x597861: push    esi
0x597862: push    ecx; ArgList
0x597863: lea     edx, [esp+34h+var_14]
0x597867: push    offset aSSS?; "%s %s %s?"
0x59786C: push    edx; int
0x59786D: call    BSStringT_Static_Format
0x597872: mov     eax, ds:0B38D00h
0x597877: mov     ecx, ds:0B38CF8h
0x59787D: mov     edx, [esp+3Ch+var_14]
0x597881: add     esp, 14h
0x597884: push    ebx
0x597885: push    eax
0x597886: push    ecx
0x597887: push    1
0x597889: push    offset sub_5974E0
0x59788E: push    edx
0x59788F: call    ShowUIMessageBox
0x597894: add     esp, 18h
0x597897: lea     ecx, [esp+28h+var_14]; void *
0x59789B: mov     [esp+28h+var_4], edi
0x59789F: call    BSStringT_Clear

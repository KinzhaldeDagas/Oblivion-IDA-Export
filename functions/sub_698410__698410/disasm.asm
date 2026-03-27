0x698410: push    ebp
0x698411: mov     ebp, esp
0x698413: and     esp, 0FFFFFFF0h
0x698416: push    0FFFFFFFFh
0x698418: push    offset SEH_698410
0x69841D: mov     eax, large fs:0
0x698423: push    eax
0x698424: sub     esp, 0E8h
0x69842A: mov     eax, ds:0B30AACh
0x69842F: xor     eax, esp
0x698431: mov     [esp+0F4h+var_14], eax
0x698438: push    ebx
0x698439: push    esi
0x69843A: push    edi
0x69843B: mov     eax, ds:0B30AACh
0x698440: xor     eax, esp
0x698442: push    eax
0x698443: lea     eax, [esp+104h+var_C]
0x69844A: mov     large fs:0, eax
0x698450: mov     edi, ecx
0x698452: cmp     dword ptr [edi+58h], 0
0x698456: jz      loc_698872
0x69845C: mov     ecx, [edi+58h]
0x69845F: mov     eax, [ecx]
0x698461: mov     edx, [eax+8]
0x698464: call    edx
0x698466: test    eax, eax
0x698468: jnz     loc_698872
0x69846E: mov     ecx, edi; this
0x698470: call    MobileObject_GetCharProxy
0x698475: mov     ecx, edi; this
0x698477: mov     esi, eax
0x698479: call    TESObjectREFR_GetParentCell
0x69847E: mov     ebx, eax
0x698480: test    ebx, ebx
0x698482: mov     [esp+104h+var_E4], ebx
0x698486: jz      short loc_6984AC
0x698488: mov     ecx, ebx; this
0x69848A: call    TESObjectCELL_IsInterior
0x69848F: test    al, al
0x698491: jz      short loc_6984A1
0x698493: lea     ecx, [ebx+28h]
0x698496: call    sub_424180
0x69849B: mov     [esp+104h+var_E8], eax
0x69849F: jmp     short loc_6984B4
0x6984A1: mov     eax, ds:0B35C24h
0x6984A6: mov     [esp+104h+var_E8], eax
0x6984AA: jmp     short loc_6984B4
0x6984AC: mov     [esp+104h+var_E8], 0
0x6984B4: test    esi, esi
0x6984B6: jnz     loc_698729
0x6984BC: push    1
0x6984BE: lea     ecx, [esp+108h+var_D0]
0x6984C2: call    sub_890C00
0x6984C7: fld1
0x6984C9: mov     edx, [edi]
0x6984CB: fstp    [esp+104h+var_54]
0x6984D2: mov     eax, [edx+154h]
0x6984D8: mov     ecx, edi
0x6984DA: mov     [esp+104h+var_4], esi
0x6984E1: call    eax
0x6984E3: mov     edx, [edi]
0x6984E5: mov     [esp+104h+var_60], eax
0x6984EC: mov     eax, [edx+174h]
0x6984F2: mov     ecx, edi
0x6984F4: call    eax
0x6984F6: fld     dword ptr [eax]
0x6984F8: fld     qword ptr ds:0A39088h
0x6984FE: mov     ecx, [esp+104h+var_E8]
0x698502: fmul    st(1), st
0x698504: push    14h; Size
0x698506: fxch    st(1)
0x698508: fstp    [esp+108h+var_D0]
0x69850C: fld     dword ptr [eax+4]
0x69850F: fmul    st, st(1)
0x698511: fstp    [esp+108h+var_CC]
0x698515: fmul    dword ptr [eax+8]
0x698518: mov     [esp+108h+var_58], ecx
0x69851F: fstp    [esp+108h+var_C8]
0x698523: fldz
0x698525: fstp    [esp+108h+var_50]
0x69852C: call    FormHeapAlloc
0x698531: add     esp, 4
0x698534: mov     [esp+104h+var_E0], eax
0x698538: test    eax, eax
0x69853A: mov     byte ptr [esp+104h+var_4], 1
0x698542: jz      short loc_698555
0x698544: fld1
0x698546: push    1; float
0x698548: push    ecx
0x698549: fstp    [esp+10Ch+var_10C]; float
0x69854C: mov     ecx, eax
0x69854E: call    sub_532090
0x698553: jmp     short loc_698557
0x698555: xor     eax, eax
0x698557: push    eax
0x698558: lea     ecx, [esp+108h+var_D0]
0x69855C: mov     byte ptr [esp+108h+var_4], 0
0x698564: call    sub_608AE0
0x698569: mov     ecx, ds:0B33B00h
0x69856F: mov     [esp+104h+var_4C], 0
0x698577: call    sub_45A500
0x69857C: test    al, al
0x69857E: jnz     loc_698658
0x698584: mov     ecx, [edi+68h]
0x698587: test    ecx, ecx
0x698589: jz      short loc_698607
0x69858B: mov     edx, [ecx]
0x69858D: mov     eax, [edx+20h]
0x698590: call    eax
0x698592: mov     esi, eax
0x698594: test    esi, esi
0x698596: jz      short loc_698607
0x698598: mov     edx, [esi]
0x69859A: mov     eax, [edx+190h]
0x6985A0: mov     ecx, esi
0x6985A2: call    eax
0x6985A4: test    al, al
0x6985A6: jz      short loc_6985CA
0x6985A8: lea     ecx, [esp+104h+var_E0]
0x6985AC: push    ecx
0x6985AD: mov     ecx, esi
0x6985AF: call    sub_65ABE0
0x6985B4: movzx   eax, word ptr [eax+2]
0x6985B8: shl     eax, 10h
0x6985BB: or      eax, 7
0x6985BE: mov     [esp+104h+var_5C], eax
0x6985C5: jmp     loc_698663
0x6985CA: mov     edx, [esi]
0x6985CC: mov     eax, [edx+154h]
0x6985D2: mov     ecx, esi
0x6985D4: call    eax
0x6985D6: push    eax
0x6985D7: call    sub_480340
0x6985DC: add     esp, 4
0x6985DF: test    eax, eax
0x6985E1: jz      short loc_698644
0x6985E3: mov     ecx, [eax+10h]
0x6985E6: test    ecx, ecx
0x6985E8: jz      short loc_698644
0x6985EA: lea     edx, [esp+104h+var_E0]
0x6985EE: push    edx
0x6985EF: call    sub_497340
0x6985F4: movzx   eax, word ptr [eax+2]
0x6985F8: shl     eax, 10h
0x6985FB: or      eax, 7
0x6985FE: mov     [esp+104h+var_5C], eax
0x698605: jmp     short loc_698663
0x698607: mov     eax, [edi]
0x698609: mov     edx, [eax+154h]
0x69860F: mov     ecx, edi
0x698611: call    edx
0x698613: push    eax
0x698614: call    sub_480340
0x698619: add     esp, 4
0x69861C: test    eax, eax
0x69861E: jz      short loc_698644
0x698620: mov     ecx, [eax+10h]
0x698623: test    ecx, ecx
0x698625: jz      short loc_698644
0x698627: lea     eax, [esp+104h+var_E0]
0x69862B: push    eax
0x69862C: call    sub_497340
0x698631: movzx   eax, word ptr [eax+2]
0x698635: shl     eax, 10h
0x698638: or      eax, 7
0x69863B: mov     [esp+104h+var_5C], eax
0x698642: jmp     short loc_698663
0x698644: call    sub_531D80
0x698649: shl     eax, 10h
0x69864C: or      eax, 7
0x69864F: mov     [esp+104h+var_5C], eax
0x698656: jmp     short loc_698663
0x698658: mov     [esp+104h+var_5C], 7
0x698663: push    1
0x698665: push    3F0h
0x69866A: mov     ecx, offset FormHeap
0x69866F: mov     [esp+10Ch+var_48], 6
0x69867A: call    j_MemoryHeap_Alloc
0x69867F: mov     dl, al
0x698681: and     dl, 0Fh
0x698684: mov     cl, 10h
0x698686: sub     cl, dl
0x698688: movzx   edx, cl
0x69868B: add     eax, edx
0x69868D: mov     [eax-1], cl
0x698690: mov     [esp+104h+var_E0], eax
0x698694: push    edi
0x698695: lea     ecx, [esp+108h+var_D0]
0x698699: push    ecx
0x69869A: mov     ecx, eax
0x69869C: mov     byte ptr [esp+10Ch+var_4], 2
0x6986A4: call    sub_68F400
0x6986A9: fld1
0x6986AB: mov     esi, eax
0x6986AD: fstp    dword ptr [esi+324h]
0x6986B3: mov     byte ptr [esp+104h+var_4], 0
0x6986BB: or      dword ptr [esi+1F4h], 80000h
0x6986C5: cmp     byte ptr ds:0B333B8h, 0
0x6986CC: jz      short loc_6986DA
0x6986CE: or      dword ptr [esi+1F4h], 100000h
0x6986D8: jmp     short loc_6986E4
0x6986DA: and     dword ptr [esi+1F4h], 0FFEFFFFFh
0x6986E4: push    ecx
0x6986E5: mov     eax, esp
0x6986E7: lea     edx, [esi+4]
0x6986EA: mov     [esp+108h+var_E0], esp
0x6986EE: push    edx; lpAddend
0x6986EF: mov     [eax], esi
0x6986F1: call    dword ptr ds:0A28078h
0x6986F7: mov     ecx, [edi+58h]
0x6986FA: mov     eax, [ecx]
0x6986FC: mov     edx, [eax+190h]
0x698702: call    edx
0x698704: push    edi
0x698705: push    3E8h
0x69870A: mov     ecx, esi
0x69870C: call    sub_8910F0
0x698711: lea     ecx, [esp+104h+var_D0]
0x698715: mov     [esp+104h+var_4], 0FFFFFFFFh
0x698720: call    sub_890F70
0x698725: mov     ebx, [esp+104h+var_E4]
0x698729: test    ebx, ebx
0x69872B: jz      short loc_698743
0x69872D: cmp     [esp+104h+var_E8], 0
0x698732: jz      short loc_698743
0x698734: mov     ecx, ebx
0x698736: call    TESObjectCELL_GetWaterHeight
0x69873B: fmul    qword ptr ds:0A39088h
0x698741: jmp     short loc_698749
0x698743: fld     dword ptr ds:0A6F374h
0x698749: mov     ecx, [esi+8]
0x69874C: fstp    dword ptr [esi+318h]
0x698752: test    ecx, ecx
0x698754: jz      short loc_69875D
0x698756: call    sub_8AC0C0
0x69875B: jmp     short loc_69875F
0x69875D: xor     eax, eax
0x69875F: mov     eax, [eax+8]
0x698762: test    eax, eax
0x698764: jz      short loc_698772
0x698766: mov     eax, [eax+2B0h]
0x69876C: mov     [esp+104h+var_E4], eax
0x698770: jmp     short loc_69877A
0x698772: mov     [esp+104h+var_E4], 0
0x69877A: mov     ecx, [esp+104h+var_E8]
0x69877E: push    ecx
0x69877F: mov     ecx, esi
0x698781: call    sub_895060
0x698786: mov     edx, [edi]
0x698788: mov     eax, [edx+154h]
0x69878E: mov     ecx, edi
0x698790: call    eax
0x698792: mov     ecx, [esi+364h]
0x698798: test    ecx, ecx
0x69879A: mov     ebx, eax
0x69879C: jz      short loc_6987A7
0x69879E: push    0
0x6987A0: call    sub_89F6B0
0x6987A5: jmp     short loc_6987A9
0x6987A7: xor     eax, eax
0x6987A9: cmp     eax, ebx
0x6987AB: jz      short loc_6987F0
0x6987AD: mov     ecx, [esi+364h]
0x6987B3: test    ecx, ecx
0x6987B5: jz      short loc_6987BF
0x6987B7: push    0
0x6987B9: push    ebx
0x6987BA: call    sub_89F650
0x6987BF: mov     eax, [esp+104h+var_E8]
0x6987C3: test    eax, eax
0x6987C5: jz      short loc_6987DB
0x6987C7: cmp     byte ptr [eax+1Ah], 0
0x6987CB: jz      short loc_6987DB
0x6987CD: mov     edx, [esi]
0x6987CF: mov     eax, [edx+88h]
0x6987D5: push    0
0x6987D7: mov     ecx, esi
0x6987D9: call    eax
0x6987DB: push    ebx
0x6987DC: call    sub_88EE20
0x6987E1: push    0; a4
0x6987E3: push    1; a3
0x6987E5: push    6; a2
0x6987E7: push    ebx; a1
0x6987E8: call    sub_88D070
0x6987ED: add     esp, 14h
0x6987F0: mov     edx, [edi]
0x6987F2: mov     eax, [edx+174h]
0x6987F8: mov     ecx, edi
0x6987FA: call    eax
0x6987FC: mov     ecx, [eax]
0x6987FE: mov     edx, [eax+4]
0x698801: mov     eax, [eax+8]
0x698804: mov     edi, [esp+104h+var_E8]
0x698808: mov     [esp+104h+var_D4], eax
0x69880C: mov     eax, [esp+104h+var_E4]
0x698810: cmp     eax, edi
0x698812: mov     [esp+104h+a2], ecx
0x698816: mov     [esp+104h+var_D8], edx
0x69881A: jz      short loc_69883B
0x69881C: test    eax, eax
0x69881E: jz      short loc_69882D
0x698820: push    0
0x698822: push    1
0x698824: push    ebx
0x698825: call    sub_88CD50
0x69882A: add     esp, 0Ch
0x69882D: fld     [esp+104h+var_D4]
0x698831: fadd    qword ptr ds:0A49310h
0x698837: fstp    [esp+104h+var_D4]
0x69883B: test    edi, edi
0x69883D: jz      short loc_698872
0x69883F: lea     ecx, [esp+104h+a2]
0x698843: push    ecx; a2
0x698844: mov     ecx, esi; this
0x698846: call    sub_452A10
0x69884B: lea     edx, [esp+104h+var_E4]
0x69884F: push    edx
0x698850: mov     ecx, esi
0x698852: call    sub_57E270
0x698857: mov     ecx, [esp+104h+var_E4]
0x69885B: mov     eax, [edi]
0x69885D: mov     edx, [eax+90h]
0x698863: push    0
0x698865: shr     ecx, 10h
0x698868: push    ecx
0x698869: push    0
0x69886B: push    1
0x69886D: push    ebx
0x69886E: mov     ecx, edi
0x698870: call    edx
0x698872: mov     ecx, dword ptr [esp+104h+var_C]
0x698879: mov     large fs:0, ecx
0x698880: pop     ecx
0x698881: pop     edi
0x698882: pop     esi
0x698883: pop     ebx
0x698884: mov     ecx, [esp+0F4h+var_14]
0x69888B: xor     ecx, esp
0x69888D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x698892: mov     esp, ebp
0x698894: pop     ebp
0x698895: retn

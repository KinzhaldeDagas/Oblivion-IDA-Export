0x59F640: sub     esp, 8
0x59F643: push    esi
0x59F644: mov     esi, ecx
0x59F646: mov     eax, [esi+60h]
0x59F649: mov     ecx, [eax+58h]
0x59F64C: mov     edx, [ecx]
0x59F64E: mov     eax, [edx+33Ch]
0x59F654: push    edi
0x59F655: push    0; a3
0x59F657: call    eax
0x59F659: mov     edi, eax
0x59F65B: call    sub_578FE0
0x59F660: cmp     eax, 3F1h
0x59F665: jz      short loc_59F6B9
0x59F667: cmp     eax, 3F0h
0x59F66C: jz      short loc_59F6B9
0x59F66E: cmp     eax, 40Dh
0x59F673: jz      short loc_59F6B9
0x59F675: cmp     eax, 404h
0x59F67A: jz      short loc_59F6B9
0x59F67C: cmp     eax, 40Bh
0x59F681: jz      short loc_59F6B9
0x59F683: cmp     eax, 419h
0x59F688: jz      short loc_59F6B9
0x59F68A: cmp     dword ptr [esi+6Ch], 0
0x59F68E: jl      short loc_59F6B9
0x59F690: test    edi, edi
0x59F692: jz      loc_59F961
0x59F698: cmp     byte ptr ds:0B3B298h, 0
0x59F69F: jnz     loc_59F961
0x59F6A5: mov     ecx, edi
0x59F6A7: call    sub_6B7220
0x59F6AC: pop     edi
0x59F6AD: mov     byte ptr ds:0B3B298h, 1
0x59F6B4: pop     esi
0x59F6B5: add     esp, 8
0x59F6B8: retn
0x59F6B9: mov     ecx, [esi+44h]
0x59F6BC: test    ecx, ecx
0x59F6BE: jz      short loc_59F6F4
0x59F6C0: cmp     dword ptr [esi+48h], 0
0x59F6C4: jz      short loc_59F6F4
0x59F6C6: push    0FB0h
0x59F6CB: call    Tile_GetFloat
0x59F6D0: call    Double_To_SInt32
0x59F6D5: test    eax, eax
0x59F6D7: push    ecx
0x59F6D8: mov     ecx, [esi+48h]; this
0x59F6DB: jg      short loc_59F6E1
0x59F6DD: fld1
0x59F6DF: jmp     short loc_59F6E7
0x59F6E1: fld     dword ptr ds:0A379B4h
0x59F6E7: fstp    [esp+14h+a3]; a3
0x59F6EA: push    0FA1h; a2
0x59F6EF: call    Tile_SetFloat
0x59F6F4: test    edi, edi
0x59F6F6: jz      short loc_59F711
0x59F6F8: cmp     byte ptr ds:0B3B298h, 0
0x59F6FF: jz      short loc_59F711
0x59F701: push    0
0x59F703: mov     ecx, edi
0x59F705: call    sub_6B7190
0x59F70A: mov     byte ptr ds:0B3B298h, 0
0x59F711: mov     ecx, [esi+60h]
0x59F714: test    ecx, ecx
0x59F716: jz      short loc_59F737
0x59F718: mov     edx, [ecx]
0x59F71A: fldz
0x59F71C: mov     eax, [edx+304h]
0x59F722: push    0
0x59F724: push    ecx
0x59F725: fstp    [esp+18h+a4+4]
0x59F728: call    eax
0x59F72A: mov     ecx, ds:0B333C4h
0x59F730: push    0
0x59F732: call    sub_66B710
0x59F737: cmp     dword ptr [esi+6Ch], 0
0x59F73B: jz      loc_59F7DD
0x59F741: fld     dword ptr [esi+68h]
0x59F744: mov     ecx, [esi+4]
0x59F747: fadd    dword ptr ds:0B33E9Ch
0x59F74D: push    0FB0h
0x59F752: fstp    dword ptr [esi+68h]
0x59F755: call    Tile_GetFloat
0x59F75A: cmp     dword ptr [esi+6Ch], 0
0x59F75E: fstp    dword ptr [esp+10h+var_8]
0x59F762: jge     short loc_59F775
0x59F764: mov     ecx, [esi+4]
0x59F767: push    0FB1h
0x59F76C: call    Tile_GetFloat
0x59F771: fstp    dword ptr [esp+10h+var_8]
0x59F775: fldz
0x59F777: fld     dword ptr [esp+10h+var_8]
0x59F77B: fcom    st(1)
0x59F77D: fnstsw  ax
0x59F77F: fstp    st(1)
0x59F781: test    ah, 41h
0x59F784: jp      short loc_59F796
0x59F786: fstp    st
0x59F788: fld     dword ptr ds:0A37080h
0x59F78E: fstp    dword ptr [esp+10h+var_8]
0x59F792: fld     dword ptr [esp+10h+var_8]
0x59F796: fld     dword ptr [esi+68h]
0x59F799: fdiv    st, st(1)
0x59F79B: fld1
0x59F79D: fcom    st(1)
0x59F79F: fnstsw  ax
0x59F7A1: test    ah, 41h
0x59F7A4: jz      short loc_59F7AC
0x59F7A6: fstp    st(1)
0x59F7A8: fld     st
0x59F7AA: fxch    st(1)
0x59F7AC: cmp     dword ptr [esi+6Ch], 0
0x59F7B0: fxch    st(1)
0x59F7B2: fstp    dword ptr ds:0B13FCCh
0x59F7B8: jge     short loc_59F7C8
0x59F7BA: fsub    dword ptr ds:0B13FCCh
0x59F7C0: fstp    dword ptr ds:0B13FCCh
0x59F7C6: jmp     short loc_59F7CA
0x59F7C8: fstp    st
0x59F7CA: fld     dword ptr [esi+68h]
0x59F7CD: fcompp
0x59F7CF: fnstsw  ax
0x59F7D1: test    ah, 41h
0x59F7D4: jnz     short loc_59F7DD
0x59F7D6: mov     dword ptr [esi+6Ch], 0
0x59F7DD: mov     ecx, ds:0B333C4h; this
0x59F7E3: call    sub_5E6C10
0x59F7E8: fld     dword ptr ds:0B13FCCh
0x59F7EE: test    al, al
0x59F7F0: jz      short loc_59F7FE
0x59F7F2: push    0
0x59F7F4: push    ecx
0x59F7F5: mov     ecx, [esi+60h]
0x59F7F8: fstp    [esp+18h+a4+4]
0x59F7FB: push    ecx
0x59F7FC: jmp     short loc_59F808
0x59F7FE: mov     edx, [esi+60h]
0x59F801: push    1; a5
0x59F803: push    ecx
0x59F804: fstp    [esp+18h+a4+4]; a4
0x59F807: push    edx; a3
0x59F808: mov     ecx, ds:0B333C4h; a1
0x59F80E: call    SetDialogueCamera
0x59F813: cmp     dword ptr [esi+60h], 0
0x59F817: jz      loc_59F961
0x59F81D: mov     ecx, [esi+3Ch]
0x59F820: push    0FA1h
0x59F825: call    Tile_GetFloat
0x59F82A: fcomp   dword ptr ds:0A2F948h
0x59F830: fnstsw  ax
0x59F832: test    ah, 44h
0x59F835: jp      loc_59F961
0x59F83B: cmp     dword ptr [esi+80h], 3
0x59F842: jnz     loc_59F8FA
0x59F848: mov     eax, [esi+60h]
0x59F84B: mov     eax, [eax+58h]
0x59F84E: push    0; int
0x59F850: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x59F855: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x59F85A: push    0; int
0x59F85C: push    eax; void *
0x59F85D: call    OblivionDynamicCast
0x59F862: mov     edi, eax
0x59F864: add     esp, 14h
0x59F867: test    edi, edi
0x59F869: jz      loc_59F8FA
0x59F86F: mov     edx, [edi]
0x59F871: mov     eax, [edx+33Ch]
0x59F877: push    0
0x59F879: mov     ecx, edi
0x59F87B: call    eax
0x59F87D: test    eax, eax
0x59F87F: jz      short loc_59F8B2
0x59F881: mov     edx, [edi]
0x59F883: mov     eax, [edx+33Ch]
0x59F889: push    0
0x59F88B: mov     ecx, edi
0x59F88D: call    eax
0x59F88F: mov     ecx, eax
0x59F891: call    sub_6B7260
0x59F896: test    al, al
0x59F898: jnz     short loc_59F8B2
0x59F89A: mov     ecx, offset unk_B36B00
0x59F89F: mov     dword ptr [esi+80h], 4
0x59F8A9: call    GameSetting_GetSafeFloatPointer
0x59F8AE: fld     dword ptr [eax]
0x59F8B0: jmp     short loc_59F8EE
0x59F8B2: mov     edx, [edi]
0x59F8B4: mov     eax, [edx+33Ch]
0x59F8BA: push    0
0x59F8BC: mov     ecx, edi
0x59F8BE: call    eax
0x59F8C0: test    eax, eax
0x59F8C2: jnz     short loc_59F8FA
0x59F8C4: mov     dword ptr [esi+80h], 4
0x59F8CE: mov     edx, [edi]
0x59F8D0: mov     eax, [edx+208h]
0x59F8D6: mov     ecx, edi
0x59F8D8: call    eax
0x59F8DA: fstp    [esp+10h+var_8]
0x59F8DE: mov     ecx, offset unk_B36B00
0x59F8E3: call    GameSetting_GetSafeFloatPointer
0x59F8E8: fld     dword ptr [eax]
0x59F8EA: fadd    [esp+10h+var_8]
0x59F8EE: fadd    qword ptr ds:0A2F928h
0x59F8F4: fstp    dword ptr [esi+84h]
0x59F8FA: mov     eax, [esi+80h]
0x59F900: cmp     eax, 4
0x59F903: jnz     short loc_59F92D
0x59F905: mov     ecx, [esi+60h]
0x59F908: mov     dword ptr [esi+80h], 1
0x59F912: mov     ecx, [ecx+58h]
0x59F915: mov     edx, [ecx]
0x59F917: mov     eax, [edx+344h]
0x59F91D: push    0
0x59F91F: call    eax
0x59F921: pop     edi
0x59F922: mov     ecx, esi
0x59F924: pop     esi
0x59F925: add     esp, 8
0x59F928: jmp     sub_59EB90
0x59F92D: cmp     eax, 2
0x59F930: jnz     short loc_59F961
0x59F932: fld     dword ptr [esi+84h]
0x59F938: fsub    dword ptr ds:0B33E9Ch
0x59F93E: fstp    dword ptr [esp+10h+var_8]
0x59F942: fld     dword ptr [esp+10h+var_8]
0x59F946: fst     dword ptr [esi+84h]
0x59F94C: fldz
0x59F94E: fcompp
0x59F950: fnstsw  ax
0x59F952: test    ah, 1
0x59F955: jnz     short loc_59F961
0x59F957: mov     dword ptr [esi+80h], 3
0x59F961: pop     edi
0x59F962: pop     esi
0x59F963: add     esp, 8
0x59F966: retn

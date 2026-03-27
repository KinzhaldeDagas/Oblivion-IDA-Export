0x694120: push    0FFFFFFFFh
0x694122: push    offset SEH_6CED50
0x694127: mov     eax, large fs:0
0x69412D: push    eax
0x69412E: sub     esp, 0Ch
0x694131: push    ebx
0x694132: push    esi
0x694133: push    edi
0x694134: mov     eax, ds:0B30AACh
0x694139: xor     eax, esp
0x69413B: push    eax
0x69413C: lea     eax, [esp+28h+var_C]
0x694140: mov     large fs:0, eax
0x694146: mov     ebx, ecx
0x694148: call    ValueModifierEffect_Remove
0x69414D: mov     ecx, [ebx+20h]; this
0x694150: test    ecx, ecx
0x694152: jz      loc_6943A0
0x694158: call    MagicTarget_GetParentActor
0x69415D: mov     esi, eax
0x69415F: test    esi, esi
0x694161: jz      loc_6943A0
0x694167: mov     eax, [esi]
0x694169: mov     edx, [eax+284h]
0x69416F: push    2Fh ; '/'
0x694171: mov     ecx, esi
0x694173: call    edx
0x694175: mov     [esp+28h+var_18], eax
0x694179: fild    [esp+28h+var_18]
0x69417D: fldz
0x69417F: fucom   st(1)
0x694181: fnstsw  ax
0x694183: fstp    st(1)
0x694185: test    ah, 44h
0x694188: jp      loc_69439E
0x69418E: cmp     byte ptr ds:0B42F3Eh, 0
0x694195: jz      short loc_6941C5
0x694197: cmp     byte ptr ds:0B42E84h, 0
0x69419E: jz      short loc_6941C5
0x6941A0: cmp     dword ptr ds:0B42F48h, 2
0x6941A7: jl      short loc_6941C5
0x6941A9: cmp     esi, ds:0B333C4h
0x6941AF: jnz     short loc_6941C5
0x6941B1: mov     eax, [esi]
0x6941B3: mov     edx, [eax+270h]
0x6941B9: push    ecx
0x6941BA: fstp    [esp+2Ch+var_2C]
0x6941BD: push    1
0x6941BF: mov     ecx, esi
0x6941C1: call    edx
0x6941C3: jmp     short loc_694202
0x6941C5: mov     eax, [esi+58h]
0x6941C8: fstp    st
0x6941CA: push    0; int
0x6941CC: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x6941D1: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x6941D6: push    0; int
0x6941D8: push    eax; void *
0x6941D9: call    OblivionDynamicCast
0x6941DE: mov     edi, eax
0x6941E0: add     esp, 14h
0x6941E3: test    edi, edi
0x6941E5: jz      short loc_694202
0x6941E7: mov     eax, [edi]
0x6941E9: mov     edx, [eax+47Ch]
0x6941EF: mov     ecx, edi
0x6941F1: call    edx
0x6941F3: cmp     eax, 4
0x6941F6: jz      short loc_694202
0x6941F8: push    0; a3
0x6941FA: push    esi; a2
0x6941FB: mov     ecx, edi; this
0x6941FD: call    sub_628630
0x694202: mov     eax, [esi]
0x694204: mov     edx, [eax+288h]
0x69420A: push    2Eh ; '.'
0x69420C: mov     ecx, esi
0x69420E: call    edx
0x694210: fdiv    qword ptr ds:0A309F0h
0x694216: fstp    [esp+28h+var_18]
0x69421A: fld     [esp+28h+var_18]
0x69421E: fcom    qword ptr ds:0A2FC68h
0x694224: fnstsw  ax
0x694226: test    ah, 5
0x694229: jp      short loc_69422F
0x69422B: fstp    st
0x69422D: fldz
0x69422F: fstp    [esp+28h+var_18]
0x694233: fld     [esp+28h+var_18]
0x694237: fcom    qword ptr ds:0A2F928h
0x69423D: fnstsw  ax
0x69423F: test    ah, 41h
0x694242: jnz     short loc_69424E
0x694244: fstp    st
0x694246: fld1
0x694248: fstp    [esp+28h+var_18]
0x69424C: jmp     short loc_69425D
0x69424E: fst     [esp+28h+var_18]
0x694252: fldz
0x694254: fcompp
0x694256: fnstsw  ax
0x694258: test    ah, 5
0x69425B: jp      short loc_6942D4
0x69425D: cmp     byte ptr ds:0B42F3Eh, 0
0x694264: jz      short loc_6942D4
0x694266: cmp     byte ptr ds:0B42E84h, 0
0x69426D: jz      short loc_6942D4
0x69426F: cmp     dword ptr ds:0B42F48h, 2
0x694276: jl      short loc_6942D4
0x694278: call    Magic_GetChameleonMinRefraction
0x69427D: fstp    [esp+28h+var_10]
0x694281: call    Magic_GetChameleonMaxRefraction
0x694286: fstp    [esp+28h+var_14]
0x69428A: fld     [esp+28h+var_18]
0x69428E: mov     eax, [esi]
0x694290: fld1
0x694292: mov     edx, [eax+270h]
0x694298: fld     st
0x69429A: push    ecx
0x69429B: fsubrp  st(2), st
0x69429D: mov     ecx, esi
0x69429F: fxch    st(1)
0x6942A1: fstp    [esp+2Ch+var_18]
0x6942A5: fld     [esp+2Ch+var_18]
0x6942A9: fldz
0x6942AB: fsub    st(1), st
0x6942AD: fsubp   st(2), st
0x6942AF: fdivrp  st(1), st
0x6942B1: fld     [esp+2Ch+var_14]
0x6942B5: fld     [esp+2Ch+var_10]
0x6942B9: fld     st
0x6942BB: fsubp   st(2), st
0x6942BD: fxch    st(2)
0x6942BF: fmulp   st(1), st
0x6942C1: faddp   st(1), st
0x6942C3: fstp    [esp+2Ch+var_10]
0x6942C7: fld     [esp+2Ch+var_10]
0x6942CB: fstp    [esp+2Ch+var_2C]
0x6942CE: push    1
0x6942D0: call    edx
0x6942D2: jmp     short loc_6942DB
0x6942D4: mov     ecx, esi; a1
0x6942D6: call    sub_5EE1B0
0x6942DB: mov     eax, [ebx+0Ch]
0x6942DE: mov     eax, [eax+1Ch]
0x6942E1: movzx   ecx, word ptr [eax+20h]
0x6942E5: xor     edi, edi
0x6942E7: cmp     cx, 0FFFFh
0x6942EC: jnz     short loc_694301
0x6942EE: mov     eax, [eax+1Ch]
0x6942F1: lea     edx, [eax+1]
0x6942F4: mov     cl, [eax]
0x6942F6: add     eax, 1
0x6942F9: test    cl, cl
0x6942FB: jnz     short loc_6942F4
0x6942FD: sub     eax, edx
0x6942FF: jmp     short loc_694304
0x694301: movzx   eax, cx
0x694304: test    eax, eax
0x694306: jbe     short loc_694356
0x694308: push    38h ; '8'; Size
0x69430A: call    FormHeapAlloc
0x69430F: mov     edi, eax
0x694311: add     esp, 4
0x694314: mov     [esp+28h+var_10], edi
0x694318: test    edi, edi
0x69431A: mov     [esp+28h+var_4], 0
0x694322: jz      short loc_69434A
0x694324: mov     ecx, [ebx+0Ch]
0x694327: fld     dword ptr ds:0A30634h
0x69432D: mov     eax, [ecx+1Ch]
0x694330: mov     edx, [eax+18h]
0x694333: lea     ecx, [eax+18h]
0x694336: mov     eax, [edx+14h]
0x694339: push    ecx
0x69433A: fstp    [esp+2Ch+var_2C]; float
0x69433D: call    eax
0x69433F: push    eax; int
0x694340: push    esi; int
0x694341: mov     ecx, edi
0x694343: call    MagicModelHitEffect_constr_args2
0x694348: jmp     short loc_69434C
0x69434A: xor     eax, eax
0x69434C: mov     [esp+28h+var_4], 0FFFFFFFFh
0x694354: mov     edi, eax
0x694356: mov     edx, [edi]
0x694358: mov     eax, [edx+68h]
0x69435B: mov     ecx, edi
0x69435D: call    eax
0x69435F: test    al, al
0x694361: jz      short loc_694381
0x694363: push    edi
0x694364: mov     ecx, offset ActorProcessManager_ptr
0x694369: call    sub_678D30
0x69436E: mov     ecx, [esp+28h+var_C]
0x694372: mov     large fs:0, ecx
0x694379: pop     ecx
0x69437A: pop     edi
0x69437B: pop     esi
0x69437C: pop     ebx
0x69437D: add     esp, 18h
0x694380: retn
0x694381: mov     edx, [edi]
0x694383: mov     eax, [edx]
0x694385: push    1
0x694387: mov     ecx, edi
0x694389: call    eax
0x69438B: mov     ecx, [esp+28h+var_C]
0x69438F: mov     large fs:0, ecx
0x694396: pop     ecx
0x694397: pop     edi
0x694398: pop     esi
0x694399: pop     ebx
0x69439A: add     esp, 18h
0x69439D: retn
0x69439E: fstp    st
0x6943A0: mov     ecx, [esp+28h+var_C]
0x6943A4: mov     large fs:0, ecx
0x6943AB: pop     ecx
0x6943AC: pop     edi
0x6943AD: pop     esi
0x6943AE: pop     ebx
0x6943AF: add     esp, 18h
0x6943B2: retn

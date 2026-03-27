0x5B91E0: push    ebp
0x5B91E1: mov     ebp, esp
0x5B91E3: and     esp, 0FFFFFFF8h
0x5B91E6: push    0FFFFFFFFh
0x5B91E8: push    offset SEH_5B91E0
0x5B91ED: mov     eax, large fs:0
0x5B91F3: push    eax
0x5B91F4: sub     esp, 480h
0x5B91FA: mov     eax, ds:0B30AACh
0x5B91FF: xor     eax, esp
0x5B9201: mov     [esp+48Ch+var_14], eax
0x5B9208: push    ebx; a3
0x5B9209: push    esi; a3
0x5B920A: push    edi; a3
0x5B920B: mov     eax, ds:0B30AACh
0x5B9210: xor     eax, esp
0x5B9212: push    eax; a3
0x5B9213: lea     eax, [esp+49Ch+var_C]
0x5B921A: mov     large fs:0, eax
0x5B9220: push    3FFh
0x5B9225: call    Menu_GetOpenMenuTile
0x5B922A: add     esp, 4
0x5B922D: test    eax, eax
0x5B922F: jz      loc_5BA49D
0x5B9235: mov     ecx, eax
0x5B9237: call    Tile_GetParentMenu
0x5B923C: mov     ecx, ds:0B333C4h; this
0x5B9242: mov     esi, eax
0x5B9244: call    TESObjectREFR_GetParentCell
0x5B9249: test    eax, eax
0x5B924B: jz      loc_5BA49D
0x5B9251: push    0
0x5B9253: mov     ecx, esi
0x5B9255: call    sub_5B8FC0
0x5B925A: fld1
0x5B925C: mov     ecx, [esi+60h]; this
0x5B925F: push    ecx
0x5B9260: fstp    [esp+4A0h+a2]; a3
0x5B9263: push    0FA1h; a2
0x5B9268: call    Tile_SetFloat
0x5B926D: fld     dword ptr ds:0A379B4h
0x5B9273: mov     ecx, [esi+58h]; this
0x5B9276: push    ecx
0x5B9277: fstp    [esp+4A0h+a2]; a3
0x5B927A: push    0FA1h; a2
0x5B927F: call    Tile_SetFloat
0x5B9284: cmp     dword ptr ds:0B333C4h, 0
0x5B928B: jz      loc_5BA49D
0x5B9291: mov     ecx, ds:0B333A0h
0x5B9297: call    TES__GetCurrentWorldspace
0x5B929C: mov     edi, eax
0x5B929E: test    edi, edi
0x5B92A0: jz      short loc_5B92CC
0x5B92A2: mov     ecx, edi
0x5B92A4: call    TESWorldSpace_GetParentWorldpsace
0x5B92A9: test    eax, eax
0x5B92AB: jz      short loc_5B92B6
0x5B92AD: mov     ecx, edi
0x5B92AF: call    TESWorldSpace_GetParentWorldpsace
0x5B92B4: mov     edi, eax
0x5B92B6: test    edi, edi
0x5B92B8: jz      short loc_5B92CC
0x5B92BA: mov     ecx, edi
0x5B92BC: call    sub_4F1A60
0x5B92C1: cmp     byte ptr [eax], 0
0x5B92C4: jnz     loc_5B948F
0x5B92CA: xor     edi, edi
0x5B92CC: mov     ecx, [esi+58h]
0x5B92CF: push    0FD2h
0x5B92D4: call    Tile_GetFloat
0x5B92D9: fstp    [esp+49Ch+a3]
0x5B92DD: cmp     dword ptr [esi+0D0h], 0
0x5B92E4: jnz     short loc_5B9320
0x5B92E6: push    0; int
0x5B92E8: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x5B92ED: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5B92F2: push    0; int
0x5B92F4: push    3Ch ; '<'; a1
0x5B92F6: call    TESForm_LookupByFormID
0x5B92FB: add     esp, 4
0x5B92FE: push    eax; void *
0x5B92FF: call    OblivionDynamicCast
0x5B9304: add     esp, 14h
0x5B9307: test    eax, eax
0x5B9309: mov     [esi+0D0h], eax
0x5B930F: jnz     short loc_5B9320
0x5B9311: mov     ecx, ds:0B33A98h
0x5B9317: mov     edx, [ecx+0Ch]
0x5B931A: mov     [esi+0D0h], edx
0x5B9320: mov     ecx, [esi+0D0h]
0x5B9326: test    ecx, ecx
0x5B9328: jz      loc_5B95CF
0x5B932E: call    sub_4F1A60
0x5B9333: mov     ecx, [esi+58h]
0x5B9336: push    eax
0x5B9337: push    0FE6h
0x5B933C: call    Tile_SetString
0x5B9341: mov     ecx, [esi+0D0h]
0x5B9347: call    sub_4EF1B0
0x5B934C: fld     [esp+49Ch+a3]
0x5B9350: fdiv    qword ptr ds:0A309F0h
0x5B9356: mov     eax, [eax]
0x5B9358: test    eax, eax
0x5B935A: mov     [esp+49Ch+var_474+4], eax
0x5B935E: fst     qword ptr [esp+49Ch+var_468.m_data]
0x5B9362: fild    [esp+49Ch+var_474+4]
0x5B9366: jge     short loc_5B936E
0x5B9368: fadd    dword ptr ds:0A2FC78h
0x5B936E: fnstcw  word ptr [esp+49Ch+var_484+2]
0x5B9372: movzx   eax, word ptr [esp+49Ch+var_484+2]
0x5B9377: fmulp   st(1), st
0x5B9379: or      eax, 0C00h
0x5B937E: mov     [esp+49Ch+a3], eax
0x5B9382: fldcw   word ptr [esp+49Ch+a3]
0x5B9386: fistp   qword ptr [esp+49Ch+var_474+4]
0x5B938A: mov     ecx, [esp+49Ch+var_474+4]
0x5B938E: mov     [esi+98h], ecx
0x5B9394: mov     ecx, [esi+0D0h]
0x5B939A: fldcw   word ptr [esp+49Ch+var_484+2]
0x5B939E: call    sub_4EF1B0
0x5B93A3: mov     edx, [eax+4]
0x5B93A6: test    edx, edx
0x5B93A8: fild    dword ptr [eax+4]
0x5B93AB: jge     short loc_5B93B3
0x5B93AD: fadd    dword ptr ds:0A2FC78h
0x5B93B3: fmul    qword ptr [esp+49Ch+var_468.m_data]
0x5B93B7: mov     ecx, [esi+0D0h]
0x5B93BD: fnstcw  word ptr [esp+49Ch+var_484+2]
0x5B93C1: movzx   eax, word ptr [esp+49Ch+var_484+2]
0x5B93C6: or      eax, 0C00h
0x5B93CB: mov     [esp+49Ch+a3], eax
0x5B93CF: fldcw   word ptr [esp+49Ch+a3]
0x5B93D3: fistp   qword ptr [esp+49Ch+var_474+4]
0x5B93D7: mov     eax, [esp+49Ch+var_474+4]
0x5B93DB: mov     [esi+9Ch], eax
0x5B93E1: fldcw   word ptr [esp+49Ch+var_484+2]
0x5B93E5: call    sub_4EF1B0
0x5B93EA: movsx   ecx, word ptr [eax+8]
0x5B93EE: shl     ecx, 0Ch
0x5B93F1: mov     [esi+0A0h], ecx
0x5B93F7: mov     ecx, [esi+0D0h]
0x5B93FD: call    sub_4EF1B0
0x5B9402: movsx   edx, word ptr [eax+0Ch]
0x5B9406: mov     ecx, [esi+0D0h]
0x5B940C: add     edx, 1
0x5B940F: shl     edx, 0Ch
0x5B9412: mov     [esi+0A4h], edx
0x5B9418: call    sub_4EF1B0
0x5B941D: movsx   eax, word ptr [eax+0Ah]
0x5B9421: mov     ecx, [esi+0D0h]
0x5B9427: add     eax, 1
0x5B942A: shl     eax, 0Ch
0x5B942D: mov     [esi+0ACh], eax
0x5B9433: call    sub_4EF1B0
0x5B9438: movsx   ecx, word ptr [eax+0Eh]
0x5B943C: fld     dword ptr ds:0A379B4h
0x5B9442: shl     ecx, 0Ch
0x5B9445: mov     [esi+0A8h], ecx
0x5B944B: mov     ecx, [esi+58h]; this
0x5B944E: push    ecx
0x5B944F: fstp    [esp+4A0h+a2]; a3
0x5B9452: push    0FA1h; a2
0x5B9457: call    Tile_SetFloat
0x5B945C: mov     edx, [esi+98h]
0x5B9462: mov     ecx, [esi+58h]
0x5B9465: push    edx
0x5B9466: push    0FCBh
0x5B946B: call    sub_57D300
0x5B9470: mov     eax, [esi+9Ch]
0x5B9476: mov     ecx, [esi+58h]
0x5B9479: push    eax
0x5B947A: push    0FCAh
0x5B947F: call    sub_57D300
0x5B9484: mov     edi, [esi+0D0h]
0x5B948A: jmp     loc_5B95E2
0x5B948F: cmp     [esi+0D0h], edi
0x5B9495: jz      loc_5B95E2
0x5B949B: mov     ecx, [esi+58h]
0x5B949E: push    0FD2h
0x5B94A3: mov     [esi+0D0h], edi
0x5B94A9: call    Tile_GetFloat
0x5B94AE: fstp    [esp+49Ch+a3]
0x5B94B2: mov     ecx, [esi+0D0h]
0x5B94B8: call    sub_4F1A60
0x5B94BD: mov     ecx, [esi+58h]
0x5B94C0: push    eax
0x5B94C1: push    0FE6h
0x5B94C6: call    Tile_SetString
0x5B94CB: mov     ecx, [esi+0D0h]
0x5B94D1: call    sub_4EF1B0
0x5B94D6: fld     [esp+49Ch+a3]
0x5B94DA: fdiv    qword ptr ds:0A309F0h
0x5B94E0: mov     ecx, eax
0x5B94E2: mov     eax, [ecx]
0x5B94E4: test    eax, eax
0x5B94E6: fild    dword ptr [ecx]
0x5B94E8: jge     short loc_5B94F0
0x5B94EA: fadd    dword ptr ds:0A2FC78h
0x5B94F0: fnstcw  word ptr [esp+49Ch+var_484+2]
0x5B94F4: movzx   eax, word ptr [esp+49Ch+var_484+2]
0x5B94F9: fmul    st, st(1)
0x5B94FB: or      eax, 0C00h
0x5B9500: mov     [esp+49Ch+a3], eax
0x5B9504: fldcw   word ptr [esp+49Ch+a3]
0x5B9508: fistp   qword ptr [esp+49Ch+var_474+4]
0x5B950C: mov     edx, [esp+49Ch+var_474+4]
0x5B9510: mov     [esi+98h], edx
0x5B9516: mov     eax, [ecx+4]
0x5B9519: test    eax, eax
0x5B951B: fldcw   word ptr [esp+49Ch+var_484+2]
0x5B951F: fild    dword ptr [ecx+4]
0x5B9522: jge     short loc_5B952A
0x5B9524: fadd    dword ptr ds:0A2FC78h
0x5B952A: fnstcw  word ptr [esp+49Ch+var_484+2]
0x5B952E: movzx   eax, word ptr [esp+49Ch+var_484+2]
0x5B9533: fmulp   st(1), st
0x5B9535: or      eax, 0C00h
0x5B953A: mov     [esp+49Ch+a3], eax
0x5B953E: fldcw   word ptr [esp+49Ch+a3]
0x5B9542: fistp   qword ptr [esp+49Ch+var_474+4]
0x5B9546: mov     edx, [esp+49Ch+var_474+4]
0x5B954A: mov     [esi+9Ch], edx
0x5B9550: movsx   eax, word ptr [ecx+8]
0x5B9554: fldcw   word ptr [esp+49Ch+var_484+2]
0x5B9558: shl     eax, 0Ch
0x5B955B: mov     [esi+0A0h], eax
0x5B9561: movsx   edx, word ptr [ecx+0Ch]
0x5B9565: add     edx, 1
0x5B9568: shl     edx, 0Ch
0x5B956B: fld     dword ptr ds:0A379B4h
0x5B9571: mov     [esi+0A4h], edx
0x5B9577: movsx   eax, word ptr [ecx+0Ah]
0x5B957B: add     eax, 1
0x5B957E: shl     eax, 0Ch
0x5B9581: mov     [esi+0ACh], eax
0x5B9587: movsx   ecx, word ptr [ecx+0Eh]
0x5B958B: shl     ecx, 0Ch
0x5B958E: mov     [esi+0A8h], ecx
0x5B9594: mov     ecx, [esi+58h]; this
0x5B9597: push    ecx
0x5B9598: fstp    [esp+4A0h+a2]; a3
0x5B959B: push    0FA1h; a2
0x5B95A0: call    Tile_SetFloat
0x5B95A5: mov     edx, [esi+98h]
0x5B95AB: mov     ecx, [esi+58h]
0x5B95AE: push    edx
0x5B95AF: push    0FCBh
0x5B95B4: call    sub_57D300
0x5B95B9: mov     eax, [esi+9Ch]
0x5B95BF: mov     ecx, [esi+58h]
0x5B95C2: push    eax
0x5B95C3: push    0FCAh
0x5B95C8: call    sub_57D300
0x5B95CD: jmp     short loc_5B95E2
0x5B95CF: mov     ecx, [esi+58h]; this
0x5B95D2: fld1
0x5B95D4: push    ecx
0x5B95D5: fstp    [esp+4A0h+a2]; a3
0x5B95D8: push    0FA1h; a2
0x5B95DD: call    Tile_SetFloat
0x5B95E2: mov     ecx, [esi+0C4h]
0x5B95E8: test    ecx, ecx
0x5B95EA: jz      short loc_5B9600
0x5B95EC: call    BSSimpleList_Clear
0x5B95F1: mov     eax, [esi+0C4h]
0x5B95F7: push    eax
0x5B95F8: call    FormHeapFree
0x5B95FD: add     esp, 4
0x5B9600: test    edi, edi
0x5B9602: mov     dword ptr [esi+0C4h], 0
0x5B960C: jz      short loc_5B961B
0x5B960E: mov     ecx, edi
0x5B9610: call    sub_4F0620
0x5B9615: mov     [esi+0C4h], eax
0x5B961B: mov     ecx, [esi+58h]
0x5B961E: mov     edi, [ecx+34h]
0x5B9621: test    edi, edi
0x5B9623: jz      short loc_5B963D
0x5B9625: mov     ecx, [edi+8]
0x5B9628: test    ecx, ecx
0x5B962A: lea     eax, [edi+8]
0x5B962D: mov     edi, [edi]
0x5B962F: jz      short loc_5B9639
0x5B9631: mov     edx, [ecx]
0x5B9633: mov     eax, [edx]
0x5B9635: push    1; a3
0x5B9637: call    eax
0x5B9639: test    edi, edi
0x5B963B: jnz     short loc_5B9625
0x5B963D: mov     ecx, [esi+58h]
0x5B9640: add     ecx, 30h ; '0'; this
0x5B9643: call    NiTPointerList__FreeAllNodes
0x5B9648: mov     edi, [esi+0C4h]
0x5B964E: test    edi, edi
0x5B9650: jz      loc_5B9910
0x5B9656: mov     ebx, [edi]
0x5B9658: test    ebx, ebx
0x5B965A: jz      loc_5B9910
0x5B9660: mov     edi, [edi+4]
0x5B9663: mov     ecx, ebx
0x5B9665: mov     [esp+4A0h+var_484], edi; a3
0x5B9669: call    sub_4D7730
0x5B966E: mov     ecx, eax
0x5B9670: call    sub_42B310
0x5B9675: test    al, al
0x5B9677: jz      loc_5B9908
0x5B967D: mov     ecx, [ebx+8]
0x5B9680: shr     ecx, 0Bh
0x5B9683: test    cl, 1
0x5B9686: jnz     loc_5B9908
0x5B968C: mov     edx, [esi+58h]
0x5B968F: push    0
0x5B9691: push    offset aMap_world_icon; "map_world_icon"
0x5B9696: push    edx
0x5B9697: mov     ecx, esi
0x5B9699: call    Menu_CreateTileFromTemplate
0x5B969E: mov     edi, eax
0x5B96A0: test    edi, edi
0x5B96A2: jz      loc_5B9904
0x5B96A8: mov     ecx, ebx
0x5B96AA: call    sub_4D7730
0x5B96AF: mov     ecx, eax; this
0x5B96B1: call    TESModel_GetModelPath
0x5B96B6: push    eax; a2
0x5B96B7: lea     ecx, [esp+4A4h+var_474+8]; this
0x5B96BB: call    BSStringT_constr_str
0x5B96C0: mov     edx, [esp+4A0h+var_474+8]
0x5B96C4: xor     eax, eax
0x5B96C6: mov     [esp+4A0h+var_8], eax
0x5B96CD: lea     ecx, [ecx+0]
0x5B96D0: mov     ecx, edx
0x5B96D2: neg     ecx
0x5B96D4: sbb     ecx, ecx
0x5B96D6: and     ecx, eax
0x5B96D8: mov     cl, [ecx+edx]
0x5B96DB: test    cl, cl
0x5B96DD: jz      short loc_5B96FF
0x5B96DF: cmp     cl, 20h ; ' '
0x5B96E2: jnz     short loc_5B96EE
0x5B96E4: mov     byte ptr [esp+eax+4A0h+var_41C], 5Fh ; '_'
0x5B96EC: jmp     short loc_5B96F5
0x5B96EE: mov     byte ptr [esp+eax+4A0h+var_41C], cl
0x5B96F5: add     eax, 1
0x5B96F8: cmp     eax, 400h
0x5B96FD: jb      short loc_5B96D0
0x5B96FF: push    0; a3
0x5B9701: lea     edx, [esp+4A4h+var_41C]
0x5B9708: lea     ecx, [edi+8]; this
0x5B970B: push    edx; a2
0x5B970C: mov     byte ptr [esp+eax+4A8h+var_41C], 0; a3
0x5B9714: call    BSStringT_Set
0x5B9719: mov     eax, [ebx]
0x5B971B: mov     edx, [eax+174h]
0x5B9721: mov     ecx, ebx
0x5B9723: call    edx
0x5B9725: mov     ecx, [eax]
0x5B9727: mov     edx, [eax+4]
0x5B972A: mov     eax, [eax+8]
0x5B972D: mov     [esp+4A0h+a3], ecx
0x5B9731: fld     [esp+4A0h+a3]
0x5B9735: mov     ecx, [esi+0A4h]
0x5B973B: mov     [esp+4A0h+var_47C+4], eax; a3
0x5B973F: mov     eax, [esi+0A0h]
0x5B9745: mov     [esp+4A0h+var_48C], eax
0x5B9749: fisub   [esp+4A0h+var_48C]
0x5B974D: sub     ecx, eax
0x5B974F: mov     [esp+4A0h+var_47C], edx
0x5B9753: mov     edx, [esi+98h]
0x5B9759: test    edx, edx
0x5B975B: mov     [esp+4A0h+var_48C], ecx
0x5B975F: fidiv   [esp+4A0h+var_48C]
0x5B9763: fild    dword ptr [esi+98h]
0x5B9769: jge     short loc_5B9771
0x5B976B: fadd    dword ptr ds:0A2FC78h
0x5B9771: mov     eax, [esi+0A8h]
0x5B9777: fmulp   st(1), st
0x5B9779: mov     [esp+4A0h+var_48C], eax
0x5B977D: sub     eax, [esi+0ACh]
0x5B9783: fstp    [esp+4A0h+a3]
0x5B9787: fild    [esp+4A0h+var_48C]
0x5B978B: mov     [esp+4A0h+var_48C], eax
0x5B978F: mov     eax, [esi+9Ch]
0x5B9795: test    eax, eax
0x5B9797: fsub    [esp+4A0h+var_47C]
0x5B979B: fidiv   [esp+4A0h+var_48C]
0x5B979F: fld1
0x5B97A1: fsubrp  st(1), st
0x5B97A3: fild    dword ptr [esi+9Ch]
0x5B97A9: jge     short loc_5B97B1
0x5B97AB: fadd    qword ptr ds:0A30E60h
0x5B97B1: fmulp   st(1), st
0x5B97B3: mov     ecx, ebx
0x5B97B5: fstp    [esp+4A0h+var_47C]
0x5B97B9: call    sub_4D7730
0x5B97BE: mov     ecx, eax
0x5B97C0: call    sub_42B310
0x5B97C5: neg     al
0x5B97C7: push    ecx
0x5B97C8: mov     ecx, edi; this
0x5B97CA: sbb     eax, eax
0x5B97CC: neg     eax
0x5B97CE: add     eax, 1
0x5B97D1: mov     [esp+4A4h+var_48C], eax; a3
0x5B97D5: fild    [esp+4A4h+var_48C]
0x5B97D9: fstp    [esp+4A4h+var_4A4]; a3
0x5B97DC: push    0FAEh; a2
0x5B97E1: call    Tile_SetFloat
0x5B97E6: fld     [esp+4A0h+a3]
0x5B97EA: push    ecx
0x5B97EB: fstp    [esp+4A4h+var_4A4]; a3
0x5B97EE: push    0FAFh; a2
0x5B97F3: mov     ecx, edi; this
0x5B97F5: call    Tile_SetFloat
0x5B97FA: fld     [esp+4A0h+var_47C]
0x5B97FE: push    ecx
0x5B97FF: fstp    [esp+4A4h+var_4A4]; a3
0x5B9802: push    0FB0h; a2
0x5B9807: mov     ecx, edi; this
0x5B9809: call    Tile_SetFloat
0x5B980E: mov     ecx, ebx
0x5B9810: call    sub_4D7730
0x5B9815: mov     ecx, eax; this
0x5B9817: call    TESModel_GetModelPath
0x5B981C: push    eax
0x5B981D: push    0FB2h
0x5B9822: mov     ecx, edi
0x5B9824: call    Tile_SetString
0x5B9829: mov     ecx, ebx
0x5B982B: call    sub_4D7730
0x5B9830: mov     ecx, eax
0x5B9832: call    sub_42B370
0x5B9837: mov     [esp+4A0h+var_48C], eax; a3
0x5B983B: fild    [esp+4A0h+var_48C]
0x5B983F: push    ecx
0x5B9840: mov     ecx, edi; this
0x5B9842: fstp    [esp+4A4h+var_4A4]; a3
0x5B9845: push    0FB3h; a2
0x5B984A: call    Tile_SetFloat
0x5B984F: mov     ecx, ebx
0x5B9851: call    sub_4D7730
0x5B9856: mov     ecx, eax
0x5B9858: call    sub_42B340
0x5B985D: neg     al
0x5B985F: push    ecx
0x5B9860: mov     ecx, edi; this
0x5B9862: sbb     eax, eax
0x5B9864: neg     eax
0x5B9866: add     eax, 1
0x5B9869: mov     [esp+4A4h+var_48C], eax; a3
0x5B986D: fild    [esp+4A4h+var_48C]
0x5B9871: fstp    [esp+4A4h+var_4A4]; a3
0x5B9874: push    0FB4h; a2
0x5B9879: call    Tile_SetFloat
0x5B987E: fld1
0x5B9880: push    ecx
0x5B9881: fstp    [esp+4A4h+var_4A4]; a3
0x5B9884: push    0FB5h; a2
0x5B9889: mov     ecx, edi; this
0x5B988B: call    Tile_SetFloat
0x5B9890: fld     dword ptr ds:0A379B4h
0x5B9896: push    ecx
0x5B9897: fstp    [esp+4A4h+var_4A4]; a3
0x5B989A: push    0FB6h; a2
0x5B989F: mov     ecx, edi; this
0x5B98A1: call    Tile_SetFloat
0x5B98A6: fld1
0x5B98A8: push    ecx
0x5B98A9: fstp    [esp+4A4h+var_4A4]; a3
0x5B98AC: push    0FB8h; a2
0x5B98B1: mov     ecx, edi; this
0x5B98B3: call    Tile_SetFloat
0x5B98B8: fld1
0x5B98BA: push    ecx
0x5B98BB: fstp    [esp+4A4h+var_4A4]; a3
0x5B98BE: mov     ecx, edi; this
0x5B98C0: push    0FB9h; a2
0x5B98C5: call    Tile_SetFloat
0x5B98CA: fld1
0x5B98CC: push    ecx
0x5B98CD: fstp    [esp+4A4h+var_4A4]; a3
0x5B98D0: push    0FBAh; a2
0x5B98D5: mov     ecx, edi; this
0x5B98D7: call    Tile_SetFloat
0x5B98DC: mov     ecx, [esp+4A0h+var_474+8]
0x5B98E0: push    ecx
0x5B98E1: mov     [esp+4A4h+var_8], 0FFFFFFFFh
0x5B98EC: call    FormHeapFree
0x5B98F1: add     esp, 4
0x5B98F4: xor     eax, eax
0x5B98F6: mov     [esp+4A0h+var_474+8], eax
0x5B98FA: mov     word ptr [esp+4A0h+var_468.m_data+2], ax
0x5B98FF: mov     word ptr [esp+4A0h+var_468.m_data], ax; a3
0x5B9904: mov     edi, [esp+4A0h+var_484]
0x5B9908: test    edi, edi
0x5B990A: jnz     loc_5B9656
0x5B9910: mov     ecx, ds:0B333C4h
0x5B9916: call    sub_65D830
0x5B991B: test    eax, eax
0x5B991D: mov     [esi+0CCh], eax
0x5B9923: mov     [esp+4A0h+var_484], eax
0x5B9927: jz      loc_5B9C92
0x5B992D: mov     edx, [esp+4A0h+var_484]
0x5B9931: mov     ebx, [edx]
0x5B9933: test    ebx, ebx
0x5B9935: jz      loc_5B9C92
0x5B993B: cmp     dword ptr [ebx+10h], 0
0x5B993F: mov     eax, edx
0x5B9941: mov     ecx, [eax+4]
0x5B9944: mov     [esp+4A0h+var_484], ecx; a3
0x5B9948: push    1
0x5B994A: mov     ecx, ebx
0x5B994C: setnz   byte ptr [esp+4A4h+var_488+2]
0x5B9951: call    sub_52B440
0x5B9956: mov     edi, eax
0x5B9958: test    edi, edi
0x5B995A: jz      loc_5B9C87
0x5B9960: mov     edx, [edi]
0x5B9962: mov     eax, [edx+174h]
0x5B9968: mov     ecx, edi
0x5B996A: call    eax
0x5B996C: mov     ecx, [eax]
0x5B996E: mov     edx, [eax+4]
0x5B9971: mov     eax, [eax+8]
0x5B9974: mov     [esp+4A0h+a3], ecx
0x5B9978: mov     ecx, edi; this
0x5B997A: mov     [esp+4A0h+var_47C], edx
0x5B997E: mov     [esp+4A0h+var_47C+4], eax
0x5B9982: call    TESObjectREFR_GetWorldSpace
0x5B9987: test    eax, eax
0x5B9989: mov     [esp+4A0h+var_48C], eax
0x5B998D: jz      short loc_5B99AE
0x5B998F: mov     ecx, eax
0x5B9991: cmp     ecx, [esi+0D0h]
0x5B9997: jz      loc_5B9AFD
0x5B999D: call    TESWorldSpace_GetParentWorldpsace
0x5B99A2: cmp     eax, [esi+0D0h]
0x5B99A8: jz      loc_5B9AFD
0x5B99AE: call    sub_67F0A0
0x5B99B3: mov     ecx, ebx
0x5B99B5: mov     byte ptr [esp+4A0h+var_474+8], al
0x5B99B9: call    sub_68CA20
0x5B99BE: push    eax
0x5B99BF: call    sub_67F0B0
0x5B99C4: call    sub_67F0E0
0x5B99C9: push    1
0x5B99CB: mov     byte ptr [esp+4A8h+var_468.m_dataLen], al; a3
0x5B99CF: call    sub_67F0F0
0x5B99D4: call    sub_67F0C0
0x5B99D9: push    0
0x5B99DB: mov     byte ptr [esp+4ACh+var_474], al; a3
0x5B99DF: call    sub_67F0D0
0x5B99E4: add     esp, 0Ch
0x5B99E7: lea     ecx, [esp+4A0h+var_454]
0x5B99EB: call    sub_68A9F0
0x5B99F0: mov     edx, [esp+4A0h+var_48C]
0x5B99F4: push    edx
0x5B99F5: mov     ecx, edi; this
0x5B99F7: mov     [esp+4A4h+var_8], 1
0x5B9A02: call    TESObjectREFR_GetParentCell
0x5B9A07: push    eax
0x5B9A08: mov     eax, [edi]
0x5B9A0A: mov     edx, [eax+174h]
0x5B9A10: mov     ecx, edi
0x5B9A12: call    edx
0x5B9A14: push    eax
0x5B9A15: mov     eax, ds:0B333C4h
0x5B9A1A: push    eax
0x5B9A1B: lea     ecx, [esp+4B0h+var_454]
0x5B9A1F: call    sub_68B030
0x5B9A24: mov     ecx, [esi+0D0h]
0x5B9A2A: push    1
0x5B9A2C: push    ecx
0x5B9A2D: lea     ecx, [esp+4A8h+var_454]
0x5B9A31: call    sub_68A890
0x5B9A36: test    eax, eax
0x5B9A38: jz      short loc_5B9A50
0x5B9A3A: mov     edx, [eax]
0x5B9A3C: mov     ecx, eax
0x5B9A3E: mov     eax, [edx+174h]
0x5B9A44: call    eax
0x5B9A46: mov     ecx, [eax]
0x5B9A48: mov     edx, [eax+4]
0x5B9A4B: mov     eax, [eax+8]
0x5B9A4E: jmp     short loc_5B9ABC
0x5B9A50: mov     ecx, [esi+0D0h]
0x5B9A56: fld     dword ptr ds:0A32048h
0x5B9A5C: mov     eax, ds:0B333C4h
0x5B9A61: fst     [esp+4A0h+var_460]; a3
0x5B9A65: push    ecx
0x5B9A66: fst     [esp+4A4h+var_45C]; a3
0x5B9A6A: push    0
0x5B9A6C: fstp    [esp+4A8h+var_458]; a3
0x5B9A70: lea     edx, [esp+4A8h+var_460]
0x5B9A74: push    edx
0x5B9A75: push    eax
0x5B9A76: lea     ecx, [esp+4B0h+var_454]
0x5B9A7A: call    sub_68B030
0x5B9A7F: mov     ecx, [esi+0D0h]
0x5B9A85: push    0
0x5B9A87: push    ecx
0x5B9A88: lea     ecx, [esp+4A8h+var_454]
0x5B9A8C: call    sub_68A890
0x5B9A91: test    eax, eax
0x5B9A93: jz      short loc_5B9AAB
0x5B9A95: mov     edx, [eax]
0x5B9A97: mov     ecx, eax
0x5B9A99: mov     eax, [edx+174h]
0x5B9A9F: call    eax
0x5B9AA1: mov     ecx, [eax]
0x5B9AA3: mov     edx, [eax+4]
0x5B9AA6: mov     eax, [eax+8]
0x5B9AA9: jmp     short loc_5B9ABC
0x5B9AAB: mov     ecx, ds:0B3F9A8h
0x5B9AB1: mov     edx, ds:0B3F9ACh
0x5B9AB7: mov     eax, ds:0B3F9B0h
0x5B9ABC: mov     [esp+4A0h+a3], ecx
0x5B9AC0: mov     ecx, dword ptr [esp+4A0h+var_468.m_dataLen]
0x5B9AC4: push    ecx
0x5B9AC5: mov     [esp+4A4h+var_47C], edx
0x5B9AC9: mov     [esp+4A4h+var_47C+4], eax; a3
0x5B9ACD: call    sub_67F0F0
0x5B9AD2: mov     edx, [esp+4A4h+var_474+8]
0x5B9AD6: push    edx
0x5B9AD7: call    sub_67F0B0
0x5B9ADC: mov     eax, [esp+4A8h+var_474]
0x5B9AE0: push    eax
0x5B9AE1: call    sub_67F0D0
0x5B9AE6: add     esp, 0Ch
0x5B9AE9: lea     ecx, [esp+4A0h+var_454]
0x5B9AED: mov     [esp+4A0h+var_8], 0FFFFFFFFh
0x5B9AF8: call    sub_68AA10
0x5B9AFD: mov     ecx, [esi+58h]
0x5B9B00: push    0
0x5B9B02: push    offset aMap_world_icon; "map_world_icon"
0x5B9B07: push    ecx
0x5B9B08: mov     ecx, esi
0x5B9B0A: call    Menu_CreateTileFromTemplate
0x5B9B0F: mov     edi, eax
0x5B9B11: test    edi, edi
0x5B9B13: jz      loc_5B9C87
0x5B9B19: mov     eax, [esi+0A0h]
0x5B9B1F: fld     [esp+4A0h+a3]
0x5B9B23: mov     edx, [esi+0A4h]
0x5B9B29: mov     [esp+4A0h+var_48C], eax
0x5B9B2D: fisub   [esp+4A0h+var_48C]
0x5B9B31: sub     edx, eax
0x5B9B33: mov     eax, [esi+98h]
0x5B9B39: test    eax, eax
0x5B9B3B: mov     [esp+4A0h+var_48C], edx
0x5B9B3F: fidiv   [esp+4A0h+var_48C]
0x5B9B43: fild    dword ptr [esi+98h]
0x5B9B49: jge     short loc_5B9B51
0x5B9B4B: fadd    dword ptr ds:0A2FC78h
0x5B9B51: mov     eax, [esi+0A8h]
0x5B9B57: fmulp   st(1), st
0x5B9B59: mov     ecx, [esi+9Ch]
0x5B9B5F: mov     [esp+4A0h+var_48C], eax
0x5B9B63: sub     eax, [esi+0ACh]
0x5B9B69: fstp    [esp+4A0h+a3]; a3
0x5B9B6D: test    ecx, ecx
0x5B9B6F: fild    [esp+4A0h+var_48C]
0x5B9B73: mov     [esp+4A0h+var_48C], eax; a3
0x5B9B77: fsub    [esp+4A0h+var_47C]
0x5B9B7B: fidiv   [esp+4A0h+var_48C]
0x5B9B7F: fld1
0x5B9B81: fsubrp  st(1), st
0x5B9B83: fild    dword ptr [esi+9Ch]
0x5B9B89: jge     short loc_5B9B91
0x5B9B8B: fadd    qword ptr ds:0A30E60h
0x5B9B91: fmulp   st(1), st
0x5B9B93: push    ecx
0x5B9B94: mov     ecx, edi; this
0x5B9B96: fstp    [esp+4A4h+var_47C]; a3
0x5B9B9A: fld     dword ptr ds:0A379B4h
0x5B9BA0: fstp    [esp+4A4h+var_4A4]; a3
0x5B9BA3: push    0FAEh; a2
0x5B9BA8: call    Tile_SetFloat
0x5B9BAD: fld     [esp+4A0h+a3]
0x5B9BB1: push    ecx
0x5B9BB2: fstp    [esp+4A4h+var_4A4]; a3
0x5B9BB5: push    0FAFh; a2
0x5B9BBA: mov     ecx, edi; this
0x5B9BBC: call    Tile_SetFloat
0x5B9BC1: fld     [esp+4A0h+var_47C]
0x5B9BC5: push    ecx
0x5B9BC6: fstp    [esp+4A4h+var_4A4]; a3
0x5B9BC9: push    0FB0h; a2
0x5B9BCE: mov     ecx, edi; this
0x5B9BD0: call    Tile_SetFloat
0x5B9BD5: fldz
0x5B9BD7: push    ecx
0x5B9BD8: fstp    [esp+4A4h+var_4A4]; a3
0x5B9BDB: push    0FB2h; a2
0x5B9BE0: mov     ecx, edi; this
0x5B9BE2: call    Tile_SetFloat
0x5B9BE7: fld     dword ptr ds:0A6BF7Ch
0x5B9BED: push    ecx
0x5B9BEE: fstp    [esp+4A4h+var_4A4]; a3
0x5B9BF1: push    0FB3h; a2
0x5B9BF6: mov     ecx, edi; this
0x5B9BF8: call    Tile_SetFloat
0x5B9BFD: fld     dword ptr ds:0A379B4h
0x5B9C03: push    ecx
0x5B9C04: fstp    [esp+4A4h+var_4A4]; a3
0x5B9C07: push    0FB4h; a2
0x5B9C0C: mov     ecx, edi; this
0x5B9C0E: call    Tile_SetFloat
0x5B9C13: fld     dword ptr ds:0A379B4h
0x5B9C19: push    ecx
0x5B9C1A: fstp    [esp+4A4h+var_4A4]; a3
0x5B9C1D: push    0FB5h; a2
0x5B9C22: mov     ecx, edi; this
0x5B9C24: call    Tile_SetFloat
0x5B9C29: fld1
0x5B9C2B: push    ecx
0x5B9C2C: fstp    [esp+4A4h+var_4A4]; a3
0x5B9C2F: push    0FB6h; a2
0x5B9C34: mov     ecx, edi; this
0x5B9C36: call    Tile_SetFloat
0x5B9C3B: xor     edx, edx
0x5B9C3D: cmp     byte ptr [esp+4A0h+var_488+2], dl
0x5B9C41: push    ecx
0x5B9C42: setnz   dl
0x5B9C45: mov     ecx, edi; this
0x5B9C47: add     edx, 1
0x5B9C4A: mov     [esp+4A4h+var_48C], edx; a3
0x5B9C4E: fild    [esp+4A4h+var_48C]
0x5B9C52: fstp    [esp+4A4h+var_4A4]; a3
0x5B9C55: push    0FB8h; a2
0x5B9C5A: call    Tile_SetFloat
0x5B9C5F: fld     dword ptr ds:0A379B4h
0x5B9C65: push    ecx
0x5B9C66: fstp    [esp+4A4h+var_4A4]; a3
0x5B9C69: push    0FB9h; a2
0x5B9C6E: mov     ecx, edi; this
0x5B9C70: call    Tile_SetFloat
0x5B9C75: fld1
0x5B9C77: push    ecx
0x5B9C78: fstp    [esp+4A4h+var_4A4]; a3
0x5B9C7B: push    0FBAh; a2
0x5B9C80: mov     ecx, edi; this
0x5B9C82: call    Tile_SetFloat
0x5B9C87: cmp     [esp+4A0h+var_484], 0
0x5B9C8C: jnz     loc_5B992D
0x5B9C92: mov     eax, [esi+58h]
0x5B9C95: push    0
0x5B9C97: push    offset aMap_world_icon; "map_world_icon"
0x5B9C9C: push    eax
0x5B9C9D: mov     ecx, esi
0x5B9C9F: call    Menu_CreateTileFromTemplate
0x5B9CA4: mov     edi, eax
0x5B9CA6: test    edi, edi
0x5B9CA8: jz      loc_5BA042
0x5B9CAE: push    0; a3
0x5B9CB0: lea     ecx, [edi+8]; this
0x5B9CB3: push    offset aPlayer_set_mar; "player_set_marker"
0x5B9CB8: call    BSStringT_Set
0x5B9CBD: fld     dword ptr ds:0A379B4h
0x5B9CC3: push    ecx
0x5B9CC4: fstp    [esp+4A4h+var_4A4]; a3
0x5B9CC7: push    0FAEh; a2
0x5B9CCC: mov     ecx, edi; this
0x5B9CCE: call    Tile_SetFloat
0x5B9CD3: fldz
0x5B9CD5: push    ecx
0x5B9CD6: fstp    [esp+4A4h+var_4A4]; a3
0x5B9CD9: push    0FAFh; a2
0x5B9CDE: mov     ecx, edi; this
0x5B9CE0: call    Tile_SetFloat
0x5B9CE5: fldz
0x5B9CE7: push    ecx
0x5B9CE8: fstp    [esp+4A4h+var_4A4]; a3
0x5B9CEB: push    0FB0h; a2
0x5B9CF0: mov     ecx, edi; this
0x5B9CF2: call    Tile_SetFloat
0x5B9CF7: fldz
0x5B9CF9: push    ecx
0x5B9CFA: fstp    [esp+4A4h+var_4A4]; a3
0x5B9CFD: push    0FB2h; a2
0x5B9D02: mov     ecx, edi; this
0x5B9D04: call    Tile_SetFloat
0x5B9D09: fld     dword ptr ds:0A6BF7Ch
0x5B9D0F: push    ecx
0x5B9D10: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D13: push    0FB3h; a2
0x5B9D18: mov     ecx, edi; this
0x5B9D1A: call    Tile_SetFloat
0x5B9D1F: fld1
0x5B9D21: push    ecx
0x5B9D22: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D25: push    0FB4h; a2
0x5B9D2A: mov     ecx, edi; this
0x5B9D2C: call    Tile_SetFloat
0x5B9D31: fld     dword ptr ds:0A46C30h
0x5B9D37: push    ecx
0x5B9D38: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D3B: push    0FB5h; a2
0x5B9D40: mov     ecx, edi; this
0x5B9D42: call    Tile_SetFloat
0x5B9D47: fld1
0x5B9D49: push    ecx
0x5B9D4A: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D4D: push    0FB6h; a2
0x5B9D52: mov     ecx, edi; this
0x5B9D54: call    Tile_SetFloat
0x5B9D59: fld1
0x5B9D5B: push    ecx
0x5B9D5C: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D5F: push    0FB8h; a2
0x5B9D64: mov     ecx, edi; this
0x5B9D66: call    Tile_SetFloat
0x5B9D6B: fld1
0x5B9D6D: push    ecx
0x5B9D6E: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D71: push    0FB9h; a2
0x5B9D76: mov     ecx, edi; this
0x5B9D78: call    Tile_SetFloat
0x5B9D7D: fld     dword ptr ds:0A379B4h
0x5B9D83: push    ecx
0x5B9D84: fstp    [esp+4A4h+var_4A4]; a3
0x5B9D87: push    0FBAh; a2
0x5B9D8C: mov     ecx, edi; this
0x5B9D8E: call    Tile_SetFloat
0x5B9D93: mov     eax, ds:0B333C4h
0x5B9D98: mov     ecx, [eax+62Ch]
0x5B9D9E: mov     [esp+4A0h+a3], ecx
0x5B9DA2: mov     edx, [eax+630h]
0x5B9DA8: mov     [esp+4A0h+var_47C], edx
0x5B9DAC: mov     ecx, [eax+634h]
0x5B9DB2: mov     [esp+4A0h+var_47C+4], ecx
0x5B9DB6: mov     ebx, [eax+638h]
0x5B9DBC: test    ebx, ebx
0x5B9DBE: jz      loc_5B9F3E
0x5B9DC4: cmp     ebx, [esi+0D0h]
0x5B9DCA: jz      loc_5B9F3E
0x5B9DD0: call    sub_67F0A0
0x5B9DD5: push    1
0x5B9DD7: mov     byte ptr [esp+4A4h+var_474+8], al
0x5B9DDB: call    sub_67F0B0
0x5B9DE0: call    sub_67F0E0
0x5B9DE5: push    1
0x5B9DE7: mov     byte ptr [esp+4A8h+var_474], al; a3
0x5B9DEB: call    sub_67F0F0
0x5B9DF0: call    sub_67F0C0
0x5B9DF5: push    0
0x5B9DF7: mov     byte ptr [esp+4ACh+var_468.m_dataLen], al
0x5B9DFB: call    sub_67F0D0
0x5B9E00: xor     eax, eax
0x5B9E02: mov     [esp+4ACh+var_48C], eax; a3
0x5B9E06: mov     [esp+4ACh+var_484], eax
0x5B9E0A: mov     al, [ebx+4]
0x5B9E0D: add     esp, 0Ch
0x5B9E10: cmp     al, 30h ; '0'
0x5B9E12: jnz     short loc_5B9E1A
0x5B9E14: mov     [esp+4A0h+var_48C], ebx
0x5B9E18: jmp     short loc_5B9E22
0x5B9E1A: cmp     al, 35h ; '5'
0x5B9E1C: jnz     short loc_5B9E22
0x5B9E1E: mov     [esp+4A0h+var_484], ebx; a3
0x5B9E22: lea     ecx, [esp+4A0h+var_454]
0x5B9E26: call    sub_68A9F0
0x5B9E2B: mov     edx, [esp+4A0h+var_484]
0x5B9E2F: mov     eax, [esp+4A0h+var_48C]
0x5B9E33: push    edx
0x5B9E34: mov     edx, ds:0B333C4h
0x5B9E3A: push    eax
0x5B9E3B: lea     ecx, [esp+4A8h+a3]
0x5B9E3F: push    ecx
0x5B9E40: push    edx
0x5B9E41: lea     ecx, [esp+4B0h+var_454]
0x5B9E45: mov     [esp+4B0h+var_8], 2
0x5B9E50: call    sub_68B030
0x5B9E55: mov     eax, [esi+0D0h]
0x5B9E5B: push    1
0x5B9E5D: push    eax
0x5B9E5E: lea     ecx, [esp+4A8h+var_454]
0x5B9E62: call    sub_68A890
0x5B9E67: test    eax, eax
0x5B9E69: jz      short loc_5B9E89
0x5B9E6B: mov     edx, [eax]
0x5B9E6D: mov     ecx, eax
0x5B9E6F: mov     eax, [edx+174h]
0x5B9E75: call    eax
0x5B9E77: mov     ecx, [eax]
0x5B9E79: mov     [esp+4A0h+a3], ecx
0x5B9E7D: mov     edx, [eax+4]
0x5B9E80: mov     [esp+4A0h+var_47C], edx
0x5B9E84: mov     eax, [eax+8]
0x5B9E87: jmp     short loc_5B9F05
0x5B9E89: mov     ecx, [esi+0D0h]
0x5B9E8F: fld     dword ptr ds:0A32048h
0x5B9E95: mov     eax, ds:0B333C4h
0x5B9E9A: fst     [esp+4A0h+var_460]; a3
0x5B9E9E: push    ecx
0x5B9E9F: fst     [esp+4A4h+var_45C]
0x5B9EA3: push    0
0x5B9EA5: fstp    [esp+4A8h+var_458]; a3
0x5B9EA9: lea     edx, [esp+4A8h+var_460]
0x5B9EAD: push    edx
0x5B9EAE: push    eax
0x5B9EAF: lea     ecx, [esp+4B0h+var_454]
0x5B9EB3: call    sub_68B030
0x5B9EB8: mov     ecx, [esi+0D0h]
0x5B9EBE: push    0
0x5B9EC0: push    ecx
0x5B9EC1: lea     ecx, [esp+4A8h+var_454]
0x5B9EC5: call    sub_68A890
0x5B9ECA: test    eax, eax
0x5B9ECC: jz      short loc_5B9EEC
0x5B9ECE: mov     edx, [eax]
0x5B9ED0: mov     ecx, eax
0x5B9ED2: mov     eax, [edx+174h]
0x5B9ED8: call    eax
0x5B9EDA: mov     ecx, [eax]
0x5B9EDC: mov     [esp+4A0h+a3], ecx
0x5B9EE0: mov     edx, [eax+4]
0x5B9EE3: mov     [esp+4A0h+var_47C], edx
0x5B9EE7: mov     eax, [eax+8]
0x5B9EEA: jmp     short loc_5B9F05
0x5B9EEC: mov     ecx, ds:0B3F9A8h
0x5B9EF2: mov     edx, ds:0B3F9ACh
0x5B9EF8: mov     eax, ds:0B3F9B0h
0x5B9EFD: mov     [esp+4A0h+a3], ecx; a3
0x5B9F01: mov     [esp+4A0h+var_47C], edx
0x5B9F05: mov     ecx, [esp+4A0h+var_474]
0x5B9F09: push    ecx
0x5B9F0A: mov     [esp+4A4h+var_47C+4], eax; a3
0x5B9F0E: call    sub_67F0F0
0x5B9F13: mov     edx, [esp+4A4h+var_474+8]
0x5B9F17: push    edx
0x5B9F18: call    sub_67F0B0
0x5B9F1D: mov     eax, dword ptr [esp+4A8h+var_468.m_dataLen]
0x5B9F21: push    eax
0x5B9F22: call    sub_67F0D0
0x5B9F27: add     esp, 0Ch
0x5B9F2A: lea     ecx, [esp+4A0h+var_454]
0x5B9F2E: mov     [esp+4A0h+var_8], 0FFFFFFFFh
0x5B9F39: call    sub_68AA10
0x5B9F3E: push    offset Vector3_InitValue?
0x5B9F43: lea     ecx, [esp+4A4h+a3]
0x5B9F47: call    sub_8AA390
0x5B9F4C: test    al, al
0x5B9F4E: jz      loc_5BA014
0x5B9F54: mov     eax, [esi+0A0h]
0x5B9F5A: fld     [esp+4A0h+a3]
0x5B9F5E: mov     ecx, [esi+0A4h]
0x5B9F64: mov     edx, [esi+98h]
0x5B9F6A: mov     [esp+4A0h+var_48C], eax
0x5B9F6E: fisub   [esp+4A0h+var_48C]
0x5B9F72: sub     ecx, eax
0x5B9F74: test    edx, edx
0x5B9F76: mov     [esp+4A0h+var_474], ecx
0x5B9F7A: fidiv   [esp+4A0h+var_474]
0x5B9F7E: fild    dword ptr [esi+98h]
0x5B9F84: jge     short loc_5B9F8C
0x5B9F86: fadd    dword ptr ds:0A2FC78h
0x5B9F8C: mov     eax, [esi+0A8h]
0x5B9F92: fmulp   st(1), st
0x5B9F94: mov     [esp+4A0h+var_48C], eax
0x5B9F98: sub     eax, [esi+0ACh]
0x5B9F9E: fstp    [esp+4A0h+a3]
0x5B9FA2: fild    [esp+4A0h+var_48C]
0x5B9FA6: mov     [esp+4A0h+var_474], eax
0x5B9FAA: mov     eax, [esi+9Ch]
0x5B9FB0: test    eax, eax
0x5B9FB2: fsub    [esp+4A0h+var_47C]
0x5B9FB6: fidiv   [esp+4A0h+var_474]
0x5B9FBA: fld1
0x5B9FBC: fsubrp  st(1), st
0x5B9FBE: fild    dword ptr [esi+9Ch]
0x5B9FC4: jge     short loc_5B9FCC
0x5B9FC6: fadd    qword ptr ds:0A30E60h
0x5B9FCC: fmulp   st(1), st
0x5B9FCE: push    ecx
0x5B9FCF: mov     ecx, edi; this
0x5B9FD1: fstp    [esp+4A4h+var_47C]
0x5B9FD5: fld     [esp+4A4h+a3]
0x5B9FD9: fstp    [esp+4A4h+var_4A4]; a3
0x5B9FDC: push    0FAFh; a2
0x5B9FE1: call    Tile_SetFloat
0x5B9FE6: fld     [esp+4A0h+var_47C]
0x5B9FEA: push    ecx
0x5B9FEB: fstp    [esp+4A4h+var_4A4]; a3
0x5B9FEE: push    0FB0h; a2
0x5B9FF3: mov     ecx, edi; this
0x5B9FF5: call    Tile_SetFloat
0x5B9FFA: fld     dword ptr ds:0A40098h
0x5BA000: push    ecx
0x5BA001: fstp    [esp+4A4h+var_4A4]; a3
0x5BA004: push    0FA7h; a2
0x5BA009: mov     ecx, edi; this
0x5BA00B: call    Tile_SetFloat
0x5BA010: fld1
0x5BA012: jmp     short loc_5BA02C
0x5BA014: fldz
0x5BA016: push    ecx
0x5BA017: fstp    [esp+4A4h+var_4A4]; a3
0x5BA01A: mov     ecx, edi; this
0x5BA01C: push    0FA7h; a2
0x5BA021: call    Tile_SetFloat
0x5BA026: fld     dword ptr ds:0A379B4h
0x5BA02C: push    ecx
0x5BA02D: fstp    [esp+4A4h+var_4A4]; a3
0x5BA030: push    0FB6h; a2
0x5BA035: mov     ecx, edi; this
0x5BA037: call    Tile_SetFloat
0x5BA03C: mov     [esi+0E0h], edi
0x5BA042: mov     ecx, [esi+58h]
0x5BA045: push    0
0x5BA047: push    offset aMap_world_icon; "map_world_icon"
0x5BA04C: push    ecx
0x5BA04D: mov     ecx, esi
0x5BA04F: call    Menu_CreateTileFromTemplate
0x5BA054: mov     edi, eax
0x5BA056: test    edi, edi
0x5BA058: jz      loc_5BA481
0x5BA05E: push    0; a3
0x5BA060: lea     ecx, [edi+8]; this
0x5BA063: push    offset aMap_world_play; "map_world_player"
0x5BA068: call    BSStringT_Set
0x5BA06D: mov     ecx, ds:0B333C4h
0x5BA073: mov     edx, [ecx]
0x5BA075: mov     eax, [edx+174h]
0x5BA07B: call    eax
0x5BA07D: mov     ecx, [eax]
0x5BA07F: mov     edx, [eax+4]
0x5BA082: mov     eax, [eax+8]
0x5BA085: mov     [esp+4A0h+a3], ecx
0x5BA089: mov     ecx, ds:0B333C4h; this
0x5BA08F: mov     [esp+4A0h+var_47C], edx
0x5BA093: mov     [esp+4A0h+var_47C+4], eax
0x5BA097: call    TESObjectREFR_GetWorldSpace
0x5BA09C: mov     ebx, eax
0x5BA09E: test    ebx, ebx
0x5BA0A0: jz      short loc_5BA0B6
0x5BA0A2: mov     ecx, ebx
0x5BA0A4: call    TESWorldSpace_GetParentWorldpsace
0x5BA0A9: test    eax, eax
0x5BA0AB: jz      short loc_5BA0B6
0x5BA0AD: mov     ecx, ebx
0x5BA0AF: call    TESWorldSpace_GetParentWorldpsace
0x5BA0B4: mov     ebx, eax
0x5BA0B6: cmp     ebx, [esi+0D0h]
0x5BA0BC: jz      loc_5BA1B6
0x5BA0C2: call    sub_67F0A0
0x5BA0C7: push    1
0x5BA0C9: mov     byte ptr [esp+4A4h+var_474+8], al
0x5BA0CD: call    sub_67F0B0
0x5BA0D2: call    sub_67F0E0
0x5BA0D7: push    1
0x5BA0D9: mov     byte ptr [esp+4A8h+var_474], al
0x5BA0DD: call    sub_67F0F0
0x5BA0E2: call    sub_67F0C0
0x5BA0E7: push    0
0x5BA0E9: mov     byte ptr [esp+4ACh+var_468.m_dataLen], al
0x5BA0ED: call    sub_67F0D0
0x5BA0F2: add     esp, 0Ch
0x5BA0F5: lea     ecx, [esp+4A0h+var_454]
0x5BA0F9: call    sub_68A9F0
0x5BA0FE: fld     dword ptr ds:0A32048h
0x5BA104: mov     ecx, [esi+0D0h]
0x5BA10A: fst     [esp+4A0h+var_460]
0x5BA10E: mov     eax, ds:0B333C4h
0x5BA113: fst     [esp+4A0h+var_45C]
0x5BA117: push    ecx
0x5BA118: fstp    [esp+4A4h+var_458]
0x5BA11C: push    0
0x5BA11E: lea     edx, [esp+4A8h+var_460]
0x5BA122: push    edx
0x5BA123: push    eax
0x5BA124: lea     ecx, [esp+4B0h+var_454]
0x5BA128: mov     [esp+4B0h+var_8], 3
0x5BA133: call    sub_68B030
0x5BA138: mov     ecx, [esp+4A0h+var_474]
0x5BA13C: push    ecx
0x5BA13D: call    sub_67F0F0
0x5BA142: mov     edx, [esp+4A4h+var_474+8]
0x5BA146: push    edx
0x5BA147: call    sub_67F0B0
0x5BA14C: mov     eax, dword ptr [esp+4A8h+var_468.m_dataLen]
0x5BA150: push    eax
0x5BA151: call    sub_67F0D0
0x5BA156: mov     ecx, [esi+0D0h]
0x5BA15C: add     esp, 0Ch
0x5BA15F: push    0
0x5BA161: push    ecx
0x5BA162: lea     ecx, [esp+4A8h+var_454]
0x5BA166: call    sub_68A890
0x5BA16B: test    eax, eax
0x5BA16D: jz      short loc_5BA185
0x5BA16F: mov     edx, [eax]
0x5BA171: mov     ecx, eax
0x5BA173: mov     eax, [edx+174h]
0x5BA179: call    eax
0x5BA17B: mov     ecx, [eax]
0x5BA17D: mov     edx, [eax+4]
0x5BA180: mov     eax, [eax+8]
0x5BA183: jmp     short loc_5BA196
0x5BA185: mov     ecx, ds:0B3F9A8h
0x5BA18B: mov     edx, ds:0B3F9ACh
0x5BA191: mov     eax, ds:0B3F9B0h
0x5BA196: mov     [esp+4A0h+a3], ecx
0x5BA19A: lea     ecx, [esp+4A0h+var_454]
0x5BA19E: mov     [esp+4A0h+var_47C+4], eax; a3
0x5BA1A2: mov     [esp+4A0h+var_47C], edx
0x5BA1A6: mov     [esp+4A0h+var_8], 0FFFFFFFFh
0x5BA1B1: call    sub_68AA10
0x5BA1B6: mov     eax, [esi+0A0h]
0x5BA1BC: fld     [esp+4A0h+a3]
0x5BA1C0: mov     ecx, [esi+0A4h]
0x5BA1C6: mov     edx, [esi+98h]
0x5BA1CC: mov     [esp+4A0h+var_48C], eax
0x5BA1D0: fisub   [esp+4A0h+var_48C]
0x5BA1D4: sub     ecx, eax
0x5BA1D6: test    edx, edx
0x5BA1D8: mov     [esp+4A0h+var_474], ecx
0x5BA1DC: fidiv   [esp+4A0h+var_474]
0x5BA1E0: fild    dword ptr [esi+98h]
0x5BA1E6: jge     short loc_5BA1EE
0x5BA1E8: fadd    dword ptr ds:0A2FC78h
0x5BA1EE: mov     eax, [esi+0A8h]
0x5BA1F4: fmulp   st(1), st
0x5BA1F6: mov     [esp+4A0h+var_48C], eax; a3
0x5BA1FA: sub     eax, [esi+0ACh]
0x5BA200: fstp    [esp+4A0h+a3]; a3
0x5BA204: fild    [esp+4A0h+var_48C]
0x5BA208: mov     [esp+4A0h+var_474], eax; a3
0x5BA20C: mov     eax, [esi+9Ch]
0x5BA212: test    eax, eax
0x5BA214: fsub    [esp+4A0h+var_47C]
0x5BA218: fidiv   [esp+4A0h+var_474]
0x5BA21C: fld1
0x5BA21E: fsubrp  st(1), st
0x5BA220: fild    dword ptr [esi+9Ch]
0x5BA226: jge     short loc_5BA22E
0x5BA228: fadd    qword ptr ds:0A30E60h
0x5BA22E: fmulp   st(1), st
0x5BA230: push    ecx
0x5BA231: mov     ecx, edi; this
0x5BA233: fstp    [esp+4A4h+var_47C]; a3
0x5BA237: fld     dword ptr ds:0A40098h
0x5BA23D: fstp    [esp+4A4h+var_4A4]; a3
0x5BA240: push    0FA7h; a2
0x5BA245: call    Tile_SetFloat
0x5BA24A: fld     dword ptr ds:0A379B4h
0x5BA250: push    ecx
0x5BA251: fstp    [esp+4A4h+var_4A4]; a3
0x5BA254: push    0FAEh; a2
0x5BA259: mov     ecx, edi; this
0x5BA25B: call    Tile_SetFloat
0x5BA260: fld     [esp+4A0h+a3]
0x5BA264: fsub    qword ptr ds:0A2F920h
0x5BA26A: push    ecx
0x5BA26B: mov     ecx, edi; this
0x5BA26D: fstp    [esp+4A4h+var_474]; a3
0x5BA271: fld     [esp+4A4h+var_474]
0x5BA275: fstp    [esp+4A4h+var_4A4]; a3
0x5BA278: push    0FAFh; a2
0x5BA27D: call    Tile_SetFloat
0x5BA282: fld     [esp+4A0h+var_47C]
0x5BA286: push    ecx
0x5BA287: fstp    [esp+4A4h+var_4A4]; a3
0x5BA28A: push    0FB0h; a2
0x5BA28F: mov     ecx, edi; this
0x5BA291: call    Tile_SetFloat
0x5BA296: fldz
0x5BA298: push    ecx
0x5BA299: fstp    [esp+4A4h+var_4A4]; a3
0x5BA29C: push    0FB2h; a2
0x5BA2A1: mov     ecx, edi; this
0x5BA2A3: call    Tile_SetFloat
0x5BA2A8: fld     dword ptr ds:0A6CD0Ch
0x5BA2AE: push    ecx
0x5BA2AF: fstp    [esp+4A4h+var_4A4]; a3
0x5BA2B2: push    0FB3h; a2
0x5BA2B7: mov     ecx, edi; this
0x5BA2B9: call    Tile_SetFloat
0x5BA2BE: fld1
0x5BA2C0: push    ecx
0x5BA2C1: fstp    [esp+4A4h+var_4A4]; a3
0x5BA2C4: push    0FB4h; a2
0x5BA2C9: mov     ecx, edi; this
0x5BA2CB: call    Tile_SetFloat
0x5BA2D0: fld     dword ptr ds:0A46B10h
0x5BA2D6: push    ecx
0x5BA2D7: fstp    [esp+4A4h+var_4A4]; a3
0x5BA2DA: push    0FB5h; a2
0x5BA2DF: mov     ecx, edi; this
0x5BA2E1: call    Tile_SetFloat
0x5BA2E6: fld1
0x5BA2E8: push    ecx
0x5BA2E9: fstp    [esp+4A4h+var_4A4]; a3
0x5BA2EC: push    0FB6h; a2
0x5BA2F1: mov     ecx, edi; this
0x5BA2F3: call    Tile_SetFloat
0x5BA2F8: fld1
0x5BA2FA: push    ecx
0x5BA2FB: fstp    [esp+4A4h+var_4A4]; a3
0x5BA2FE: push    0FB8h; a2
0x5BA303: mov     ecx, edi; this
0x5BA305: call    Tile_SetFloat
0x5BA30A: fld1
0x5BA30C: push    ecx
0x5BA30D: fstp    [esp+4A4h+var_4A4]; a3
0x5BA310: push    0FB9h; a2
0x5BA315: mov     ecx, edi; this
0x5BA317: call    Tile_SetFloat
0x5BA31C: fld1
0x5BA31E: push    ecx
0x5BA31F: fstp    [esp+4A4h+var_4A4]; a3
0x5BA322: push    0FBAh; a2
0x5BA327: mov     ecx, edi; this
0x5BA329: call    Tile_SetFloat
0x5BA32E: mov     ecx, edi
0x5BA330: mov     [esi+0F8h], edi
0x5BA336: call    sub_58E870
0x5BA33B: mov     ebx, [esi+0F8h]
0x5BA341: test    ebx, ebx
0x5BA343: jz      loc_5BA456
0x5BA349: mov     eax, [ebx+24h]
0x5BA34C: test    eax, eax
0x5BA34E: mov     [esp+4A0h+var_484], eax
0x5BA352: jz      loc_5BA456
0x5BA358: mov     ecx, ds:0B333C4h; this
0x5BA35E: call    TESObjectREFR_GetParentCell
0x5BA363: test    eax, eax
0x5BA365: jz      loc_5BA456
0x5BA36B: mov     ecx, ds:0B333C4h; this
0x5BA371: call    TESObjectREFR_GetParentCell
0x5BA376: mov     ecx, eax
0x5BA378: call    sub_4CCE00
0x5BA37D: fstp    qword ptr [esp+4A0h+var_474]
0x5BA381: mov     ecx, ds:0B333C4h
0x5BA387: mov     edx, [ecx]
0x5BA389: mov     eax, [edx+1E0h]
0x5BA38F: call    eax
0x5BA391: fadd    qword ptr [esp+4A0h+var_474]
0x5BA395: push    ecx
0x5BA396: lea     ecx, [esp+4A4h+var_450+10h]
0x5BA39A: fstp    [esp+4A4h+var_474]
0x5BA39E: fld     [esp+4A4h+var_474]
0x5BA3A2: fchs
0x5BA3A4: fstp    [esp+4A4h+var_4A4]; float
0x5BA3A7: call    sub_70FD80
0x5BA3AC: push    0FCBh
0x5BA3B1: mov     ecx, edi
0x5BA3B3: call    Tile_GetFloat
0x5BA3B8: fmul    qword ptr ds:0A2FAA0h
0x5BA3BE: push    0FCAh
0x5BA3C3: mov     ecx, edi
0x5BA3C5: fstp    [esp+4A4h+var_474]
0x5BA3C9: call    Tile_GetFloat
0x5BA3CE: fmul    qword ptr ds:0A2FAA0h
0x5BA3D4: mov     ecx, [esp+4A0h+var_484]
0x5BA3D8: xor     edi, edi
0x5BA3DA: mov     byte ptr [ebx+6], 1
0x5BA3DE: cmp     [ecx+0B8h], di
0x5BA3E5: fstp    [esp+4A0h+var_474+8]
0x5BA3E9: jbe     short loc_5BA456
0x5BA3EB: mov     ebx, ecx
0x5BA3ED: lea     ecx, [ecx+0]
0x5BA3F0: movzx   edx, word ptr [ebx+0B6h]
0x5BA3F7: cmp     edx, edi
0x5BA3F9: ja      short loc_5BA3FF
0x5BA3FB: xor     eax, eax
0x5BA3FD: jmp     short loc_5BA408
0x5BA3FF: mov     eax, [ebx+0B0h]
0x5BA405: mov     eax, [eax+edi*4]
0x5BA408: push    eax
0x5BA409: push    offset dword_B3FCD4
0x5BA40E: call    NiRTTI_Cast
0x5BA413: add     esp, 8
0x5BA416: test    eax, eax
0x5BA418: jz      short loc_5BA448
0x5BA41A: fld     [esp+4A0h+var_474]
0x5BA41E: push    offset Vector3_InitValue?
0x5BA423: fstp    [esp+4A4h+var_460]
0x5BA427: lea     ecx, [esp+4A4h+var_460]
0x5BA42B: fldz
0x5BA42D: push    ecx
0x5BA42E: fstp    [esp+4A8h+var_45C]
0x5BA432: lea     edx, [esp+4A8h+var_450+10h]
0x5BA436: fld     [esp+4A8h+var_474+8]
0x5BA43A: push    edx
0x5BA43B: fchs
0x5BA43D: mov     ecx, eax
0x5BA43F: fstp    [esp+4ACh+var_458]
0x5BA443: call    sub_5B6860
0x5BA448: movzx   eax, word ptr [ebx+0B8h]
0x5BA44F: add     edi, 1
0x5BA452: cmp     edi, eax
0x5BA454: jb      short loc_5BA3F0
0x5BA456: mov     edi, [esi+58h]
0x5BA459: fld     [esp+4A0h+a3]
0x5BA45D: push    ecx
0x5BA45E: fstp    [esp+4A4h+var_4A4]; a3
0x5BA461: push    0FB8h; a2
0x5BA466: mov     ecx, edi; this
0x5BA468: call    Tile_SetFloat
0x5BA46D: fld     [esp+4A0h+var_47C]
0x5BA471: push    ecx
0x5BA472: fstp    [esp+4A4h+var_4A4]; a3
0x5BA475: push    0FB9h; a2
0x5BA47A: mov     ecx, edi; this
0x5BA47C: call    Tile_SetFloat
0x5BA481: fld     dword ptr ds:0A31E2Ch
0x5BA487: push    ecx
0x5BA488: mov     ecx, [esi+58h]; this
0x5BA48B: fstp    [esp+4A4h+var_4A4]; a3
0x5BA48E: push    0FB0h; a2
0x5BA493: call    Tile_SetFloat
0x5BA498: mov     eax, [esi+58h]
0x5BA49B: jmp     short loc_5BA49F
0x5BA49D: xor     eax, eax
0x5BA49F: mov     ecx, [esp+4A0h+var_10]
0x5BA4A6: mov     large fs:0, ecx
0x5BA4AD: pop     ecx
0x5BA4AE: pop     edi
0x5BA4AF: pop     esi
0x5BA4B0: pop     ebx
0x5BA4B1: mov     ecx, dword ptr [esp+490h+var_418+400h]
0x5BA4B8: xor     ecx, esp
0x5BA4BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5BA4BF: mov     esp, ebp
0x5BA4C1: pop     ebp
0x5BA4C2: retn

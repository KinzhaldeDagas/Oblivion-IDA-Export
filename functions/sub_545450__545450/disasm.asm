0x545450: push    0E4h ; 'ä'; Size
0x545455: call    FormHeapAlloc
0x54545A: mov     ebx, eax
0x54545C: add     esp, 4
0x54545F: mov     [esp+arg_48], ebx
0x545463: test    ebx, ebx
0x545465: mov     [esp+arg_40], 3
0x54546D: jz      short loc_545493
0x54546F: push    0
0x545471: mov     ecx, ebx; this
0x545473: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x545478: fldz
0x54547A: fstp    dword ptr [ebx+0E0h]
0x545480: mov     dword ptr [ebx], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x545486: mov     word ptr [ebx+0DCh], 9
0x54548F: mov     ebp, ebx
0x545491: jmp     short loc_545495
0x545493: xor     ebp, ebp
0x545495: mov     ebx, [esi+8]
0x545498: cmp     ebx, ebp
0x54549A: mov     [esp+arg_40], 0FFFFFFFFh
0x5454A2: jz      short loc_5454D5
0x5454A4: test    ebx, ebx
0x5454A6: jz      short loc_5454C4
0x5454A8: lea     ecx, [ebx+4]
0x5454AB: push    ecx; lpAddend
0x5454AC: call    dword ptr ds:0A2807Ch
0x5454B2: test    eax, eax
0x5454B4: jnz     short loc_5454C4
0x5454B6: test    ebx, ebx
0x5454B8: jz      short loc_5454C4
0x5454BA: mov     edx, [ebx]
0x5454BC: mov     eax, [edx]
0x5454BE: push    1
0x5454C0: mov     ecx, ebx
0x5454C2: call    eax
0x5454C4: test    ebp, ebp
0x5454C6: mov     [esi+8], ebp
0x5454C9: jz      short loc_5454D5
0x5454CB: add     ebp, 4
0x5454CE: push    ebp; lpAddend
0x5454CF: call    dword ptr ds:0A28078h
0x5454D5: mov     ecx, [esi+8]
0x5454D8: push    offset aSunBillboardNo; "Sun Billboard Node"
0x5454DD: call    NiObjectNET_SetName
0x5454E2: mov     eax, [esi+8]
0x5454E5: mov     ebp, 2
0x5454EA: or      [eax+18h], bp
0x5454EE: mov     eax, [esi+8]
0x5454F1: mov     cx, [eax+0DCh]
0x5454F8: and     cx, 0FFFAh
0x5454FD: or      cx, bp
0x545500: mov     [eax+0DCh], cx
0x545507: mov     ecx, [esi+8]
0x54550A: mov     eax, [esi+10h]
0x54550D: mov     edx, [ecx]
0x54550F: push    0
0x545511: push    eax
0x545512: mov     eax, [edx+84h]
0x545518: call    eax
0x54551A: push    0C0h ; 'À'; Size
0x54551F: call    FormHeapAlloc
0x545524: add     esp, 4
0x545527: mov     [esp+0Ch+arg_3C], eax
0x54552B: test    eax, eax
0x54552D: mov     [esp+0Ch+arg_34], 4
0x545535: jz      short loc_54555E
0x545537: mov     ecx, [esp+0Ch+arg_4]
0x54553B: mov     edx, [esp+0Ch+arg_10]
0x54553F: push    ecx
0x545540: mov     ecx, [esp+10h+arg_14]
0x545544: push    ebp
0x545545: push    0
0x545547: push    1
0x545549: push    edx
0x54554A: mov     edx, [esp+20h+arg_18]
0x54554E: push    edi
0x54554F: push    ecx
0x545550: push    edx
0x545551: push    4
0x545553: mov     ecx, eax
0x545555: call    sub_7174B0
0x54555A: mov     edi, eax
0x54555C: jmp     short loc_545560
0x54555E: xor     edi, edi
0x545560: mov     ebx, [esi+14h]
0x545563: cmp     ebx, edi
0x545565: mov     [esp+0Ch+arg_34], 0FFFFFFFFh
0x54556D: jz      short loc_5455A0
0x54556F: test    ebx, ebx
0x545571: jz      short loc_54558F
0x545573: lea     eax, [ebx+4]
0x545576: push    eax; lpAddend
0x545577: call    dword ptr ds:0A2807Ch
0x54557D: test    eax, eax
0x54557F: jnz     short loc_54558F
0x545581: test    ebx, ebx
0x545583: jz      short loc_54558F
0x545585: mov     edx, [ebx]
0x545587: mov     eax, [edx]
0x545589: push    1
0x54558B: mov     ecx, ebx
0x54558D: call    eax
0x54558F: test    edi, edi
0x545591: mov     [esi+14h], edi
0x545594: jz      short loc_5455A0
0x545596: add     edi, 4
0x545599: push    edi; lpAddend
0x54559A: call    dword ptr ds:0A28078h
0x5455A0: mov     ecx, [esi+14h]
0x5455A3: push    offset aSunGlareGeomet; "Sun Glare Geometry"
0x5455A8: call    NiObjectNET_SetName
0x5455AD: mov     eax, [esi+14h]
0x5455B0: or      [eax+18h], bp
0x5455B4: push    0E4h ; 'ä'; Size
0x5455B9: call    FormHeapAlloc
0x5455BE: mov     edi, eax
0x5455C0: add     esp, 4
0x5455C3: mov     [esp+10h+arg_38], edi
0x5455C7: test    edi, edi
0x5455C9: mov     [esp+10h+arg_30], 5
0x5455D1: jz      short loc_5455F5
0x5455D3: push    0
0x5455D5: mov     ecx, edi; this
0x5455D7: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5455DC: fldz
0x5455DE: fstp    dword ptr [edi+0E0h]
0x5455E4: mov     dword ptr [edi], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x5455EA: mov     word ptr [edi+0DCh], 9
0x5455F3: jmp     short loc_5455F7
0x5455F5: xor     edi, edi
0x5455F7: mov     ebx, [esi+0Ch]
0x5455FA: cmp     ebx, edi
0x5455FC: mov     [esp+10h+arg_30], 0FFFFFFFFh
0x545604: jz      short loc_545637
0x545606: test    ebx, ebx
0x545608: jz      short loc_545626
0x54560A: lea     ecx, [ebx+4]
0x54560D: push    ecx; lpAddend
0x54560E: call    dword ptr ds:0A2807Ch
0x545614: test    eax, eax
0x545616: jnz     short loc_545626
0x545618: test    ebx, ebx
0x54561A: jz      short loc_545626
0x54561C: mov     edx, [ebx]
0x54561E: mov     eax, [edx]
0x545620: push    1
0x545622: mov     ecx, ebx
0x545624: call    eax
0x545626: test    edi, edi
0x545628: mov     [esi+0Ch], edi
0x54562B: jz      short loc_545637
0x54562D: add     edi, 4
0x545630: push    edi; lpAddend
0x545631: call    dword ptr ds:0A28078h
0x545637: mov     ecx, [esi+0Ch]
0x54563A: push    offset aSunGlareBillbo; "Sun Glare Billboard Node"
0x54563F: call    NiObjectNET_SetName
0x545644: mov     eax, [esi+0Ch]
0x545647: or      [eax+18h], bp
0x54564B: mov     eax, [esi+0Ch]
0x54564E: mov     cx, [eax+0DCh]
0x545655: and     cx, 0FFFAh
0x54565A: or      cx, bp
0x54565D: mov     [eax+0DCh], cx
0x545664: fld     dword ptr [esi+20h]
0x545667: mov     eax, [esi+0Ch]
0x54566A: fstp    [esp+14h+arg_34]
0x54566E: fld     [esp+14h+arg_34]
0x545672: push    0
0x545674: fabs
0x545676: fstp    [esp+18h+arg_34]
0x54567A: fld     [esp+18h+arg_34]
0x54567E: fstp    dword ptr [eax+60h]
0x545681: mov     ecx, [esi+0Ch]
0x545684: mov     eax, [esi+14h]
0x545687: mov     edx, [ecx]
0x545689: push    eax
0x54568A: mov     eax, [edx+84h]
0x545690: call    eax
0x545692: mov     ecx, [esi+4]
0x545695: mov     eax, [esi+8]
0x545698: mov     edx, [ecx]
0x54569A: push    0
0x54569C: push    eax
0x54569D: mov     eax, [edx+84h]
0x5456A3: call    eax
0x5456A5: push    114h; Size
0x5456AA: call    FormHeapAlloc
0x5456AF: add     esp, 4
0x5456B2: mov     [esp+24h+arg_24], eax
0x5456B6: test    eax, eax
0x5456B8: mov     [esp+24h+arg_1C], 6
0x5456C0: jz      short loc_5456CD
0x5456C2: mov     ecx, eax
0x5456C4: call    sub_719760
0x5456C9: mov     ebx, eax
0x5456CB: jmp     short loc_5456CF
0x5456CD: xor     ebx, ebx
0x5456CF: mov     edi, [esi+1Ch]
0x5456D2: cmp     edi, ebx
0x5456D4: mov     [esp+24h+arg_1C], 0FFFFFFFFh
0x5456DC: jz      short loc_54571C
0x5456DE: test    edi, edi
0x5456E0: jz      short loc_545704
0x5456E2: lea     ecx, [edi+4]
0x5456E5: push    ecx; lpAddend
0x5456E6: call    dword ptr ds:0A2807Ch
0x5456EC: test    eax, eax
0x5456EE: jnz     short loc_545704
0x5456F0: test    edi, edi
0x5456F2: jz      short loc_545704
0x5456F4: mov     edx, [edi]
0x5456F6: mov     eax, [edx]
0x5456F8: mov     ebp, 1
0x5456FD: push    ebp
0x5456FE: mov     ecx, edi
0x545700: call    eax
0x545702: jmp     short loc_545709
0x545704: mov     ebp, 1
0x545709: test    ebx, ebx
0x54570B: mov     [esi+1Ch], ebx
0x54570E: jz      short loc_545721
0x545710: add     ebx, 4
0x545713: push    ebx; lpAddend
0x545714: call    dword ptr ds:0A28078h
0x54571A: jmp     short loc_545721
0x54571C: mov     ebp, 1
0x545721: mov     ecx, [esi+1Ch]
0x545724: push    offset aSunDirectional; "Sun Directional Light"
0x545729: call    NiObjectNET_SetName
0x54572E: fld1
0x545730: mov     eax, [esi+1Ch]
0x545733: fstp    dword ptr [eax+0DCh]
0x545739: add     [eax+0B8h], ebp
0x54573F: mov     eax, [esi+1Ch]
0x545742: mov     ecx, ds:0B25AC4h
0x545748: mov     [eax+0E0h], ecx
0x54574E: mov     edx, ds:0B25AC8h
0x545754: mov     [eax+0E4h], edx
0x54575A: mov     ecx, ds:0B25ACCh
0x545760: add     [eax+0B8h], ebp
0x545766: mov     [eax+0E8h], ecx
0x54576C: mov     eax, [esi+1Ch]
0x54576F: mov     edx, ds:0B25AC4h
0x545775: mov     [eax+0ECh], edx
0x54577B: mov     ecx, ds:0B25AC8h
0x545781: mov     [eax+0F0h], ecx
0x545787: mov     edx, ds:0B25ACCh
0x54578D: add     [eax+0B8h], ebp
0x545793: mov     [eax+0F4h], edx
0x545799: mov     ecx, [esi+4]
0x54579C: mov     eax, [esi+1Ch]
0x54579F: mov     edx, [ecx]
0x5457A1: push    0
0x5457A3: push    eax
0x5457A4: mov     eax, [edx+84h]
0x5457AA: call    eax
0x5457AC: push    30h ; '0'; Size
0x5457AE: call    FormHeapAlloc
0x5457B3: add     esp, 4
0x5457B6: mov     [esp+30h+arg_18], eax
0x5457BA: test    eax, eax
0x5457BC: mov     [esp+30h+arg_10], 7
0x5457C4: jz      short loc_5457CF
0x5457C6: mov     ecx, eax
0x5457C8: call    sub_959BC0
0x5457CD: jmp     short loc_5457D1
0x5457CF: xor     eax, eax
0x5457D1: mov     [esi+18h], eax
0x5457D4: mov     [eax], ebp
0x5457D6: mov     ecx, [esi+18h]
0x5457D9: mov     [ecx+8], ebp
0x5457DC: mov     edx, [esi+18h]
0x5457DF: mov     byte ptr [edx+10h], 1
0x5457E3: mov     eax, [esi+18h]
0x5457E6: push    ebp
0x5457E7: push    0
0x5457E9: mov     byte ptr [eax+11h], 1
0x5457ED: mov     ecx, [esi+0Ch]
0x5457F0: push    0Ah
0x5457F2: push    ecx
0x5457F3: mov     [esp+40h+arg_10], 0FFFFFFFFh
0x5457FB: call    sub_7B8940
0x545800: mov     edx, [esi+8]
0x545803: push    ebp
0x545804: push    0
0x545806: push    0Ah
0x545808: push    edx
0x545809: call    sub_7B8940
0x54580E: add     esp, 20h
0x545811: mov     ecx, [esp+30h+arg_8]
0x545815: mov     large fs:0, ecx
0x54581C: pop     ecx
0x54581D: pop     edi
0x54581E: pop     esi
0x54581F: pop     ebp
0x545820: pop     ebx
0x545821: add     esp, 34h
0x545824: retn    4

0x5B64C0: push    esi
0x5B64C1: mov     esi, ecx
0x5B64C3: cmp     byte ptr [esi+4Dh], 0
0x5B64C7: jnz     def_5B64DD
0x5B64CD: mov     eax, [esp+4+arg_0]
0x5B64D1: lea     ecx, [eax-2]; switch 6 cases
0x5B64D4: cmp     ecx, 5
0x5B64D7: ja      def_5B64DD
0x5B64DD: jmp     ds:jpt_5B64DD[ecx*4]; switch jump
0x5B64E4: mov     byte ptr [esi+4Dh], 1; jumptable 005B64DD case 2
0x5B64E8: mov     eax, ds:0B38D00h
0x5B64ED: mov     ecx, ds:0B38CF8h
0x5B64F3: mov     edx, ds:0B38770h
0x5B64F9: push    0
0x5B64FB: push    eax
0x5B64FC: push    ecx
0x5B64FD: push    1
0x5B64FF: push    offset sub_5B5D60
0x5B6504: push    edx
0x5B6505: call    ShowUIMessageBox
0x5B650A: add     esp, 18h
0x5B650D: pop     esi
0x5B650E: retn    8
0x5B6511: push    1; jumptable 005B64DD case 3
0x5B6513: call    sub_57DE50
0x5B6518: mov     eax, ds:0B38D00h
0x5B651D: mov     ecx, ds:0B38CF8h
0x5B6523: mov     edx, ds:0B38778h
0x5B6529: push    0
0x5B652B: push    eax
0x5B652C: push    ecx
0x5B652D: push    1
0x5B652F: push    offset NewGame???
0x5B6534: push    edx
0x5B6535: call    ShowUIMessageBox
0x5B653A: add     esp, 1Ch
0x5B653D: pop     esi
0x5B653E: retn    8
0x5B6541: mov     ecx, [esp+4+arg_4]; jumptable 005B64DD case 4
0x5B6545: mov     edx, [esi]
0x5B6547: mov     edx, [edx+14h]
0x5B654A: push    ecx
0x5B654B: push    eax
0x5B654C: mov     ecx, esi
0x5B654E: call    edx
0x5B6550: push    0
0x5B6552: call    sub_5AEA60
0x5B6557: add     esp, 4
0x5B655A: pop     esi
0x5B655B: retn    8
0x5B655E: mov     ecx, [esp+4+arg_4]; jumptable 005B64DD case 5
0x5B6562: mov     edx, [esi]
0x5B6564: mov     edx, [edx+14h]
0x5B6567: push    ecx
0x5B6568: push    eax
0x5B6569: mov     ecx, esi
0x5B656B: call    edx
0x5B656D: call    sub_5BD680
0x5B6572: pop     esi
0x5B6573: retn    8
0x5B6576: mov     ecx, [esp+4+arg_4]; jumptable 005B64DD case 6
0x5B657A: mov     edx, [esi]
0x5B657C: mov     edx, [edx+14h]
0x5B657F: push    ecx
0x5B6580: push    eax
0x5B6581: mov     ecx, esi
0x5B6583: call    edx
0x5B6585: call    sub_59D680
0x5B658A: pop     esi
0x5B658B: retn    8
0x5B658E: mov     ecx, [esp+4+arg_4]; jumptable 005B64DD case 7
0x5B6592: mov     edx, [esi]
0x5B6594: mov     edx, [edx+14h]
0x5B6597: push    ecx
0x5B6598: push    eax
0x5B6599: mov     ecx, esi
0x5B659B: call    edx
0x5B659D: mov     byte ptr [esi+4Dh], 1
0x5B65A1: mov     eax, ds:0B38D08h
0x5B65A6: mov     ecx, ds:0B38C58h
0x5B65AC: mov     edx, ds:0B38C50h
0x5B65B2: push    0
0x5B65B4: push    eax
0x5B65B5: push    ecx
0x5B65B6: push    1
0x5B65B8: push    offset sub_5B59B0
0x5B65BD: push    edx
0x5B65BE: call    ShowUIMessageBox
0x5B65C3: add     esp, 18h

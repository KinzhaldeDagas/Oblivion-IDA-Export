0x723590: push    ecx
0x723591: push    esi
0x723592: mov     esi, [esp+8+arg_0]
0x723596: push    edi
0x723597: push    esi
0x723598: mov     edi, ecx
0x72359A: call    sub_708330
0x72359F: mov     ecx, [edi+0B4h]
0x7235A5: mov     eax, [esi]
0x7235A7: mov     edx, [eax+2Ch]
0x7235AA: push    ecx
0x7235AB: mov     ecx, esi
0x7235AD: call    edx
0x7235AF: mov     ecx, [edi+0B8h]
0x7235B5: mov     eax, [esi]
0x7235B7: mov     edx, [eax+2Ch]
0x7235BA: push    ecx
0x7235BB: mov     ecx, esi
0x7235BD: call    edx
0x7235BF: mov     ecx, [edi+0BCh]
0x7235C5: test    ecx, ecx
0x7235C7: mov     byte ptr [esp+0Ch+arg_0], 0
0x7235CC: jz      short loc_7235DC
0x7235CE: call    sub_452A60
0x7235D3: test    eax, eax
0x7235D5: jz      short loc_7235DC
0x7235D7: mov     byte ptr [esp+0Ch+arg_0], 1
0x7235DC: mov     eax, [esi+220h]
0x7235E2: push    1
0x7235E4: lea     ecx, [esp+10h+var_4]
0x7235E8: push    ecx
0x7235E9: push    1
0x7235EB: lea     edx, [esp+18h+arg_0]
0x7235EF: push    edx
0x7235F0: push    eax
0x7235F1: mov     eax, [eax+8]
0x7235F4: mov     [esp+20h+var_4], 1
0x7235FC: call    eax
0x7235FE: add     esp, 14h
0x723601: cmp     byte ptr [esp+0Ch+arg_0], 0
0x723606: jz      short loc_723614
0x723608: mov     ecx, [edi+0BCh]
0x72360E: push    esi
0x72360F: call    sub_738720
0x723614: pop     edi
0x723615: pop     esi
0x723616: pop     ecx
0x723617: retn    4

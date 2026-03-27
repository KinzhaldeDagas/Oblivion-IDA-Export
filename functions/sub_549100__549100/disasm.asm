0x549100: mov     edx, [esp+arg_10]
0x549104: fld     [esp+arg_0]
0x549108: push    ebx
0x549109: mov     ebx, [esp+4+arg_4]
0x54910D: push    esi
0x54910E: mov     esi, ecx
0x549110: mov     ecx, [esp+8+arg_14]
0x549114: mov     eax, [esi]
0x549116: mov     eax, [eax+7Ch]
0x549119: push    ecx
0x54911A: mov     ecx, [esp+0Ch+arg_C]
0x54911E: push    edx
0x54911F: mov     edx, [esp+10h+arg_8]
0x549123: push    ecx
0x549124: push    edx
0x549125: push    ebx
0x549126: push    ecx
0x549127: mov     ecx, esi
0x549129: fstp    [esp+20h+var_20]
0x54912C: call    eax
0x54912E: fld     [esp+8+arg_0]
0x549132: mov     eax, [esp+8+arg_10]
0x549136: mov     ecx, [esp+8+arg_C]
0x54913A: mov     edx, [esi]
0x54913C: mov     edx, [edx+80h]
0x549142: push    eax
0x549143: mov     eax, [esp+0Ch+arg_8]
0x549147: push    ecx
0x549148: push    eax
0x549149: push    ebx
0x54914A: push    ecx
0x54914B: mov     ecx, esi
0x54914D: fstp    dword ptr [esp+1Ch+var_1C]
0x549150: call    edx
0x549152: fldz
0x549154: fcom    [esp+8+arg_0]
0x549158: fnstsw  ax
0x54915A: test    ah, 44h
0x54915D: jp      loc_549238
0x549163: test    bl, bl
0x549165: push    edi
0x549166: jz      short loc_549186
0x549168: mov     eax, [esi+48h]
0x54916B: mov     edx, [eax+10h]
0x54916E: lea     edi, [esi+48h]
0x549171: push    ecx
0x549172: mov     ecx, edi
0x549174: fstp    [esp+10h+var_10]
0x549177: call    edx
0x549179: mov     eax, [edi]
0x54917B: mov     edx, [eax+20h]
0x54917E: push    1
0x549180: mov     ecx, edi
0x549182: call    edx
0x549184: jmp     short loc_549188
0x549186: fstp    st
0x549188: cmp     byte ptr [esp+0Ch+arg_C], 0
0x54918D: jz      short loc_5491DC
0x54918F: mov     eax, [esi+0A4h]
0x549195: fldz
0x549197: mov     edx, [eax+10h]
0x54919A: lea     edi, [esi+0A4h]
0x5491A0: push    ecx
0x5491A1: mov     ecx, edi
0x5491A3: fstp    [esp+10h+var_10]
0x5491A6: call    edx
0x5491A8: mov     eax, [edi]
0x5491AA: mov     edx, [eax+20h]
0x5491AD: push    1
0x5491AF: mov     ecx, edi
0x5491B1: call    edx
0x5491B3: cmp     byte ptr [esp+0Ch+arg_14], 0
0x5491B8: jz      short loc_5491DC
0x5491BA: fld1
0x5491BC: mov     eax, [edi]
0x5491BE: mov     edx, [eax+4Ch]
0x5491C1: push    ecx
0x5491C2: fstp    [esp+10h+var_10]
0x5491C5: push    0
0x5491C7: mov     ecx, edi
0x5491C9: call    edx
0x5491CB: fld1
0x5491CD: mov     eax, [edi]
0x5491CF: mov     edx, [eax+4Ch]
0x5491D2: push    ecx
0x5491D3: fstp    [esp+10h+var_10]
0x5491D6: push    1
0x5491D8: mov     ecx, edi
0x5491DA: call    edx
0x5491DC: cmp     byte ptr [esp+0Ch+arg_8], 0
0x5491E1: jz      short loc_549207
0x5491E3: mov     eax, [esi+100h]
0x5491E9: fldz
0x5491EB: mov     edx, [eax+10h]
0x5491EE: lea     edi, [esi+100h]
0x5491F4: push    ecx
0x5491F5: mov     ecx, edi
0x5491F7: fstp    [esp+10h+var_10]
0x5491FA: call    edx
0x5491FC: mov     eax, [edi]
0x5491FE: mov     edx, [eax+20h]
0x549201: push    1
0x549203: mov     ecx, edi
0x549205: call    edx
0x549207: cmp     byte ptr [esp+0Ch+arg_10], 0
0x54920C: pop     edi
0x54920D: jz      short loc_54923A
0x54920F: mov     eax, [esi+15Ch]
0x549215: fldz
0x549217: mov     edx, [eax+10h]
0x54921A: add     esi, 15Ch
0x549220: push    ecx
0x549221: mov     ecx, esi
0x549223: fstp    [esp+0Ch+var_C]
0x549226: call    edx
0x549228: mov     eax, [esi]
0x54922A: mov     edx, [eax+20h]
0x54922D: push    1
0x54922F: mov     ecx, esi
0x549231: call    edx
0x549233: pop     esi
0x549234: pop     ebx
0x549235: retn    18h
0x549238: fstp    st
0x54923A: pop     esi
0x54923B: pop     ebx
0x54923C: retn    18h

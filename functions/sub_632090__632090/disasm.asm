0x632090: sub     esp, 2Ch
0x632093: push    esi
0x632094: mov     esi, ecx
0x632096: mov     eax, [esi]
0x632098: mov     edx, [eax+0F4h]
0x63209E: push    1
0x6320A0: call    edx
0x6320A2: test    eax, eax
0x6320A4: jz      loc_6322FA
0x6320AA: mov     eax, [esi]
0x6320AC: mov     edx, [eax+0F4h]
0x6320B2: push    1
0x6320B4: mov     ecx, esi
0x6320B6: call    edx
0x6320B8: cmp     dword ptr [eax+8], 0
0x6320BC: jz      short loc_6320EF
0x6320BE: mov     eax, [esi]
0x6320C0: mov     edx, [eax+0F4h]
0x6320C6: push    1
0x6320C8: mov     ecx, esi
0x6320CA: call    edx
0x6320CC: mov     eax, [eax+8]
0x6320CF: cmp     byte ptr [eax+4], 22h ; '"'
0x6320D3: jnz     short loc_6320EF
0x6320D5: mov     edx, [esi]
0x6320D7: mov     eax, [edx+0F4h]
0x6320DD: push    1
0x6320DF: mov     ecx, esi
0x6320E1: call    eax
0x6320E3: mov     eax, [eax+8]
0x6320E6: test    eax, eax
0x6320E8: jz      short loc_6320EF
0x6320EA: fld     dword ptr [eax+7Ch]
0x6320ED: jmp     short loc_6320F1
0x6320EF: fld1
0x6320F1: mov     esi, [esp+30h+arg_0]
0x6320F5: fstp    [esp+30h+var_2C]
0x6320F9: fld     [esp+30h+var_2C]
0x6320FD: push    edi
0x6320FE: fmul    dword ptr ds:0B37040h
0x632104: push    esi
0x632105: fstp    [esp+38h+var_2C]
0x632109: call    sub_608280
0x63210E: mov     edi, [esp+38h+arg_4]
0x632112: fstp    [esp+38h+var_28]
0x632116: mov     edx, [edi]
0x632118: mov     eax, [edx+174h]
0x63211E: add     esp, 4
0x632121: mov     ecx, edi
0x632123: call    eax
0x632125: mov     edx, [eax+4]
0x632128: mov     ecx, [eax]
0x63212A: mov     eax, [eax+8]
0x63212D: mov     [esp+34h+var_14], edx
0x632131: mov     edx, [esi]
0x632133: mov     [esp+34h+var_18], ecx
0x632137: mov     [esp+34h+var_10], eax
0x63213B: mov     eax, [edx+174h]
0x632141: mov     ecx, esi
0x632143: call    eax
0x632145: mov     ecx, [eax]
0x632147: mov     edx, [eax+4]
0x63214A: mov     eax, [eax+8]
0x63214D: mov     [esp+34h+var_24], ecx
0x632151: mov     ecx, esi
0x632153: mov     [esp+34h+var_20], edx
0x632157: mov     [esp+34h+var_1C], eax
0x63215B: call    sub_5E0660
0x632160: fmul    qword ptr ds:0A31C70h
0x632166: fadd    [esp+34h+var_1C]
0x63216A: fstp    [esp+34h+var_1C]
0x63216E: fld     [esp+34h+var_18]
0x632172: fsub    [esp+34h+var_24]
0x632176: fstp    [esp+34h+var_C]
0x63217A: fld     [esp+34h+var_14]
0x63217E: fsub    [esp+34h+var_20]
0x632182: fstp    [esp+34h+var_8]
0x632186: fld     [esp+34h+var_10]
0x63218A: fsub    [esp+34h+var_1C]
0x63218E: fstp    [esp+34h+var_4]
0x632192: fld     [esp+34h+var_8]
0x632196: fld     [esp+34h+var_C]
0x63219A: fmul    st, st
0x63219C: fld     st(1)
0x63219E: fmulp   st(2), st
0x6321A0: faddp   st(1), st
0x6321A2: fldz
0x6321A4: fmul    st, st
0x6321A6: faddp   st(1), st
0x6321A8: fstp    [esp+34h+arg_0]
0x6321AC: fld     [esp+34h+arg_0]
0x6321B0: call    __CIsqrt
0x6321B5: fstp    [esp+34h+arg_0]
0x6321B9: fld     [esp+34h+arg_0]
0x6321BD: sub     esp, 10h
0x6321C0: fstp    [esp+44h+arg_0]
0x6321C4: fld     [esp+44h+var_28]
0x6321C8: fstp    [esp+44h+var_38]; float
0x6321CC: fld     [esp+44h+var_2C]
0x6321D0: fstp    [esp+44h+var_3C]; float
0x6321D4: fld     [esp+44h+var_4]
0x6321D8: fstp    [esp+44h+var_40]; float
0x6321DC: fld     [esp+44h+arg_0]
0x6321E0: fstp    [esp+44h+var_44]; float
0x6321E3: call    sub_6132D0
0x6321E8: fstp    [esp+44h+arg_4]
0x6321EC: add     esp, 4
0x6321EF: fld     [esp+40h+var_2C]
0x6321F3: fstp    [esp+40h+var_38]; float
0x6321F7: fld     [esp+40h+arg_4]
0x6321FB: fstp    [esp+40h+var_3C]; float
0x6321FF: fld     [esp+40h+arg_0]
0x632203: fstp    [esp+40h+var_40]; float
0x632206: call    sub_613410
0x63220B: fstp    st
0x63220D: add     esp, 0Ch
0x632210: mov     edx, [edi]
0x632212: mov     eax, [edx+174h]
0x632218: mov     ecx, edi
0x63221A: call    eax
0x63221C: fld     [esp+34h+arg_4]
0x632220: fchs
0x632222: mov     ecx, esi
0x632224: fstp    [esp+34h+arg_0]
0x632228: call    sub_4A9720
0x63222D: fsubr   [esp+34h+arg_0]
0x632231: mov     edx, [esi]
0x632233: mov     eax, [edx+284h]
0x632239: push    1Ch
0x63223B: mov     ecx, esi
0x63223D: fstp    [esp+38h+arg_0]
0x632241: call    eax
0x632243: mov     edi, eax
0x632245: cmp     edi, 5
0x632248: jge     short loc_632251
0x63224A: mov     edi, 5
0x63224F: jmp     short loc_63225B
0x632251: cmp     edi, 64h ; 'd'
0x632254: jle     short loc_63225B
0x632256: mov     edi, 64h ; 'd'
0x63225B: push    0; Seed
0x63225D: call    GetRandomLargeInteger?
0x632262: cdq
0x632263: mov     ecx, 69h ; 'i'
0x632268: sub     ecx, edi
0x63226A: idiv    ecx
0x63226C: mov     eax, 66666667h
0x632271: add     esp, 4
0x632274: pop     edi
0x632275: imul    edx
0x632277: sar     edx, 2
0x63227A: mov     eax, edx
0x63227C: shr     eax, 1Fh
0x63227F: add     eax, edx
0x632281: mov     [esp+30h+arg_4], eax
0x632285: fild    [esp+30h+arg_4]
0x632289: fmul    qword ptr ds:0A31C78h
0x63228F: fadd    [esp+30h+arg_0]
0x632293: fstp    [esp+30h+arg_0]
0x632297: fldz
0x632299: fld     [esp+30h+arg_0]
0x63229D: fucom   st(1)
0x63229F: fnstsw  ax
0x6322A1: fstp    st(1)
0x6322A3: test    ah, 44h
0x6322A6: jnp     short loc_6322DA
0x6322A8: fcom    qword ptr ds:0A491E0h
0x6322AE: fnstsw  ax
0x6322B0: test    ah, 41h
0x6322B3: jp      short loc_6322C1
0x6322B5: fsubr   qword ptr ds:0A3D5B0h
0x6322BB: fstp    [esp+30h+arg_0]
0x6322BF: jmp     short loc_6322DC
0x6322C1: fcom    qword ptr ds:0A3D5B8h
0x6322C7: fnstsw  ax
0x6322C9: test    ah, 41h
0x6322CC: jnz     short loc_6322DA
0x6322CE: fadd    qword ptr ds:0A3D5B0h
0x6322D4: fstp    [esp+30h+arg_0]
0x6322D8: jmp     short loc_6322DC
0x6322DA: fstp    st
0x6322DC: mov     ecx, esi
0x6322DE: call    sub_4A9720
0x6322E3: fadd    [esp+30h+arg_0]
0x6322E7: push    ecx
0x6322E8: mov     ecx, esi; int
0x6322EA: fstp    [esp+34h+arg_0]
0x6322EE: fld     [esp+34h+arg_0]
0x6322F2: fstp    [esp+34h+var_34]; float
0x6322F5: call    sub_65A650
0x6322FA: pop     esi
0x6322FB: add     esp, 2Ch
0x6322FE: retn    8

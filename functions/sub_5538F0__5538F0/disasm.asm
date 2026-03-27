0x5538F0: sub     esp, 1Ch
0x5538F3: cmp     [esp+1Ch+arg_0], 0
0x5538F8: fldz
0x5538FA: fstp    [esp+1Ch+var_1C]
0x5538FD: jz      loc_5539CE
0x553903: push    edi
0x553904: mov     edi, ds:0B39B80h
0x55390A: test    edi, edi
0x55390C: jnz     short loc_553919
0x55390E: call    sub_553550
0x553913: mov     edi, ds:0B39B80h
0x553919: mov     eax, [esp+20h+arg_8]
0x55391D: mov     ecx, [esp+20h+arg_4]
0x553921: push    ebx
0x553922: lea     ebx, [eax+ecx*2]
0x553925: push    esi
0x553926: mov     esi, ebx
0x553928: shl     esi, 4
0x55392B: mov     eax, [esi+edi+8Ch]
0x553932: test    eax, eax
0x553934: jz      loc_5539D5
0x55393A: mov     ecx, [esi+edi+90h]
0x553941: sub     ecx, eax
0x553943: mov     eax, 4EC4EC4Fh
0x553948: imul    ecx
0x55394A: sar     edx, 4
0x55394D: mov     eax, edx
0x55394F: shr     eax, 1Fh
0x553952: push    ebp
0x553953: mov     ebp, [esp+2Ch+arg_C]
0x553957: add     eax, edx
0x553959: cmp     ebp, eax
0x55395B: jnb     short loc_5539C2
0x55395D: test    edi, edi
0x55395F: jnz     short loc_55396C
0x553961: call    sub_553550
0x553966: mov     edi, ds:0B39B80h
0x55396C: mov     eax, [esp+2Ch+arg_0]
0x553970: lea     edx, [ebx+ebx*2]
0x553973: lea     ecx, [eax+edx*8]
0x553976: push    ecx
0x553977: lea     edx, [esp+30h+var_18]
0x55397B: push    edx
0x55397C: push    ebp
0x55397D: lea     ecx, [esi+edi+88h]
0x553984: call    sub_54F6C0
0x553989: mov     ecx, eax
0x55398B: call    sub_5523C0
0x553990: mov     esi, eax
0x553992: mov     eax, [esi+0Ch]
0x553995: test    eax, eax
0x553997: jz      short loc_5539A3
0x553999: mov     ecx, [esi+10h]
0x55399C: sub     ecx, eax
0x55399E: sar     ecx, 2
0x5539A1: jnz     short loc_5539A8
0x5539A3: call    __invalid_parameter_noinfo
0x5539A8: mov     edx, [esi+0Ch]
0x5539AB: mov     eax, [esp+2Ch+var_C]
0x5539AF: fld     dword ptr [edx]
0x5539B1: test    eax, eax
0x5539B3: fstp    [esp+2Ch+var_1C]
0x5539B7: jz      short loc_5539C2
0x5539B9: push    eax
0x5539BA: call    FormHeapFree
0x5539BF: add     esp, 4
0x5539C2: fld     [esp+2Ch+var_1C]
0x5539C6: pop     ebp
0x5539C7: pop     esi
0x5539C8: pop     ebx
0x5539C9: pop     edi
0x5539CA: add     esp, 1Ch
0x5539CD: retn
0x5539CE: fld     [esp+1Ch+var_1C]
0x5539D1: add     esp, 1Ch
0x5539D4: retn
0x5539D5: fld     [esp+28h+var_1C]
0x5539D9: pop     esi
0x5539DA: pop     ebx
0x5539DB: pop     edi
0x5539DC: add     esp, 1Ch
0x5539DF: retn

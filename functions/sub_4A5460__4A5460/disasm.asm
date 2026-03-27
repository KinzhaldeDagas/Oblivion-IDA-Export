0x4A5460: push    esi
0x4A5461: push    edi
0x4A5462: mov     edi, [esp+8+arg_0]
0x4A5466: test    edi, edi
0x4A5468: mov     esi, ecx
0x4A546A: jz      loc_4A55B5
0x4A5470: mov     eax, [edi]
0x4A5472: mov     edx, [eax+0Ch]
0x4A5475: mov     ecx, edi
0x4A5477: call    edx
0x4A5479: cmp     eax, 7
0x4A547C: jnz     loc_4A55B5
0x4A5482: cmp     [esp+8+arg_4], 0
0x4A5487: jz      loc_4A55B5
0x4A548D: cmp     byte ptr [esi+5], 0
0x4A5491: push    ebx
0x4A5492: jz      short loc_4A54BF
0x4A5494: mov     al, [edi+4]
0x4A5497: mov     [esi+4], al
0x4A549A: movzx   ecx, byte ptr [edi+6]
0x4A549E: push    ecx
0x4A549F: mov     ecx, esi
0x4A54A1: call    sub_4A3520
0x4A54A6: mov     edx, [edi]
0x4A54A8: mov     eax, [edx+24h]
0x4A54AB: mov     ebx, [esi]
0x4A54AD: mov     ecx, edi
0x4A54AF: call    eax
0x4A54B1: mov     edx, [ebx+28h]
0x4A54B4: push    eax
0x4A54B5: mov     ecx, esi
0x4A54B7: call    edx
0x4A54B9: pop     ebx
0x4A54BA: pop     edi
0x4A54BB: pop     esi
0x4A54BC: retn    8
0x4A54BF: cmp     byte ptr [edi+5], 0
0x4A54C3: jnz     loc_4A55B4
0x4A54C9: cmp     byte ptr [esi+4], 0
0x4A54CD: mov     al, [edi+4]
0x4A54D0: jz      short loc_4A550E
0x4A54D2: test    al, al
0x4A54D4: jz      loc_4A55B4
0x4A54DA: mov     cl, [edi+6]
0x4A54DD: cmp     cl, [esi+6]
0x4A54E0: jbe     loc_4A55B4
0x4A54E6: mov     [esi+4], al
0x4A54E9: movzx   edx, byte ptr [edi+6]
0x4A54ED: push    edx
0x4A54EE: mov     ecx, esi
0x4A54F0: call    sub_4A3520
0x4A54F5: mov     eax, [edi]
0x4A54F7: mov     edx, [eax+24h]
0x4A54FA: mov     ebx, [esi]
0x4A54FC: mov     ecx, edi
0x4A54FE: call    edx
0x4A5500: push    eax
0x4A5501: mov     eax, [ebx+28h]
0x4A5504: mov     ecx, esi
0x4A5506: call    eax
0x4A5508: pop     ebx
0x4A5509: pop     edi
0x4A550A: pop     esi
0x4A550B: retn    8
0x4A550E: test    al, al
0x4A5510: jnz     short loc_4A5497
0x4A5512: mov     al, [edi+6]
0x4A5515: cmp     al, [esi+6]
0x4A5518: jbe     short loc_4A552D
0x4A551A: mov     edx, [edi]
0x4A551C: mov     eax, [edx+24h]
0x4A551F: mov     ebx, [esi]
0x4A5521: mov     ecx, edi
0x4A5523: call    eax
0x4A5525: mov     edx, [ebx+28h]
0x4A5528: push    eax
0x4A5529: mov     ecx, esi
0x4A552B: call    edx
0x4A552D: movzx   ecx, byte ptr [edi+6]
0x4A5531: movzx   eax, byte ptr [esi+6]
0x4A5535: mov     edi, eax
0x4A5537: mov     edx, 64h ; 'd'
0x4A553C: imul    edi, eax
0x4A553F: sub     edx, eax
0x4A5541: imul    edx, ecx
0x4A5544: add     edx, edi
0x4A5546: mov     [esp+0Ch+arg_0], edx
0x4A554A: mov     edx, 64h ; 'd'
0x4A554F: sub     edx, ecx
0x4A5551: fild    [esp+0Ch+arg_0]
0x4A5555: imul    edx, eax
0x4A5558: mov     eax, ecx
0x4A555A: imul    eax, ecx
0x4A555D: add     edx, eax
0x4A555F: mov     [esp+0Ch+arg_0], edx
0x4A5563: push    ecx
0x4A5564: fiadd   [esp+10h+arg_0]
0x4A5568: fstp    [esp+10h+arg_0]
0x4A556C: fld     [esp+10h+arg_0]
0x4A5570: fmul    qword ptr ds:0A40048h
0x4A5576: fstp    [esp+10h+arg_0]
0x4A557A: fld     [esp+10h+arg_0]
0x4A557E: fstp    [esp+10h+var_10]; float
0x4A5581: call    sub_4842F0
0x4A5586: fnstcw  word ptr [esp+10h+arg_0]
0x4A558A: add     esp, 4
0x4A558D: movzx   eax, word ptr [esp+0Ch+arg_0]
0x4A5592: or      eax, 0C00h
0x4A5597: mov     [esp+0Ch+arg_4], eax
0x4A559B: fldcw   word ptr [esp+0Ch+arg_4]
0x4A559F: fistp   [esp+0Ch+arg_4]
0x4A55A3: movzx   ecx, byte ptr [esp+0Ch+arg_4]
0x4A55A8: push    ecx
0x4A55A9: mov     ecx, esi
0x4A55AB: fldcw   word ptr [esp+10h+arg_0]
0x4A55AF: call    sub_4A3520
0x4A55B4: pop     ebx
0x4A55B5: pop     edi
0x4A55B6: pop     esi
0x4A55B7: retn    8

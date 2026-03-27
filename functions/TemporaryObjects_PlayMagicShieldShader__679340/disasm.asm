0x679340: sub     esp, 8
0x679343: push    ebx
0x679344: push    ebp
0x679345: push    esi
0x679346: xor     eax, eax
0x679348: lea     esi, [ecx+48h]
0x67934B: mov     [esp+14h+var_4], eax
0x67934F: cmp     [esi+4], eax
0x679352: push    edi
0x679353: jnz     short loc_679364
0x679355: xor     edi, edi
0x679357: cmp     [esi], edi
0x679359: mov     eax, 1
0x67935E: jnz     short loc_679368
0x679360: mov     bl, al
0x679362: jmp     short loc_67936A
0x679364: mov     edi, [esp+18h+arg_0]
0x679368: xor     bl, bl
0x67936A: test    al, 1
0x67936C: jz      short loc_67938A
0x67936E: test    edi, edi
0x679370: jz      short loc_67938A
0x679372: lea     eax, [edi+4]
0x679375: push    eax; lpAddend
0x679376: call    dword ptr ds:0A2807Ch
0x67937C: test    eax, eax
0x67937E: jnz     short loc_67938A
0x679380: mov     edx, [edi]
0x679382: mov     eax, [edx]
0x679384: push    1
0x679386: mov     ecx, edi
0x679388: call    eax
0x67938A: test    bl, bl
0x67938C: jnz     loc_67946C
0x679392: fld     dword ptr ds:0A32048h
0x679398: mov     ebx, esi
0x67939A: xor     ebp, ebp
0x67939C: fstp    [esp+18h+var_8]
0x6793A0: test    ebx, ebx
0x6793A2: jz      loc_67946C
0x6793A8: lea     ecx, [esp+18h+var_4]
0x6793AC: push    ecx
0x6793AD: mov     ecx, ebx
0x6793AF: call    sub_677C70
0x6793B4: mov     esi, [eax]
0x6793B6: mov     eax, [esp+18h+var_4]
0x6793BA: test    eax, eax
0x6793BC: jz      short loc_6793DC
0x6793BE: mov     edi, eax
0x6793C0: add     eax, 4
0x6793C3: push    eax; lpAddend
0x6793C4: call    dword ptr ds:0A2807Ch
0x6793CA: test    eax, eax
0x6793CC: jnz     short loc_6793DC
0x6793CE: test    edi, edi
0x6793D0: jz      short loc_6793DC
0x6793D2: mov     edx, [edi]
0x6793D4: mov     eax, [edx]
0x6793D6: push    1
0x6793D8: mov     ecx, edi
0x6793DA: call    eax
0x6793DC: test    esi, esi
0x6793DE: jz      short loc_679440
0x6793E0: mov     edx, [esi]
0x6793E2: mov     eax, [edx+54h]
0x6793E5: mov     ecx, esi
0x6793E7: call    eax
0x6793E9: cmp     eax, 6
0x6793EC: jnz     short loc_679440
0x6793EE: mov     edi, [esi+18h]
0x6793F1: test    edi, edi
0x6793F3: jz      short loc_679440
0x6793F5: fld     dword ptr [esi+10h]
0x6793F8: fld     [esp+18h+var_8]
0x6793FC: fcompp
0x6793FE: fnstsw  ax
0x679400: test    ah, 41h
0x679403: jnz     short loc_679440
0x679405: mov     ecx, [edi+20h]
0x679408: test    ecx, ecx
0x67940A: jz      short loc_679440
0x67940C: mov     edx, [ecx]
0x67940E: mov     eax, [edx+4]
0x679411: call    eax
0x679413: cmp     eax, [esp+18h+arg_0]
0x679417: jnz     short loc_679440
0x679419: mov     ecx, [edi+0Ch]
0x67941C: mov     edx, [ecx+1Ch]
0x67941F: mov     eax, [edx+98h]
0x679425: push    eax
0x679426: mov     eax, [esp+1Ch+arg_4]
0x67942A: push    eax
0x67942B: call    Magic_CompareShieldType
0x679430: add     esp, 8
0x679433: test    al, al
0x679435: jz      short loc_679440
0x679437: fld     dword ptr [esi+10h]
0x67943A: mov     ebp, esi
0x67943C: fstp    [esp+18h+var_8]
0x679440: mov     ebx, [ebx+4]
0x679443: test    ebx, ebx
0x679445: jnz     loc_6793A8
0x67944B: test    ebp, ebp
0x67944D: jz      short loc_67946C
0x67944F: mov     edx, [ebp+0]
0x679452: mov     eax, [edx+68h]
0x679455: mov     ecx, ebp
0x679457: call    eax
0x679459: mov     ecx, ebp
0x67945B: call    sub_6A0350
0x679460: pop     edi
0x679461: pop     esi
0x679462: pop     ebp
0x679463: mov     al, 1
0x679465: pop     ebx
0x679466: add     esp, 8
0x679469: retn    8
0x67946C: pop     edi
0x67946D: pop     esi
0x67946E: pop     ebp
0x67946F: xor     al, al
0x679471: pop     ebx
0x679472: add     esp, 8
0x679475: retn    8

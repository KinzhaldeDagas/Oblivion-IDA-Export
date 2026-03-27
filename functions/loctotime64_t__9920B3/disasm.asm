0x9920B3: push    ebp
0x9920B4: mov     ebp, esp
0x9920B6: sub     esp, 34h
0x9920B9: mov     ecx, [ebp+arg_0]
0x9920BC: add     ecx, 0FFFFF894h
0x9920C2: push    esi
0x9920C3: xor     esi, esi
0x9920C5: cmp     ecx, 46h ; 'F'
0x9920C8: mov     [ebp+var_8], esi
0x9920CB: mov     [ebp+var_C], esi
0x9920CE: mov     [ebp+var_4], esi
0x9920D1: mov     [ebp+var_10], ecx
0x9920D4: jl      short loc_9920DE
0x9920D6: cmp     ecx, 44Ch
0x9920DC: jle     short loc_992101
0x9920DE: call    __errno
0x9920E3: push    esi
0x9920E4: push    esi
0x9920E5: push    esi
0x9920E6: push    esi
0x9920E7: push    esi
0x9920E8: mov     dword ptr [eax], 16h
0x9920EE: call    __invalid_parameter
0x9920F3: add     esp, 14h
0x9920F6: or      eax, 0FFFFFFFFh
0x9920F9: or      edx, 0FFFFFFFFh
0x9920FC: jmp     loc_99233E
0x992101: push    ebx
0x992102: mov     ebx, [ebp+arg_4]
0x992105: lea     eax, [ebx-1]
0x992108: cmp     eax, 0Bh
0x99210B: ja      short loc_99211F
0x99210D: cmp     [ebp+arg_C], 17h
0x992111: ja      short loc_99211F
0x992113: cmp     [ebp+arg_10], 3Bh ; ';'
0x992117: ja      short loc_99211F
0x992119: cmp     [ebp+arg_14], 3Bh ; ';'
0x99211D: jbe     short loc_992142
0x99211F: call    __errno
0x992124: push    esi
0x992125: push    esi
0x992126: push    esi
0x992127: push    esi
0x992128: push    esi
0x992129: mov     dword ptr [eax], 16h
0x99212F: call    __invalid_parameter
0x992134: add     esp, 14h
0x992137: or      eax, 0FFFFFFFFh
0x99213A: or      edx, 0FFFFFFFFh
0x99213D: jmp     loc_99233D
0x992142: cmp     [ebp+arg_8], 1
0x992146: push    edi
0x992147: jl      short loc_992198
0x992149: lea     eax, ds:0B320B4h[ebx*4]
0x992150: mov     edi, [eax-4]
0x992153: mov     eax, [eax]
0x992155: sub     eax, edi
0x992157: cmp     eax, [ebp+arg_8]
0x99215A: jge     short loc_9921BB
0x99215C: mov     eax, ecx
0x99215E: and     eax, 80000003h
0x992163: jns     short loc_99216A
0x992165: dec     eax
0x992166: or      eax, 0FFFFFFFCh
0x992169: inc     eax
0x99216A: jnz     short loc_992178
0x99216C: mov     eax, ecx
0x99216E: push    64h ; 'd'
0x992170: cdq
0x992171: pop     ebx
0x992172: idiv    ebx
0x992174: test    edx, edx
0x992176: jnz     short loc_99218A
0x992178: lea     eax, [ecx+76Ch]
0x99217E: cdq
0x99217F: mov     ebx, 190h
0x992184: idiv    ebx
0x992186: test    edx, edx
0x992188: jnz     short loc_992198
0x99218A: mov     ebx, [ebp+arg_4]
0x99218D: cmp     ebx, 2
0x992190: jnz     short loc_992198
0x992192: cmp     [ebp+arg_8], 1Dh
0x992196: jle     short loc_9921BB
0x992198: call    __errno
0x99219D: push    esi
0x99219E: push    esi
0x99219F: push    esi
0x9921A0: push    esi
0x9921A1: push    esi
0x9921A2: mov     dword ptr [eax], 16h
0x9921A8: call    __invalid_parameter
0x9921AD: add     esp, 14h
0x9921B0: or      eax, 0FFFFFFFFh
0x9921B3: or      edx, 0FFFFFFFFh
0x9921B6: jmp     loc_99233C
0x9921BB: mov     eax, [ebp+arg_8]
0x9921BE: add     edi, eax
0x9921C0: mov     eax, ecx
0x9921C2: and     eax, 80000003h
0x9921C7: mov     [ebp+arg_0], edi
0x9921CA: jns     short loc_9921D1
0x9921CC: dec     eax
0x9921CD: or      eax, 0FFFFFFFCh
0x9921D0: inc     eax
0x9921D1: jnz     short loc_9921DF
0x9921D3: mov     eax, ecx
0x9921D5: push    64h ; 'd'
0x9921D7: cdq
0x9921D8: pop     edi
0x9921D9: idiv    edi
0x9921DB: test    edx, edx
0x9921DD: jnz     short loc_9921F1
0x9921DF: lea     eax, [ecx+76Ch]
0x9921E5: cdq
0x9921E6: mov     edi, 190h
0x9921EB: idiv    edi
0x9921ED: test    edx, edx
0x9921EF: jnz     short loc_9921F9
0x9921F1: cmp     ebx, 2
0x9921F4: jle     short loc_9921F9
0x9921F6: inc     [ebp+arg_0]
0x9921F9: lea     eax, [ecx+12Bh]
0x9921FF: cdq
0x992200: mov     ebx, 190h
0x992205: idiv    ebx
0x992207: lea     edi, [ecx-1]
0x99220A: push    64h ; 'd'
0x99220C: mov     ebx, eax
0x99220E: mov     eax, edi
0x992210: cdq
0x992211: pop     edi
0x992212: idiv    edi
0x992214: push    esi
0x992215: push    16Dh
0x99221A: sub     ebx, eax
0x99221C: lea     eax, [ecx-1]
0x99221F: cdq
0x992220: and     edx, 3
0x992223: add     eax, edx
0x992225: sar     eax, 2
0x992228: lea     eax, [ebx+eax-11h]
0x99222C: cdq
0x99222D: mov     edi, eax
0x99222F: mov     ebx, edx
0x992231: mov     eax, ecx
0x992233: cdq
0x992234: sub     eax, 46h ; 'F'
0x992237: sbb     edx, esi
0x992239: push    edx
0x99223A: push    eax
0x99223B: call    __allmul
0x992240: add     edi, eax
0x992242: mov     eax, [ebp+arg_0]
0x992245: adc     ebx, edx
0x992247: cdq
0x992248: push    esi
0x992249: add     edi, eax
0x99224B: push    18h
0x99224D: adc     ebx, edx
0x99224F: push    ebx
0x992250: push    edi
0x992251: call    __allmul
0x992256: mov     ecx, eax
0x992258: mov     eax, [ebp+arg_C]
0x99225B: mov     edi, edx
0x99225D: cdq
0x99225E: push    esi
0x99225F: add     ecx, eax
0x992261: push    3Ch ; '<'
0x992263: adc     edi, edx
0x992265: push    edi
0x992266: push    ecx
0x992267: call    __allmul
0x99226C: mov     ecx, eax
0x99226E: mov     eax, [ebp+arg_10]
0x992271: mov     edi, edx
0x992273: cdq
0x992274: push    esi
0x992275: add     ecx, eax
0x992277: push    3Ch ; '<'
0x992279: adc     edi, edx
0x99227B: push    edi
0x99227C: push    ecx
0x99227D: call    __allmul
0x992282: mov     edi, eax
0x992284: mov     eax, [ebp+arg_14]
0x992287: mov     ebx, edx
0x992289: cdq
0x99228A: add     edi, eax
0x99228C: adc     ebx, edx
0x99228E: call    ___tzset
0x992293: lea     eax, [ebp+var_8]
0x992296: push    eax
0x992297: call    sub_99EDAF
0x99229C: test    eax, eax
0x99229E: pop     ecx
0x99229F: jz      short loc_9922AE
0x9922A1: push    esi
0x9922A2: push    esi
0x9922A3: push    esi
0x9922A4: push    esi
0x9922A5: push    esi
0x9922A6: call    __invoke_watson
0x9922AB: add     esp, 14h
0x9922AE: lea     eax, [ebp+var_C]
0x9922B1: push    eax
0x9922B2: call    sub_99EDE3
0x9922B7: test    eax, eax
0x9922B9: pop     ecx
0x9922BA: jz      short loc_9922C9
0x9922BC: push    esi
0x9922BD: push    esi
0x9922BE: push    esi
0x9922BF: push    esi
0x9922C0: push    esi
0x9922C1: call    __invoke_watson
0x9922C6: add     esp, 14h
0x9922C9: lea     eax, [ebp+var_4]
0x9922CC: push    eax
0x9922CD: call    sub_99EE17
0x9922D2: test    eax, eax
0x9922D4: pop     ecx
0x9922D5: jz      short loc_9922E4
0x9922D7: push    esi
0x9922D8: push    esi
0x9922D9: push    esi
0x9922DA: push    esi
0x9922DB: push    esi
0x9922DC: call    __invoke_watson
0x9922E1: add     esp, 14h
0x9922E4: mov     eax, [ebp+var_4]
0x9922E7: cdq
0x9922E8: add     edi, eax
0x9922EA: mov     eax, [ebp+arg_0]
0x9922ED: mov     [ebp+var_18], eax
0x9922F0: mov     eax, [ebp+var_10]
0x9922F3: mov     [ebp+var_20], eax
0x9922F6: mov     eax, [ebp+arg_4]
0x9922F9: adc     ebx, edx
0x9922FB: dec     eax
0x9922FC: cmp     [ebp+arg_18], 1
0x992300: mov     [ebp+var_24], eax
0x992303: mov     eax, [ebp+arg_C]
0x992306: mov     [ebp+var_2C], eax
0x992309: mov     eax, [ebp+arg_10]
0x99230C: mov     [ebp+var_30], eax
0x99230F: mov     eax, [ebp+arg_14]
0x992312: mov     [ebp+var_34], eax
0x992315: jz      short loc_992330
0x992317: cmp     [ebp+arg_18], 0FFFFFFFFh
0x99231B: jnz     short loc_992338
0x99231D: cmp     [ebp+var_8], esi
0x992320: jz      short loc_992338
0x992322: lea     eax, [ebp+var_34]
0x992325: push    eax
0x992326: call    __isindst
0x99232B: test    eax, eax
0x99232D: pop     ecx
0x99232E: jz      short loc_992338
0x992330: mov     eax, [ebp+var_C]
0x992333: cdq
0x992334: add     edi, eax
0x992336: adc     ebx, edx
0x992338: mov     eax, edi
0x99233A: mov     edx, ebx
0x99233C: pop     edi
0x99233D: pop     ebx
0x99233E: pop     esi
0x99233F: leave
0x992340: retn

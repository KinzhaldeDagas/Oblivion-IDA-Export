0x990096: push    ebp
0x990097: mov     ebp, esp
0x990099: sub     esp, 24h
0x99009C: push    esi
0x99009D: push    edi
0x99009E: push    [ebp+arg_14]; struct localeinfo_struct *
0x9900A1: lea     ecx, [ebp+var_24]; this
0x9900A4: mov     [ebp+var_14], 3FFh
0x9900AB: xor     edi, edi
0x9900AD: mov     [ebp+var_4], 30h ; '0'
0x9900B4: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9900B9: cmp     [ebp+arg_C], edi
0x9900BC: jge     short loc_9900C1
0x9900BE: mov     [ebp+arg_C], edi
0x9900C1: mov     esi, [ebp+arg_4]
0x9900C4: cmp     esi, edi
0x9900C6: jnz     short loc_9900F3
0x9900C8: call    __errno
0x9900CD: push    16h
0x9900CF: pop     esi
0x9900D0: push    edi
0x9900D1: push    edi
0x9900D2: push    edi
0x9900D3: push    edi
0x9900D4: push    edi
0x9900D5: mov     [eax], esi
0x9900D7: call    __invalid_parameter
0x9900DC: add     esp, 14h
0x9900DF: cmp     [ebp+var_18], 0
0x9900E3: jz      short loc_9900EC
0x9900E5: mov     eax, [ebp+var_1C]
0x9900E8: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9900EC: mov     eax, esi
0x9900EE: jmp     loc_990403
0x9900F3: cmp     [ebp+arg_8], edi
0x9900F6: jbe     short loc_9900C8
0x9900F8: mov     eax, [ebp+arg_C]
0x9900FB: add     eax, 0Bh
0x9900FE: cmp     [ebp+arg_8], eax
0x990101: mov     byte ptr [esi], 0
0x990104: ja      short loc_99010F
0x990106: call    __errno
0x99010B: push    22h ; '"'
0x99010D: jmp     short loc_9900CF
0x99010F: mov     edi, [ebp+arg_0]
0x990112: mov     eax, [edi]
0x990114: mov     [ebp+var_C], eax
0x990117: mov     eax, [edi+4]
0x99011A: mov     ecx, eax
0x99011C: shr     ecx, 14h
0x99011F: mov     edx, 7FFh
0x990124: push    ebx
0x990125: and     ecx, edx
0x990127: xor     ebx, ebx
0x990129: cmp     ecx, edx
0x99012B: jnz     loc_9901C1
0x990131: test    ebx, ebx
0x990133: jnz     loc_9901C1
0x990139: mov     eax, [ebp+arg_8]
0x99013C: cmp     eax, 0FFFFFFFFh
0x99013F: jnz     short loc_990145
0x990141: or      eax, eax
0x990143: jmp     short loc_990148
0x990145: add     eax, 0FFFFFFFEh
0x990148: push    0
0x99014A: push    [ebp+arg_C]
0x99014D: lea     ebx, [esi+2]
0x990150: push    eax
0x990151: push    ebx
0x990152: push    edi
0x990153: call    __cftoe
0x990158: add     esp, 14h
0x99015B: test    eax, eax
0x99015D: jz      short loc_990178
0x99015F: cmp     [ebp+var_18], 0
0x990163: mov     byte ptr [esi], 0
0x990166: jz      loc_990402
0x99016C: mov     ecx, [ebp+var_1C]
0x99016F: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x990173: jmp     loc_990402
0x990178: cmp     byte ptr [ebx], 2Dh ; '-'
0x99017B: jnz     short loc_990181
0x99017D: mov     byte ptr [esi], 2Dh ; '-'
0x990180: inc     esi
0x990181: mov     byte ptr [esi], 30h ; '0'
0x990184: inc     esi
0x990185: cmp     [ebp+arg_10], 0
0x990189: push    65h ; 'e'; Ch
0x99018B: setz    al
0x99018E: dec     al
0x990190: and     al, 0E0h
0x990192: add     al, 78h ; 'x'
0x990194: mov     [esi], al
0x990196: inc     esi
0x990197: push    esi; Str
0x990198: call    _strrchr
0x99019D: test    eax, eax
0x99019F: pop     ecx
0x9901A0: pop     ecx
0x9901A1: jz      loc_9903F3
0x9901A7: cmp     [ebp+arg_10], 0
0x9901AB: setz    cl
0x9901AE: dec     cl
0x9901B0: and     cl, 0E0h
0x9901B3: add     cl, 70h ; 'p'
0x9901B6: mov     [eax], cl
0x9901B8: mov     byte ptr [eax+3], 0
0x9901BC: jmp     loc_9903F3
0x9901C1: and     eax, 80000000h
0x9901C6: xor     ecx, ecx
0x9901C8: or      ecx, eax
0x9901CA: jz      short loc_9901D0
0x9901CC: mov     byte ptr [esi], 2Dh ; '-'
0x9901CF: inc     esi
0x9901D0: mov     ebx, [ebp+arg_10]
0x9901D3: mov     byte ptr [esi], 30h ; '0'
0x9901D6: inc     esi
0x9901D7: test    ebx, ebx
0x9901D9: setz    al
0x9901DC: dec     al
0x9901DE: and     al, 0E0h
0x9901E0: add     al, 78h ; 'x'
0x9901E2: mov     [esi], al
0x9901E4: mov     ecx, [edi+4]
0x9901E7: inc     esi
0x9901E8: neg     ebx
0x9901EA: sbb     ebx, ebx
0x9901EC: and     ebx, 0FFFFFFE0h
0x9901EF: and     ecx, 7FF00000h
0x9901F5: xor     eax, eax
0x9901F7: add     ebx, 27h ; '''
0x9901FA: xor     edx, edx
0x9901FC: or      eax, ecx
0x9901FE: jnz     short loc_990221
0x990200: mov     byte ptr [esi], 30h ; '0'
0x990203: mov     ecx, [edi+4]
0x990206: mov     eax, [edi]
0x990208: and     ecx, 0FFFFFh
0x99020E: inc     esi
0x99020F: or      eax, ecx
0x990211: jnz     short loc_990218
0x990213: mov     [ebp+var_14], edx
0x990216: jmp     short loc_990225
0x990218: mov     [ebp+var_14], 3FEh
0x99021F: jmp     short loc_990225
0x990221: mov     byte ptr [esi], 31h ; '1'
0x990224: inc     esi
0x990225: mov     eax, esi
0x990227: inc     esi
0x990228: cmp     [ebp+arg_C], edx
0x99022B: mov     [ebp+arg_4], eax
0x99022E: jnz     short loc_990234
0x990230: mov     [eax], dl
0x990232: jmp     short loc_990243
0x990234: mov     ecx, [ebp+var_24]
0x990237: mov     ecx, [ecx+0BCh]
0x99023D: mov     ecx, [ecx]
0x99023F: mov     cl, [ecx]
0x990241: mov     [eax], cl
0x990243: mov     ecx, [edi+4]
0x990246: mov     eax, [edi]
0x990248: and     ecx, 0FFFFFh
0x99024E: mov     [ebp+var_8], ecx
0x990251: ja      short loc_99025B
0x990253: cmp     eax, edx
0x990255: jbe     loc_990310
0x99025B: mov     [ebp+var_C], edx
0x99025E: mov     [ebp+var_8], 0F0000h
0x990265: cmp     [ebp+arg_C], 0
0x990269: jle     short loc_9902B8
0x99026B: mov     edx, [edi+4]
0x99026E: and     edx, [ebp+var_8]
0x990271: mov     eax, [edi]
0x990273: movsx   ecx, word ptr [ebp+var_4]
0x990277: and     eax, [ebp+var_C]
0x99027A: and     edx, 0FFFFFh
0x990280: call    unknown_libname_200
0x990285: add     ax, 30h ; '0'
0x990289: movzx   eax, ax
0x99028C: cmp     ax, 39h ; '9'
0x990290: jbe     short loc_990294
0x990292: add     eax, ebx
0x990294: mov     ecx, [ebp+var_8]
0x990297: sub     [ebp+var_4], 4
0x99029B: mov     [esi], al
0x99029D: mov     eax, [ebp+var_C]
0x9902A0: shrd    eax, ecx, 4
0x9902A4: shr     ecx, 4
0x9902A7: inc     esi
0x9902A8: dec     [ebp+arg_C]
0x9902AB: cmp     word ptr [ebp+var_4], 0
0x9902B0: mov     [ebp+var_C], eax
0x9902B3: mov     [ebp+var_8], ecx
0x9902B6: jge     short loc_990265
0x9902B8: cmp     word ptr [ebp+var_4], 0
0x9902BD: jl      short loc_990310
0x9902BF: mov     edx, [edi+4]
0x9902C2: and     edx, [ebp+var_8]
0x9902C5: mov     eax, [edi]
0x9902C7: movsx   ecx, word ptr [ebp+var_4]
0x9902CB: and     eax, [ebp+var_C]
0x9902CE: and     edx, 0FFFFFh
0x9902D4: call    unknown_libname_200
0x9902D9: cmp     ax, 8
0x9902DD: jbe     short loc_990310
0x9902DF: lea     eax, [esi-1]
0x9902E2: mov     cl, [eax]
0x9902E4: cmp     cl, 66h ; 'f'
0x9902E7: jz      short loc_9902EE
0x9902E9: cmp     cl, 46h ; 'F'
0x9902EC: jnz     short loc_9902F4
0x9902EE: mov     byte ptr [eax], 30h ; '0'
0x9902F1: dec     eax
0x9902F2: jmp     short loc_9902E2
0x9902F4: cmp     eax, [ebp+arg_4]
0x9902F7: jz      short loc_99030D
0x9902F9: mov     cl, [eax]
0x9902FB: cmp     cl, 39h ; '9'
0x9902FE: jnz     short loc_990307
0x990300: add     bl, 3Ah ; ':'
0x990303: mov     [eax], bl
0x990305: jmp     short loc_990310
0x990307: inc     cl
0x990309: mov     [eax], cl
0x99030B: jmp     short loc_990310
0x99030D: inc     byte ptr [eax-1]
0x990310: cmp     [ebp+arg_C], 0
0x990314: jle     short loc_990327
0x990316: push    [ebp+arg_C]
0x990319: push    30h ; '0'
0x99031B: push    esi
0x99031C: call    __memset
0x990321: add     esp, 0Ch
0x990324: add     esi, [ebp+arg_C]
0x990327: mov     eax, [ebp+arg_4]
0x99032A: cmp     byte ptr [eax], 0
0x99032D: jnz     short loc_990331
0x99032F: mov     esi, eax
0x990331: cmp     [ebp+arg_10], 0
0x990335: mov     cl, 34h ; '4'
0x990337: setz    al
0x99033A: dec     al
0x99033C: and     al, 0E0h
0x99033E: add     al, 70h ; 'p'
0x990340: mov     [esi], al
0x990342: mov     eax, [edi]
0x990344: mov     edx, [edi+4]
0x990347: inc     esi
0x990348: call    unknown_libname_200
0x99034D: xor     ebx, ebx
0x99034F: and     eax, 7FFh
0x990354: and     edx, ebx
0x990356: sub     eax, [ebp+var_14]
0x990359: push    ebx
0x99035A: pop     ecx
0x99035B: sbb     edx, ecx
0x99035D: js      short loc_99036B
0x99035F: jg      short loc_990365
0x990361: cmp     eax, ebx
0x990363: jb      short loc_99036B
0x990365: mov     byte ptr [esi], 2Bh ; '+'
0x990368: inc     esi
0x990369: jmp     short loc_990375
0x99036B: mov     byte ptr [esi], 2Dh ; '-'
0x99036E: inc     esi
0x99036F: neg     eax
0x990371: adc     edx, ebx
0x990373: neg     edx
0x990375: cmp     edx, ebx
0x990377: mov     edi, esi
0x990379: mov     byte ptr [esi], 30h ; '0'
0x99037C: jl      short loc_9903A2
0x99037E: mov     ecx, 3E8h
0x990383: jg      short loc_990389
0x990385: cmp     eax, ecx
0x990387: jb      short loc_9903A2
0x990389: push    ebx
0x99038A: push    ecx
0x99038B: push    edx
0x99038C: push    eax
0x99038D: call    __alldvrm
0x990392: add     al, 30h ; '0'
0x990394: mov     [esi], al
0x990396: inc     esi
0x990397: cmp     esi, edi
0x990399: mov     [ebp+var_10], edx
0x99039C: mov     eax, ecx
0x99039E: mov     edx, ebx
0x9903A0: jnz     short loc_9903AD
0x9903A2: test    edx, edx
0x9903A4: jl      short loc_9903C4
0x9903A6: jg      short loc_9903AD
0x9903A8: cmp     eax, 64h ; 'd'
0x9903AB: jb      short loc_9903C4
0x9903AD: push    0
0x9903AF: push    64h ; 'd'
0x9903B1: push    edx
0x9903B2: push    eax
0x9903B3: call    __alldvrm
0x9903B8: add     al, 30h ; '0'
0x9903BA: mov     [esi], al
0x9903BC: mov     [ebp+var_10], edx
0x9903BF: inc     esi
0x9903C0: mov     eax, ecx
0x9903C2: mov     edx, ebx
0x9903C4: cmp     esi, edi
0x9903C6: jnz     short loc_9903D3
0x9903C8: test    edx, edx
0x9903CA: jl      short loc_9903EB
0x9903CC: jg      short loc_9903D3
0x9903CE: cmp     eax, 0Ah
0x9903D1: jb      short loc_9903EB
0x9903D3: push    0
0x9903D5: push    0Ah
0x9903D7: push    edx
0x9903D8: push    eax
0x9903D9: call    __alldvrm
0x9903DE: add     al, 30h ; '0'
0x9903E0: mov     [esi], al
0x9903E2: mov     [ebp+var_10], edx
0x9903E5: inc     esi
0x9903E6: mov     eax, ecx
0x9903E8: mov     [ebp+var_10], ebx
0x9903EB: add     al, 30h ; '0'
0x9903ED: mov     [esi], al
0x9903EF: mov     byte ptr [esi+1], 0
0x9903F3: cmp     [ebp+var_18], 0
0x9903F7: jz      short loc_990400
0x9903F9: mov     eax, [ebp+var_1C]
0x9903FC: and     dword ptr [eax+70h], 0FFFFFFFDh
0x990400: xor     eax, eax
0x990402: pop     ebx
0x990403: pop     edi
0x990404: pop     esi
0x990405: leave
0x990406: retn

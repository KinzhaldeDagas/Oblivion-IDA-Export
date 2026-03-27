0x957460: push    ebp
0x957461: mov     ebp, esp
0x957463: and     esp, 0FFFFFFF0h
0x957466: sub     esp, 24h
0x957469: push    ebx
0x95746A: mov     ebx, [ebp+arg_4]
0x95746D: push    esi
0x95746E: push    edi
0x95746F: mov     edi, [ebp+arg_0]
0x957472: mov     edx, [ebp+arg_8]
0x957475: lea     eax, [ebx+edx]
0x957478: sar     eax, 1
0x95747A: shl     eax, 4
0x95747D: add     eax, edi
0x95747F: mov     ecx, [eax]
0x957481: mov     [esp+30h+var_10], ecx
0x957485: mov     ecx, [eax+4]
0x957488: mov     [esp+30h+var_C], ecx
0x95748C: mov     ecx, [eax+8]
0x95748F: mov     eax, [eax+0Ch]
0x957492: mov     esi, ebx
0x957494: mov     [esp+30h+var_8], ecx
0x957498: mov     [esp+30h+var_4], eax
0x95749C: lea     esp, [esp+0]
0x9574A0: mov     ecx, esi
0x9574A2: shl     ecx, 4
0x9574A5: lea     ecx, [ecx+edi+8]
0x9574A9: lea     esp, [esp+0]
0x9574B0: fld     dword ptr [ecx]
0x9574B2: fcomp   [esp+30h+var_8]
0x9574B6: fnstsw  ax
0x9574B8: test    ah, 5
0x9574BB: jp      short loc_9574C3
0x9574BD: inc     esi
0x9574BE: add     ecx, 10h
0x9574C1: jmp     short loc_9574B0
0x9574C3: mov     eax, edx
0x9574C5: shl     eax, 4
0x9574C8: lea     ecx, [eax+edi+8]
0x9574CC: lea     esp, [esp+0]
0x9574D0: fld     [esp+30h+var_8]
0x9574D4: fcomp   dword ptr [ecx]
0x9574D6: fnstsw  ax
0x9574D8: test    ah, 5
0x9574DB: jp      short loc_9574E3
0x9574DD: dec     edx
0x9574DE: sub     ecx, 10h
0x9574E1: jmp     short loc_9574D0
0x9574E3: cmp     edx, esi
0x9574E5: jl      short loc_957558
0x9574E7: jz      short loc_95754E
0x9574E9: mov     ecx, edx
0x9574EB: shl     ecx, 4
0x9574EE: lea     eax, [ecx+edi]
0x9574F1: mov     ecx, eax
0x9574F3: mov     ebx, [ecx]
0x9574F5: mov     [esp+30h+var_20], ebx
0x9574F9: mov     ebx, [ecx+4]
0x9574FC: mov     [esp+30h+var_1C], ebx
0x957500: mov     ebx, [ecx+8]
0x957503: mov     ecx, [ecx+0Ch]
0x957506: mov     [esp+30h+var_14], ecx
0x95750A: mov     ecx, esi
0x95750C: shl     ecx, 4
0x95750F: add     ecx, edi
0x957511: mov     [esp+30h+var_18], ebx
0x957515: mov     edi, ecx
0x957517: mov     ebx, [edi]
0x957519: mov     [eax], ebx
0x95751B: mov     ebx, [edi+4]
0x95751E: mov     [eax+4], ebx
0x957521: mov     ebx, [edi+8]
0x957524: mov     [eax+8], ebx
0x957527: mov     edi, [edi+0Ch]
0x95752A: mov     ebx, [ebp+arg_4]
0x95752D: mov     [eax+0Ch], edi
0x957530: mov     eax, [esp+30h+var_20]
0x957534: mov     edi, [ebp+arg_0]
0x957537: mov     [ecx], eax
0x957539: mov     eax, [esp+30h+var_1C]
0x95753D: mov     [ecx+4], eax
0x957540: mov     eax, [esp+30h+var_18]
0x957544: mov     [ecx+8], eax
0x957547: mov     eax, [esp+30h+var_14]
0x95754B: mov     [ecx+0Ch], eax
0x95754E: dec     edx
0x95754F: inc     esi
0x957550: cmp     esi, edx
0x957552: jle     loc_9574A0
0x957558: cmp     ebx, edx
0x95755A: jge     short loc_95756B
0x95755C: mov     ecx, [ebp+arg_C]
0x95755F: push    ecx
0x957560: push    edx
0x957561: push    ebx
0x957562: push    edi
0x957563: call    sub_957460
0x957568: add     esp, 10h
0x95756B: cmp     esi, [ebp+arg_8]
0x95756E: jge     short loc_95757A
0x957570: mov     ebx, esi
0x957572: mov     [ebp+arg_4], ebx
0x957575: jmp     loc_957472
0x95757A: pop     edi
0x95757B: pop     esi
0x95757C: pop     ebx
0x95757D: mov     esp, ebp
0x95757F: pop     ebp
0x957580: retn

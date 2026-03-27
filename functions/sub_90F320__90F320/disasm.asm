0x90F320: sub     esp, 10h
0x90F323: push    esi
0x90F324: push    edi
0x90F325: mov     edi, ecx
0x90F327: mov     eax, [edi+8]
0x90F32A: mov     eax, [eax+74h]
0x90F32D: mov     ecx, [eax]
0x90F32F: mov     esi, [edi+124h]
0x90F335: dec     esi
0x90F336: mov     [esp+18h+var_10], ecx
0x90F33A: mov     edx, [eax+4]
0x90F33D: mov     [esp+18h+var_C], edx
0x90F341: mov     ecx, [eax+8]
0x90F344: mov     [esp+18h+var_8], ecx
0x90F348: mov     edx, [eax+0Ch]
0x90F34B: mov     [esp+18h+var_4], edx
0x90F34F: js      short loc_90F385
0x90F351: push    ebx
0x90F352: push    ebp
0x90F353: lea     ebx, [edi+14h]
0x90F356: jmp     short loc_90F360
0x90F358: align 10h
0x90F360: mov     eax, [edi+120h]
0x90F366: mov     ebp, [esp+20h+arg_0]
0x90F36A: mov     ecx, [eax+esi*8]
0x90F36D: mov     edx, [ecx]
0x90F36F: push    ebp
0x90F370: lea     eax, [eax+esi*8]
0x90F373: mov     eax, [eax+4]
0x90F376: lea     ebp, [esp+24h+var_10]
0x90F37A: push    ebp
0x90F37B: push    eax
0x90F37C: push    ebx
0x90F37D: call    dword ptr [edx+0Ch]
0x90F380: dec     esi
0x90F381: jns     short loc_90F360
0x90F383: pop     ebp
0x90F384: pop     ebx
0x90F385: pop     edi
0x90F386: pop     esi
0x90F387: add     esp, 10h
0x90F38A: retn    4

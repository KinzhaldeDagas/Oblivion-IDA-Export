0x40F880: sub     esp, 8
0x40F883: push    esi
0x40F884: mov     esi, [esp+0Ch+arg_0]
0x40F888: mov     eax, [esi+14h]
0x40F88B: cmp     eax, [esi+20h]
0x40F88E: jnb     loc_40F958
0x40F894: mov     ecx, [esi+40h]
0x40F897: mov     eax, [ecx+eax*4]
0x40F89A: mov     edx, [eax]
0x40F89C: mov     edx, [edx+4Ch]
0x40F89F: push    0
0x40F8A1: push    0
0x40F8A3: lea     ecx, [esp+14h+var_8]
0x40F8A7: push    ecx
0x40F8A8: push    0
0x40F8AA: push    eax
0x40F8AB: call    edx
0x40F8AD: test    eax, eax
0x40F8AF: jl      loc_40F958
0x40F8B5: mov     eax, [esp+0Ch+arg_4]
0x40F8B9: test    eax, eax
0x40F8BB: jz      short loc_40F8C3
0x40F8BD: mov     ecx, [esp+0Ch+var_4]
0x40F8C1: mov     [eax], ecx
0x40F8C3: mov     eax, [esp+0Ch+arg_8]
0x40F8C7: test    eax, eax
0x40F8C9: jz      short loc_40F8D1
0x40F8CB: mov     edx, [esp+0Ch+var_8]
0x40F8CF: mov     [eax], edx
0x40F8D1: mov     ecx, [esi+14h]
0x40F8D4: xor     eax, eax
0x40F8D6: cmp     [esi+2Ch], eax
0x40F8D9: push    edi
0x40F8DA: setnz   al
0x40F8DD: xor     edx, edx
0x40F8DF: add     eax, [esi+24h]
0x40F8E2: mov     edi, eax
0x40F8E4: mov     eax, ecx
0x40F8E6: div     edi
0x40F8E8: mov     edx, eax
0x40F8EA: imul    edx, edi
0x40F8ED: sub     ecx, edx
0x40F8EF: mov     edx, [esp+10h+arg_C]
0x40F8F3: test    edx, edx
0x40F8F5: jz      short loc_40F8FF
0x40F8F7: mov     edi, [esi+3Ch]
0x40F8FA: imul    edi, ecx
0x40F8FD: mov     [edx], edi
0x40F8FF: mov     edx, [esp+10h+arg_10]
0x40F903: test    edx, edx
0x40F905: jz      short loc_40F90F
0x40F907: mov     edi, [esi+3Ch]
0x40F90A: imul    edi, eax
0x40F90D: mov     [edx], edi
0x40F90F: mov     edx, [esp+10h+arg_14]
0x40F913: test    edx, edx
0x40F915: pop     edi
0x40F916: jz      short loc_40F927
0x40F918: cmp     ecx, [esi+24h]
0x40F91B: jb      short loc_40F922
0x40F91D: mov     ecx, [esi+2Ch]
0x40F920: jmp     short loc_40F925
0x40F922: mov     ecx, [esi+3Ch]
0x40F925: mov     [edx], ecx
0x40F927: mov     ecx, [esp+0Ch+arg_18]
0x40F92B: test    ecx, ecx
0x40F92D: jz      short loc_40F94B
0x40F92F: cmp     eax, [esi+28h]
0x40F932: jb      short loc_40F946
0x40F934: mov     eax, [esi+30h]
0x40F937: mov     [ecx], eax
0x40F939: mov     eax, 1
0x40F93E: add     [esi+14h], eax
0x40F941: pop     esi
0x40F942: add     esp, 8
0x40F945: retn
0x40F946: mov     eax, [esi+3Ch]
0x40F949: mov     [ecx], eax
0x40F94B: mov     eax, 1
0x40F950: add     [esi+14h], eax
0x40F953: pop     esi
0x40F954: add     esp, 8
0x40F957: retn
0x40F958: mov     dword ptr [esi+14h], 0
0x40F95F: xor     eax, eax
0x40F961: pop     esi
0x40F962: add     esp, 8
0x40F965: retn

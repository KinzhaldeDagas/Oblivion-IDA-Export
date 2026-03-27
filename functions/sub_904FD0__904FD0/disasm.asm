0x904FD0: push    ebp
0x904FD1: mov     ebp, esp
0x904FD3: and     esp, 0FFFFFFF0h
0x904FD6: sub     esp, 234h
0x904FDC: mov     eax, ds:0B30AACh
0x904FE1: push    ebx
0x904FE2: push    esi
0x904FE3: push    edi
0x904FE4: mov     edi, large fs:2Ch
0x904FEB: mov     [esp+240h+var_224], ecx
0x904FEF: mov     ecx, ds:0BA9DE4h
0x904FF5: mov     [esp+240h+var_4], eax
0x904FFC: mov     eax, [edi+ecx*4]
0x904FFF: mov     edx, [eax+1A4h]
0x905005: cmp     edx, [eax+1A8h]
0x90500B: jnb     short loc_905031
0x90500D: mov     ebx, eax
0x90500F: mov     esi, [ebx+1A4h]
0x905015: mov     dword ptr [esi], offset aTtshapecollect; "TtShapeCollection"
0x90501B: rdtsc
0x90501D: mov     [esp+240h+var_228], eax
0x905021: mov     eax, [esp+240h+var_228]
0x905025: mov     [esi+4], eax
0x905028: add     esi, 0Ch
0x90502B: mov     [ebx+1A4h], esi
0x905031: mov     eax, [ebp+arg_0]
0x905034: mov     edx, [eax+8]
0x905037: mov     ebx, [eax]
0x905039: mov     [esp+240h+var_214], eax
0x90503D: mov     eax, [esp+240h+var_224]
0x905041: mov     esi, [eax+0Ch]
0x905044: mov     eax, [eax+10h]
0x905047: dec     eax
0x905048: mov     [esp+240h+var_218], edx
0x90504C: js      short loc_90509E
0x90504E: inc     eax
0x90504F: mov     [esp+240h+var_228], eax
0x905053: mov     edi, [esi]
0x905055: mov     eax, [ebx]
0x905057: lea     ecx, [esp+240h+var_210]
0x90505B: push    ecx
0x90505C: push    edi
0x90505D: mov     ecx, ebx
0x90505F: call    dword ptr [eax+28h]
0x905062: mov     [esp+240h+var_220], eax
0x905066: mov     eax, [ebp+arg_C]
0x905069: push    eax
0x90506A: mov     eax, [ebp+arg_8]
0x90506D: push    eax
0x90506E: mov     eax, [ebp+arg_4]
0x905071: mov     [esp+248h+var_21C], edi
0x905075: mov     ecx, [esi+4]
0x905078: mov     edx, [ecx]
0x90507A: push    eax
0x90507B: lea     eax, [esp+24Ch+var_220]
0x90507F: push    eax
0x905080: call    dword ptr [edx+0Ch]
0x905083: mov     eax, [esp+240h+var_228]
0x905087: add     esi, 8
0x90508A: dec     eax
0x90508B: mov     [esp+240h+var_228], eax
0x90508F: jnz     short loc_905053
0x905091: mov     ecx, ds:0BA9DE4h
0x905097: mov     edi, large fs:2Ch
0x90509E: mov     eax, [edi+ecx*4]
0x9050A1: mov     edx, [eax+1A4h]
0x9050A7: cmp     edx, [eax+1A8h]
0x9050AD: jnb     short loc_9050D3
0x9050AF: mov     edi, eax
0x9050B1: mov     ecx, [edi+1A4h]
0x9050B7: mov     dword ptr [ecx], offset aEt; "Et"
0x9050BD: rdtsc
0x9050BF: mov     [esp+240h+var_224], eax
0x9050C3: mov     eax, [esp+240h+var_224]
0x9050C7: mov     [ecx+4], eax
0x9050CA: add     ecx, 0Ch
0x9050CD: mov     [edi+1A4h], ecx
0x9050D3: mov     ecx, [esp+240h+var_4]
0x9050DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9050DF: pop     edi
0x9050E0: pop     esi
0x9050E1: pop     ebx
0x9050E2: mov     esp, ebp
0x9050E4: pop     ebp
0x9050E5: retn    10h

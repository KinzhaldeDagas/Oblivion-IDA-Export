0x905370: push    ebp
0x905371: mov     ebp, esp
0x905373: and     esp, 0FFFFFFF0h
0x905376: sub     esp, 234h
0x90537C: mov     eax, ds:0B30AACh
0x905381: mov     ecx, ds:0BA9DE4h
0x905387: push    ebx
0x905388: mov     ebx, large fs:2Ch
0x90538F: mov     [esp+238h+var_4], eax
0x905396: mov     eax, [ebx+ecx*4]
0x905399: mov     edx, [eax+1A4h]
0x90539F: push    esi
0x9053A0: cmp     edx, [eax+1A8h]
0x9053A6: push    edi
0x9053A7: jnb     short loc_9053CD
0x9053A9: mov     esi, eax
0x9053AB: mov     ecx, [esi+1A4h]
0x9053B1: mov     dword ptr [ecx], offset aTtshapecollect; "TtShapeCollection"
0x9053B7: rdtsc
0x9053B9: mov     [esp+240h+var_228], eax
0x9053BD: mov     eax, [esp+240h+var_228]
0x9053C1: mov     [ecx+4], eax
0x9053C4: add     ecx, 0Ch
0x9053C7: mov     [esi+1A4h], ecx
0x9053CD: mov     eax, [ebp+arg_0]
0x9053D0: mov     ecx, [eax+8]
0x9053D3: mov     edx, [ebp+arg_4]
0x9053D6: mov     esi, [eax]
0x9053D8: mov     [esp+240h+var_218], ecx
0x9053DC: mov     ecx, [edx]
0x9053DE: mov     [esp+240h+var_214], eax
0x9053E2: mov     eax, [ecx]
0x9053E4: call    dword ptr [eax+8]
0x9053E7: mov     edx, [esi]
0x9053E9: mov     ecx, esi
0x9053EB: mov     [esp+240h+var_228], eax
0x9053EF: call    dword ptr [edx+20h]
0x9053F2: mov     edi, eax
0x9053F4: cmp     edi, 0FFFFFFFFh
0x9053F7: jz      loc_9054B4
0x9053FD: mov     ebx, [ebp+arg_8]
0x905400: mov     edx, [ebp+arg_0]
0x905403: mov     ecx, [ebx+4]
0x905406: mov     eax, [ecx]
0x905408: push    edi
0x905409: push    esi
0x90540A: push    edx
0x90540B: mov     edx, [ebp+arg_4]
0x90540E: push    edx
0x90540F: push    ebx
0x905410: lea     edx, [esp+254h+var_221]
0x905414: push    edx
0x905415: call    dword ptr [eax]
0x905417: cmp     byte ptr [eax], 0
0x90541A: jz      loc_90549A
0x905420: mov     eax, [esi]
0x905422: lea     ecx, [esp+240h+var_210]
0x905426: push    ecx
0x905427: push    edi
0x905428: mov     ecx, esi
0x90542A: call    dword ptr [eax+28h]
0x90542D: mov     [esp+240h+var_220], eax
0x905431: mov     [esp+240h+var_21C], edi
0x905435: mov     edx, [eax]
0x905437: mov     ecx, eax
0x905439: call    dword ptr [edx+8]
0x90543C: cmp     [esp+240h+var_228], 18h
0x905441: jnz     short loc_905469
0x905443: mov     edx, [ebp+arg_4]
0x905446: mov     ecx, [edx+0Ch]
0x905449: test    ecx, ecx
0x90544B: jz      short loc_905459
0x90544D: lea     ecx, [ecx+0]
0x905450: mov     edx, ecx
0x905452: mov     ecx, [edx+0Ch]
0x905455: test    ecx, ecx
0x905457: jnz     short loc_905450
0x905459: mov     ecx, [edx+1Ch]
0x90545C: test    ch, 20h
0x90545F: jz      short loc_905469
0x905461: mov     [esp+240h+var_228], 3
0x905469: mov     ecx, [ebx]
0x90546B: mov     edx, [esp+240h+var_228]
0x90546F: shl     eax, 5
0x905472: add     eax, ecx
0x905474: movzx   eax, byte ptr [eax+edx+190h]
0x90547C: mov     edx, [ebp+arg_10]
0x90547F: push    edx
0x905480: mov     edx, [ebp+arg_C]
0x905483: push    edx
0x905484: mov     edx, [ebp+arg_4]
0x905487: push    ebx
0x905488: push    edx
0x905489: add     eax, 7Bh ; '{'
0x90548C: lea     edx, [esp+250h+var_220]
0x905490: lea     eax, [eax+eax*4]
0x905493: push    edx
0x905494: call    dword ptr [ecx+eax*4]
0x905497: add     esp, 14h
0x90549A: mov     eax, [esi]
0x90549C: push    edi
0x90549D: mov     ecx, esi
0x90549F: call    dword ptr [eax+24h]
0x9054A2: mov     edi, eax
0x9054A4: cmp     edi, 0FFFFFFFFh
0x9054A7: jnz     loc_905400
0x9054AD: mov     ebx, large fs:2Ch
0x9054B4: mov     ecx, ds:0BA9DE4h
0x9054BA: mov     eax, [ebx+ecx*4]
0x9054BD: mov     edx, [eax+1A4h]
0x9054C3: cmp     edx, [eax+1A8h]
0x9054C9: jnb     short loc_9054EF
0x9054CB: mov     esi, eax
0x9054CD: mov     ecx, [esi+1A4h]
0x9054D3: mov     dword ptr [ecx], offset aEt; "Et"
0x9054D9: rdtsc
0x9054DB: mov     [esp+240h+var_228], eax
0x9054DF: mov     eax, [esp+240h+var_228]
0x9054E3: mov     [ecx+4], eax
0x9054E6: add     ecx, 0Ch
0x9054E9: mov     [esi+1A4h], ecx
0x9054EF: mov     ecx, [esp+240h+var_4]
0x9054F6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9054FB: pop     edi
0x9054FC: pop     esi
0x9054FD: pop     ebx
0x9054FE: mov     esp, ebp
0x905500: pop     ebp
0x905501: retn

0x905250: push    ebp
0x905251: mov     ebp, esp
0x905253: and     esp, 0FFFFFFF0h
0x905256: sub     esp, 234h
0x90525C: mov     eax, ds:0B30AACh
0x905261: push    ebx
0x905262: push    esi
0x905263: push    edi
0x905264: mov     edi, large fs:2Ch
0x90526B: mov     [esp+240h+var_224], ecx
0x90526F: mov     ecx, ds:0BA9DE4h
0x905275: mov     [esp+240h+var_4], eax
0x90527C: mov     eax, [edi+ecx*4]
0x90527F: mov     edx, [eax+1A4h]
0x905285: cmp     edx, [eax+1A8h]
0x90528B: jnb     short loc_9052B1
0x90528D: mov     ebx, eax
0x90528F: mov     esi, [ebx+1A4h]
0x905295: mov     dword ptr [esi], offset aTtshapecollect; "TtShapeCollection"
0x90529B: rdtsc
0x90529D: mov     [esp+240h+var_228], eax
0x9052A1: mov     eax, [esp+240h+var_228]
0x9052A5: mov     [esi+4], eax
0x9052A8: add     esi, 0Ch
0x9052AB: mov     [ebx+1A4h], esi
0x9052B1: mov     eax, [ebp+arg_0]
0x9052B4: mov     edx, [eax+8]
0x9052B7: mov     ebx, [eax]
0x9052B9: mov     [esp+240h+var_214], eax
0x9052BD: mov     eax, [esp+240h+var_224]
0x9052C1: mov     esi, [eax+0Ch]
0x9052C4: mov     eax, [eax+10h]
0x9052C7: dec     eax
0x9052C8: mov     [esp+240h+var_218], edx
0x9052CC: js      short loc_905322
0x9052CE: inc     eax
0x9052CF: mov     [esp+240h+var_228], eax
0x9052D3: mov     edi, [esi]
0x9052D5: mov     eax, [ebx]
0x9052D7: lea     ecx, [esp+240h+var_210]
0x9052DB: push    ecx
0x9052DC: push    edi
0x9052DD: mov     ecx, ebx
0x9052DF: call    dword ptr [eax+28h]
0x9052E2: mov     [esp+240h+var_220], eax
0x9052E6: mov     eax, [ebp+arg_10]
0x9052E9: push    eax
0x9052EA: mov     eax, [ebp+arg_C]
0x9052ED: push    eax
0x9052EE: mov     eax, [ebp+arg_8]
0x9052F1: push    eax
0x9052F2: mov     eax, [ebp+arg_4]
0x9052F5: mov     [esp+24Ch+var_21C], edi
0x9052F9: mov     ecx, [esi+4]
0x9052FC: mov     edx, [ecx]
0x9052FE: push    eax
0x9052FF: lea     eax, [esp+250h+var_220]
0x905303: push    eax
0x905304: call    dword ptr [edx+10h]
0x905307: mov     eax, [esp+240h+var_228]
0x90530B: add     esi, 8
0x90530E: dec     eax
0x90530F: mov     [esp+240h+var_228], eax
0x905313: jnz     short loc_9052D3
0x905315: mov     ecx, ds:0BA9DE4h
0x90531B: mov     edi, large fs:2Ch
0x905322: mov     eax, [edi+ecx*4]
0x905325: mov     edx, [eax+1A4h]
0x90532B: cmp     edx, [eax+1A8h]
0x905331: jnb     short loc_905357
0x905333: mov     edi, eax
0x905335: mov     ecx, [edi+1A4h]
0x90533B: mov     dword ptr [ecx], offset aEt; "Et"
0x905341: rdtsc
0x905343: mov     [esp+240h+var_224], eax
0x905347: mov     eax, [esp+240h+var_224]
0x90534B: mov     [ecx+4], eax
0x90534E: add     ecx, 0Ch
0x905351: mov     [edi+1A4h], ecx
0x905357: mov     ecx, [esp+240h+var_4]
0x90535E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x905363: pop     edi
0x905364: pop     esi
0x905365: pop     ebx
0x905366: mov     esp, ebp
0x905368: pop     ebp
0x905369: retn    14h

0x931520: sub     esp, 210h
0x931526: mov     eax, [esp+210h+arg_4]
0x93152D: mov     edx, [esp+210h+arg_8]
0x931534: push    ebx
0x931535: push    ebp
0x931536: mov     ebp, [eax+4]
0x931539: push    esi
0x93153A: lea     ecx, [esp+21Ch+var_200]
0x93153E: mov     ebx, 80000080h
0x931543: push    edi
0x931544: mov     [esp+220h+var_20C], ecx
0x931548: mov     [esp+220h+var_204], ebx
0x93154C: mov     [esp+220h+var_200], edx
0x931550: mov     [esp+220h+var_208], 1
0x931558: jmp     short loc_931560
0x93155A: align 10h
0x931560: mov     eax, [esp+220h+var_208]
0x931564: mov     ecx, [esp+220h+var_20C]
0x931568: mov     esi, [ecx+eax*4-4]
0x93156C: dec     eax
0x93156D: mov     [esp+220h+var_208], eax
0x931571: mov     [esp+220h+var_210], esi
0x931575: mov     eax, esi
0x931577: jmp     short loc_931580
0x931579: align 10h
0x931580: movzx   edx, word ptr [eax+4]
0x931584: lea     eax, [ebp+edx*8+0]
0x931588: movzx   edx, word ptr [eax+6]
0x93158C: mov     ecx, edx
0x93158E: dec     ecx
0x93158F: jz      short loc_93159B
0x931591: dec     ecx
0x931592: jz      loc_931666
0x931598: dec     ecx
0x931599: jnz     short loc_9315A8
0x93159B: cmp     edx, [esp+220h+arg_C]
0x9315A2: jnz     loc_931679
0x9315A8: mov     cx, word ptr [esp+220h+arg_C]
0x9315B0: mov     [eax+6], cx
0x9315B4: mov     ebx, [esp+220h+var_204]
0x9315B8: cmp     eax, esi
0x9315BA: jnz     short loc_931580
0x9315BC: lea     esp, [esp+0]
0x9315C0: movzx   edx, word ptr [esi+4]
0x9315C4: movzx   eax, word ptr [ebp+edx*8+2]
0x9315C9: cmp     word ptr [ebp+eax*8+6], 0
0x9315CF: lea     esi, [ebp+edx*8+0]
0x9315D3: lea     edi, [ebp+eax*8+0]
0x9315D7: jnz     short loc_93160E
0x9315D9: mov     eax, [esp+220h+var_208]
0x9315DD: and     ebx, 3FFFFFFFh
0x9315E3: cmp     eax, ebx
0x9315E5: jnz     short loc_9315F6
0x9315E7: lea     ecx, [esp+220h+var_20C]
0x9315EB: push    4
0x9315ED: push    ecx
0x9315EE: call    sub_8A6EE0
0x9315F3: add     esp, 8
0x9315F6: mov     eax, [esp+220h+var_208]
0x9315FA: mov     edx, [esp+220h+var_20C]
0x9315FE: mov     [edx+eax*4], edi
0x931601: mov     eax, [esp+220h+var_208]
0x931605: mov     ebx, [esp+220h+var_204]
0x931609: inc     eax
0x93160A: mov     [esp+220h+var_208], eax
0x93160E: cmp     esi, [esp+220h+var_210]
0x931612: jnz     short loc_9315C0
0x931614: mov     eax, [esp+220h+var_208]
0x931618: test    eax, eax
0x93161A: jnz     loc_931560
0x931620: test    ebx, ebx
0x931622: mov     esi, [esp+220h+arg_0]
0x931629: mov     byte ptr [esi], 1
0x93162C: js      short loc_931659
0x93162E: mov     edx, [esp+220h+var_20C]
0x931632: mov     eax, ds:0BA9DE4h
0x931637: mov     ecx, large fs:2Ch
0x93163E: and     ebx, 3FFFFFFFh
0x931644: push    14h
0x931646: shl     ebx, 2
0x931649: push    ebx
0x93164A: push    edx
0x93164B: mov     edx, [ecx+eax*4]
0x93164E: mov     ecx, [edx+19Ch]
0x931654: call    sub_8A75D0
0x931659: pop     edi
0x93165A: mov     eax, esi
0x93165C: pop     esi
0x93165D: pop     ebp
0x93165E: pop     ebx
0x93165F: add     esp, 210h
0x931665: retn
0x931666: cmp     [esp+220h+arg_C], 3
0x93166E: jz      loc_9315B8
0x931674: jmp     loc_9315A8
0x931679: test    ebx, ebx
0x93167B: mov     esi, [esp+220h+arg_0]
0x931682: mov     byte ptr [esi], 0
0x931685: js      short loc_931659
0x931687: mov     ecx, [esp+220h+var_20C]
0x93168B: mov     edx, ds:0BA9DE4h
0x931691: mov     eax, large fs:2Ch
0x931697: and     ebx, 3FFFFFFFh
0x93169D: push    14h
0x93169F: shl     ebx, 2
0x9316A2: push    ebx
0x9316A3: push    ecx
0x9316A4: mov     ecx, [eax+edx*4]
0x9316A7: mov     ecx, [ecx+19Ch]
0x9316AD: call    sub_8A75D0
0x9316B2: pop     edi
0x9316B3: mov     eax, esi
0x9316B5: pop     esi
0x9316B6: pop     ebp
0x9316B7: pop     ebx
0x9316B8: add     esp, 210h
0x9316BE: retn

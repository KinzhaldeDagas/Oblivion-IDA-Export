0x905630: push    ebp
0x905631: mov     ebp, esp
0x905633: and     esp, 0FFFFFFF0h
0x905636: sub     esp, 234h
0x90563C: mov     eax, ds:0B30AACh
0x905641: mov     ecx, ds:0BA9DE4h
0x905647: push    ebx
0x905648: mov     ebx, large fs:2Ch
0x90564F: mov     [esp+238h+var_4], eax
0x905656: mov     eax, [ebx+ecx*4]
0x905659: mov     edx, [eax+1A4h]
0x90565F: push    esi
0x905660: cmp     edx, [eax+1A8h]
0x905666: push    edi
0x905667: jnb     short loc_90568D
0x905669: mov     esi, eax
0x90566B: mov     ecx, [esi+1A4h]
0x905671: mov     dword ptr [ecx], offset aTtshapecollect; "TtShapeCollection"
0x905677: rdtsc
0x905679: mov     [esp+240h+var_228], eax
0x90567D: mov     eax, [esp+240h+var_228]
0x905681: mov     [ecx+4], eax
0x905684: add     ecx, 0Ch
0x905687: mov     [esi+1A4h], ecx
0x90568D: mov     eax, [ebp+arg_0]
0x905690: mov     ecx, [eax+8]
0x905693: mov     edx, [ebp+arg_4]
0x905696: mov     esi, [eax]
0x905698: mov     [esp+240h+var_218], ecx
0x90569C: mov     ecx, [edx]
0x90569E: mov     [esp+240h+var_214], eax
0x9056A2: mov     eax, [ecx]
0x9056A4: call    dword ptr [eax+8]
0x9056A7: mov     edx, [esi]
0x9056A9: mov     ecx, esi
0x9056AB: mov     [esp+240h+var_228], eax
0x9056AF: call    dword ptr [edx+20h]
0x9056B2: mov     edi, eax
0x9056B4: cmp     edi, 0FFFFFFFFh
0x9056B7: jz      loc_905746
0x9056BD: mov     ebx, [ebp+arg_8]
0x9056C0: mov     edx, [ebp+arg_0]
0x9056C3: mov     ecx, [ebx+4]
0x9056C6: mov     eax, [ecx]
0x9056C8: push    edi
0x9056C9: push    esi
0x9056CA: push    edx
0x9056CB: mov     edx, [ebp+arg_4]
0x9056CE: push    edx
0x9056CF: push    ebx
0x9056D0: lea     edx, [esp+254h+var_221]
0x9056D4: push    edx
0x9056D5: call    dword ptr [eax]
0x9056D7: cmp     byte ptr [eax], 0
0x9056DA: jz      short loc_905730
0x9056DC: mov     eax, [esi]
0x9056DE: lea     ecx, [esp+240h+var_210]
0x9056E2: push    ecx
0x9056E3: push    edi
0x9056E4: mov     ecx, esi
0x9056E6: call    dword ptr [eax+28h]
0x9056E9: mov     [esp+240h+var_220], eax
0x9056ED: mov     [esp+240h+var_21C], edi
0x9056F1: mov     edx, [eax]
0x9056F3: mov     ecx, eax
0x9056F5: call    dword ptr [edx+8]
0x9056F8: mov     ecx, [ebx]
0x9056FA: mov     edx, [esp+240h+var_228]
0x9056FE: shl     eax, 5
0x905701: add     eax, ecx
0x905703: movzx   eax, byte ptr [eax+edx+190h]
0x90570B: mov     edx, [ebp+arg_C]
0x90570E: push    edx
0x90570F: mov     edx, [ebp+arg_4]
0x905712: push    ebx
0x905713: push    edx
0x905714: lea     edx, [esp+24Ch+var_220]
0x905718: lea     eax, [eax+eax*4]
0x90571B: push    edx
0x90571C: call    dword ptr [ecx+eax*4+994h]
0x905723: mov     eax, [ebp+arg_C]
0x905726: mov     cl, [eax+4]
0x905729: add     esp, 10h
0x90572C: test    cl, cl
0x90572E: jnz     short loc_90573F
0x905730: mov     edx, [esi]
0x905732: push    edi
0x905733: mov     ecx, esi
0x905735: call    dword ptr [edx+24h]
0x905738: mov     edi, eax
0x90573A: cmp     edi, 0FFFFFFFFh
0x90573D: jnz     short loc_9056C0
0x90573F: mov     ebx, large fs:2Ch
0x905746: mov     ecx, ds:0BA9DE4h
0x90574C: mov     eax, [ebx+ecx*4]
0x90574F: mov     edx, [eax+1A4h]
0x905755: cmp     edx, [eax+1A8h]
0x90575B: jnb     short loc_905781
0x90575D: mov     esi, eax
0x90575F: mov     ecx, [esi+1A4h]
0x905765: mov     dword ptr [ecx], offset aEt; "Et"
0x90576B: rdtsc
0x90576D: mov     [esp+240h+var_228], eax
0x905771: mov     eax, [esp+240h+var_228]
0x905775: mov     [ecx+4], eax
0x905778: add     ecx, 0Ch
0x90577B: mov     [esi+1A4h], ecx
0x905781: mov     ecx, [esp+240h+var_4]
0x905788: call    @__security_check_cookie@4; __security_check_cookie(x)
0x90578D: pop     edi
0x90578E: pop     esi
0x90578F: pop     ebx
0x905790: mov     esp, ebp
0x905792: pop     ebp
0x905793: retn

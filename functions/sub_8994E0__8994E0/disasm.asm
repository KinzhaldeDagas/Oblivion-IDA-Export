0x8994E0: sub     esp, 10h
0x8994E3: push    esi
0x8994E4: mov     esi, ecx
0x8994E6: mov     eax, [esi+88h]
0x8994EC: test    eax, eax
0x8994EE: jz      short loc_89951E
0x8994F0: mov     ecx, [esp+14h+arg_4]
0x8994F4: mov     eax, [esp+14h+arg_0]
0x8994F8: lea     edx, [esp+14h+var_C]
0x8994FC: mov     [esp+14h+var_4], ecx
0x899500: mov     ecx, [esi+80h]
0x899506: push    edx
0x899507: mov     [esp+18h+var_C], 1
0x89950C: mov     [esp+18h+var_8], eax
0x899510: call    sub_8D8830
0x899515: xor     eax, eax
0x899517: pop     esi
0x899518: add     esp, 10h
0x89951B: retn    8
0x89951E: push    ebx
0x89951F: mov     ebx, ds:0BA9DE4h
0x899525: push    ebp
0x899526: push    edi
0x899527: mov     edi, large fs:2Ch
0x89952E: mov     eax, [edi+ebx*4]
0x899531: mov     ecx, [eax+1A4h]
0x899537: cmp     ecx, [eax+1A8h]
0x89953D: jnb     short loc_89956A
0x89953F: mov     ebp, eax
0x899541: mov     ecx, [ebp+1A4h]
0x899547: mov     dword ptr [ecx], offset aLtaddentity; "LtAddEntity"
0x89954D: mov     dword ptr [ecx+0Ch], offset aIsland; "Island"
0x899554: rdtsc
0x899556: mov     [esp+20h+var_10], eax
0x89955A: mov     edx, [esp+20h+var_10]
0x89955E: mov     [ecx+4], edx
0x899561: add     ecx, 10h
0x899564: mov     [ebp+1A4h], ecx
0x89956A: mov     ebp, [esp+20h+arg_0]
0x89956E: mov     eax, [ebp+1Ch]
0x899571: test    eax, eax
0x899573: jnz     short loc_899580
0x899575: mov     eax, [ebp+0]
0x899578: mov     ecx, ebp
0x89957A: call    dword ptr [eax+0Ch]
0x89957D: mov     [ebp+1Ch], eax
0x899580: mov     ecx, [ebp+50h]
0x899583: add     ecx, 10h
0x899586: push    ecx; int
0x899587: push    0; int
0x899589: push    0; float
0x89958B: call    sub_8DD0C0
0x899590: add     esp, 0Ch
0x899593: mov     ecx, ebp
0x899595: mov     byte ptr [esi+91h], 0
0x89959C: call    sub_8BC720
0x8995A1: mov     edx, [esp+20h+arg_4]
0x8995A5: push    edx
0x8995A6: push    ebp
0x8995A7: push    esi
0x8995A8: call    sub_8CB640
0x8995AD: mov     eax, [esi+88h]
0x8995B3: add     esp, 0Ch
0x8995B6: inc     eax
0x8995B7: mov     [esi+88h], eax
0x8995BD: mov     eax, [edi+ebx*4]
0x8995C0: mov     byte ptr [esi+91h], 1
0x8995C7: mov     ecx, [eax+1A4h]
0x8995CD: cmp     ecx, [eax+1A8h]
0x8995D3: jnb     short loc_8995FA
0x8995D5: mov     ecx, [eax+1A4h]
0x8995DB: mov     dword ptr [ecx], offset aStbroadphase; "StBroadphase"
0x8995E1: rdtsc
0x8995E3: mov     [esp+20h+arg_0], eax
0x8995E7: mov     edx, [esp+20h+arg_0]
0x8995EB: mov     eax, [edi+ebx*4]
0x8995EE: mov     [ecx+4], edx
0x8995F1: add     ecx, 0Ch
0x8995F4: mov     [eax+1A4h], ecx
0x8995FA: push    ebp
0x8995FB: push    esi
0x8995FC: call    sub_8CC800
0x899601: mov     eax, [edi+ebx*4]
0x899604: mov     ecx, [eax+1A4h]
0x89960A: mov     edx, [eax+1A8h]
0x899610: add     esp, 8
0x899613: cmp     ecx, edx
0x899615: jnb     short loc_89963C
0x899617: mov     ecx, [eax+1A4h]
0x89961D: mov     dword ptr [ecx], offset aStcallbacks; "StCallbacks"
0x899623: rdtsc
0x899625: mov     [esp+20h+arg_0], eax
0x899629: mov     edx, [esp+20h+arg_0]
0x89962D: mov     eax, [edi+ebx*4]
0x899630: mov     [ecx+4], edx
0x899633: add     ecx, 0Ch
0x899636: mov     [eax+1A4h], ecx
0x89963C: push    ebp
0x89963D: push    esi
0x89963E: call    sub_8DC380
0x899643: push    ebp
0x899644: call    sub_8DBEF0
0x899649: mov     eax, [esi+88h]
0x89964F: add     esp, 0Ch
0x899652: dec     eax
0x899653: mov     [esi+88h], eax
0x899659: jnz     short loc_899676
0x89965B: mov     eax, [esi+84h]
0x899661: test    eax, eax
0x899663: jz      short loc_899676
0x899665: mov     al, [esi+90h]
0x89966B: test    al, al
0x89966D: jnz     short loc_899676
0x89966F: mov     ecx, esi
0x899671: call    sub_899210
0x899676: mov     eax, [edi+ebx*4]
0x899679: mov     ecx, [eax+1A4h]
0x89967F: cmp     ecx, [eax+1A8h]
0x899685: jnb     short loc_8996AB
0x899687: mov     edi, eax
0x899689: mov     ecx, [edi+1A4h]
0x89968F: mov     dword ptr [ecx], offset aLt_0; "lt"
0x899695: rdtsc
0x899697: mov     [esp+20h+arg_0], eax
0x89969B: mov     edx, [esp+20h+arg_0]
0x89969F: mov     [ecx+4], edx
0x8996A2: add     ecx, 0Ch
0x8996A5: mov     [edi+1A4h], ecx
0x8996AB: pop     edi
0x8996AC: mov     eax, ebp
0x8996AE: pop     ebp
0x8996AF: pop     ebx
0x8996B0: pop     esi
0x8996B1: add     esp, 10h
0x8996B4: retn    8

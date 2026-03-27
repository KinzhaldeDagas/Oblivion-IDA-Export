0x919490: push    ebp
0x919491: mov     ebp, esp
0x919493: and     esp, 0FFFFFFF0h
0x919496: sub     esp, 94h
0x91949C: mov     edx, large fs:2Ch
0x9194A3: push    ebx
0x9194A4: push    esi
0x9194A5: mov     esi, ds:0BA9DE4h
0x9194AB: mov     eax, [edx+esi*4]
0x9194AE: mov     ebx, [eax+1A8h]
0x9194B4: push    edi
0x9194B5: mov     edi, [eax+1A4h]
0x9194BB: cmp     edi, ebx
0x9194BD: mov     [esp+0A0h+var_80], ecx
0x9194C1: jnb     short loc_9194E7
0x9194C3: mov     edi, eax
0x9194C5: mov     esi, [edi+1A4h]
0x9194CB: mov     dword ptr [esi], offset aTthksimulation; "TthkSimulationIslandViewer"
0x9194D1: rdtsc
0x9194D3: mov     dword ptr [esp+0A0h+var_98+8], eax
0x9194D7: mov     eax, dword ptr [esp+0A0h+var_98+8]
0x9194DB: mov     [esi+4], eax
0x9194DE: add     esi, 0Ch
0x9194E1: mov     [edi+1A4h], esi
0x9194E7: mov     al, [ecx+4]
0x9194EA: test    al, al
0x9194EC: jz      loc_9198B0
0x9194F2: mov     ecx, [ebp+arg_0]
0x9194F5: mov     eax, [ecx+3Ch]
0x9194F8: mov     ebx, [esp+0A0h+var_80]
0x9194FC: cmp     eax, [ebx+18h]
0x9194FF: mov     dword ptr [esp+0A0h+var_98+8], eax
0x919503: jle     loc_919673
0x919509: mov     edi, [ebx+18h]
0x91950C: add     ebx, 14h
0x91950F: cmp     eax, edi
0x919511: jge     short loc_91953A
0x919513: mov     esi, eax
0x919515: shl     esi, 7
0x919518: sub     edi, eax
0x91951A: lea     ebx, [ebx+0]
0x919520: mov     edx, [ebx]
0x919522: mov     eax, [edx+esi]
0x919525: lea     ecx, [edx+esi]
0x919528: push    0
0x91952A: call    dword ptr [eax]
0x91952C: add     esi, 80h ; '€'
0x919532: dec     edi
0x919533: jnz     short loc_919520
0x919535: jmp     loc_91966C
0x91953A: mov     ecx, [ebx+8]
0x91953D: mov     [esp+0A0h+var_84], ecx
0x919541: and     ecx, 3FFFFFFFh
0x919547: cmp     eax, ecx
0x919549: jle     loc_919630
0x91954F: add     ecx, ecx
0x919551: cmp     eax, ecx
0x919553: jge     short loc_919557
0x919555: mov     eax, ecx
0x919557: test    eax, eax
0x919559: mov     ecx, [ebx]
0x91955B: mov     [esp+0A0h+var_7C+0Ch], ecx
0x91955F: mov     dword ptr [ebx], 0
0x919565: mov     dword ptr [ebx+4], 0
0x91956C: mov     dword ptr [ebx+8], 80000000h
0x919573: jle     short loc_91958E
0x919575: xor     edx, edx
0x919577: test    eax, eax
0x919579: setl    dl
0x91957C: push    80h ; '€'
0x919581: dec     edx
0x919582: and     eax, edx
0x919584: push    eax
0x919585: push    ebx
0x919586: call    sub_8A6E40
0x91958B: add     esp, 0Ch
0x91958E: test    edi, edi
0x919590: mov     esi, [ebx]
0x919592: jle     short loc_9195C5
0x919594: mov     eax, [esp+0A0h+var_7C+0Ch]
0x919598: sub     eax, esi
0x91959A: mov     dword ptr [esp+0A0h+var_98+0Ch], eax
0x91959E: mov     [esp+0A0h+var_88], edi
0x9195A2: test    esi, esi
0x9195A4: jz      short loc_9195B4
0x9195A6: add     eax, esi
0x9195A8: push    eax
0x9195A9: mov     ecx, esi
0x9195AB: call    sub_9193A0
0x9195B0: mov     eax, dword ptr [esp+0A0h+var_98+0Ch]
0x9195B4: mov     ecx, [esp+0A0h+var_88]
0x9195B8: add     esi, 80h ; '€'
0x9195BE: dec     ecx
0x9195BF: mov     [esp+0A0h+var_88], ecx
0x9195C3: jnz     short loc_9195A2
0x9195C5: test    edi, edi
0x9195C7: mov     [ebx+4], edi
0x9195CA: jle     short loc_9195ED
0x9195CC: mov     esi, [esp+0A0h+var_7C+0Ch]
0x9195D0: mov     [esp+0A0h+var_88], edi
0x9195D4: mov     eax, [esi]
0x9195D6: push    0
0x9195D8: mov     ecx, esi
0x9195DA: call    dword ptr [eax]
0x9195DC: mov     eax, [esp+0A0h+var_88]
0x9195E0: add     esi, 80h ; '€'
0x9195E6: dec     eax
0x9195E7: mov     [esp+0A0h+var_88], eax
0x9195EB: jnz     short loc_9195D4
0x9195ED: mov     eax, [esp+0A0h+var_84]
0x9195F1: test    eax, eax
0x9195F3: js      short loc_919630
0x9195F5: mov     ecx, large fs:2Ch
0x9195FC: mov     edx, ds:0BA9DE4h
0x919602: mov     eax, [ecx+edx*4]
0x919605: mov     eax, [eax+19Ch]
0x91960B: test    eax, eax
0x91960D: jnz     short loc_919614
0x91960F: mov     eax, ds:0BA7D9Ch
0x919614: mov     ecx, [esp+0A0h+var_84]
0x919618: and     ecx, 3FFFFFFFh
0x91961E: shl     ecx, 7
0x919621: push    14h
0x919623: push    ecx
0x919624: mov     ecx, [esp+0A8h+var_7C+0Ch]
0x919628: push    ecx
0x919629: mov     ecx, eax
0x91962B: call    sub_8A75D0
0x919630: mov     ecx, dword ptr [esp+0A0h+var_98+8]
0x919634: cmp     edi, ecx
0x919636: mov     eax, [ebx]
0x919638: jge     short loc_91966C
0x91963A: mov     esi, edi
0x91963C: shl     esi, 7
0x91963F: add     esi, eax
0x919641: mov     eax, ecx
0x919643: sub     eax, edi
0x919645: mov     [esp+0A0h+var_84], eax
0x919649: lea     esp, [esp+0]
0x919650: test    esi, esi
0x919652: jz      short loc_91965B
0x919654: mov     ecx, esi
0x919656: call    sub_949300
0x91965B: mov     eax, [esp+0A0h+var_84]
0x91965F: add     esi, 80h ; '€'
0x919665: dec     eax
0x919666: mov     [esp+0A0h+var_84], eax
0x91966A: jnz     short loc_919650
0x91966C: mov     edx, dword ptr [esp+0A0h+var_98+8]
0x919670: mov     [ebx+4], edx
0x919673: mov     ecx, [ebp+arg_0]
0x919676: mov     esi, [ecx+3Ch]
0x919679: xor     eax, eax
0x91967B: cmp     esi, eax
0x91967D: mov     [esp+0A0h+var_7C], eax
0x919681: mov     [esp+0A0h+var_7C+4], eax
0x919685: mov     [esp+0A0h+var_7C+8], 80000000h
0x91968D: jle     short loc_9196A7
0x91968F: test    esi, esi
0x919691: setl    al
0x919694: push    4
0x919696: lea     edx, [esp+0A4h+var_7C]
0x91969A: dec     eax
0x91969B: and     eax, esi
0x91969D: push    eax
0x91969E: push    edx
0x91969F: call    sub_8A6E40
0x9196A4: add     esp, 0Ch
0x9196A7: mov     ecx, [ebp+arg_0]
0x9196AA: xor     eax, eax
0x9196AC: mov     [esp+0A0h+var_7C+4], esi
0x9196B0: mov     esi, [ecx+3Ch]
0x9196B3: cmp     esi, eax
0x9196B5: mov     [esp+0A0h+var_5C], eax
0x9196B9: mov     [esp+0A0h+var_5C+4], eax
0x9196BD: mov     [esp+0A0h+var_5C+8], 80000000h
0x9196C5: jle     short loc_9196DF
0x9196C7: test    esi, esi
0x9196C9: setl    al
0x9196CC: push    20h ; ' '
0x9196CE: lea     edx, [esp+0A4h+var_5C]
0x9196D2: dec     eax
0x9196D3: and     eax, esi
0x9196D5: push    eax
0x9196D6: push    edx
0x9196D7: call    sub_8A6E40
0x9196DC: add     esp, 0Ch
0x9196DF: mov     eax, [ebp+arg_0]
0x9196E2: mov     ecx, [eax+3Ch]
0x9196E5: xor     ebx, ebx
0x9196E7: test    ecx, ecx
0x9196E9: mov     [esp+0A0h+var_5C+4], esi
0x9196ED: jle     loc_91981A
0x9196F3: mov     dword ptr [esp+0A0h+var_98+0Ch], 0FF7FFFFFh
0x9196FB: movss   xmm0, dword ptr [esp+0A0h+var_98+0Ch]
0x919701: mov     dword ptr [esp+0A0h+var_98+0Ch], 7F7FFFFFh
0x919709: movss   xmm1, dword ptr [esp+0A0h+var_98+0Ch]
0x91970F: xor     eax, eax
0x919711: shufps  xmm0, xmm0, 0
0x919715: shufps  xmm1, xmm1, 0
0x919719: movaps  xmmword ptr [esp+0A0h+var_44+4], xmm0
0x91971E: movaps  [esp+0A0h+anonymous_0], xmm1
0x919723: mov     dword ptr [esp+0A0h+var_98+8], eax
0x919727: mov     [esp+0A0h+var_88], eax
0x91972B: jmp     short loc_919737
0x91972D: movaps  xmm0, xmmword ptr [esp+0A0h+var_44+4]
0x919732: movaps  xmm1, [esp+0A0h+anonymous_0]
0x919737: mov     ecx, [ebp+arg_0]
0x91973A: mov     edx, [ecx+38h]
0x91973D: mov     esi, [edx+ebx*4]
0x919740: mov     eax, [esp+0A0h+var_88]
0x919744: mov     ecx, [esp+0A0h+var_5C]
0x919748: movaps  xmmword ptr [eax+ecx+10h], xmm0
0x91974D: mov     edx, [esp+0A0h+var_5C]
0x919751: movaps  xmmword ptr [eax+edx], xmm1
0x919755: add     esi, 34h ; '4'
0x919758: movaps  xmmword ptr [esp+0A0h+var_7C+0Ch], xmm0
0x91975D: movaps  xmmword ptr [esp+0A0h+var_5C+0Ch], xmm1
0x919762: mov     eax, [esi+4]
0x919765: xor     edi, edi
0x919767: test    eax, eax
0x919769: jle     short loc_9197CE
0x91976B: jmp     short loc_919770
0x91976D: align 10h
0x919770: mov     eax, [esi]
0x919772: mov     eax, [eax+edi*4]
0x919775: mov     ecx, [eax+14h]
0x919778: add     eax, 14h
0x91977B: test    ecx, ecx
0x91977D: jz      short loc_9197C6
0x91977F: mov     ecx, [ebp+arg_0]
0x919782: mov     ecx, [ecx+64h]
0x919785: mov     edx, [ecx]
0x919787: lea     ecx, [esp+0A0h+var_20]
0x91978E: push    ecx
0x91978F: add     eax, 14h
0x919792: push    eax
0x919793: mov     eax, [ebp+arg_0]
0x919796: mov     ecx, [eax+64h]
0x919799: call    dword ptr [edx+24h]
0x91979C: movaps  xmm0, [esp+0A0h+anonymous_1]
0x9197A4: movaps  xmm1, xmmword ptr [esp+0A0h+var_7C+0Ch]
0x9197A9: maxps   xmm1, xmm0
0x9197AC: movaps  xmm0, [esp+0A0h+var_20]
0x9197B4: movaps  xmmword ptr [esp+0A0h+var_7C+0Ch], xmm1
0x9197B9: movaps  xmm1, xmmword ptr [esp+0A0h+var_5C+0Ch]
0x9197BE: minps   xmm1, xmm0
0x9197C1: movaps  xmmword ptr [esp+0A0h+var_5C+0Ch], xmm1
0x9197C6: mov     eax, [esi+4]
0x9197C9: inc     edi
0x9197CA: cmp     edi, eax
0x9197CC: jl      short loc_919770
0x9197CE: mov     edi, [esp+0A0h+var_80]
0x9197D2: mov     esi, dword ptr [esp+0A0h+var_98+8]
0x9197D6: lea     ecx, [esp+0A0h+var_7C+0Ch]
0x9197DA: push    ecx
0x9197DB: mov     ecx, [edi+14h]
0x9197DE: lea     edx, [esp+0A4h+var_5C+0Ch]
0x9197E2: push    edx
0x9197E3: add     ecx, esi
0x9197E5: call    sub_9492E0
0x9197EA: mov     edx, [esp+0A0h+var_88]
0x9197EE: mov     eax, [edi+14h]
0x9197F1: mov     ecx, [esp+0A0h+var_7C]
0x9197F5: add     eax, esi
0x9197F7: add     edx, 20h ; ' '
0x9197FA: mov     [esp+0A0h+var_88], edx
0x9197FE: mov     edx, [ebp+arg_0]
0x919801: mov     [ecx+ebx*4], eax
0x919804: mov     eax, [edx+3Ch]
0x919807: inc     ebx
0x919808: add     esi, 80h ; '€'
0x91980E: cmp     ebx, eax
0x919810: mov     dword ptr [esp+0A0h+var_98+8], esi
0x919814: jl      loc_91972D
0x91981A: mov     eax, [esp+0A0h+var_80]
0x91981E: mov     ecx, [eax-10h]
0x919821: mov     eax, ds:0BA8418h
0x919826: mov     edx, [ecx]
0x919828: push    eax
0x919829: push    0FF0000FFh
0x91982E: lea     eax, [esp+0A8h+var_7C]
0x919832: push    eax
0x919833: call    dword ptr [edx+24h]
0x919836: mov     eax, [esp+0A0h+var_5C+8]
0x91983A: test    eax, eax
0x91983C: js      short loc_919873
0x91983E: mov     ecx, ds:0BA9DE4h
0x919844: mov     edx, large fs:2Ch
0x91984B: mov     ecx, [edx+ecx*4]
0x91984E: mov     ecx, [ecx+19Ch]
0x919854: test    ecx, ecx
0x919856: jnz     short loc_91985E
0x919858: mov     ecx, ds:0BA7D9Ch
0x91985E: mov     edx, [esp+0A0h+var_5C]
0x919862: and     eax, 3FFFFFFFh
0x919867: push    14h
0x919869: shl     eax, 5
0x91986C: push    eax
0x91986D: push    edx
0x91986E: call    sub_8A75D0
0x919873: mov     eax, [esp+0A0h+var_7C+8]
0x919877: test    eax, eax
0x919879: js      short loc_9198B0
0x91987B: mov     ecx, large fs:2Ch
0x919882: mov     edx, ds:0BA9DE4h
0x919888: mov     ecx, [ecx+edx*4]
0x91988B: mov     ecx, [ecx+19Ch]
0x919891: test    ecx, ecx
0x919893: jnz     short loc_91989B
0x919895: mov     ecx, ds:0BA7D9Ch
0x91989B: mov     edx, [esp+0A0h+var_7C]
0x91989F: and     eax, 3FFFFFFFh
0x9198A4: push    14h
0x9198A6: shl     eax, 2
0x9198A9: push    eax
0x9198AA: push    edx
0x9198AB: call    sub_8A75D0
0x9198B0: mov     eax, [esp+0A0h+var_80]
0x9198B4: mov     cl, [eax+5]
0x9198B7: test    cl, cl
0x9198B9: jz      loc_919BEC
0x9198BF: mov     ecx, [ebp+arg_0]
0x9198C2: mov     eax, [ecx+48h]
0x9198C5: mov     ebx, [esp+0A0h+var_80]
0x9198C9: cmp     eax, [ebx+0Ch]
0x9198CC: mov     [esp+0A0h+var_88], eax
0x9198D0: jle     loc_919A3A
0x9198D6: mov     edi, [ebx+0Ch]
0x9198D9: add     ebx, 8
0x9198DC: cmp     eax, edi
0x9198DE: jge     short loc_919901
0x9198E0: mov     esi, eax
0x9198E2: shl     esi, 7
0x9198E5: sub     edi, eax
0x9198E7: mov     edx, [ebx]
0x9198E9: mov     eax, [esi+edx]
0x9198EC: lea     ecx, [esi+edx]
0x9198EF: push    0
0x9198F1: call    dword ptr [eax]
0x9198F3: add     esi, 80h ; '€'
0x9198F9: dec     edi
0x9198FA: jnz     short loc_9198E7
0x9198FC: jmp     loc_919A33
0x919901: mov     ecx, [ebx+8]
0x919904: mov     [esp+0A0h+var_84], ecx
0x919908: and     ecx, 3FFFFFFFh
0x91990E: cmp     eax, ecx
0x919910: jle     loc_9199FE
0x919916: add     ecx, ecx
0x919918: cmp     eax, ecx
0x91991A: jge     short loc_91991E
0x91991C: mov     eax, ecx
0x91991E: test    eax, eax
0x919920: mov     ecx, [ebx]
0x919922: mov     [esp+0A0h+var_7C+0Ch], ecx
0x919926: mov     dword ptr [ebx], 0
0x91992C: mov     dword ptr [ebx+4], 0
0x919933: mov     dword ptr [ebx+8], 80000000h
0x91993A: jle     short loc_919955
0x91993C: xor     edx, edx
0x91993E: test    eax, eax
0x919940: setl    dl
0x919943: push    80h ; '€'
0x919948: dec     edx
0x919949: and     eax, edx
0x91994B: push    eax
0x91994C: push    ebx
0x91994D: call    sub_8A6E40
0x919952: add     esp, 0Ch
0x919955: test    edi, edi
0x919957: mov     esi, [ebx]
0x919959: jle     short loc_919993
0x91995B: mov     eax, [esp+0A0h+var_7C+0Ch]
0x91995F: sub     eax, esi
0x919961: mov     dword ptr [esp+0A0h+var_98+0Ch], eax
0x919965: mov     dword ptr [esp+0A0h+var_98+8], edi
0x919969: lea     esp, [esp+0]
0x919970: test    esi, esi
0x919972: jz      short loc_919982
0x919974: add     eax, esi
0x919976: push    eax
0x919977: mov     ecx, esi
0x919979: call    sub_9193A0
0x91997E: mov     eax, dword ptr [esp+0A0h+var_98+0Ch]
0x919982: mov     ecx, dword ptr [esp+0A0h+var_98+8]
0x919986: add     esi, 80h ; '€'
0x91998C: dec     ecx
0x91998D: mov     dword ptr [esp+0A0h+var_98+8], ecx
0x919991: jnz     short loc_919970
0x919993: test    edi, edi
0x919995: mov     [ebx+4], edi
0x919998: jle     short loc_9199BB
0x91999A: mov     esi, [esp+0A0h+var_7C+0Ch]
0x91999E: mov     dword ptr [esp+0A0h+var_98+8], edi
0x9199A2: mov     eax, [esi]
0x9199A4: push    0
0x9199A6: mov     ecx, esi
0x9199A8: call    dword ptr [eax]
0x9199AA: mov     eax, dword ptr [esp+0A0h+var_98+8]
0x9199AE: add     esi, 80h ; '€'
0x9199B4: dec     eax
0x9199B5: mov     dword ptr [esp+0A0h+var_98+8], eax
0x9199B9: jnz     short loc_9199A2
0x9199BB: mov     eax, [esp+0A0h+var_84]
0x9199BF: test    eax, eax
0x9199C1: js      short loc_9199FE
0x9199C3: mov     ecx, large fs:2Ch
0x9199CA: mov     edx, ds:0BA9DE4h
0x9199D0: mov     eax, [ecx+edx*4]
0x9199D3: mov     eax, [eax+19Ch]
0x9199D9: test    eax, eax
0x9199DB: jnz     short loc_9199E2
0x9199DD: mov     eax, ds:0BA7D9Ch
0x9199E2: mov     ecx, [esp+0A0h+var_84]
0x9199E6: and     ecx, 3FFFFFFFh
0x9199EC: shl     ecx, 7
0x9199EF: push    14h
0x9199F1: push    ecx
0x9199F2: mov     ecx, [esp+0A8h+var_7C+0Ch]
0x9199F6: push    ecx
0x9199F7: mov     ecx, eax
0x9199F9: call    sub_8A75D0
0x9199FE: mov     ecx, [esp+0A0h+var_88]
0x919A02: cmp     edi, ecx
0x919A04: mov     eax, [ebx]
0x919A06: jge     short loc_919A33
0x919A08: mov     esi, edi
0x919A0A: shl     esi, 7
0x919A0D: add     esi, eax
0x919A0F: mov     eax, ecx
0x919A11: sub     eax, edi
0x919A13: mov     dword ptr [esp+0A0h+var_98+8], eax
0x919A17: test    esi, esi
0x919A19: jz      short loc_919A22
0x919A1B: mov     ecx, esi
0x919A1D: call    sub_949300
0x919A22: mov     eax, dword ptr [esp+0A0h+var_98+8]
0x919A26: add     esi, 80h ; '€'
0x919A2C: dec     eax
0x919A2D: mov     dword ptr [esp+0A0h+var_98+8], eax
0x919A31: jnz     short loc_919A17
0x919A33: mov     edx, [esp+0A0h+var_88]
0x919A37: mov     [ebx+4], edx
0x919A3A: mov     ecx, [ebp+arg_0]
0x919A3D: mov     esi, [ecx+48h]
0x919A40: xor     eax, eax
0x919A42: cmp     esi, eax
0x919A44: mov     [esp+0A0h+var_7C], eax
0x919A48: mov     [esp+0A0h+var_7C+4], eax
0x919A4C: mov     [esp+0A0h+var_7C+8], 80000000h
0x919A54: jle     short loc_919A6E
0x919A56: test    esi, esi
0x919A58: setl    al
0x919A5B: push    4
0x919A5D: lea     edx, [esp+0A4h+var_7C]
0x919A61: dec     eax
0x919A62: and     eax, esi
0x919A64: push    eax
0x919A65: push    edx
0x919A66: call    sub_8A6E40
0x919A6B: add     esp, 0Ch
0x919A6E: mov     eax, [ebp+arg_0]
0x919A71: mov     ecx, [eax+48h]
0x919A74: xor     ebx, ebx
0x919A76: test    ecx, ecx
0x919A78: mov     [esp+0A0h+var_7C+4], esi
0x919A7C: mov     dword ptr [esp+0A0h+var_98+8], ebx
0x919A80: jle     loc_919B93
0x919A86: mov     dword ptr [esp+0A0h+var_98+0Ch], 0FF7FFFFFh
0x919A8E: movss   xmm0, dword ptr [esp+0A0h+var_98+0Ch]
0x919A94: mov     dword ptr [esp+0A0h+var_98+0Ch], 7F7FFFFFh
0x919A9C: movss   xmm1, dword ptr [esp+0A0h+var_98+0Ch]
0x919AA2: shufps  xmm0, xmm0, 0
0x919AA6: shufps  xmm1, xmm1, 0
0x919AAA: movaps  [esp+0A0h+anonymous_0], xmm0
0x919AAF: movaps  xmmword ptr [esp+0A0h+var_44+4], xmm1
0x919AB4: mov     [esp+0A0h+var_84], ebx
0x919AB8: jmp     short loc_919AC4
0x919ABA: movaps  xmm0, [esp+0A0h+anonymous_0]
0x919ABF: movaps  xmm1, xmmword ptr [esp+0A0h+var_44+4]
0x919AC4: mov     eax, [ebp+arg_0]
0x919AC7: mov     ecx, [eax+44h]
0x919ACA: mov     esi, [ecx+ebx*4]
0x919ACD: mov     edx, [eax+74h]
0x919AD0: fld     dword ptr [edx+8]
0x919AD3: add     esi, 34h ; '4'
0x919AD6: fmul    dword ptr ds:0A3D65Ch
0x919ADC: movaps  xmmword ptr [esp+0A0h+var_5C+0Ch], xmm0
0x919AE1: movaps  xmmword ptr [esp+0A0h+var_7C+0Ch], xmm1
0x919AE6: mov     eax, [esi+4]
0x919AE9: xor     edi, edi
0x919AEB: fstp    dword ptr [esp+0A0h+var_98+0Ch]
0x919AEF: test    eax, eax
0x919AF1: jle     short loc_919B4E
0x919AF3: mov     eax, [esi]
0x919AF5: mov     eax, [eax+edi*4]
0x919AF8: mov     ecx, [eax+14h]
0x919AFB: add     eax, 14h
0x919AFE: test    ecx, ecx
0x919B00: jz      short loc_919B46
0x919B02: mov     eax, [eax+8]
0x919B05: mov     edx, [ecx]
0x919B07: lea     ebx, [esp+0A0h+var_20]
0x919B0E: push    ebx
0x919B0F: mov     ebx, dword ptr [esp+0A4h+var_98+0Ch]
0x919B13: push    ebx
0x919B14: push    eax
0x919B15: call    dword ptr [edx+0Ch]
0x919B18: movaps  xmm0, [esp+0A0h+anonymous_1]
0x919B20: movaps  xmm1, xmmword ptr [esp+0A0h+var_5C+0Ch]
0x919B25: mov     ebx, dword ptr [esp+0A0h+var_98+8]
0x919B29: maxps   xmm1, xmm0
0x919B2C: movaps  xmm0, [esp+0A0h+var_20]
0x919B34: movaps  xmmword ptr [esp+0A0h+var_5C+0Ch], xmm1
0x919B39: movaps  xmm1, xmmword ptr [esp+0A0h+var_7C+0Ch]
0x919B3E: minps   xmm1, xmm0
0x919B41: movaps  xmmword ptr [esp+0A0h+var_7C+0Ch], xmm1
0x919B46: mov     eax, [esi+4]
0x919B49: inc     edi
0x919B4A: cmp     edi, eax
0x919B4C: jl      short loc_919AF3
0x919B4E: mov     edi, [esp+0A0h+var_80]
0x919B52: mov     esi, [esp+0A0h+var_84]
0x919B56: lea     ecx, [esp+0A0h+var_5C+0Ch]
0x919B5A: push    ecx
0x919B5B: mov     ecx, [edi+8]
0x919B5E: lea     edx, [esp+0A4h+var_7C+0Ch]
0x919B62: push    edx
0x919B63: add     ecx, esi
0x919B65: call    sub_9492E0
0x919B6A: mov     eax, [edi+8]
0x919B6D: mov     ecx, [esp+0A0h+var_7C]
0x919B71: mov     edx, [ebp+arg_0]
0x919B74: add     eax, esi
0x919B76: mov     [ecx+ebx*4], eax
0x919B79: mov     eax, [edx+48h]
0x919B7C: inc     ebx
0x919B7D: add     esi, 80h ; '€'
0x919B83: cmp     ebx, eax
0x919B85: mov     dword ptr [esp+0A0h+var_98+8], ebx
0x919B89: mov     [esp+0A0h+var_84], esi
0x919B8D: jl      loc_919ABA
0x919B93: mov     eax, [esp+0A0h+var_80]
0x919B97: mov     ecx, [eax-10h]
0x919B9A: mov     eax, ds:0BA8418h
0x919B9F: mov     edx, [ecx]
0x919BA1: push    eax
0x919BA2: push    0FF008000h
0x919BA7: lea     eax, [esp+0A8h+var_7C]
0x919BAB: push    eax
0x919BAC: call    dword ptr [edx+24h]
0x919BAF: mov     eax, [esp+0A0h+var_7C+8]
0x919BB3: test    eax, eax
0x919BB5: js      short loc_919BEC
0x919BB7: mov     ecx, large fs:2Ch
0x919BBE: mov     edx, ds:0BA9DE4h
0x919BC4: mov     ecx, [ecx+edx*4]
0x919BC7: mov     ecx, [ecx+19Ch]
0x919BCD: test    ecx, ecx
0x919BCF: jnz     short loc_919BD7
0x919BD1: mov     ecx, ds:0BA7D9Ch
0x919BD7: mov     edx, [esp+0A0h+var_7C]
0x919BDB: and     eax, 3FFFFFFFh
0x919BE0: push    14h
0x919BE2: shl     eax, 2
0x919BE5: push    eax
0x919BE6: push    edx
0x919BE7: call    sub_8A75D0
0x919BEC: mov     ecx, large fs:2Ch
0x919BF3: mov     edx, ds:0BA9DE4h
0x919BF9: mov     eax, [ecx+edx*4]
0x919BFC: mov     esi, [eax+1A4h]
0x919C02: cmp     esi, [eax+1A8h]
0x919C08: jnb     short loc_919C2E
0x919C0A: mov     esi, eax
0x919C0C: mov     ecx, [esi+1A4h]
0x919C12: mov     dword ptr [ecx], offset aEt; "Et"
0x919C18: rdtsc
0x919C1A: mov     dword ptr [esp+0A0h+var_98+0Ch], eax
0x919C1E: mov     eax, dword ptr [esp+0A0h+var_98+0Ch]
0x919C22: mov     [ecx+4], eax
0x919C25: add     ecx, 0Ch
0x919C28: mov     [esi+1A4h], ecx
0x919C2E: pop     edi
0x919C2F: pop     esi
0x919C30: pop     ebx
0x919C31: mov     esp, ebp
0x919C33: pop     ebp
0x919C34: retn    8

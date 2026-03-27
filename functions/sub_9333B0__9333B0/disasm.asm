0x9333B0: push    ebp
0x9333B1: mov     ebp, esp
0x9333B3: and     esp, 0FFFFFFF0h
0x9333B6: sub     esp, 94h
0x9333BC: push    ebx
0x9333BD: mov     ebx, [ebp+arg_4]
0x9333C0: push    esi
0x9333C1: cmp     [ebp+arg_10], 2
0x9333C5: setz    al
0x9333C8: xor     ecx, ecx
0x9333CA: cmp     ebx, ecx
0x9333CC: mov     [esp+9Ch+var_32], al
0x9333D0: mov     eax, 80000000h
0x9333D5: push    edi
0x9333D6: mov     [esp+0A0h+var_30], 37A7C5ACh
0x9333DE: mov     [esp+0A0h+var_28], 358637BDh
0x9333E6: mov     [esp+0A0h+var_24], 3727C5ACh
0x9333EE: mov     [esp+0A0h+var_20], 3D4CCCCDh
0x9333F9: mov     [esp+0A0h+var_1C], 358637BDh
0x933404: mov     [esp+0A0h+var_18], 358637BDh
0x93340F: mov     [esp+0A0h+var_14], 322BCC77h
0x93341A: mov     [esp+0A0h+var_10], 358637BDh
0x933425: mov     [esp+0A0h+var_C], 38D1B717h
0x933430: mov     [esp+0A0h+var_8], 3727C5ACh
0x93343B: mov     [esp+0A0h+var_4], 37A7C5ACh
0x933446: mov     [esp+0A0h+var_34], 0
0x93344B: mov     [esp+0A0h+var_2C], 368637BDh
0x933453: mov     [esp+0A0h+var_33], 0
0x933458: mov     [esp+0A0h+var_80], ecx
0x93345C: mov     [esp+0A0h+var_7C], ecx
0x933460: mov     [esp+0A0h+var_78], eax
0x933464: jle     short loc_9334CC
0x933466: mov     esi, [ebp+arg_0]
0x933469: mov     edi, ebx
0x93346B: jmp     short loc_933471
0x93346D: mov     eax, [esp+0A0h+var_78]
0x933471: mov     ecx, [esp+0A0h+var_7C]
0x933475: and     eax, 3FFFFFFFh
0x93347A: cmp     ecx, eax
0x93347C: jnz     short loc_93348D
0x93347E: lea     ecx, [esp+0A0h+var_80]
0x933482: push    10h
0x933484: push    ecx
0x933485: call    sub_8A6EE0
0x93348A: add     esp, 8
0x93348D: mov     ecx, [esp+0A0h+var_7C]
0x933491: mov     edx, [esp+0A0h+var_80]
0x933495: movaps  xmm0, xmmword ptr [esi]
0x933498: mov     eax, ecx
0x93349A: shl     eax, 4
0x93349D: add     eax, edx
0x93349F: inc     ecx
0x9334A0: add     esi, 10h
0x9334A3: dec     edi
0x9334A4: mov     [esp+0A0h+var_7C], ecx
0x9334A8: movaps  xmmword ptr [eax], xmm0
0x9334AB: jnz     short loc_93346D
0x9334AD: mov     eax, [esp+0A0h+var_7C]
0x9334B1: cmp     eax, 1
0x9334B4: jle     short loc_9334CC
0x9334B6: mov     edx, [esp+0A0h+var_80]
0x9334BA: push    offset sub_92C9B0
0x9334BF: dec     eax
0x9334C0: push    eax
0x9334C1: push    0
0x9334C3: push    edx
0x9334C4: call    sub_92B640
0x9334C9: add     esp, 10h
0x9334CC: mov     edx, [esp+0A0h+var_30]
0x9334D0: lea     eax, [esp+0A0h+var_84]
0x9334D4: push    eax; int
0x9334D5: lea     ecx, [esp+0A4h+var_80]
0x9334D9: push    ecx; int
0x9334DA: push    edx; float
0x9334DB: call    sub_92DCA0
0x9334E0: mov     esi, [ebp+arg_C]
0x9334E3: mov     edi, [ebp+arg_8]
0x9334E6: mov     ecx, [esp+0ACh+var_80]
0x9334EA: xor     eax, eax
0x9334EC: push    esi
0x9334ED: mov     [esp+0B0h+var_74], eax
0x9334F1: mov     [esp+0B0h+var_70], eax
0x9334F5: mov     [esi+4], eax
0x9334F8: mov     eax, [esp+0B0h+var_7C]
0x9334FC: push    edi
0x9334FD: push    eax
0x9334FE: push    ecx
0x9334FF: lea     edx, [esp+0BCh+var_34]
0x933506: push    edx
0x933507: mov     [esp+0C0h+var_6C], 80000000h
0x93350F: call    sub_933240
0x933514: mov     eax, [esp+0C0h+var_7C]
0x933518: mov     ecx, [esp+0C0h+var_80]
0x93351C: push    esi
0x93351D: push    edi
0x93351E: push    eax
0x93351F: push    ecx
0x933520: lea     edx, [esp+0D0h+var_34]
0x933527: push    edx
0x933528: lea     eax, [esp+0D4h+var_89]
0x93352C: push    eax
0x93352D: call    sub_9515C0
0x933532: mov     al, [eax]
0x933534: add     esp, 38h
0x933537: test    al, al
0x933539: mov     byte ptr [esp+0A0h+var_84], al
0x93353D: jnz     loc_933668
0x933543: mov     cl, [esp+0A0h+var_32]
0x933547: test    cl, cl
0x933549: jz      loc_9336E4
0x93354F: xor     eax, eax
0x933551: lea     ecx, [esp+0A0h+var_5C]
0x933555: push    ecx
0x933556: mov     [esp+0A4h+var_70], eax
0x93355A: mov     [esp+0A4h+var_88], al
0x93355E: mov     [esp+0A4h+var_5C], eax
0x933562: mov     [esp+0A4h+var_58], eax
0x933566: lea     edx, [esp+0A4h+var_74]
0x93356A: push    edx
0x93356B: lea     eax, [esp+0A8h+var_88]
0x93356F: push    eax
0x933570: lea     ecx, [esp+0ACh+var_50]
0x933574: push    ecx
0x933575: push    esi
0x933576: push    edi
0x933577: lea     edx, [esp+0B8h+var_34]
0x93357E: push    edx
0x93357F: lea     eax, [esp+0BCh+var_89]
0x933583: push    eax
0x933584: mov     [esp+0C0h+var_54], 80000000h
0x93358C: call    sub_930040
0x933591: mov     al, [esp+0C0h+var_88]
0x933595: add     esp, 20h
0x933598: test    al, al
0x93359A: jz      loc_933636
0x9335A0: lea     ecx, [esp+0A0h+var_80]
0x9335A4: push    3A83126Fh; float
0x9335A9: push    ecx; int
0x9335AA: mov     dword ptr [esi+4], 0
0x9335B1: call    sub_92FBD0
0x9335B6: mov     ecx, [esp+0A8h+var_80]
0x9335BA: xor     eax, eax
0x9335BC: lea     edx, [esp+0A8h+var_68]
0x9335C0: push    edx
0x9335C1: mov     [esp+0ACh+var_68], eax
0x9335C5: mov     [esp+0ACh+var_64], eax
0x9335C9: mov     eax, [esp+0ACh+var_7C]
0x9335CD: push    esi
0x9335CE: push    eax
0x9335CF: push    ecx
0x9335D0: lea     edx, [esp+0B8h+var_50]
0x9335D4: push    edx
0x9335D5: mov     [esp+0BCh+var_60], 80000000h
0x9335DD: call    sub_92F270
0x9335E2: mov     eax, [ebp+arg_0]
0x9335E5: push    esi
0x9335E6: push    edi
0x9335E7: push    ebx
0x9335E8: push    eax
0x9335E9: lea     ecx, [esp+0CCh+var_34]
0x9335F0: push    ecx
0x9335F1: lea     edx, [esp+0D0h+var_89]
0x9335F5: push    edx
0x9335F6: call    sub_9515C0
0x9335FB: mov     al, [eax]
0x9335FD: mov     byte ptr [esp+0D4h+var_84], al
0x933601: mov     eax, [esp+0D4h+var_60]
0x933605: add     esp, 34h
0x933608: test    eax, eax
0x93360A: js      short loc_933636
0x93360C: mov     ecx, [esp+0A0h+var_68]
0x933610: mov     edx, large fs:2Ch
0x933617: and     eax, 3FFFFFFFh
0x93361C: push    14h
0x93361E: shl     eax, 4
0x933621: push    eax
0x933622: mov     eax, ds:0BA9DE4h
0x933627: push    ecx
0x933628: mov     ecx, [edx+eax*4]
0x93362B: mov     ecx, [ecx+19Ch]
0x933631: call    sub_8A75D0
0x933636: mov     eax, [esp+0A0h+var_54]
0x93363A: test    eax, eax
0x93363C: js      short loc_933668
0x93363E: mov     edx, [esp+0A0h+var_5C]
0x933642: mov     ecx, ds:0BA9DE4h
0x933648: and     eax, 3FFFFFFFh
0x93364D: push    14h
0x93364F: shl     eax, 5
0x933652: push    eax
0x933653: mov     eax, large fs:2Ch
0x933659: push    edx
0x93365A: mov     edx, [eax+ecx*4]
0x93365D: mov     ecx, [edx+19Ch]
0x933663: call    sub_8A75D0
0x933668: mov     al, [esp+0A0h+var_32]
0x93366C: test    al, al
0x93366E: jz      short loc_9336E0
0x933670: mov     eax, [esp+0A0h+var_6C]
0x933674: test    eax, eax
0x933676: js      short loc_9336A3
0x933678: mov     ecx, ds:0BA9DE4h
0x93367E: mov     edx, large fs:2Ch
0x933685: and     eax, 3FFFFFFFh
0x93368A: shl     eax, 4
0x93368D: push    14h
0x93368F: push    eax
0x933690: mov     eax, [esp+0A8h+var_74]
0x933694: push    eax
0x933695: mov     eax, [edx+ecx*4]
0x933698: mov     ecx, [eax+19Ch]
0x93369E: call    sub_8A75D0
0x9336A3: mov     eax, [esp+0A0h+var_78]
0x9336A7: test    eax, eax
0x9336A9: js      loc_933807
0x9336AF: mov     ecx, [esp+0A0h+var_80]
0x9336B3: mov     edx, large fs:2Ch
0x9336BA: and     eax, 3FFFFFFFh
0x9336BF: push    14h
0x9336C1: shl     eax, 4
0x9336C4: push    eax
0x9336C5: mov     eax, ds:0BA9DE4h
0x9336CA: push    ecx
0x9336CB: mov     ecx, [edx+eax*4]
0x9336CE: mov     ecx, [ecx+19Ch]
0x9336D4: call    sub_8A75D0
0x9336D9: pop     edi
0x9336DA: pop     esi
0x9336DB: pop     ebx
0x9336DC: mov     esp, ebp
0x9336DE: pop     ebp
0x9336DF: retn
0x9336E0: mov     al, byte ptr [esp+0A0h+var_84]
0x9336E4: test    al, al
0x9336E6: mov     [esp+0A0h+var_33], 1
0x9336EB: jnz     loc_9337A2
0x9336F1: mov     edx, [ebp+arg_0]
0x9336F4: push    esi
0x9336F5: push    edi
0x9336F6: push    ebx
0x9336F7: push    edx
0x9336F8: lea     eax, [esp+0B0h+var_34]
0x9336FC: push    eax
0x9336FD: mov     [esp+0B4h+var_34], 1
0x933705: call    sub_933240
0x93370A: mov     ecx, [ebp+arg_0]
0x93370D: push    esi
0x93370E: push    edi
0x93370F: push    ebx
0x933710: push    ecx
0x933711: lea     edx, [esp+0C4h+var_34]
0x933718: push    edx
0x933719: lea     eax, [esp+0C8h+var_89]
0x93371D: push    eax
0x93371E: call    sub_9515C0
0x933723: mov     cl, [eax]
0x933725: add     esp, 2Ch
0x933728: test    cl, cl
0x93372A: jnz     short loc_9337A2
0x93372C: mov     ecx, [ebp+arg_0]
0x93372F: push    esi
0x933730: push    edi
0x933731: push    ebx
0x933732: push    ecx
0x933733: lea     edx, [esp+0B0h+var_34]
0x933737: push    edx
0x933738: mov     [esp+0B4h+var_2C], 3456BF95h
0x933743: call    sub_933240
0x933748: mov     eax, [ebp+arg_0]
0x93374B: push    esi
0x93374C: push    edi
0x93374D: push    ebx
0x93374E: push    eax
0x93374F: lea     ecx, [esp+0C4h+var_34]
0x933756: push    ecx
0x933757: lea     edx, [esp+0C8h+var_89]
0x93375B: push    edx
0x93375C: call    sub_9515C0
0x933761: mov     cl, [eax]
0x933763: add     esp, 2Ch
0x933766: test    cl, cl
0x933768: jnz     short loc_9337A2
0x93376A: mov     eax, [ebp+arg_0]
0x93376D: push    esi
0x93376E: push    edi
0x93376F: push    ebx
0x933770: push    eax
0x933771: lea     ecx, [esp+0B0h+var_34]
0x933775: push    ecx
0x933776: mov     [esp+0B4h+var_4], 358637BDh
0x933781: call    sub_933240
0x933786: mov     edx, [ebp+arg_0]
0x933789: push    esi
0x93378A: push    edi
0x93378B: push    ebx
0x93378C: push    edx
0x93378D: lea     eax, [esp+0C4h+var_34]
0x933794: push    eax
0x933795: lea     ecx, [esp+0C8h+var_89]
0x933799: push    ecx
0x93379A: call    sub_9515C0
0x93379F: add     esp, 2Ch
0x9337A2: mov     eax, [esp+0A0h+var_6C]
0x9337A6: test    eax, eax
0x9337A8: js      short loc_9337D4
0x9337AA: mov     edx, [esp+0A0h+var_74]
0x9337AE: mov     ecx, large fs:2Ch
0x9337B5: and     eax, 3FFFFFFFh
0x9337BA: push    14h
0x9337BC: shl     eax, 4
0x9337BF: push    eax
0x9337C0: mov     eax, ds:0BA9DE4h
0x9337C5: push    edx
0x9337C6: mov     edx, [ecx+eax*4]
0x9337C9: mov     ecx, [edx+19Ch]
0x9337CF: call    sub_8A75D0
0x9337D4: mov     eax, [esp+0A0h+var_78]
0x9337D8: test    eax, eax
0x9337DA: js      short loc_933807
0x9337DC: mov     ecx, large fs:2Ch
0x9337E3: mov     edx, ds:0BA9DE4h
0x9337E9: and     eax, 3FFFFFFFh
0x9337EE: shl     eax, 4
0x9337F1: push    14h
0x9337F3: push    eax
0x9337F4: mov     eax, [esp+0A8h+var_80]
0x9337F8: push    eax
0x9337F9: mov     eax, [ecx+edx*4]
0x9337FC: mov     ecx, [eax+19Ch]
0x933802: call    sub_8A75D0
0x933807: pop     edi
0x933808: pop     esi
0x933809: pop     ebx
0x93380A: mov     esp, ebp
0x93380C: pop     ebp
0x93380D: retn

0x9515C0: push    ebp
0x9515C1: mov     ebp, esp
0x9515C3: and     esp, 0FFFFFFF0h
0x9515C6: sub     esp, 84h
0x9515CC: push    ebx
0x9515CD: push    esi
0x9515CE: push    edi
0x9515CF: mov     edi, [ebp+arg_4]
0x9515D2: mov     edx, [edi+14h]
0x9515D5: xor     ecx, ecx
0x9515D7: mov     eax, 80000000h
0x9515DC: mov     [esp+90h+var_78], edx
0x9515E0: mov     edx, [ebp+arg_C]
0x9515E3: cmp     edx, ecx
0x9515E5: mov     [esp+90h+var_7D+1], 0
0x9515EA: mov     [esp+90h+var_5C], ecx
0x9515EE: mov     [esp+90h+var_58], ecx
0x9515F2: mov     [esp+90h+var_54], eax
0x9515F6: mov     [esp+90h+var_68], ecx
0x9515FA: mov     [esp+90h+var_64], ecx
0x9515FE: mov     [esp+90h+var_60], eax
0x951602: mov     [esp+90h+var_74], ecx
0x951606: mov     [esp+90h+var_70], ecx
0x95160A: mov     [esp+90h+var_6C], eax
0x95160E: jle     short loc_95165C
0x951610: mov     esi, [ebp+arg_8]
0x951613: mov     ebx, edx
0x951615: jmp     short loc_951620
0x951617: mov     eax, [esp+90h+var_6C]
0x95161B: jmp     short loc_951620
0x95161D: align 10h
0x951620: mov     ecx, [esp+90h+var_70]
0x951624: and     eax, 3FFFFFFFh
0x951629: cmp     ecx, eax
0x95162B: jnz     short loc_95163C
0x95162D: lea     eax, [esp+90h+var_74]
0x951631: push    10h
0x951633: push    eax
0x951634: call    sub_8A6EE0
0x951639: add     esp, 8
0x95163C: mov     ecx, [esp+90h+var_70]
0x951640: mov     edx, [esp+90h+var_74]
0x951644: movaps  xmm0, xmmword ptr [esi]
0x951647: mov     eax, ecx
0x951649: shl     eax, 4
0x95164C: add     eax, edx
0x95164E: inc     ecx
0x95164F: add     esi, 10h
0x951652: dec     ebx
0x951653: mov     [esp+90h+var_70], ecx
0x951657: movaps  xmmword ptr [eax], xmm0
0x95165A: jnz     short loc_951617
0x95165C: mov     al, [edi+1]
0x95165F: test    al, al
0x951661: mov     esi, [ebp+arg_14]
0x951664: jz      short loc_951690
0x951666: lea     ecx, [esp+90h+var_50]
0x95166A: push    ecx
0x95166B: lea     edx, [esp+94h+var_40]
0x95166F: push    edx
0x951670: push    esi
0x951671: call    sub_92E860
0x951676: lea     eax, [esp+9Ch+var_30]
0x95167A: push    eax
0x95167B: lea     ecx, [esp+0A0h+var_20]
0x951682: push    ecx
0x951683: lea     edx, [esp+0A4h+var_74]
0x951687: push    edx
0x951688: call    sub_92E860
0x95168D: add     esp, 18h
0x951690: mov     ebx, [ebp+arg_10]
0x951693: lea     eax, [esp+90h+var_5C]
0x951697: push    eax
0x951698: lea     ecx, [esp+94h+var_68]
0x95169C: push    ecx
0x95169D: lea     edx, [esp+98h+var_7D+1]
0x9516A1: push    edx
0x9516A2: lea     eax, [esp+9Ch+var_10]
0x9516A9: push    eax
0x9516AA: push    esi
0x9516AB: push    ebx
0x9516AC: lea     ecx, [esp+0A8h+var_7D]
0x9516B0: push    edi
0x9516B1: push    ecx
0x9516B2: call    sub_930040
0x9516B7: mov     al, [esp+0B0h+var_7D+1]
0x9516BB: add     esp, 20h
0x9516BE: test    al, al
0x9516C0: jz      short loc_9516E4
0x9516C2: mov     edx, [esp+90h+var_78]
0x9516C6: push    edx; float
0x9516C7: lea     eax, [esp+94h+var_5C]
0x9516CB: push    eax; int
0x9516CC: lea     ecx, [esp+98h+var_68]
0x9516D0: push    ecx; int
0x9516D1: push    esi; int
0x9516D2: push    ebx; int
0x9516D3: lea     edx, [esp+0A4h+var_74]
0x9516D7: push    edx; int
0x9516D8: lea     eax, [esp+0A8h+var_7D]
0x9516DC: push    eax; int
0x9516DD: call    sub_9512F0
0x9516E2: jmp     short loc_951704
0x9516E4: mov     ecx, [esp+90h+var_78]
0x9516E8: push    ecx; float
0x9516E9: lea     edx, [esp+94h+var_5C]
0x9516ED: push    edx; int
0x9516EE: lea     eax, [esp+98h+var_68]
0x9516F2: push    eax; int
0x9516F3: push    esi; int
0x9516F4: push    ebx; int
0x9516F5: lea     ecx, [esp+0A4h+var_74]
0x9516F9: push    ecx; int
0x9516FA: lea     edx, [esp+0A8h+var_7D]
0x9516FE: push    edx; int
0x9516FF: call    sub_9513F0
0x951704: mov     bl, [eax]
0x951706: mov     al, [edi+1]
0x951709: add     esp, 1Ch
0x95170C: test    al, al
0x95170E: jz      short loc_95173A
0x951710: lea     eax, [esp+90h+var_50]
0x951714: push    eax
0x951715: lea     ecx, [esp+94h+var_40]
0x951719: push    ecx
0x95171A: push    esi
0x95171B: call    sub_92EA40
0x951720: lea     edx, [esp+9Ch+var_30]
0x951724: push    edx
0x951725: lea     eax, [esp+0A0h+var_20]
0x95172C: push    eax
0x95172D: lea     ecx, [esp+0A4h+var_74]
0x951731: push    ecx
0x951732: call    sub_92EA40
0x951737: add     esp, 18h
0x95173A: mov     eax, [esp+90h+var_6C]
0x95173E: test    eax, eax
0x951740: mov     edx, [ebp+arg_0]
0x951743: mov     esi, ds:0BA9DE4h
0x951749: mov     edi, large fs:2Ch
0x951750: mov     [edx], bl
0x951752: js      short loc_951772
0x951754: mov     ecx, [edi+esi*4]
0x951757: mov     ecx, [ecx+19Ch]
0x95175D: and     eax, 3FFFFFFFh
0x951762: push    14h
0x951764: shl     eax, 4
0x951767: push    eax
0x951768: mov     eax, [esp+98h+var_74]
0x95176C: push    eax
0x95176D: call    sub_8A75D0
0x951772: mov     eax, [esp+90h+var_60]
0x951776: test    eax, eax
0x951778: js      short loc_951798
0x95177A: mov     edx, [esp+90h+var_68]
0x95177E: and     eax, 3FFFFFFFh
0x951783: push    14h
0x951785: shl     eax, 4
0x951788: push    eax
0x951789: mov     eax, [edi+esi*4]
0x95178C: mov     ecx, [eax+19Ch]
0x951792: push    edx
0x951793: call    sub_8A75D0
0x951798: mov     eax, [esp+90h+var_54]
0x95179C: test    eax, eax
0x95179E: js      short loc_9517BE
0x9517A0: mov     ecx, [esp+90h+var_5C]
0x9517A4: mov     edx, [edi+esi*4]
0x9517A7: and     eax, 3FFFFFFFh
0x9517AC: push    14h
0x9517AE: shl     eax, 5
0x9517B1: push    eax
0x9517B2: push    ecx
0x9517B3: mov     ecx, [edx+19Ch]
0x9517B9: call    sub_8A75D0
0x9517BE: mov     eax, [ebp+arg_0]
0x9517C1: pop     edi
0x9517C2: pop     esi
0x9517C3: pop     ebx
0x9517C4: mov     esp, ebp
0x9517C6: pop     ebp
0x9517C7: retn

0x758580: sub     esp, 0Ch
0x758583: push    ebx
0x758584: push    ebp
0x758585: push    esi
0x758586: mov     esi, [esp+18h+a2]
0x75858A: push    edi
0x75858B: push    esi; a2
0x75858C: mov     ebp, ecx
0x75858E: call    sub_7008A0
0x758593: mov     eax, [esi+21Ch]
0x758599: push    1
0x75859B: lea     ecx, [esp+20h+var_8]
0x75859F: push    ecx
0x7585A0: mov     ebx, 4
0x7585A5: push    ebx
0x7585A6: lea     edx, [esp+28h+a2]
0x7585AA: push    edx
0x7585AB: push    eax
0x7585AC: mov     eax, [eax+4]
0x7585AF: mov     [esp+30h+var_8], ebx
0x7585B3: call    eax
0x7585B5: add     esp, 14h
0x7585B8: cmp     [esp+1Ch+a2], 0
0x7585BD: jbe     short loc_758625
0x7585BF: mov     eax, [esi+21Ch]
0x7585C5: push    1
0x7585C7: lea     ecx, [esp+20h+var_8]
0x7585CB: push    ecx
0x7585CC: push    ebx
0x7585CD: lea     edx, [esp+28h+var_4]
0x7585D1: push    edx
0x7585D2: push    eax
0x7585D3: mov     eax, [eax+4]
0x7585D6: mov     [esp+30h+var_8], ebx
0x7585DA: call    eax
0x7585DC: mov     edi, [esp+30h+var_4]
0x7585E0: mov     edx, [esp+30h+a2]
0x7585E4: mov     cl, ds:byte_B3D3E8[edi]
0x7585EA: mov     eax, ds:0B3D088h[edi*4]
0x7585F1: push    edx
0x7585F2: push    esi
0x7585F3: mov     byte ptr [esp+38h+var_4], cl
0x7585F7: call    eax ; dword_B3D088
0x7585F9: mov     ecx, [esp+38h+a2]
0x7585FD: mov     edx, ds:0B3D410h[edi*4]
0x758604: mov     ebx, eax
0x758606: mov     eax, [esp+38h+var_4]
0x75860A: push    eax
0x75860B: push    ecx
0x75860C: push    ebx
0x75860D: call    edx ; dword_B3D410
0x75860F: mov     eax, [esp+44h+a2]
0x758613: add     esp, 28h
0x758616: push    edi
0x758617: push    eax
0x758618: push    ebx
0x758619: mov     ecx, ebp
0x75861B: call    sub_758460
0x758620: mov     ebx, 4
0x758625: mov     eax, [esi+21Ch]
0x75862B: push    1
0x75862D: lea     ecx, [esp+20h+var_4]
0x758631: push    ecx
0x758632: push    ebx
0x758633: lea     edx, [esp+28h+var_C]
0x758637: push    edx
0x758638: push    eax
0x758639: mov     eax, [eax+4]
0x75863C: mov     [esp+30h+var_4], ebx
0x758640: call    eax
0x758642: add     esp, 14h
0x758645: cmp     [esp+1Ch+var_C], 0
0x75864A: jbe     short loc_7586C1
0x75864C: cmp     dword ptr [esi+0D8h], 0A010068h
0x758656: mov     edi, 5
0x75865B: jb      short loc_758681
0x75865D: mov     eax, [esi+21Ch]
0x758663: push    1
0x758665: lea     ecx, [esp+20h+var_4]
0x758669: push    ecx
0x75866A: push    ebx
0x75866B: lea     edx, [esp+28h+var_8]
0x75866F: push    edx
0x758670: push    eax
0x758671: mov     eax, [eax+4]
0x758674: mov     [esp+30h+var_4], ebx
0x758678: call    eax
0x75867A: mov     edi, [esp+30h+var_8]
0x75867E: add     esp, 14h
0x758681: mov     edx, [esp+1Ch+var_C]
0x758685: mov     cl, ds:byte_B3D406[edi]
0x75868B: mov     eax, ds:0B3D100h[edi*4]
0x758692: push    edx
0x758693: push    esi
0x758694: mov     byte ptr [esp+24h+var_4], cl
0x758698: call    eax ; dword_B3D100
0x75869A: mov     ecx, [esp+24h+var_C]
0x75869E: mov     edx, ds:0B3D488h[edi*4]
0x7586A5: mov     esi, eax
0x7586A7: mov     eax, [esp+24h+var_4]
0x7586AB: push    eax
0x7586AC: push    ecx
0x7586AD: push    esi
0x7586AE: call    edx
0x7586B0: mov     eax, [esp+30h+var_C]
0x7586B4: add     esp, 14h
0x7586B7: push    edi
0x7586B8: push    eax
0x7586B9: push    esi
0x7586BA: mov     ecx, ebp
0x7586BC: call    sub_7584C0
0x7586C1: pop     edi
0x7586C2: pop     esi
0x7586C3: pop     ebp
0x7586C4: pop     ebx
0x7586C5: add     esp, 0Ch
0x7586C8: retn    4

0x9385C0: push    ebp
0x9385C1: mov     ebp, esp
0x9385C3: and     esp, 0FFFFFFF0h
0x9385C6: sub     esp, 0C8h
0x9385CC: push    ebx
0x9385CD: push    esi
0x9385CE: mov     esi, ecx
0x9385D0: lea     ecx, [esp+0D0h+var_50]
0x9385D7: xor     ebx, ebx
0x9385D9: call    sub_936420
0x9385DE: mov     ecx, esi
0x9385E0: mov     word ptr [esp+0D0h+var_C4+2], bx
0x9385E5: call    sub_8FDAF0
0x9385EA: lea     eax, [esi+80h]
0x9385F0: push    eax
0x9385F1: mov     ecx, esi
0x9385F3: call    sub_9377C0
0x9385F8: test    eax, eax
0x9385FA: jnz     loc_9386A1
0x938600: lea     ecx, [esp+0D0h+var_90]
0x938604: push    ecx
0x938605: lea     edx, [esp+0D4h+var_C4]
0x938609: push    edx
0x93860A: lea     eax, [esp+0D8h+var_50]
0x938611: push    eax
0x938612: mov     ecx, esi
0x938614: call    sub_938190
0x938619: cmp     eax, 2
0x93861C: jnz     loc_9386AE
0x938622: mov     eax, [esp+0D0h+var_58]
0x938626: cmp     eax, 2
0x938629: lea     ecx, [esp+0D0h+var_90]
0x93862D: push    ecx
0x93862E: lea     edx, [esp+0D4h+var_C4]
0x938632: mov     bl, 1
0x938634: mov     ecx, esi
0x938636: push    edx
0x938637: jg      short loc_938645
0x938639: lea     eax, [esp+0D8h+var_C0]
0x93863D: push    eax
0x93863E: call    sub_936C10
0x938643: jmp     short loc_93865B
0x938645: cmp     eax, 6
0x938648: lea     eax, [esp+0D8h+var_C0]
0x93864C: push    eax
0x93864D: jg      short loc_938656
0x93864F: call    sub_936D70
0x938654: jmp     short loc_93865B
0x938656: call    sub_936E10
0x93865B: cmp     byte ptr [esp+0D0h+var_C4], 2
0x938660: movaps  xmm1, [esp+0D0h+var_B0]
0x938665: jbe     short loc_93868B
0x938667: fld     dword ptr [esp+0D0h+var_B0+0Ch]
0x93866B: fchs
0x93866D: fstp    [esp+0D0h+var_C4]
0x938671: movss   xmm0, [esp+0D0h+var_C4]
0x938677: movaps  xmm2, xmm0
0x93867A: shufps  xmm2, xmm0, 0
0x93867E: movaps  xmm0, [esp+0D0h+var_C0]
0x938683: mulps   xmm2, xmm1
0x938686: addps   xmm0, xmm2
0x938689: jmp     short loc_938690
0x93868B: movaps  xmm0, [esp+0D0h+var_C0]
0x938690: mov     eax, [ebp+arg_4]
0x938693: mov     ecx, dword ptr [esp+0D0h+var_B0+0Ch]
0x938697: movaps  xmmword ptr [eax+10h], xmm1
0x93869B: movaps  xmmword ptr [eax], xmm0
0x93869E: mov     [eax+1Ch], ecx
0x9386A1: mov     eax, [ebp+arg_0]
0x9386A4: mov     [eax], bl
0x9386A6: pop     esi
0x9386A7: pop     ebx
0x9386A8: mov     esp, ebp
0x9386AA: pop     ebp
0x9386AB: retn    8
0x9386AE: mov     eax, [ebp+arg_0]
0x9386B1: xor     cl, cl
0x9386B3: pop     esi
0x9386B4: mov     [eax], cl
0x9386B6: pop     ebx
0x9386B7: mov     esp, ebp
0x9386B9: pop     ebp
0x9386BA: retn    8

0x7266D0: sub     esp, 110h
0x7266D6: push    ebx
0x7266D7: push    ebp
0x7266D8: push    esi
0x7266D9: mov     esi, [esp+11Ch+arg_0]
0x7266E0: mov     eax, [esi+21Ch]
0x7266E6: mov     edx, [eax+4]
0x7266E9: push    edi
0x7266EA: mov     edi, ecx
0x7266EC: push    1
0x7266EE: lea     ecx, [esp+124h+var_110]
0x7266F2: push    ecx
0x7266F3: mov     ebp, 4
0x7266F8: push    ebp
0x7266F9: lea     ebx, [edi+4]
0x7266FC: push    ebx
0x7266FD: push    eax
0x7266FE: mov     [esp+134h+var_110], ebp
0x726702: call    edx
0x726704: mov     edx, [edi]
0x726706: mov     edx, [edx]
0x726708: add     esp, 14h
0x72670B: cmp     [esp+120h+arg_10], 40h ; '@'
0x726714: mov     ecx, edi
0x726716: setb    al
0x726719: mov     [edi+0Dh], al
0x72671C: mov     eax, [ebx]
0x72671E: push    eax
0x72671F: call    edx
0x726721: push    1
0x726723: lea     ecx, [esp+124h+var_110]
0x726727: push    ecx
0x726728: mov     [edi+8], eax
0x72672B: mov     byte ptr [edi+0Ch], 1
0x72672F: mov     eax, [esi+21Ch]
0x726735: push    ebp
0x726736: lea     edx, [esp+12Ch+var_108]
0x72673A: push    edx
0x72673B: push    eax
0x72673C: mov     eax, [eax+4]
0x72673F: mov     [esp+134h+var_110], ebp
0x726743: call    eax
0x726745: mov     edx, [esp+134h+var_108]
0x726749: mov     eax, [esi+21Ch]
0x72674F: push    1
0x726751: lea     ecx, [esp+138h+var_110]
0x726755: push    ecx
0x726756: lea     ecx, ds:0[edx*4]
0x72675D: push    ecx
0x72675E: lea     edx, [esp+140h+var_80]
0x726765: push    edx
0x726766: push    eax
0x726767: mov     eax, [eax+4]
0x72676A: mov     [esp+148h+var_110], ebp
0x72676E: call    eax
0x726770: xor     ebx, ebx
0x726772: add     esp, 28h
0x726775: cmp     [esp+120h+var_108], ebx
0x726779: jbe     loc_726829
0x72677F: movzx   ecx, [esp+120h+arg_10]
0x726787: mov     [esp+120h+var_104], ecx
0x72678B: jmp     short loc_726795
0x72678D: align 10h
0x726790: mov     ebp, 4
0x726795: mov     eax, [esi+21Ch]
0x72679B: push    1
0x72679D: lea     edx, [esp+124h+var_10C]
0x7267A1: push    edx
0x7267A2: mov     edx, [eax+4]
0x7267A5: push    ebp
0x7267A6: lea     ecx, [esp+12Ch+var_110]
0x7267AA: push    ecx
0x7267AB: push    eax
0x7267AC: mov     [esp+134h+var_10C], ebp
0x7267B0: call    edx
0x7267B2: mov     edx, [esp+134h+var_110]
0x7267B6: mov     eax, [esi+21Ch]
0x7267BC: push    1
0x7267BE: lea     ecx, [esp+138h+var_10C]
0x7267C2: push    ecx
0x7267C3: lea     ecx, ds:0[edx*4]
0x7267CA: push    ecx
0x7267CB: lea     edx, [esp+140h+var_100]
0x7267CF: push    edx
0x7267D0: push    eax
0x7267D1: mov     eax, [eax+4]
0x7267D4: mov     [esp+148h+var_10C], ebp
0x7267D8: call    eax
0x7267DA: mov     eax, [esp+ebx*4+148h+var_80]
0x7267E1: mov     ebp, [esp+148h+var_110]
0x7267E5: add     eax, [edi+8]
0x7267E8: add     esp, 28h
0x7267EB: xor     edx, edx
0x7267ED: xor     ecx, ecx
0x7267EF: test    ebp, ebp
0x7267F1: jbe     short loc_7267FE
0x7267F3: add     edx, [esp+ecx*4+120h+var_100]
0x7267F7: add     ecx, 1
0x7267FA: cmp     ecx, ebp
0x7267FC: jb      short loc_7267F3
0x7267FE: push    ebp
0x7267FF: lea     ecx, [esp+124h+var_100]
0x726803: push    ecx
0x726804: mov     ecx, [esp+128h+var_104]
0x726808: imul    ecx, edx
0x72680B: push    ecx
0x72680C: push    eax
0x72680D: mov     eax, [esi+21Ch]
0x726813: mov     edx, [eax+4]
0x726816: push    eax
0x726817: call    edx
0x726819: add     ebx, 1
0x72681C: add     esp, 14h
0x72681F: cmp     ebx, [esp+120h+var_108]
0x726823: jb      loc_726790
0x726829: mov     eax, [edi]
0x72682B: mov     edx, [eax+4]
0x72682E: push    0
0x726830: push    0
0x726832: mov     ecx, edi
0x726834: call    edx
0x726836: pop     edi
0x726837: pop     esi
0x726838: pop     ebp
0x726839: pop     ebx
0x72683A: add     esp, 110h
0x726840: retn    14h

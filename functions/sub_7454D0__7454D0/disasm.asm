0x7454D0: sub     esp, 88h
0x7454D6: mov     eax, ds:0B30AACh
0x7454DB: xor     eax, esp
0x7454DD: mov     [esp+88h+var_4], eax
0x7454E4: mov     eax, [esp+88h+arg_C]
0x7454EB: mov     edx, [esp+88h+arg_10]
0x7454F2: mov     ecx, [esp+88h+arg_14]
0x7454F9: push    ebx
0x7454FA: mov     ebx, [esp+8Ch+arg_4]
0x745501: push    ebp
0x745502: mov     ebp, [esp+90h+arg_8]
0x745509: mov     [esp+90h+var_70], eax
0x74550D: xor     eax, eax
0x74550F: test    ebp, ebp
0x745511: mov     [esp+90h+var_4C], ebx
0x745515: mov     [esp+90h+var_50], edx
0x745519: mov     [esp+90h+var_7C], ecx
0x74551D: mov     [esp+90h+var_44], eax
0x745521: mov     [esp+90h+var_40], eax
0x745525: mov     [esp+90h+var_3C], eax
0x745529: mov     [esp+90h+var_38], eax
0x74552D: mov     [esp+90h+var_34], eax
0x745531: mov     [esp+90h+var_30], eax
0x745535: mov     [esp+90h+var_2C], eax
0x745539: mov     [esp+90h+var_28], eax
0x74553D: jbe     short loc_745555
0x74553F: nop
0x745540: movzx   ecx, word ptr [ebx+eax*2]
0x745544: add     word ptr [esp+ecx*2+90h+var_44], 1
0x74554A: lea     ecx, [esp+ecx*2+90h+var_44]
0x74554E: add     eax, 1
0x745551: cmp     eax, ebp
0x745553: jb      short loc_745540
0x745555: mov     edx, [edx]
0x745557: mov     [esp+90h+var_84], edx
0x74555B: mov     eax, 0Fh
0x745560: cmp     word ptr [esp+eax*2+90h+var_44], 0
0x745566: jnz     short loc_745570
0x745568: sub     eax, 1
0x74556B: cmp     eax, 1
0x74556E: jnb     short loc_745560
0x745570: cmp     edx, eax
0x745572: mov     [esp+90h+var_78], eax
0x745576: jbe     short loc_74557E
0x745578: mov     [esp+90h+var_84], eax
0x74557C: mov     edx, eax
0x74557E: test    eax, eax
0x745580: jnz     short loc_74559C
0x745582: pop     ebp
0x745583: or      eax, 0FFFFFFFFh
0x745586: pop     ebx
0x745587: mov     ecx, [esp+88h+var_4]
0x74558E: xor     ecx, esp
0x745590: call    @__security_check_cookie@4; __security_check_cookie(x)
0x745595: add     esp, 88h
0x74559B: retn
0x74559C: push    esi
0x74559D: mov     esi, 1
0x7455A2: cmp     word ptr [esp+esi*2+94h+var_44], 0
0x7455A8: jnz     short loc_7455E6
0x7455AA: cmp     word ptr [esp+esi*2+94h+var_44+2], 0
0x7455B0: jnz     short loc_7455D4
0x7455B2: cmp     word ptr [esp+esi*2+94h+var_40], 0
0x7455B8: jnz     short loc_7455D9
0x7455BA: cmp     word ptr [esp+esi*2+94h+var_40+2], 0
0x7455C0: jnz     short loc_7455DE
0x7455C2: cmp     word ptr [esp+esi*2+94h+var_3C], 0
0x7455C8: jnz     short loc_7455E3
0x7455CA: add     esi, 5
0x7455CD: cmp     esi, 0Fh
0x7455D0: jbe     short loc_7455A2
0x7455D2: jmp     short loc_7455E6
0x7455D4: add     esi, 1
0x7455D7: jmp     short loc_7455E6
0x7455D9: add     esi, 2
0x7455DC: jmp     short loc_7455E6
0x7455DE: add     esi, 3
0x7455E1: jmp     short loc_7455E6
0x7455E3: add     esi, 4
0x7455E6: cmp     edx, esi
0x7455E8: jnb     short loc_7455EE
0x7455EA: mov     [esp+94h+var_84], esi
0x7455EE: mov     edx, 1
0x7455F3: mov     eax, edx
0x7455F5: movzx   ecx, word ptr [esp+eax*2+94h+var_44]
0x7455FA: add     edx, edx
0x7455FC: sub     edx, ecx
0x7455FE: js      short loc_74562E
0x745600: add     eax, 1
0x745603: cmp     eax, 0Fh
0x745606: jbe     short loc_7455F5
0x745608: test    edx, edx
0x74560A: push    edi
0x74560B: mov     edi, [esp+98h+arg_0]
0x745612: jle     short loc_745649
0x745614: test    edi, edi
0x745616: jz      short loc_745626
0x745618: movzx   eax, word ptr [esp+98h+var_44]
0x74561D: mov     ecx, ebp
0x74561F: sub     ecx, eax
0x745621: cmp     ecx, 1
0x745624: jz      short loc_745649
0x745626: or      eax, 0FFFFFFFFh
0x745629: jmp     loc_745995
0x74562E: pop     esi
0x74562F: pop     ebp
0x745630: or      eax, 0FFFFFFFFh
0x745633: pop     ebx
0x745634: mov     ecx, [esp+88h+var_4]
0x74563B: xor     ecx, esp
0x74563D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x745642: add     esp, 88h
0x745648: retn
0x745649: mov     [esp+98h+var_22], 0
0x745650: mov     eax, 2
0x745655: jmp     short loc_745660
0x745657: align 10h
0x745660: mov     dx, [esp+eax+98h+var_24]
0x745665: add     dx, word ptr [esp+eax+98h+var_44]
0x74566A: add     eax, 2
0x74566D: cmp     eax, 1Eh
0x745670: mov     [esp+eax+98h+var_24], dx
0x745675: jb      short loc_745660
0x745677: mov     ecx, [esp+98h+var_7C]
0x74567B: xor     eax, eax
0x74567D: test    ebp, ebp
0x74567F: jbe     short loc_7456AA
0x745681: cmp     word ptr [ebx+eax*2], 0
0x745686: jz      short loc_7456A3
0x745688: movzx   edx, word ptr [ebx+eax*2]
0x74568C: movzx   edx, [esp+edx*2+98h+var_24]
0x745691: mov     [ecx+edx*2], ax
0x745695: movzx   edx, word ptr [ebx+eax*2]
0x745699: add     [esp+edx*2+98h+var_24], 1
0x74569F: lea     edx, [esp+edx*2+98h+var_24]
0x7456A3: add     eax, 1
0x7456A6: cmp     eax, ebp
0x7456A8: jb      short loc_745681
0x7456AA: mov     eax, edi
0x7456AC: sub     eax, 0
0x7456AF: mov     edx, 0FFFFFFFFh
0x7456B4: jz      short loc_7456F7
0x7456B6: sub     eax, 1
0x7456B9: jz      short loc_7456D1
0x7456BB: mov     [esp+98h+var_64], offset unk_A82908
0x7456C3: mov     [esp+98h+var_68], offset unk_A82948
0x7456CB: mov     [esp+98h+var_5C], edx
0x7456CF: jmp     short loc_745707
0x7456D1: mov     eax, offset unk_A82888
0x7456D6: sub     eax, 202h
0x7456DB: mov     [esp+98h+var_64], eax
0x7456DF: mov     eax, offset unk_A828C8
0x7456E4: sub     eax, 202h
0x7456E9: mov     [esp+98h+var_68], eax
0x7456ED: mov     [esp+98h+var_5C], 100h
0x7456F5: jmp     short loc_745707
0x7456F7: mov     [esp+98h+var_68], ecx
0x7456FB: mov     [esp+98h+var_64], ecx
0x7456FF: mov     [esp+98h+var_5C], 13h
0x745707: mov     eax, [esp+98h+var_70]
0x74570B: mov     ecx, [eax]
0x74570D: mov     [esp+98h+var_74], ecx
0x745711: mov     ecx, [esp+98h+var_84]
0x745715: mov     eax, 1
0x74571A: shl     eax, cl
0x74571C: mov     [esp+98h+var_58], edx
0x745720: xor     ebp, ebp
0x745722: xor     ebx, ebx
0x745724: cmp     edi, 1
0x745727: lea     edx, [eax-1]
0x74572A: mov     [esp+98h+var_80], esi
0x74572E: mov     [esp+98h+var_60], eax
0x745732: mov     [esp+98h+var_6C], eax
0x745736: mov     [esp+98h+var_54], edx
0x74573A: jnz     short loc_745747
0x74573C: cmp     eax, 506h
0x745741: jnb     loc_745990
0x745747: mov     eax, [esp+98h+var_7C]
0x74574B: mov     [esp+98h+var_7C], eax
0x74574F: nop
0x745750: mov     cl, byte ptr [esp+98h+var_80]
0x745754: mov     esi, [esp+98h+var_7C]
0x745758: movzx   eax, word ptr [esi]
0x74575B: mov     edx, [esp+98h+var_5C]
0x74575F: sub     cl, bl
0x745761: mov     byte ptr [esp+98h+var_88+1], cl
0x745765: movzx   ecx, ax
0x745768: cmp     ecx, edx
0x74576A: jge     short loc_745778
0x74576C: mov     byte ptr [esp+98h+var_88], 0
0x745771: mov     word ptr [esp+98h+var_88+2], ax
0x745776: jmp     short loc_7457A5
0x745778: jle     short loc_745799
0x74577A: movzx   eax, word ptr [esi]
0x74577D: mov     edx, [esp+98h+var_68]
0x745781: add     eax, eax
0x745783: mov     cl, [eax+edx]
0x745786: mov     edx, [esp+98h+var_64]
0x74578A: mov     ax, [eax+edx]
0x74578E: mov     byte ptr [esp+98h+var_88], cl
0x745792: mov     word ptr [esp+98h+var_88+2], ax
0x745797: jmp     short loc_7457A5
0x745799: mov     byte ptr [esp+98h+var_88], 60h ; '`'
0x74579E: mov     word ptr [esp+98h+var_88+2], 0
0x7457A5: mov     ecx, [esp+98h+var_80]
0x7457A9: mov     edx, [esp+98h+var_60]
0x7457AD: sub     ecx, ebx
0x7457AF: mov     eax, 1
0x7457B4: shl     eax, cl
0x7457B6: mov     ecx, ebx
0x7457B8: mov     edi, ebp
0x7457BA: shr     edi, cl
0x7457BC: mov     ecx, [esp+98h+var_74]
0x7457C0: lea     esi, ds:0[eax*4]
0x7457C7: add     edi, edx
0x7457C9: lea     ecx, [ecx+edi*4]
0x7457CC: mov     edi, [esp+98h+var_88]
0x7457D0: sub     edx, eax
0x7457D2: sub     ecx, esi
0x7457D4: test    edx, edx
0x7457D6: mov     [ecx], edi
0x7457D8: jnz     short loc_7457D0
0x7457DA: mov     edx, [esp+98h+var_80]
0x7457DE: lea     ecx, [edx-1]
0x7457E1: mov     eax, 1
0x7457E6: shl     eax, cl
0x7457E8: test    ebp, eax
0x7457EA: jz      short loc_7457F6
0x7457EC: lea     esp, [esp+0]
0x7457F0: shr     eax, 1
0x7457F2: test    ebp, eax
0x7457F4: jnz     short loc_7457F0
0x7457F6: test    eax, eax
0x7457F8: jz      short loc_745805
0x7457FA: lea     ecx, [eax-1]
0x7457FD: and     ecx, ebp
0x7457FF: add     ecx, eax
0x745801: mov     ebp, ecx
0x745803: jmp     short loc_745807
0x745805: xor     ebp, ebp
0x745807: add     word ptr [esp+edx*2+98h+var_44], 0FFFFh
0x74580E: movzx   eax, word ptr [esp+edx*2+98h+var_44]
0x745813: add     [esp+98h+var_7C], 2
0x745818: test    ax, ax
0x74581B: jnz     short loc_74583A
0x74581D: cmp     edx, [esp+98h+var_78]
0x745821: jz      loc_745903
0x745827: mov     edx, [esp+98h+var_7C]
0x74582B: movzx   eax, word ptr [edx]
0x74582E: mov     ecx, [esp+98h+var_4C]
0x745832: movzx   edx, word ptr [ecx+eax*2]
0x745836: mov     [esp+98h+var_80], edx
0x74583A: cmp     edx, [esp+98h+var_84]
0x74583E: jbe     loc_745750
0x745844: mov     esi, [esp+98h+var_54]
0x745848: and     esi, ebp
0x74584A: cmp     esi, [esp+98h+var_58]
0x74584E: mov     [esp+98h+var_48], esi
0x745852: jz      loc_745750
0x745858: test    ebx, ebx
0x74585A: jnz     short loc_745860
0x74585C: mov     ebx, [esp+98h+var_84]
0x745860: mov     eax, [esp+98h+var_74]
0x745864: mov     ecx, [esp+98h+var_60]
0x745868: lea     edx, [eax+ecx*4]
0x74586B: mov     ecx, [esp+98h+var_80]
0x74586F: sub     ecx, ebx
0x745871: mov     [esp+98h+var_74], edx
0x745875: mov     eax, 1
0x74587A: lea     edx, [ebx+ecx]
0x74587D: shl     eax, cl
0x74587F: cmp     edx, [esp+98h+var_78]
0x745883: jnb     short loc_7458AE
0x745885: lea     esi, [esp+edx*2+98h+var_44]
0x745889: lea     esp, [esp+0]
0x745890: movzx   edi, word ptr [esi]
0x745893: sub     eax, edi
0x745895: test    eax, eax
0x745897: jle     short loc_7458AA
0x745899: add     edx, 1
0x74589C: add     ecx, 1
0x74589F: add     esi, 2
0x7458A2: add     eax, eax
0x7458A4: cmp     edx, [esp+98h+var_78]
0x7458A8: jb      short loc_745890
0x7458AA: mov     esi, [esp+98h+var_48]
0x7458AE: mov     eax, 1
0x7458B3: shl     eax, cl
0x7458B5: add     [esp+98h+var_6C], eax
0x7458B9: cmp     [esp+98h+arg_0], 1
0x7458C1: mov     [esp+98h+var_60], eax
0x7458C5: jnz     short loc_7458D5
0x7458C7: cmp     [esp+98h+var_6C], 506h
0x7458CF: jnb     loc_745990
0x7458D5: mov     edx, esi
0x7458D7: mov     esi, [esp+98h+var_70]
0x7458DB: mov     eax, [esi]
0x7458DD: mov     [eax+edx*4], cl
0x7458E0: mov     ecx, [esi]
0x7458E2: mov     al, byte ptr [esp+98h+var_84]
0x7458E6: mov     [ecx+edx*4+1], al
0x7458EA: mov     eax, [esi]
0x7458EC: mov     ecx, [esp+98h+var_74]
0x7458F0: sub     ecx, eax
0x7458F2: sar     ecx, 2
0x7458F5: mov     [esp+98h+var_58], edx
0x7458F9: mov     [eax+edx*4+2], cx
0x7458FE: jmp     loc_745750
0x745903: mov     edi, [esp+98h+var_70]
0x745907: mov     al, dl
0x745909: sub     al, bl
0x74590B: test    ebp, ebp
0x74590D: mov     byte ptr [esp+98h+var_88], 40h ; '@'
0x745912: mov     byte ptr [esp+98h+var_88+1], al
0x745916: mov     word ptr [esp+98h+var_88+2], 0
0x74591D: jz      short loc_745975
0x74591F: mov     esi, [esp+98h+var_74]
0x745923: test    ebx, ebx
0x745925: jz      short loc_745945
0x745927: mov     ecx, [esp+98h+var_54]
0x74592B: and     ecx, ebp
0x74592D: cmp     ecx, [esp+98h+var_58]
0x745931: jz      short loc_745945
0x745933: mov     eax, [esp+98h+var_84]
0x745937: mov     esi, [edi]
0x745939: xor     ebx, ebx
0x74593B: mov     [esp+98h+var_80], eax
0x74593F: mov     byte ptr [esp+98h+var_88+1], al
0x745943: mov     edx, eax
0x745945: mov     ecx, ebx
0x745947: mov     eax, ebp
0x745949: shr     eax, cl
0x74594B: mov     ecx, [esp+98h+var_88]
0x74594F: mov     [esi+eax*4], ecx
0x745952: lea     ecx, [edx-1]
0x745955: mov     eax, 1
0x74595A: shl     eax, cl
0x74595C: test    ebp, eax
0x74595E: jz      short loc_745966
0x745960: shr     eax, 1
0x745962: test    ebp, eax
0x745964: jnz     short loc_745960
0x745966: test    eax, eax
0x745968: jz      short loc_745975
0x74596A: lea     ecx, [eax-1]
0x74596D: and     ecx, ebp
0x74596F: add     ecx, eax
0x745971: mov     ebp, ecx
0x745973: jnz     short loc_745923
0x745975: mov     edx, [esp+98h+var_6C]
0x745979: mov     ecx, [esp+98h+var_84]
0x74597D: lea     eax, ds:0[edx*4]
0x745984: add     [edi], eax
0x745986: mov     edx, [esp+98h+var_50]
0x74598A: mov     [edx], ecx
0x74598C: xor     eax, eax
0x74598E: jmp     short loc_745995
0x745990: mov     eax, 1
0x745995: mov     ecx, [esp+98h+var_4]
0x74599C: pop     edi
0x74599D: pop     esi
0x74599E: pop     ebp
0x74599F: pop     ebx
0x7459A0: xor     ecx, esp
0x7459A2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7459A7: add     esp, 88h
0x7459AD: retn

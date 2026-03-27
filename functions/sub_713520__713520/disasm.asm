0x713520: sub     esp, 8
0x713523: push    esi
0x713524: push    edi
0x713525: mov     esi, ecx
0x713527: movzx   eax, word ptr [esi+0D2h]
0x71352E: push    1
0x713530: lea     ecx, [esp+14h+var_8]
0x713534: push    ecx
0x713535: sub     eax, 1
0x713538: mov     [esp+18h+var_4], eax
0x71353C: mov     eax, [esi+220h]
0x713542: push    4
0x713544: lea     edx, [esp+1Ch+var_4]
0x713548: push    edx
0x713549: push    eax
0x71354A: mov     eax, [eax+8]
0x71354D: mov     [esp+24h+var_8], 4
0x713555: call    eax
0x713557: mov     edi, 1
0x71355C: add     esp, 14h
0x71355F: cmp     [esi+0D2h], di
0x713566: jbe     short loc_7135B2
0x713568: jmp     short loc_713570
0x71356A: align 10h
0x713570: mov     ecx, [esi+0CCh]
0x713576: mov     edx, [ecx+edi*4]
0x713579: mov     eax, [edx]
0x71357B: push    1
0x71357D: lea     ecx, [esp+14h+var_4]
0x713581: push    ecx
0x713582: mov     [esp+18h+var_8], eax
0x713586: mov     eax, [esi+220h]
0x71358C: push    4
0x71358E: lea     edx, [esp+1Ch+var_8]
0x713592: push    edx
0x713593: push    eax
0x713594: mov     eax, [eax+8]
0x713597: mov     [esp+24h+var_4], 4
0x71359F: call    eax
0x7135A1: movzx   ecx, word ptr [esi+0D2h]
0x7135A8: add     edi, 1
0x7135AB: add     esp, 14h
0x7135AE: cmp     edi, ecx
0x7135B0: jb      short loc_713570
0x7135B2: pop     edi
0x7135B3: pop     esi
0x7135B4: add     esp, 8
0x7135B7: retn

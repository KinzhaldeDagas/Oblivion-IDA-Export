0x918560: movzx   eax, [esp+arg_0]
0x918565: sub     esp, 8
0x918568: sub     eax, 0C2h ; 'Â'
0x91856D: push    esi
0x91856E: mov     esi, ecx
0x918570: jz      short loc_9185AD
0x918572: dec     eax
0x918573: jnz     short loc_9185DE
0x918575: mov     ecx, [esi+8]
0x918578: push    1
0x91857A: push    4
0x91857C: lea     eax, [esp+14h+var_4]
0x918580: push    eax
0x918581: call    sub_947910
0x918586: lea     ecx, [esp+0Ch+arg_0]
0x91858A: push    ecx
0x91858B: mov     ecx, [esi+8]
0x91858E: call    sub_918060
0x918593: cmp     byte ptr [eax], 0
0x918596: jz      short loc_9185DE
0x918598: mov     eax, [esp+0Ch+var_4]
0x91859C: mov     edx, [esi-4]
0x91859F: lea     ecx, [esi-4]
0x9185A2: push    eax
0x9185A3: call    dword ptr [edx+18h]
0x9185A6: pop     esi
0x9185A7: add     esp, 8
0x9185AA: retn    4
0x9185AD: push    1
0x9185AF: push    4
0x9185B1: lea     ecx, [esp+14h+var_4]
0x9185B5: push    ecx
0x9185B6: mov     ecx, [esi+8]
0x9185B9: call    sub_947910
0x9185BE: mov     ecx, [esi+8]
0x9185C1: lea     edx, [esp+0Ch+var_5]
0x9185C5: push    edx
0x9185C6: call    sub_918060
0x9185CB: cmp     byte ptr [eax], 0
0x9185CE: jz      short loc_9185DE
0x9185D0: mov     edx, [esp+0Ch+var_4]
0x9185D4: mov     eax, [esi-4]
0x9185D7: lea     ecx, [esi-4]
0x9185DA: push    edx
0x9185DB: call    dword ptr [eax+14h]
0x9185DE: pop     esi
0x9185DF: add     esp, 8
0x9185E2: retn    4

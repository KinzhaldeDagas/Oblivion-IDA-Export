0x5017E0: sub     esp, 8
0x5017E3: mov     edx, [esp+8+l]
0x5017E7: push    esi
0x5017E8: mov     esi, [esp+0Ch+a4]
0x5017EC: lea     eax, [esp+0Ch+var_8]
0x5017F0: push    eax
0x5017F1: mov     eax, [esp+10h+arg_10]
0x5017F5: lea     ecx, [esp+10h+var_4]
0x5017F9: push    ecx; UInt16
0x5017FA: mov     ecx, [esp+14h+arg_C]
0x5017FE: push    edx; l
0x5017FF: mov     edx, [esp+18h+a3]
0x501803: push    eax; a6
0x501804: mov     eax, [esp+1Ch+arg_4]
0x501808: push    ecx; a5
0x501809: mov     ecx, [esp+20h+a1]
0x50180D: push    esi; a4
0x50180E: push    edx; a3
0x50180F: push    eax; a2
0x501810: push    ecx; a1
0x501811: mov     dword ptr [esp+30h+var_4], 0
0x501819: mov     [esp+30h+var_8], 0
0x501821: call    Script_ExtractArgs
0x501826: add     esp, 24h
0x501829: test    al, al
0x50182B: jnz     short loc_501832
0x50182D: pop     esi
0x50182E: add     esp, 8
0x501831: retn
0x501832: push    0; int
0x501834: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x501839: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50183E: push    0; int
0x501840: push    esi; void *
0x501841: call    OblivionDynamicCast
0x501846: mov     ecx, eax
0x501848: add     esp, 14h
0x50184B: test    ecx, ecx
0x50184D: jz      short loc_501889
0x50184F: cmp     byte ptr ds:0B361ACh, 0
0x501856: push    0
0x501858: jz      short loc_501875
0x50185A: mov     eax, [esp+10h+var_8]
0x50185E: mov     edx, [ecx]
0x501860: mov     edx, [edx+2A8h]
0x501866: push    eax
0x501867: mov     eax, dword ptr [esp+14h+var_4]
0x50186B: push    eax
0x50186C: call    edx
0x50186E: mov     al, 1
0x501870: pop     esi
0x501871: add     esp, 8
0x501874: retn
0x501875: mov     edx, [esp+10h+var_8]
0x501879: mov     eax, [ecx]
0x50187B: mov     eax, [eax+2A0h]
0x501881: push    edx
0x501882: mov     edx, dword ptr [esp+14h+var_4]
0x501886: push    edx
0x501887: call    eax
0x501889: mov     al, 1
0x50188B: pop     esi
0x50188C: add     esp, 8
0x50188F: retn

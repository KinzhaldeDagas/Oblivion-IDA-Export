0x507960: push    ecx
0x507961: mov     ecx, [esp+4+l]
0x507965: mov     edx, [esp+4+arg_10]
0x507969: lea     eax, [esp+4+var_4]
0x50796C: push    eax; UInt16
0x50796D: mov     eax, [esp+8+arg_C]
0x507971: push    ecx; l
0x507972: mov     ecx, [esp+0Ch+a4]
0x507976: push    edx; a6
0x507977: mov     edx, [esp+10h+a3]
0x50797B: push    eax; a5
0x50797C: mov     eax, [esp+14h+arg_4]
0x507980: push    ecx; a4
0x507981: mov     ecx, [esp+18h+a1]
0x507985: push    edx; a3
0x507986: push    eax; a2
0x507987: push    ecx; a1
0x507988: mov     dword ptr [esp+24h+var_4], 0
0x507990: call    Script_ExtractArgs
0x507995: add     esp, 20h
0x507998: test    al, al
0x50799A: jnz     short loc_50799E
0x50799C: pop     ecx
0x50799D: retn
0x50799E: mov     eax, dword ptr [esp+4+var_4]
0x5079A1: test    eax, eax
0x5079A3: jnz     short loc_5079AB
0x5079A5: or      eax, 0FFFFFFFFh
0x5079A8: mov     dword ptr [esp+4+var_4], eax
0x5079AB: mov     ecx, ds:0B333A0h
0x5079B1: push    0
0x5079B3: push    eax
0x5079B4: call    sub_445DF0
0x5079B9: mov     eax, ds:0B333A0h
0x5079BE: cmp     byte ptr [eax+51h], 0
0x5079C2: jnz     short loc_5079CA
0x5079C4: cmp     byte ptr [eax+52h], 0
0x5079C8: jz      short loc_5079E1
0x5079CA: mov     eax, offset aRunning; "running"
0x5079CF: push    eax
0x5079D0: push    offset aTestallcellsS; "TestAllCells %s"
0x5079D5: call    Interface_ConsolePrint
0x5079DA: add     esp, 8
0x5079DD: mov     al, 1
0x5079DF: pop     ecx
0x5079E0: retn
0x5079E1: mov     eax, offset aStopped; "stopped"
0x5079E6: push    eax
0x5079E7: push    offset aTestallcellsS; "TestAllCells %s"
0x5079EC: call    Interface_ConsolePrint
0x5079F1: add     esp, 8
0x5079F4: mov     al, 1
0x5079F6: pop     ecx
0x5079F7: retn

0x5035F0: push    ecx
0x5035F1: mov     ecx, [esp+4+l]
0x5035F5: mov     edx, [esp+4+arg_10]
0x5035F9: push    esi
0x5035FA: mov     esi, [esp+8+a4]
0x5035FE: lea     eax, [esp+8+var_4]
0x503602: push    eax; UInt16
0x503603: mov     eax, [esp+0Ch+arg_C]
0x503607: push    ecx; l
0x503608: mov     ecx, [esp+10h+a3]
0x50360C: push    edx; a6
0x50360D: mov     edx, [esp+14h+arg_4]
0x503611: push    eax; a5
0x503612: mov     eax, [esp+18h+a1]
0x503616: push    esi; a4
0x503617: push    ecx; a3
0x503618: push    edx; a2
0x503619: push    eax; a1
0x50361A: mov     dword ptr [esp+28h+var_4], 0
0x503622: call    Script_ExtractArgs
0x503627: add     esp, 20h
0x50362A: test    al, al
0x50362C: jnz     short loc_503631
0x50362E: pop     esi
0x50362F: pop     ecx
0x503630: retn
0x503631: mov     ecx, [esp+8+arg_18]
0x503635: mov     edx, dword ptr [esp+8+var_4]
0x503639: push    ecx
0x50363A: push    0
0x50363C: push    edx
0x50363D: push    esi
0x50363E: call    sub_4F4CE0
0x503643: add     esp, 10h
0x503646: pop     esi
0x503647: pop     ecx
0x503648: retn

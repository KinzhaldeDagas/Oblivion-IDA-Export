0x5037B0: push    ecx
0x5037B1: mov     ecx, [esp+4+l]
0x5037B5: mov     edx, [esp+4+arg_10]
0x5037B9: push    esi
0x5037BA: mov     esi, [esp+8+a4]
0x5037BE: lea     eax, [esp+8+var_4]
0x5037C2: push    eax; UInt16
0x5037C3: mov     eax, [esp+0Ch+arg_C]
0x5037C7: push    ecx; l
0x5037C8: mov     ecx, [esp+10h+a3]
0x5037CC: push    edx; a6
0x5037CD: mov     edx, [esp+14h+arg_4]
0x5037D1: push    eax; a5
0x5037D2: mov     eax, [esp+18h+a1]
0x5037D6: push    esi; a4
0x5037D7: push    ecx; a3
0x5037D8: push    edx; a2
0x5037D9: push    eax; a1
0x5037DA: mov     dword ptr [esp+28h+var_4], 0
0x5037E2: call    Script_ExtractArgs
0x5037E7: add     esp, 20h
0x5037EA: test    al, al
0x5037EC: jnz     short loc_5037F1
0x5037EE: pop     esi
0x5037EF: pop     ecx
0x5037F0: retn
0x5037F1: mov     ecx, [esp+8+arg_18]
0x5037F5: mov     edx, dword ptr [esp+8+var_4]
0x5037F9: push    ecx
0x5037FA: push    0
0x5037FC: push    edx
0x5037FD: push    esi
0x5037FE: call    sub_4F7280
0x503803: add     esp, 10h
0x503806: pop     esi
0x503807: pop     ecx
0x503808: retn

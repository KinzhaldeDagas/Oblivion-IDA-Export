0x5034D0: push    ecx
0x5034D1: mov     ecx, [esp+4+l]
0x5034D5: mov     edx, [esp+4+arg_10]
0x5034D9: lea     eax, [esp+4+var_4]
0x5034DC: push    eax; UInt16
0x5034DD: mov     eax, [esp+8+arg_C]
0x5034E1: push    ecx; l
0x5034E2: mov     ecx, [esp+0Ch+a4]
0x5034E6: push    edx; a6
0x5034E7: mov     edx, [esp+10h+a3]
0x5034EB: push    eax; a5
0x5034EC: mov     eax, [esp+14h+arg_4]
0x5034F0: push    ecx; a4
0x5034F1: mov     ecx, [esp+18h+a1]
0x5034F5: push    edx; a3
0x5034F6: push    eax; a2
0x5034F7: push    ecx; a1
0x5034F8: mov     dword ptr [esp+24h+var_4], 0
0x503500: call    Script_ExtractArgs
0x503505: add     esp, 20h
0x503508: test    al, al
0x50350A: jnz     short loc_50350E
0x50350C: pop     ecx
0x50350D: retn
0x50350E: mov     edx, [esp+4+arg_18]
0x503512: mov     eax, dword ptr [esp+4+var_4]
0x503515: mov     ecx, ds:0B333C4h
0x50351B: push    edx
0x50351C: push    0
0x50351E: push    eax
0x50351F: push    ecx
0x503520: call    GetIsRace
0x503525: add     esp, 10h
0x503528: pop     ecx
0x503529: retn

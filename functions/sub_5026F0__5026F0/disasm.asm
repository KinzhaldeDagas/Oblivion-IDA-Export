0x5026F0: push    ecx
0x5026F1: mov     ecx, [esp+4+l]
0x5026F5: mov     edx, [esp+4+arg_10]
0x5026F9: push    esi
0x5026FA: mov     esi, [esp+8+a4]
0x5026FE: lea     eax, [esp+8+var_4]
0x502702: push    eax; UInt16
0x502703: mov     eax, [esp+0Ch+arg_C]
0x502707: push    ecx; l
0x502708: mov     ecx, [esp+10h+a3]
0x50270C: push    edx; a6
0x50270D: mov     edx, [esp+14h+arg_4]
0x502711: push    eax; a5
0x502712: mov     eax, [esp+18h+a1]
0x502716: push    esi; a4
0x502717: push    ecx; a3
0x502718: push    edx; a2
0x502719: push    eax; a1
0x50271A: mov     dword ptr [esp+28h+var_4], 0
0x502722: call    Script_ExtractArgs
0x502727: add     esp, 20h
0x50272A: test    al, al
0x50272C: jnz     short loc_502731
0x50272E: pop     esi
0x50272F: pop     ecx
0x502730: retn
0x502731: mov     ecx, [esp+8+arg_18]
0x502735: mov     edx, dword ptr [esp+8+var_4]
0x502739: push    ecx
0x50273A: push    0
0x50273C: push    edx
0x50273D: push    esi
0x50273E: call    sub_4F62A0
0x502743: add     esp, 10h
0x502746: pop     esi
0x502747: pop     ecx
0x502748: retn

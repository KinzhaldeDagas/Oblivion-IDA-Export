0x501390: push    ecx
0x501391: mov     ecx, [esp+4+l]
0x501395: mov     edx, [esp+4+arg_10]
0x501399: lea     eax, [esp+4+var_4]
0x50139C: push    eax; UInt16
0x50139D: mov     eax, [esp+8+arg_C]
0x5013A1: push    ecx; l
0x5013A2: mov     ecx, [esp+0Ch+a4]
0x5013A6: push    edx; a6
0x5013A7: mov     edx, [esp+10h+a3]
0x5013AB: push    eax; a5
0x5013AC: mov     eax, [esp+14h+arg_4]
0x5013B0: push    ecx; a4
0x5013B1: mov     ecx, [esp+18h+a1]
0x5013B5: push    edx; a3
0x5013B6: push    eax; a2
0x5013B7: push    ecx; a1
0x5013B8: mov     dword ptr [esp+24h+var_4], 0
0x5013C0: call    Script_ExtractArgs
0x5013C5: add     esp, 20h
0x5013C8: test    al, al
0x5013CA: jnz     short loc_5013CE
0x5013CC: pop     ecx
0x5013CD: retn
0x5013CE: cmp     dword ptr [esp+4+var_4], 0
0x5013D2: mov     al, 1
0x5013D4: setnz   dl
0x5013D7: mov     ds:0BA7A04h, dl
0x5013DD: pop     ecx
0x5013DE: retn

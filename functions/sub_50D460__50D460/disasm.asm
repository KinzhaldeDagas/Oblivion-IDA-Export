0x50D460: push    ecx
0x50D461: mov     ecx, [esp+4+l]
0x50D465: mov     edx, [esp+4+arg_10]
0x50D469: lea     eax, [esp+4+var_4]
0x50D46C: push    eax; UInt16
0x50D46D: mov     eax, [esp+8+arg_C]
0x50D471: push    ecx; l
0x50D472: mov     ecx, [esp+0Ch+a4]
0x50D476: push    edx; a6
0x50D477: mov     edx, [esp+10h+a3]
0x50D47B: push    eax; a5
0x50D47C: mov     eax, [esp+14h+arg_4]
0x50D480: push    ecx; a4
0x50D481: mov     ecx, [esp+18h+a1]
0x50D485: push    edx; a3
0x50D486: push    eax; a2
0x50D487: push    ecx; a1
0x50D488: mov     dword ptr [esp+24h+var_4], 0
0x50D490: call    Script_ExtractArgs
0x50D495: add     esp, 20h
0x50D498: test    al, al
0x50D49A: jnz     short loc_50D49E
0x50D49C: pop     ecx
0x50D49D: retn
0x50D49E: cmp     dword ptr [esp+4+var_4], 0
0x50D4A2: mov     eax, ds:0B333C4h
0x50D4A7: setnz   dl
0x50D4AA: mov     [eax+5A9h], dl
0x50D4B0: mov     al, 1
0x50D4B2: pop     ecx
0x50D4B3: retn

0x505710: push    ecx
0x505711: mov     ecx, [esp+4+l]
0x505715: mov     edx, [esp+4+arg_10]
0x505719: push    esi
0x50571A: mov     esi, [esp+8+a4]
0x50571E: lea     eax, [esp+8+var_4]
0x505722: push    eax; UInt16
0x505723: mov     eax, [esp+0Ch+arg_C]
0x505727: push    ecx; l
0x505728: mov     ecx, [esp+10h+a3]
0x50572C: push    edx; a6
0x50572D: mov     edx, [esp+14h+arg_4]
0x505731: push    eax; a5
0x505732: mov     eax, [esp+18h+a1]
0x505736: push    esi; a4
0x505737: push    ecx; a3
0x505738: push    edx; a2
0x505739: push    eax; a1
0x50573A: mov     dword ptr [esp+28h+var_4], 0
0x505742: call    Script_ExtractArgs
0x505747: add     esp, 20h
0x50574A: test    al, al
0x50574C: jnz     short loc_505751
0x50574E: pop     esi
0x50574F: pop     ecx
0x505750: retn
0x505751: mov     ecx, [esp+8+arg_18]
0x505755: mov     edx, dword ptr [esp+8+var_4]
0x505759: push    ecx
0x50575A: push    0
0x50575C: push    edx
0x50575D: push    esi
0x50575E: call    sub_4F8300
0x505763: add     esp, 10h
0x505766: pop     esi
0x505767: pop     ecx
0x505768: retn

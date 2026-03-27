0x505540: push    ecx
0x505541: mov     ecx, [esp+4+l]
0x505545: mov     edx, [esp+4+arg_10]
0x505549: push    esi
0x50554A: mov     esi, [esp+8+a4]
0x50554E: lea     eax, [esp+8+var_4]
0x505552: push    eax; UInt16
0x505553: mov     eax, [esp+0Ch+arg_C]
0x505557: push    ecx; l
0x505558: mov     ecx, [esp+10h+a3]
0x50555C: push    edx; a6
0x50555D: mov     edx, [esp+14h+arg_4]
0x505561: push    eax; a5
0x505562: mov     eax, [esp+18h+a1]
0x505566: push    esi; a4
0x505567: push    ecx; a3
0x505568: push    edx; a2
0x505569: push    eax; a1
0x50556A: mov     dword ptr [esp+28h+var_4], 0
0x505572: call    Script_ExtractArgs
0x505577: add     esp, 20h
0x50557A: test    al, al
0x50557C: jnz     short loc_505581
0x50557E: pop     esi
0x50557F: pop     ecx
0x505580: retn
0x505581: mov     ecx, [esp+8+arg_18]
0x505585: mov     edx, dword ptr [esp+8+var_4]
0x505589: push    ecx
0x50558A: push    0
0x50558C: push    edx
0x50558D: push    esi
0x50558E: call    sub_4F81A0
0x505593: add     esp, 10h
0x505596: mov     al, 1
0x505598: pop     esi
0x505599: pop     ecx
0x50559A: retn

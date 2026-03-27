0x505990: push    ecx
0x505991: mov     ecx, [esp+4+l]
0x505995: mov     edx, [esp+4+arg_10]
0x505999: push    esi
0x50599A: mov     esi, [esp+8+a4]
0x50599E: lea     eax, [esp+8+var_4]
0x5059A2: push    eax; UInt16
0x5059A3: mov     eax, [esp+0Ch+arg_C]
0x5059A7: push    ecx; l
0x5059A8: mov     ecx, [esp+10h+a3]
0x5059AC: push    edx; a6
0x5059AD: mov     edx, [esp+14h+arg_4]
0x5059B1: push    eax; a5
0x5059B2: mov     eax, [esp+18h+a1]
0x5059B6: push    esi; a4
0x5059B7: push    ecx; a3
0x5059B8: push    edx; a2
0x5059B9: push    eax; a1
0x5059BA: mov     dword ptr [esp+28h+var_4], 0
0x5059C2: call    Script_ExtractArgs
0x5059C7: add     esp, 20h
0x5059CA: test    al, al
0x5059CC: jnz     short loc_5059D1
0x5059CE: pop     esi
0x5059CF: pop     ecx
0x5059D0: retn
0x5059D1: mov     ecx, [esp+8+arg_18]
0x5059D5: mov     edx, dword ptr [esp+8+var_4]
0x5059D9: push    ecx
0x5059DA: push    0
0x5059DC: push    edx
0x5059DD: push    esi
0x5059DE: call    sub_4F83D0
0x5059E3: add     esp, 10h
0x5059E6: pop     esi
0x5059E7: pop     ecx
0x5059E8: retn

0x502DD0: push    ecx
0x502DD1: mov     ecx, [esp+4+l]
0x502DD5: mov     edx, [esp+4+arg_10]
0x502DD9: lea     eax, [esp+4+var_4]
0x502DDC: push    eax; UInt16
0x502DDD: mov     eax, [esp+8+arg_C]
0x502DE1: push    ecx; l
0x502DE2: mov     ecx, [esp+0Ch+a4]
0x502DE6: push    edx; a6
0x502DE7: mov     edx, [esp+10h+a3]
0x502DEB: push    eax; a5
0x502DEC: mov     eax, [esp+14h+arg_4]
0x502DF0: push    ecx; a4
0x502DF1: mov     ecx, [esp+18h+a1]
0x502DF5: push    edx; a3
0x502DF6: push    eax; a2
0x502DF7: push    ecx; a1
0x502DF8: mov     dword ptr [esp+24h+var_4], 0
0x502E00: call    Script_ExtractArgs
0x502E05: add     esp, 20h
0x502E08: test    al, al
0x502E0A: jnz     short loc_502E0E
0x502E0C: pop     ecx
0x502E0D: retn
0x502E0E: mov     ecx, dword ptr [esp+4+var_4]
0x502E11: test    ecx, ecx
0x502E13: jz      short loc_502E1C
0x502E15: push    1
0x502E17: call    Quest_CompleteQuest
0x502E1C: mov     al, 1
0x502E1E: pop     ecx
0x502E1F: retn

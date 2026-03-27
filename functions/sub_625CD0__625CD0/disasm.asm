0x625CD0: mov     edx, [esp+arg_0]
0x625CD4: mov     eax, edx
0x625CD6: sub     eax, 1
0x625CD9: jz      short loc_625CE4
0x625CDB: mov     [esp+arg_0], edx
0x625CDF: jmp     sub_4A98B0
0x625CE4: cmp     dword ptr ds:0B35770h, 0
0x625CEB: setnz   al
0x625CEE: retn    4

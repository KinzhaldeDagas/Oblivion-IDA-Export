0x502D80: push    ecx
0x502D81: mov     ecx, [esp+4+l]
0x502D85: mov     edx, [esp+4+arg_10]
0x502D89: lea     eax, [esp+4+var_4]
0x502D8C: push    eax; UInt16
0x502D8D: mov     eax, [esp+8+arg_C]
0x502D91: push    ecx; l
0x502D92: mov     ecx, [esp+0Ch+a4]
0x502D96: push    edx; a6
0x502D97: mov     edx, [esp+10h+a3]
0x502D9B: push    eax; a5
0x502D9C: mov     eax, [esp+14h+arg_4]
0x502DA0: push    ecx; a4
0x502DA1: mov     ecx, [esp+18h+a1]
0x502DA5: push    edx; a3
0x502DA6: push    eax; a2
0x502DA7: push    ecx; a1
0x502DA8: mov     dword ptr [esp+24h+var_4], 0
0x502DB0: call    Script_ExtractArgs
0x502DB5: add     esp, 20h
0x502DB8: test    al, al
0x502DBA: jnz     short loc_502DBE
0x502DBC: pop     ecx
0x502DBD: retn
0x502DBE: mov     ecx, dword ptr [esp+4+var_4]
0x502DC1: test    ecx, ecx
0x502DC3: jz      short loc_502DCC
0x502DC5: push    0
0x502DC7: call    sub_529820
0x502DCC: mov     al, 1
0x502DCE: pop     ecx
0x502DCF: retn

0x50BAC0: push    ecx
0x50BAC1: mov     ecx, [esp+4+l]
0x50BAC5: mov     edx, [esp+4+arg_10]
0x50BAC9: lea     eax, [esp+4+var_4]
0x50BACC: push    eax; UInt16
0x50BACD: mov     eax, [esp+8+arg_C]
0x50BAD1: push    ecx; l
0x50BAD2: mov     ecx, [esp+0Ch+a4]
0x50BAD6: push    edx; a6
0x50BAD7: mov     edx, [esp+10h+a3]
0x50BADB: push    eax; a5
0x50BADC: mov     eax, [esp+14h+arg_4]
0x50BAE0: push    ecx; a4
0x50BAE1: mov     ecx, [esp+18h+a1]
0x50BAE5: push    edx; a3
0x50BAE6: push    eax; a2
0x50BAE7: push    ecx; a1
0x50BAE8: mov     dword ptr [esp+24h+var_4], 0
0x50BAF0: call    Script_ExtractArgs
0x50BAF5: add     esp, 20h
0x50BAF8: test    al, al
0x50BAFA: jnz     short loc_50BAFE
0x50BAFC: pop     ecx
0x50BAFD: retn
0x50BAFE: mov     eax, ds:0B333C4h
0x50BB03: mov     edx, dword ptr [esp+4+var_4]
0x50BB06: mov     [eax+590h], edx
0x50BB0C: mov     byte ptr [eax+594h], 1
0x50BB13: mov     al, 1
0x50BB15: pop     ecx
0x50BB16: retn

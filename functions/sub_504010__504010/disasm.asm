0x504010: push    ecx
0x504011: mov     ecx, [esp+4+l]
0x504015: mov     edx, [esp+4+arg_10]
0x504019: lea     eax, [esp+4+var_4]
0x50401C: push    eax; UInt16
0x50401D: mov     eax, [esp+8+arg_C]
0x504021: push    ecx; l
0x504022: mov     ecx, [esp+0Ch+a4]
0x504026: push    edx; a6
0x504027: mov     edx, [esp+10h+a3]
0x50402B: push    eax; a5
0x50402C: mov     eax, [esp+14h+arg_4]
0x504030: push    ecx; a4
0x504031: mov     ecx, [esp+18h+a1]
0x504035: push    edx; a3
0x504036: push    eax; a2
0x504037: push    ecx; a1
0x504038: mov     dword ptr [esp+24h+var_4], 0
0x504040: call    Script_ExtractArgs
0x504045: test    al, al
0x504047: setnz   al
0x50404A: add     esp, 24h
0x50404D: retn

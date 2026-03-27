0x50E9D0: push    ecx
0x50E9D1: mov     ecx, [esp+4+l]
0x50E9D5: mov     edx, [esp+4+arg_10]
0x50E9D9: lea     eax, [esp+4+var_4]
0x50E9DC: push    eax; UInt16
0x50E9DD: mov     eax, [esp+8+arg_C]
0x50E9E1: push    ecx; l
0x50E9E2: mov     ecx, [esp+0Ch+a4]
0x50E9E6: push    edx; a6
0x50E9E7: mov     edx, [esp+10h+a3]
0x50E9EB: push    eax; a5
0x50E9EC: mov     eax, [esp+14h+arg_4]
0x50E9F0: push    ecx; a4
0x50E9F1: mov     ecx, [esp+18h+a1]
0x50E9F5: push    edx; a3
0x50E9F6: push    eax; a2
0x50E9F7: push    ecx; a1
0x50E9F8: call    Script_ExtractArgs
0x50E9FD: add     esp, 20h
0x50EA00: test    al, al
0x50EA02: jnz     short loc_50EA06
0x50EA04: pop     ecx
0x50EA05: retn
0x50EA06: xor     ecx, ecx
0x50EA08: cmp     dword ptr [esp+4+var_4], ecx
0x50EA0B: mov     al, 1
0x50EA0D: jz      short loc_50EA1B
0x50EA0F: mov     ds:0B333B8h, al
0x50EA14: mov     ds:0BA7A04h, al
0x50EA19: pop     ecx
0x50EA1A: retn
0x50EA1B: mov     ds:0B333B8h, cl
0x50EA21: mov     ds:0BA7A04h, cl
0x50EA27: pop     ecx
0x50EA28: retn

0x5081F0: push    ecx
0x5081F1: mov     ecx, [esp+4+l]
0x5081F5: mov     edx, [esp+4+arg_10]
0x5081F9: lea     eax, [esp+4+var_4]
0x5081FC: push    eax; UInt16
0x5081FD: mov     eax, [esp+8+arg_C]
0x508201: push    ecx; l
0x508202: mov     ecx, [esp+0Ch+a4]
0x508206: push    edx; a6
0x508207: mov     edx, [esp+10h+a3]
0x50820B: push    eax; a5
0x50820C: mov     eax, [esp+14h+arg_4]
0x508210: push    ecx; a4
0x508211: mov     ecx, [esp+18h+a1]
0x508215: push    edx; a3
0x508216: push    eax; a2
0x508217: push    ecx; a1
0x508218: mov     dword ptr [esp+24h+var_4], 0
0x508220: call    Script_ExtractArgs
0x508225: add     esp, 20h
0x508228: test    al, al
0x50822A: jnz     short loc_50822E
0x50822C: pop     ecx
0x50822D: retn
0x50822E: mov     edx, dword ptr [esp+4+var_4]
0x508231: mov     ds:0B02E0Ch, edx
0x508237: mov     al, 1
0x508239: pop     ecx
0x50823A: retn

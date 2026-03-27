0x5032D0: push    ecx
0x5032D1: mov     ecx, [esp+4+l]
0x5032D5: mov     edx, [esp+4+arg_10]
0x5032D9: lea     eax, [esp+4+var_4]
0x5032DC: push    eax; UInt16
0x5032DD: mov     eax, [esp+8+arg_C]
0x5032E1: push    ecx; l
0x5032E2: mov     ecx, [esp+0Ch+a4]
0x5032E6: push    edx; a6
0x5032E7: mov     edx, [esp+10h+a3]
0x5032EB: push    eax; a5
0x5032EC: mov     eax, [esp+14h+arg_4]
0x5032F0: push    ecx; a4
0x5032F1: mov     ecx, [esp+18h+a1]
0x5032F5: push    edx; a3
0x5032F6: push    eax; a2
0x5032F7: push    ecx; a1
0x5032F8: mov     dword ptr [esp+24h+var_4], 0
0x503300: call    Script_ExtractArgs
0x503305: add     esp, 20h
0x503308: test    al, al
0x50330A: jnz     short loc_50330E
0x50330C: pop     ecx
0x50330D: retn
0x50330E: cmp     dword ptr [esp+4+var_4], 0
0x503312: mov     ecx, ds:0B333C4h
0x503318: jz      short loc_503325
0x50331A: push    1
0x50331C: call    sub_65D620
0x503321: mov     al, 1
0x503323: pop     ecx
0x503324: retn
0x503325: push    0
0x503327: call    sub_65D620
0x50332C: mov     al, 1
0x50332E: pop     ecx
0x50332F: retn

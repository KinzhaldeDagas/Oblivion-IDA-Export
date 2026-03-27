0x50CA90: push    ecx
0x50CA91: mov     ecx, [esp+4+l]
0x50CA95: mov     edx, [esp+4+arg_10]
0x50CA99: lea     eax, [esp+4+var_4]
0x50CA9C: push    eax; UInt16
0x50CA9D: mov     eax, [esp+8+arg_C]
0x50CAA1: push    ecx; l
0x50CAA2: mov     ecx, [esp+0Ch+a4]
0x50CAA6: push    edx; a6
0x50CAA7: mov     edx, [esp+10h+a3]
0x50CAAB: push    eax; a5
0x50CAAC: mov     eax, [esp+14h+arg_4]
0x50CAB0: push    ecx; a4
0x50CAB1: mov     ecx, [esp+18h+a1]
0x50CAB5: push    edx; a3
0x50CAB6: push    eax; a2
0x50CAB7: push    ecx; a1
0x50CAB8: mov     dword ptr [esp+24h+var_4], 0
0x50CAC0: call    Script_ExtractArgs
0x50CAC5: add     esp, 20h
0x50CAC8: test    al, al
0x50CACA: jnz     short loc_50CACE
0x50CACC: pop     ecx
0x50CACD: retn
0x50CACE: mov     eax, ds:0B333C4h
0x50CAD3: mov     edx, dword ptr [esp+4+var_4]
0x50CAD6: add     [eax+6F8h], edx
0x50CADC: mov     dword ptr [eax+6FCh], 0
0x50CAE6: cmp     byte ptr ds:0B361ACh, 0
0x50CAED: jz      short loc_50CB0D
0x50CAEF: mov     ecx, ds:0B333C4h
0x50CAF5: mov     eax, [ecx]
0x50CAF7: mov     edx, [eax+208h]
0x50CAFD: call    edx
0x50CAFF: push    eax
0x50CB00: push    offset aPlayerInfamy_0; "Player infamy is %d "
0x50CB05: call    Interface_ConsolePrint
0x50CB0A: add     esp, 8
0x50CB0D: mov     al, 1
0x50CB0F: pop     ecx
0x50CB10: retn

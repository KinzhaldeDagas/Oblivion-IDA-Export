0x502D30: push    ecx
0x502D31: mov     ecx, [esp+4+l]
0x502D35: mov     edx, [esp+4+arg_10]
0x502D39: lea     eax, [esp+4+var_4]
0x502D3C: push    eax; UInt16
0x502D3D: mov     eax, [esp+8+arg_C]
0x502D41: push    ecx; l
0x502D42: mov     ecx, [esp+0Ch+a4]
0x502D46: push    edx; a6
0x502D47: mov     edx, [esp+10h+a3]
0x502D4B: push    eax; a5
0x502D4C: mov     eax, [esp+14h+arg_4]
0x502D50: push    ecx; a4
0x502D51: mov     ecx, [esp+18h+a1]
0x502D55: push    edx; a3
0x502D56: push    eax; a2
0x502D57: push    ecx; a1
0x502D58: mov     dword ptr [esp+24h+var_4], 0
0x502D60: call    Script_ExtractArgs
0x502D65: add     esp, 20h
0x502D68: test    al, al
0x502D6A: jnz     short loc_502D6E
0x502D6C: pop     ecx
0x502D6D: retn
0x502D6E: mov     ecx, dword ptr [esp+4+var_4]
0x502D71: test    ecx, ecx
0x502D73: jz      short loc_502D7C
0x502D75: push    1
0x502D77: call    sub_529820
0x502D7C: mov     al, 1
0x502D7E: pop     ecx
0x502D7F: retn

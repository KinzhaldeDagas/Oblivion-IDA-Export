0x503B60: push    ecx
0x503B61: mov     ecx, [esp+4+l]
0x503B65: mov     edx, [esp+4+arg_10]
0x503B69: lea     eax, [esp+4+var_4]
0x503B6C: push    eax; UInt16
0x503B6D: mov     eax, [esp+8+arg_C]
0x503B71: push    ecx; l
0x503B72: mov     ecx, [esp+0Ch+a4]
0x503B76: push    edx; a6
0x503B77: mov     edx, [esp+10h+a3]
0x503B7B: push    eax; a5
0x503B7C: mov     eax, [esp+14h+arg_4]
0x503B80: push    ecx; a4
0x503B81: mov     ecx, [esp+18h+a1]
0x503B85: push    edx; a3
0x503B86: push    eax; a2
0x503B87: push    ecx; a1
0x503B88: mov     dword ptr [esp+24h+var_4], 0
0x503B90: call    Script_ExtractArgs
0x503B95: add     esp, 20h
0x503B98: test    al, al
0x503B9A: jnz     short loc_503B9E
0x503B9C: pop     ecx
0x503B9D: retn
0x503B9E: mov     edx, dword ptr [esp+4+var_4]
0x503BA1: mov     ecx, ds:0B333C4h; a1
0x503BA7: push    0; a7
0x503BA9: push    1; a6
0x503BAB: push    edx; a5
0x503BAC: call    sub_669690
0x503BB1: mov     al, 1
0x503BB3: pop     ecx
0x503BB4: retn

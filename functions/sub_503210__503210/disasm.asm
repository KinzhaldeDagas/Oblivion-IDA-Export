0x503210: push    ecx
0x503211: mov     ecx, [esp+4+l]
0x503215: mov     edx, [esp+4+arg_10]
0x503219: push    esi
0x50321A: mov     esi, [esp+8+a4]
0x50321E: lea     eax, [esp+8+var_4]
0x503222: push    eax; UInt16
0x503223: mov     eax, [esp+0Ch+arg_C]
0x503227: push    ecx; l
0x503228: mov     ecx, [esp+10h+a3]
0x50322C: push    edx; a6
0x50322D: mov     edx, [esp+14h+arg_4]
0x503231: push    eax; a5
0x503232: mov     eax, [esp+18h+a1]
0x503236: push    esi; a4
0x503237: push    ecx; a3
0x503238: push    edx; a2
0x503239: push    eax; a1
0x50323A: mov     dword ptr [esp+28h+var_4], 0
0x503242: call    Script_ExtractArgs
0x503247: add     esp, 20h
0x50324A: test    al, al
0x50324C: jnz     short loc_503251
0x50324E: pop     esi
0x50324F: pop     ecx

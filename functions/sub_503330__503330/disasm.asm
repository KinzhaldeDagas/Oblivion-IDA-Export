0x503330: push    ecx
0x503331: mov     ecx, [esp+4+l]
0x503335: mov     edx, [esp+4+arg_10]
0x503339: push    esi
0x50333A: mov     esi, [esp+8+a4]
0x50333E: lea     eax, [esp+8+var_4]
0x503342: push    eax; UInt16
0x503343: mov     eax, [esp+0Ch+arg_C]
0x503347: push    ecx; l
0x503348: mov     ecx, [esp+10h+a3]
0x50334C: push    edx; a6
0x50334D: mov     edx, [esp+14h+arg_4]
0x503351: push    eax; a5
0x503352: mov     eax, [esp+18h+a1]
0x503356: push    esi; a4
0x503357: push    ecx; a3
0x503358: push    edx; a2
0x503359: push    eax; a1
0x50335A: mov     dword ptr [esp+28h+var_4], 0
0x503362: call    Script_ExtractArgs
0x503367: add     esp, 20h
0x50336A: test    al, al
0x50336C: jnz     short loc_503371
0x50336E: pop     esi
0x50336F: pop     ecx
0x503370: retn
0x503371: mov     ecx, [esp+8+arg_18]
0x503375: mov     edx, dword ptr [esp+8+var_4]
0x503379: push    ecx
0x50337A: push    0
0x50337C: push    edx
0x50337D: push    esi
0x50337E: call    GetIsRace
0x503383: add     esp, 10h
0x503386: pop     esi
0x503387: pop     ecx
0x503388: retn

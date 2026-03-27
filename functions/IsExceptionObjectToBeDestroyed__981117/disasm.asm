0x981117: call    __getptd
0x98111C: mov     eax, [eax+98h]
0x981122: jmp     short loc_98112F
0x981124: mov     ecx, [eax]
0x981126: cmp     ecx, [esp+arg_0]
0x98112A: jz      short loc_981135
0x98112C: mov     eax, [eax+4]
0x98112F: test    eax, eax
0x981131: jnz     short loc_981124
0x981133: inc     eax
0x981134: retn
0x981135: xor     eax, eax
0x981137: retn

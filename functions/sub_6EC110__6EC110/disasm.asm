0x6EC110: push    esi
0x6EC111: mov     esi, [esp+4+arg_0]
0x6EC115: test    esi, esi
0x6EC117: push    edi
0x6EC118: mov     edi, ecx
0x6EC11A: jz      short loc_6EC148
0x6EC11C: mov     eax, [esi]
0x6EC11E: mov     edx, [eax+4]
0x6EC121: mov     ecx, esi
0x6EC123: call    edx
0x6EC125: test    eax, eax
0x6EC127: jz      short loc_6EC13E
0x6EC129: lea     esp, [esp+0]
0x6EC130: cmp     eax, offset dword_B3CFBC
0x6EC135: jz      short loc_6EC16D
0x6EC137: mov     eax, [eax+4]
0x6EC13A: test    eax, eax
0x6EC13C: jnz     short loc_6EC130
0x6EC13E: xor     al, al
0x6EC140: neg     al
0x6EC142: sbb     eax, eax
0x6EC144: and     eax, esi
0x6EC146: mov     esi, eax
0x6EC148: mov     eax, [edi]
0x6EC14A: mov     edx, [eax+0A8h]
0x6EC150: lea     ecx, [esp+8+arg_0]
0x6EC154: push    ecx
0x6EC155: mov     ecx, edi
0x6EC157: call    edx
0x6EC159: fld     [esp+8+arg_0]
0x6EC15D: push    ecx
0x6EC15E: mov     ecx, esi
0x6EC160: fstp    [esp+0Ch+var_C]; float
0x6EC163: call    sub_6D2B70
0x6EC168: pop     edi
0x6EC169: pop     esi
0x6EC16A: retn    8
0x6EC16D: mov     al, 1
0x6EC16F: jmp     short loc_6EC140

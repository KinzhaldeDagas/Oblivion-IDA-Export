0x98544F: push    [esp+NewFilename]; lpNewFileName
0x985453: push    [esp+4+OldFilename]; lpExistingFileName
0x985457: call    dword ptr ds:0A281C0h
0x98545D: test    eax, eax
0x98545F: jnz     short loc_985469
0x985461: call    dword ptr ds:0A281ECh
0x985467: jmp     short loc_98546B
0x985469: xor     eax, eax
0x98546B: test    eax, eax
0x98546D: jz      short loc_98547A
0x98546F: push    eax
0x985470: call    __dosmaperr
0x985475: pop     ecx
0x985476: or      eax, 0FFFFFFFFh
0x985479: retn
0x98547A: xor     eax, eax
0x98547C: retn

0x42B200: push    esi; XMRK companion loader owns cursor advancement. After XMRK it advances once, optionally consumes adjacent FNAM, requires/loads adjacent FULL, then advances and requires/loads adjacent TNAM. A nonmatching chunk at either required position is swallowed from outer dispatch. FNAM max1: empty retains, exact1 replaces, >1 forces 0. TNAM max2: empty retains, exact/short prefix-overlays existing u16, >2 keeps byte0 and forces byte1=0. FULL empty clears; nonempty replaces via unbounded read+strlen and is unsafe without terminal NUL. Existing marker state is reused across repeated/partial sequences.
0x42B201: mov     esi, [esp+4+a1]
0x42B205: test    esi, esi
0x42B207: push    edi
0x42B208: mov     edi, ecx
0x42B20A: jz      loc_42B292
0x42B210: mov     ecx, esi
0x42B212: call    TESFile_GetChunkType
0x42B217: cmp     eax, 4B524D58h
0x42B21C: jnz     short loc_42B292
0x42B21E: mov     ecx, esi
0x42B220: call    TESFile_GetNextChunk
0x42B225: test    al, al
0x42B227: jz      short loc_42B292
0x42B229: mov     ecx, esi
0x42B22B: call    TESFile_GetChunkType
0x42B230: cmp     eax, 4D414E46h
0x42B235: jnz     short loc_42B24F
0x42B237: push    1; a4
0x42B239: lea     eax, [edi+0Ch]
0x42B23C: push    eax; Dst
0x42B23D: mov     ecx, esi; a1
0x42B23F: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x42B244: mov     ecx, esi
0x42B246: call    TESFile_GetNextChunk
0x42B24B: test    al, al
0x42B24D: jz      short loc_42B292
0x42B24F: mov     ecx, esi
0x42B251: call    TESFile_GetChunkType
0x42B256: cmp     eax, 4C4C5546h
0x42B25B: jnz     short loc_42B292
0x42B25D: push    esi
0x42B25E: push    edi
0x42B25F: call    TESFullname_Load; FULL loader used by XMRK: empty payload frees/clears the string. Nonempty payload is copied with max=0 into the exact temporary and passed to BSStringT_Set/strlen; a missing terminal NUL can scan past the chunk allocation.
0x42B264: add     esp, 8
0x42B267: mov     ecx, esi
0x42B269: call    TESFile_GetNextChunk
0x42B26E: test    al, al
0x42B270: jz      short loc_42B292
0x42B272: mov     ecx, esi
0x42B274: call    TESFile_GetChunkType
0x42B279: cmp     eax, 4D414E54h
0x42B27E: jnz     short loc_42B292
0x42B280: add     edi, 0Eh
0x42B283: push    edi
0x42B284: mov     ecx, esi
0x42B286: call    TESFile_GetChunkData2
0x42B28B: pop     edi
0x42B28C: mov     al, 1
0x42B28E: pop     esi
0x42B28F: retn    4
0x42B292: pop     edi
0x42B293: xor     al, al
0x42B295: pop     esi
0x42B296: retn    4

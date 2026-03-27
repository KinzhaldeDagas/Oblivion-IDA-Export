0x42BD70: cmp     bInvalidateOlderFiles_Archive, 0
0x42BD77: push    esi
0x42BD78: mov     esi, ecx
0x42BD7A: jnz     short loc_42BDCA
0x42BD7C: cmp     bCheckRuntimeCollisions_Archive, 0
0x42BD83: jnz     short loc_42BDCA
0x42BD85: mov     eax, [esi+160h]
0x42BD8B: mov     ecx, eax
0x42BD8D: shr     ecx, 7
0x42BD90: test    cl, 1
0x42BD93: jnz     short loc_42BDCA
0x42BD95: mov     ecx, iRetainDirectoryStringTable_Archive
0x42BD9B: cmp     ecx, 1
0x42BD9E: jnz     short loc_42BDA7
0x42BDA0: shr     eax, 3
0x42BDA3: and     al, cl
0x42BDA5: jmp     short loc_42BDAC
0x42BDA7: test    ecx, ecx
0x42BDA9: setnz   al
0x42BDAC: test    al, al
0x42BDAE: jnz     short loc_42BDCA
0x42BDB0: mov     ecx, esi
0x42BDB2: call    Archive_RetainsFilenameStringTable
0x42BDB7: test    al, al
0x42BDB9: jnz     short loc_42BDCA
0x42BDBB: mov     ecx, esi
0x42BDBD: call    Archive_RetainsFilenameOffsetTable
0x42BDC2: test    al, al
0x42BDC4: jnz     short loc_42BDCA
0x42BDC6: xor     eax, eax
0x42BDC8: pop     esi
0x42BDC9: retn
0x42BDCA: mov     eax, 1
0x42BDCF: pop     esi
0x42BDD0: retn

0x6C6300: push    ebx
0x6C6301: mov     ebx, ds:0A2807Ch
0x6C6307: push    esi
0x6C6308: push    edi
0x6C6309: mov     edi, ecx
0x6C630B: mov     esi, [edi]
0x6C630D: test    esi, esi
0x6C630F: jz      short loc_6C632F
0x6C6311: lea     eax, [esi+4]
0x6C6314: push    eax; lpAddend
0x6C6315: call    ebx ; InterlockedDecrement
0x6C6317: test    eax, eax
0x6C6319: jnz     short loc_6C6329
0x6C631B: test    esi, esi
0x6C631D: jz      short loc_6C6329
0x6C631F: mov     edx, [esi]
0x6C6321: mov     eax, [edx]
0x6C6323: push    1
0x6C6325: mov     ecx, esi
0x6C6327: call    eax
0x6C6329: mov     dword ptr [edi], 0
0x6C632F: mov     esi, [edi+4]
0x6C6332: test    esi, esi
0x6C6334: jz      short loc_6C6355
0x6C6336: lea     ecx, [esi+4]
0x6C6339: push    ecx; lpAddend
0x6C633A: call    ebx ; InterlockedDecrement
0x6C633C: test    eax, eax
0x6C633E: jnz     short loc_6C634E
0x6C6340: test    esi, esi
0x6C6342: jz      short loc_6C634E
0x6C6344: mov     edx, [esi]
0x6C6346: mov     eax, [edx]
0x6C6348: push    1
0x6C634A: mov     ecx, esi
0x6C634C: call    eax
0x6C634E: mov     dword ptr [edi+4], 0
0x6C6355: mov     dword ptr [edi+8], 0
0x6C635C: mov     cl, ds:0A79EFCh
0x6C6362: mov     [edi+0Ch], cl
0x6C6365: mov     byte ptr [edi+0Dh], 0FFh
0x6C6369: pop     edi
0x6C636A: pop     esi
0x6C636B: pop     ebx
0x6C636C: retn

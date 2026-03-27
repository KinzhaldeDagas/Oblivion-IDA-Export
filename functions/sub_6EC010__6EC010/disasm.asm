0x6EC010: push    ebx
0x6EC011: mov     ebx, ds:0A2807Ch
0x6EC017: push    esi
0x6EC018: push    edi
0x6EC019: mov     edi, ecx
0x6EC01B: mov     esi, [edi+0Ch]
0x6EC01E: test    esi, esi
0x6EC020: jz      short loc_6EC041
0x6EC022: lea     eax, [esi+4]
0x6EC025: push    eax; lpAddend
0x6EC026: call    ebx ; InterlockedDecrement
0x6EC028: test    eax, eax
0x6EC02A: jnz     short loc_6EC03A
0x6EC02C: test    esi, esi
0x6EC02E: jz      short loc_6EC03A
0x6EC030: mov     edx, [esi]
0x6EC032: mov     eax, [edx]
0x6EC034: push    1
0x6EC036: mov     ecx, esi
0x6EC038: call    eax
0x6EC03A: mov     dword ptr [edi+0Ch], 0
0x6EC041: mov     esi, [edi+10h]
0x6EC044: test    esi, esi
0x6EC046: jz      short loc_6EC067
0x6EC048: lea     ecx, [esi+4]
0x6EC04B: push    ecx; lpAddend
0x6EC04C: call    ebx ; InterlockedDecrement
0x6EC04E: test    eax, eax
0x6EC050: jnz     short loc_6EC060
0x6EC052: test    esi, esi
0x6EC054: jz      short loc_6EC060
0x6EC056: mov     edx, [esi]
0x6EC058: mov     eax, [edx]
0x6EC05A: push    1
0x6EC05C: mov     ecx, esi
0x6EC05E: call    eax
0x6EC060: mov     dword ptr [edi+10h], 0
0x6EC067: push    edi
0x6EC068: call    sub_6EBFB0
0x6EC06D: add     esp, 4
0x6EC070: pop     edi
0x6EC071: pop     esi
0x6EC072: mov     al, 1
0x6EC074: pop     ebx
0x6EC075: retn

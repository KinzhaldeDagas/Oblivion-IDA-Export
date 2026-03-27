0x540F50: push    ecx
0x540F51: push    ebx
0x540F52: mov     ebx, ds:0A2807Ch
0x540F58: push    esi
0x540F59: push    edi
0x540F5A: mov     edi, ecx
0x540F5C: mov     ecx, [edi+4]
0x540F5F: test    ecx, ecx
0x540F61: jz      short loc_540F98
0x540F63: mov     edx, [edi+8]
0x540F66: mov     eax, [ecx]
0x540F68: mov     eax, [eax+88h]
0x540F6E: push    edx
0x540F6F: lea     edx, [esp+14h+var_4]
0x540F73: push    edx
0x540F74: call    eax
0x540F76: mov     eax, dword ptr [esp+10h+var_4]
0x540F7A: test    eax, eax
0x540F7C: jz      short loc_540F98
0x540F7E: mov     esi, eax
0x540F80: add     eax, 4
0x540F83: push    eax; lpAddend
0x540F84: call    ebx ; InterlockedDecrement
0x540F86: test    eax, eax
0x540F88: jnz     short loc_540F98
0x540F8A: test    esi, esi
0x540F8C: jz      short loc_540F98
0x540F8E: mov     edx, [esi]
0x540F90: mov     eax, [edx]
0x540F92: push    1
0x540F94: mov     ecx, esi
0x540F96: call    eax
0x540F98: mov     esi, [edi+8]
0x540F9B: test    esi, esi
0x540F9D: jz      short loc_540FBE
0x540F9F: lea     ecx, [esi+4]
0x540FA2: push    ecx; lpAddend
0x540FA3: call    ebx ; InterlockedDecrement
0x540FA5: test    eax, eax
0x540FA7: jnz     short loc_540FB7
0x540FA9: test    esi, esi
0x540FAB: jz      short loc_540FB7
0x540FAD: mov     edx, [esi]
0x540FAF: mov     eax, [edx]
0x540FB1: push    1
0x540FB3: mov     ecx, esi
0x540FB5: call    eax
0x540FB7: mov     dword ptr [edi+8], 0
0x540FBE: pop     edi
0x540FBF: pop     esi
0x540FC0: pop     ebx
0x540FC1: pop     ecx
0x540FC2: retn

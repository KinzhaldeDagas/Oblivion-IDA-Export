0x7C8F50: push    ebx
0x7C8F51: push    esi
0x7C8F52: push    edi
0x7C8F53: call    sub_8025F0
0x7C8F58: mov     ebx, ds:0A2807Ch
0x7C8F5E: mov     edi, offset dword_B45290
0x7C8F63: mov     esi, [edi]
0x7C8F65: test    esi, esi
0x7C8F67: jz      short loc_7C8F87
0x7C8F69: lea     eax, [esi+4]
0x7C8F6C: push    eax; lpAddend
0x7C8F6D: call    ebx ; InterlockedDecrement
0x7C8F6F: test    eax, eax
0x7C8F71: jnz     short loc_7C8F81
0x7C8F73: test    esi, esi
0x7C8F75: jz      short loc_7C8F81
0x7C8F77: mov     edx, [esi]
0x7C8F79: mov     eax, [edx]
0x7C8F7B: push    1
0x7C8F7D: mov     ecx, esi
0x7C8F7F: call    eax
0x7C8F81: mov     dword ptr [edi], 0
0x7C8F87: add     edi, 4
0x7C8F8A: cmp     edi, offset dword_B45494
0x7C8F90: jl      short loc_7C8F63
0x7C8F92: mov     edi, offset dword_B45088
0x7C8F97: mov     esi, [edi]
0x7C8F99: test    esi, esi
0x7C8F9B: jz      short loc_7C8FBB
0x7C8F9D: lea     ecx, [esi+4]
0x7C8FA0: push    ecx; lpAddend
0x7C8FA1: call    ebx ; InterlockedDecrement
0x7C8FA3: test    eax, eax
0x7C8FA5: jnz     short loc_7C8FB5
0x7C8FA7: test    esi, esi
0x7C8FA9: jz      short loc_7C8FB5
0x7C8FAB: mov     edx, [esi]
0x7C8FAD: mov     eax, [edx]
0x7C8FAF: push    1
0x7C8FB1: mov     ecx, esi
0x7C8FB3: call    eax
0x7C8FB5: mov     dword ptr [edi], 0
0x7C8FBB: add     edi, 4
0x7C8FBE: cmp     edi, offset dword_B4528C
0x7C8FC4: jl      short loc_7C8F97
0x7C8FC6: mov     esi, offset dword_B455A0
0x7C8FCB: or      edi, 0FFFFFFFFh
0x7C8FCE: mov     edi, edi
0x7C8FD0: mov     ecx, [esi]
0x7C8FD2: test    ecx, ecx
0x7C8FD4: jz      short loc_7C8FE6
0x7C8FD6: add     [ecx+60h], edi
0x7C8FD9: jnz     short loc_7C8FE0
0x7C8FDB: call    sub_7604D0
0x7C8FE0: mov     dword ptr [esi], 0
0x7C8FE6: add     esi, 4
0x7C8FE9: cmp     esi, offset dword_B45C2C
0x7C8FEF: jl      short loc_7C8FD0
0x7C8FF1: mov     edi, offset dword_B45018
0x7C8FF6: mov     esi, [edi]
0x7C8FF8: test    esi, esi
0x7C8FFA: jz      short loc_7C901A
0x7C8FFC: lea     ecx, [esi+4]
0x7C8FFF: push    ecx; lpAddend
0x7C9000: call    ebx ; InterlockedDecrement
0x7C9002: test    eax, eax
0x7C9004: jnz     short loc_7C9014
0x7C9006: test    esi, esi
0x7C9008: jz      short loc_7C9014
0x7C900A: mov     edx, [esi]
0x7C900C: mov     eax, [edx]
0x7C900E: push    1
0x7C9010: mov     ecx, esi
0x7C9012: call    eax
0x7C9014: mov     dword ptr [edi], 0
0x7C901A: add     edi, 4
0x7C901D: cmp     edi, offset dword_B45084
0x7C9023: jl      short loc_7C8FF6
0x7C9025: mov     edi, offset dword_B45518
0x7C902A: lea     ebx, [ebx+0]
0x7C9030: mov     esi, [edi]
0x7C9032: test    esi, esi
0x7C9034: jz      short loc_7C9054
0x7C9036: lea     ecx, [esi+4]
0x7C9039: push    ecx; lpAddend
0x7C903A: call    ebx ; InterlockedDecrement
0x7C903C: test    eax, eax
0x7C903E: jnz     short loc_7C904E
0x7C9040: test    esi, esi
0x7C9042: jz      short loc_7C904E
0x7C9044: mov     edx, [esi]
0x7C9046: mov     eax, [edx]
0x7C9048: push    1
0x7C904A: mov     ecx, esi
0x7C904C: call    eax
0x7C904E: mov     dword ptr [edi], 0
0x7C9054: add     edi, 4
0x7C9057: cmp     edi, offset dword_B4555C
0x7C905D: jl      short loc_7C9030
0x7C905F: push    68Ch
0x7C9064: push    0
0x7C9066: push    offset dword_B43B20
0x7C906B: call    __memset
0x7C9070: push    68Ch
0x7C9075: push    0
0x7C9077: push    offset dword_B441B0
0x7C907C: call    __memset
0x7C9081: push    68Ch
0x7C9086: push    0
0x7C9088: push    offset dword_B43490
0x7C908D: call    __memset
0x7C9092: push    68Ch
0x7C9097: push    0
0x7C9099: push    offset dword_B44840
0x7C909E: call    __memset
0x7C90A3: add     esp, 30h
0x7C90A6: pop     edi
0x7C90A7: pop     esi
0x7C90A8: mov     al, 1
0x7C90AA: pop     ebx
0x7C90AB: retn

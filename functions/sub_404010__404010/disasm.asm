0x404010: cmp     [esp+arg_0], 0
0x404015: push    esi
0x404016: mov     esi, ecx
0x404018: jz      short loc_404042
0x40401A: mov     eax, [esi+4]
0x40401D: or      dword ptr [esi], 1
0x404020: mov     ecx, [eax]
0x404022: mov     edx, [ecx+10h]
0x404025: push    1
0x404027: push    esi
0x404028: push    offset InputGlobals__InitializeJoystickProperties
0x40402D: push    0
0x40402F: push    eax
0x404030: call    edx
0x404032: cmp     dword ptr [esi+18F0h], 0
0x404039: jnz     short loc_404095
0x40403B: and     dword ptr [esi], 0FFFFFFFEh
0x40403E: pop     esi
0x40403F: retn    4
0x404042: push    ebx
0x404043: xor     ebx, ebx
0x404045: cmp     [esi+18F0h], ebx
0x40404B: jle     short loc_404074
0x40404D: push    edi
0x40404E: lea     edi, [esi+8]
0x404051: mov     eax, [edi]
0x404053: mov     ecx, [eax]
0x404055: mov     edx, [ecx+20h]
0x404058: push    eax
0x404059: call    edx
0x40405B: mov     eax, [edi]
0x40405D: mov     ecx, [eax]
0x40405F: mov     edx, [ecx+8]
0x404062: push    eax
0x404063: call    edx
0x404065: add     ebx, 1
0x404068: add     edi, 4
0x40406B: cmp     ebx, [esi+18F0h]
0x404071: jl      short loc_404051
0x404073: pop     edi
0x404074: and     dword ptr [esi], 0FFFFFFFEh
0x404077: push    500h
0x40407C: mov     dword ptr [esi+18F0h], 0
0x404086: push    0
0x404088: add     esi, 30h ; '0'
0x40408B: push    esi
0x40408C: call    __memset
0x404091: add     esp, 0Ch
0x404094: pop     ebx
0x404095: pop     esi
0x404096: retn    4

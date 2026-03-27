0x4416F0: cmp     dword ptr ds:0B33A98h, 0
0x4416F7: push    ebp
0x4416F8: mov     ebp, ecx
0x4416FA: jz      short loc_441756
0x4416FC: mov     ecx, [ebp+34h]
0x4416FF: test    ecx, ecx
0x441701: push    ebx
0x441702: mov     bl, 6
0x441704: jz      short loc_441710
0x441706: cmp     [ecx+26h], bl
0x441709: jnz     short loc_441710
0x44170B: call    sub_4CD090
0x441710: mov     eax, ds:0B06A2Ch
0x441715: push    edi
0x441716: xor     edi, edi
0x441718: push    esi
0x441719: lea     esp, [esp+0]
0x441720: cmp     edi, eax
0x441722: jnb     short loc_441753
0x441724: xor     esi, esi
0x441726: cmp     esi, eax
0x441728: jnb     short loc_44174E
0x44172A: mov     ecx, [ebp+8]
0x44172D: push    esi
0x44172E: push    edi
0x44172F: call    GetGridEntry
0x441734: mov     ecx, [eax]
0x441736: test    ecx, ecx
0x441738: jz      short loc_441744
0x44173A: cmp     [ecx+26h], bl
0x44173D: jnz     short loc_441744
0x44173F: call    sub_4CD090
0x441744: mov     eax, ds:0B06A2Ch
0x441749: add     esi, 1
0x44174C: jmp     short loc_441726
0x44174E: add     edi, 1
0x441751: jmp     short loc_441720
0x441753: pop     esi
0x441754: pop     edi
0x441755: pop     ebx
0x441756: pop     ebp
0x441757: retn

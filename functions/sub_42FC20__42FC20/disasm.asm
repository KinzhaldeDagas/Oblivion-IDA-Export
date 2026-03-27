0x42FC20: push    esi
0x42FC21: mov     esi, ecx
0x42FC23: test    esi, esi
0x42FC25: jnz     short loc_42FC2D
0x42FC27: xor     eax, eax
0x42FC29: pop     esi
0x42FC2A: retn    4
0x42FC2D: mov     eax, [esi+0Ch]
0x42FC30: test    eax, eax
0x42FC32: jz      short loc_42FC89
0x42FC34: push    ebx; lpCriticalSection
0x42FC35: mov     bl, [esp+8+arg_0]
0x42FC39: test    bl, bl
0x42FC3B: jz      short loc_42FC4A
0x42FC3D: mov     ecx, [eax+4]
0x42FC40: push    offset unk_A2F830
0x42FC45: call    NiEnterCriticalSection
0x42FC4A: mov     eax, [esi+8]
0x42FC4D: cmp     eax, 1
0x42FC50: jz      short loc_42FC57
0x42FC52: cmp     eax, 2
0x42FC55: jnz     short loc_42FC79
0x42FC57: mov     eax, [esi+0Ch]
0x42FC5A: add     eax, 2Ch ; ','
0x42FC5D: cmp     dword ptr [eax], 0
0x42FC60: jle     short loc_42FC79
0x42FC62: mov     ecx, esi
0x42FC64: call    sub_42FBF0
0x42FC69: mov     eax, [esi]
0x42FC6B: mov     edx, [eax+8]
0x42FC6E: mov     ecx, esi
0x42FC70: call    edx
0x42FC72: mov     dword ptr [esi+8], 0
0x42FC79: test    bl, bl
0x42FC7B: pop     ebx
0x42FC7C: jz      short loc_42FC89
0x42FC7E: mov     eax, [esi+0Ch]
0x42FC81: mov     ecx, [eax+4]; lpCriticalSection
0x42FC84: call    NiLeaveCriticalSection_0
0x42FC89: mov     eax, [esi+8]
0x42FC8C: pop     esi
0x42FC8D: retn    4

0x433D70: push    0FFFFFFFFh
0x433D72: push    offset SEH_616DB0
0x433D77: mov     eax, large fs:0
0x433D7D: push    eax
0x433D7E: sub     esp, 8
0x433D81: push    ebx
0x433D82: push    ebp
0x433D83: push    esi
0x433D84: push    edi
0x433D85: mov     eax, ___security_cookie
0x433D8A: xor     eax, esp
0x433D8C: push    eax
0x433D8D: lea     eax, [esp+28h+var_C]
0x433D91: mov     large fs:0, eax
0x433D97: mov     ebx, ecx
0x433D99: mov     esi, [ebx+14h]
0x433D9C: xor     edi, edi
0x433D9E: cmp     esi, edi
0x433DA0: jz      loc_433EB3
0x433DA6: mov     eax, [esi]
0x433DA8: mov     ecx, esi
0x433DAA: mov     [esp+28h+a2], eax
0x433DAE: call    sub_433110
0x433DB3: push    esi
0x433DB4: call    FormHeapFree
0x433DB9: xor     edx, edx
0x433DBB: add     esp, 4
0x433DBE: cmp     [ebx+8], edi
0x433DC1: mov     [ebx+14h], edi
0x433DC4: mov     [ebx+18h], edi
0x433DC7: mov     [esp+28h+var_14], edx
0x433DCB: jbe     loc_433E7F
0x433DD1: mov     eax, [ebx+0Ch]
0x433DD4: lea     ecx, ds:0[edx*4]
0x433DDB: mov     esi, [eax+ecx]
0x433DDE: add     eax, ecx
0x433DE0: mov     eax, [ebx+0Ch]
0x433DE3: and     esi, 0FFFFFFFEh
0x433DE6: add     eax, ecx
0x433DE8: test    esi, esi
0x433DEA: mov     dword ptr [eax], 0
0x433DF0: jz      short loc_433E6F
0x433DF2: mov     ebp, [esi+0Ch]
0x433DF5: mov     dword ptr [esi+0Ch], 0
0x433DFC: mov     edi, [esi+8]
0x433DFF: and     ebp, 0FFFFFFFEh
0x433E02: test    edi, edi
0x433E04: jz      short loc_433E29
0x433E06: lea     ecx, [edi+8]
0x433E09: push    ecx; lpAddend
0x433E0A: call    ds:InterlockedDecrement
0x433E10: test    eax, eax
0x433E12: jnz     short loc_433E22
0x433E14: test    edi, edi
0x433E16: jz      short loc_433E22
0x433E18: mov     edx, [edi]
0x433E1A: mov     eax, [edx]
0x433E1C: push    1
0x433E1E: mov     ecx, edi
0x433E20: call    eax
0x433E22: mov     dword ptr [esi+8], 0
0x433E29: mov     eax, [esi+4]
0x433E2C: mov     ecx, [esi]
0x433E2E: mov     edx, [ebx]
0x433E30: mov     edx, [edx+20h]
0x433E33: push    eax
0x433E34: push    ecx
0x433E35: mov     ecx, ebx
0x433E37: call    edx
0x433E39: mov     edi, [esi+8]
0x433E3C: test    edi, edi
0x433E3E: jz      short loc_433E5C
0x433E40: lea     eax, [edi+8]
0x433E43: push    eax; lpAddend
0x433E44: call    ds:InterlockedDecrement
0x433E4A: test    eax, eax
0x433E4C: jnz     short loc_433E5C
0x433E4E: test    edi, edi
0x433E50: jz      short loc_433E5C
0x433E52: mov     edx, [edi]
0x433E54: mov     eax, [edx]
0x433E56: push    1
0x433E58: mov     ecx, edi
0x433E5A: call    eax
0x433E5C: push    esi
0x433E5D: call    FormHeapFree
0x433E62: add     esp, 4
0x433E65: test    ebp, ebp
0x433E67: mov     esi, ebp
0x433E69: jnz     short loc_433DF2
0x433E6B: mov     edx, [esp+28h+var_14]
0x433E6F: add     edx, 1
0x433E72: cmp     edx, [ebx+8]
0x433E75: mov     [esp+28h+var_14], edx
0x433E79: jb      loc_433DD1
0x433E7F: cmp     byte ptr [esp+28h+arg_0], 0
0x433E84: jnz     short loc_433EB3
0x433E86: push    10h; Size
0x433E88: call    FormHeapAlloc
0x433E8D: add     esp, 4
0x433E90: mov     [esp+28h+arg_0], eax
0x433E94: test    eax, eax
0x433E96: mov     [esp+28h+var_4], 0
0x433E9E: jz      short loc_433EAE
0x433EA0: mov     ecx, [esp+28h+a2]
0x433EA4: push    ecx; a2
0x433EA5: mov     ecx, eax; this
0x433EA7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x433EAC: jmp     short loc_433EB0
0x433EAE: xor     eax, eax
0x433EB0: mov     [ebx+14h], eax
0x433EB3: mov     ecx, [esp+28h+var_C]
0x433EB7: mov     large fs:0, ecx
0x433EBE: pop     ecx
0x433EBF: pop     edi
0x433EC0: pop     esi
0x433EC1: pop     ebp
0x433EC2: pop     ebx
0x433EC3: add     esp, 14h
0x433EC6: retn    4

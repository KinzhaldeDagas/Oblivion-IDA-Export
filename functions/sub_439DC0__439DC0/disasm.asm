0x439DC0: push    0FFFFFFFFh
0x439DC2: push    offset SEH_439DC0
0x439DC7: mov     eax, large fs:0
0x439DCD: push    eax
0x439DCE: push    ecx
0x439DCF: push    ebx
0x439DD0: push    esi
0x439DD1: push    edi
0x439DD2: mov     eax, ___security_cookie
0x439DD7: xor     eax, esp
0x439DD9: push    eax
0x439DDA: lea     eax, [esp+20h+var_C]
0x439DDE: mov     large fs:0, eax
0x439DE4: mov     esi, ecx
0x439DE6: xor     ebx, ebx
0x439DE8: mov     [esp+20h+var_10], ebx
0x439DEC: mov     ecx, [esi+8]
0x439DEF: mov     eax, [ecx]
0x439DF1: mov     edi, [esp+20h+arg_0]
0x439DF5: mov     eax, [eax+4]
0x439DF8: lea     edx, [esp+20h+var_10]
0x439DFC: push    edx
0x439DFD: push    edi
0x439DFE: mov     [esp+28h+var_4], ebx
0x439E02: call    eax
0x439E04: test    al, al
0x439E06: jz      short loc_439E18
0x439E08: mov     ecx, [esp+20h+var_10]
0x439E0C: push    ecx
0x439E0D: mov     ecx, ioManager
0x439E13: call    sub_432130
0x439E18: mov     [esp+20h+arg_0], ebx
0x439E1C: mov     ecx, [esi+10h]
0x439E1F: mov     edx, [ecx]
0x439E21: mov     edx, [edx+4]
0x439E24: lea     eax, [esp+20h+arg_0]
0x439E28: push    eax
0x439E29: push    edi
0x439E2A: mov     byte ptr [esp+28h+var_4], 1
0x439E2F: call    edx
0x439E31: test    al, al
0x439E33: jz      short loc_439E45
0x439E35: mov     eax, [esp+20h+arg_0]
0x439E39: mov     ecx, ioManager
0x439E3F: push    eax
0x439E40: call    sub_432130
0x439E45: mov     esi, [esp+20h+arg_0]
0x439E49: cmp     esi, ebx
0x439E4B: mov     edi, ds:InterlockedDecrement
0x439E51: mov     byte ptr [esp+20h+var_4], bl
0x439E55: jz      short loc_439E6F
0x439E57: lea     ecx, [esi+8]
0x439E5A: push    ecx; lpAddend
0x439E5B: call    edi ; InterlockedDecrement
0x439E5D: test    eax, eax
0x439E5F: jnz     short loc_439E6F
0x439E61: cmp     esi, ebx
0x439E63: jz      short loc_439E6F
0x439E65: mov     edx, [esi]
0x439E67: mov     eax, [edx]
0x439E69: push    1
0x439E6B: mov     ecx, esi
0x439E6D: call    eax
0x439E6F: mov     esi, [esp+20h+var_10]
0x439E73: cmp     esi, ebx
0x439E75: mov     [esp+20h+var_4], 0FFFFFFFFh
0x439E7D: jz      short loc_439E97
0x439E7F: lea     ecx, [esi+8]
0x439E82: push    ecx; lpAddend
0x439E83: call    edi ; InterlockedDecrement
0x439E85: test    eax, eax
0x439E87: jnz     short loc_439E97
0x439E89: cmp     esi, ebx
0x439E8B: jz      short loc_439E97
0x439E8D: mov     edx, [esi]
0x439E8F: mov     eax, [edx]
0x439E91: push    1
0x439E93: mov     ecx, esi
0x439E95: call    eax
0x439E97: mov     ecx, [esp+20h+var_C]
0x439E9B: mov     large fs:0, ecx
0x439EA2: pop     ecx
0x439EA3: pop     edi
0x439EA4: pop     esi
0x439EA5: pop     ebx
0x439EA6: add     esp, 10h
0x439EA9: retn    4

0x606A20: push    ecx
0x606A21: push    ebx
0x606A22: mov     ebx, [esp+8+arg_0]
0x606A26: push    esi
0x606A27: push    edi
0x606A28: mov     esi, ecx
0x606A2A: push    ebx
0x606A2B: mov     [esp+14h+var_4], esi
0x606A2F: call    sub_566380
0x606A34: mov     esi, [esi+3Ch]
0x606A37: cmp     dword ptr [esi+4], 0
0x606A3B: jz      short loc_606A56
0x606A3D: lea     ecx, [ecx+0]
0x606A40: mov     eax, [esi+4]
0x606A43: mov     edi, [eax+4]
0x606A46: push    eax
0x606A47: call    FormHeapFree
0x606A4C: add     esp, 4
0x606A4F: test    edi, edi
0x606A51: mov     [esi+4], edi
0x606A54: jnz     short loc_606A40
0x606A56: push    0; int
0x606A58: push    offset ??_R0?AVAlarmPackage@@@8; struct TypeDescriptor *
0x606A5D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x606A62: push    0; int
0x606A64: push    ebx; void *
0x606A65: mov     dword ptr [esi], 0
0x606A6B: call    OblivionDynamicCast
0x606A70: add     esp, 14h
0x606A73: test    eax, eax
0x606A75: jz      short loc_606AC1
0x606A77: mov     ebx, [eax+3Ch]
0x606A7A: test    ebx, ebx
0x606A7C: jz      short loc_606AC1
0x606A7E: mov     edi, edi
0x606A80: mov     edi, [ebx]
0x606A82: test    edi, edi
0x606A84: jz      short loc_606AC1
0x606A86: mov     eax, [esp+10h+var_4]
0x606A8A: mov     esi, [eax+3Ch]
0x606A8D: cmp     dword ptr [esi], 0
0x606A90: jz      short loc_606AB8
0x606A92: push    8; Size
0x606A94: call    FormHeapAlloc
0x606A99: add     esp, 4
0x606A9C: test    eax, eax
0x606A9E: jz      short loc_606AAD
0x606AA0: mov     ecx, [esi]
0x606AA2: mov     [eax], ecx
0x606AA4: mov     dword ptr [eax+4], 0
0x606AAB: jmp     short loc_606AAF
0x606AAD: xor     eax, eax
0x606AAF: mov     edx, [esi+4]
0x606AB2: mov     [eax+4], edx
0x606AB5: mov     [esi+4], eax
0x606AB8: mov     [esi], edi
0x606ABA: mov     ebx, [ebx+4]
0x606ABD: test    ebx, ebx
0x606ABF: jnz     short loc_606A80
0x606AC1: pop     edi
0x606AC2: pop     esi
0x606AC3: pop     ebx
0x606AC4: pop     ecx
0x606AC5: retn    4

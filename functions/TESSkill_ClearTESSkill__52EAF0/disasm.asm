0x52EAF0: fld1
0x52EAF2: push    ebx
0x52EAF3: push    esi
0x52EAF4: mov     esi, ecx
0x52EAF6: mov     dword ptr [esi+2Ch], 0FFFFFFFFh
0x52EAFD: mov     dword ptr [esi+34h], 0
0x52EB04: mov     dword ptr [esi+30h], 0
0x52EB0B: fst     dword ptr [esi+38h]
0x52EB0E: push    edi
0x52EB0F: fstp    dword ptr [esi+3Ch]
0x52EB12: lea     edi, [esi+40h]
0x52EB15: mov     ebx, 4
0x52EB1A: lea     ebx, [ebx+0]
0x52EB20: mov     eax, [edi]
0x52EB22: mov     edx, [eax]
0x52EB24: mov     ecx, edi
0x52EB26: call    edx
0x52EB28: add     edi, 8
0x52EB2B: sub     ebx, 1
0x52EB2E: jnz     short loc_52EB20
0x52EB30: mov     eax, [esi]
0x52EB32: mov     edx, [eax+90h]
0x52EB38: push    0
0x52EB3A: mov     ecx, esi
0x52EB3C: call    edx
0x52EB3E: add     esi, 10h
0x52EB41: jz      short loc_52EB6C
0x52EB43: cmp     dword ptr [esi+4], 0
0x52EB47: jz      short loc_52EB66
0x52EB49: lea     esp, [esp+0]
0x52EB50: mov     eax, [esi+4]
0x52EB53: mov     edi, [eax+4]
0x52EB56: push    eax
0x52EB57: call    FormHeapFree
0x52EB5C: add     esp, 4
0x52EB5F: test    edi, edi
0x52EB61: mov     [esi+4], edi
0x52EB64: jnz     short loc_52EB50
0x52EB66: mov     dword ptr [esi], 0
0x52EB6C: pop     edi
0x52EB6D: pop     esi
0x52EB6E: pop     ebx
0x52EB6F: retn

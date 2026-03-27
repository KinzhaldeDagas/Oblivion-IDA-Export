0x989F05: push    ebx
0x989F06: push    ebp
0x989F07: push    esi
0x989F08: mov     esi, [esp+0Ch+Memory]
0x989F0C: mov     eax, [esi+0BCh]
0x989F12: xor     ebp, ebp
0x989F14: cmp     eax, ebp
0x989F16: push    edi
0x989F17: jz      short loc_989F88
0x989F19: cmp     eax, offset off_B30DB4
0x989F1E: jz      short loc_989F88
0x989F20: mov     eax, [esi+0B0h]
0x989F26: cmp     eax, ebp
0x989F28: jz      short loc_989F88
0x989F2A: cmp     [eax], ebp
0x989F2C: jnz     short loc_989F88
0x989F2E: mov     eax, [esi+0B8h]
0x989F34: cmp     eax, ebp
0x989F36: jz      short loc_989F4F
0x989F38: cmp     [eax], ebp
0x989F3A: jnz     short loc_989F4F
0x989F3C: push    eax; Memory
0x989F3D: call    _free
0x989F42: push    dword ptr [esi+0BCh]
0x989F48: call    ___free_lconv_mon
0x989F4D: pop     ecx
0x989F4E: pop     ecx
0x989F4F: mov     eax, [esi+0B4h]
0x989F55: cmp     eax, ebp
0x989F57: jz      short loc_989F70
0x989F59: cmp     [eax], ebp
0x989F5B: jnz     short loc_989F70
0x989F5D: push    eax; Memory
0x989F5E: call    _free
0x989F63: push    dword ptr [esi+0BCh]
0x989F69: call    ___free_lconv_num
0x989F6E: pop     ecx
0x989F6F: pop     ecx
0x989F70: push    dword ptr [esi+0B0h]; Memory
0x989F76: call    _free
0x989F7B: push    dword ptr [esi+0BCh]; Memory
0x989F81: call    _free
0x989F86: pop     ecx
0x989F87: pop     ecx
0x989F88: mov     eax, [esi+0C0h]
0x989F8E: cmp     eax, ebp
0x989F90: jz      short loc_989FD6
0x989F92: cmp     [eax], ebp
0x989F94: jnz     short loc_989FD6
0x989F96: mov     eax, [esi+0C4h]
0x989F9C: sub     eax, 0FEh ; 'þ'
0x989FA1: push    eax; Memory
0x989FA2: call    _free
0x989FA7: mov     eax, [esi+0CCh]
0x989FAD: mov     edi, 80h ; '€'
0x989FB2: sub     eax, edi
0x989FB4: push    eax; Memory
0x989FB5: call    _free
0x989FBA: mov     eax, [esi+0D0h]
0x989FC0: sub     eax, edi
0x989FC2: push    eax; Memory
0x989FC3: call    _free
0x989FC8: push    dword ptr [esi+0C0h]; Memory
0x989FCE: call    _free
0x989FD3: add     esp, 10h
0x989FD6: lea     edi, [esi+0D4h]
0x989FDC: mov     eax, [edi]
0x989FDE: cmp     eax, offset off_B31EF0
0x989FE3: jz      short loc_989FFC
0x989FE5: cmp     [eax+0B4h], ebp
0x989FEB: jnz     short loc_989FFC
0x989FED: push    eax
0x989FEE: call    __free_lc_time
0x989FF3: push    dword ptr [edi]; Memory
0x989FF5: call    _free
0x989FFA: pop     ecx
0x989FFB: pop     ecx
0x989FFC: push    6
0x989FFE: lea     edi, [esi+50h]
0x98A001: pop     ebx
0x98A002: cmp     dword ptr [edi-8], offset aC_1
0x98A009: jz      short loc_98A01C
0x98A00B: mov     eax, [edi]
0x98A00D: cmp     eax, ebp
0x98A00F: jz      short loc_98A01C
0x98A011: cmp     [eax], ebp
0x98A013: jnz     short loc_98A01C
0x98A015: push    eax; Memory
0x98A016: call    _free
0x98A01B: pop     ecx
0x98A01C: cmp     [edi-4], ebp
0x98A01F: jz      short loc_98A033
0x98A021: mov     eax, [edi+4]
0x98A024: cmp     eax, ebp
0x98A026: jz      short loc_98A033
0x98A028: cmp     [eax], ebp
0x98A02A: jnz     short loc_98A033
0x98A02C: push    eax; Memory
0x98A02D: call    _free
0x98A032: pop     ecx
0x98A033: add     edi, 10h
0x98A036: dec     ebx
0x98A037: jnz     short loc_98A002
0x98A039: push    esi; Memory
0x98A03A: call    _free
0x98A03F: pop     ecx
0x98A040: pop     edi
0x98A041: pop     esi
0x98A042: pop     ebp
0x98A043: pop     ebx
0x98A044: retn

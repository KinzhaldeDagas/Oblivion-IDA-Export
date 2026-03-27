0x459AF0: sub     esp, 90h
0x459AF6: push    ebx
0x459AF7: mov     ebx, [esp+94h+arg_0]
0x459AFE: push    ebp
0x459AFF: mov     ebp, ecx
0x459B01: mov     ecx, ds:0B33B00h
0x459B07: mov     edx, [ecx+18h]
0x459B0A: push    esi
0x459B0B: mov     esi, [ebp+0]
0x459B0E: xor     eax, eax
0x459B10: shr     edx, 0Ch
0x459B13: test    dl, 1
0x459B16: push    edi
0x459B17: mov     [esp+0A0h+var_90], eax
0x459B1B: jnz     short loc_459B67
0x459B1D: mov     [esp+0A0h+var_8C], eax
0x459B21: lea     eax, [esp+0A0h+var_8C]
0x459B25: push    eax
0x459B26: push    ebx
0x459B27: mov     ecx, esi
0x459B29: call    NiTMap_GetAt
0x459B2E: mov     edi, [esp+0A0h+var_8C]
0x459B32: test    edi, edi
0x459B34: jz      short loc_459B67
0x459B36: cmp     dword ptr [edi+4], 0
0x459B3A: jnz     short loc_459B5F
0x459B3C: push    ebx
0x459B3D: mov     ecx, esi
0x459B3F: call    NiTMap_RemoveAt
0x459B44: mov     eax, [edi+4]
0x459B47: test    eax, eax
0x459B49: jz      short loc_459B56
0x459B4B: push    eax; void *
0x459B4C: mov     ecx, offset FormHeap
0x459B51: call    MemoryHeap_Free_checked
0x459B56: push    edi
0x459B57: call    FormHeapFree
0x459B5C: add     esp, 4
0x459B5F: mov     [esp+0A0h+var_90], 1
0x459B67: mov     edx, [ebp+0]
0x459B6A: mov     ecx, [edx+4]
0x459B6D: xor     edi, edi
0x459B6F: xor     eax, eax
0x459B71: cmp     ecx, edi
0x459B73: jbe     short loc_459B92
0x459B75: mov     esi, [edx+8]
0x459B78: mov     edx, esi
0x459B7A: lea     ebx, [ebx+0]
0x459B80: cmp     [edx], edi
0x459B82: jnz     loc_459C55
0x459B88: add     eax, 1
0x459B8B: add     edx, 4
0x459B8E: cmp     eax, ecx
0x459B90: jb      short loc_459B80
0x459B92: xor     eax, eax
0x459B94: cmp     eax, edi
0x459B96: mov     [esp+0A0h+var_78], eax
0x459B9A: jz      loc_459EB4
0x459BA0: lea     ecx, [esp+0A0h+var_84]
0x459BA4: push    ecx
0x459BA5: mov     ecx, [ebp+0]
0x459BA8: lea     edx, [esp+0A4h+var_8C]
0x459BAC: push    edx
0x459BAD: lea     eax, [esp+0A8h+var_78]
0x459BB1: push    eax
0x459BB2: mov     [esp+0ACh+var_84], edi
0x459BB6: mov     [esp+0ACh+var_8C], edi
0x459BBA: call    sub_452600
0x459BBF: mov     ecx, [esp+0A0h+var_84]
0x459BC3: mov     eax, [ecx]
0x459BC5: mov     ecx, [ecx+4]
0x459BC8: cmp     ecx, edi
0x459BCA: mov     [ebp+14h], ecx
0x459BCD: jz      loc_459EAA
0x459BD3: mov     edx, ds:0B33B00h
0x459BD9: mov     ecx, [edx+14h]
0x459BDC: mov     esi, [ecx]
0x459BDE: add     ecx, 4
0x459BE1: cmp     [esp+0A0h+arg_4], 0
0x459BE9: mov     [esp+0A0h+var_84], esi
0x459BED: mov     [edx+14h], ecx
0x459BF0: mov     cl, byte ptr [esp+0A0h+var_84+2]
0x459BF4: jnz     loc_459D07
0x459BFA: cmp     cl, 30h ; '0'
0x459BFD: jnz     loc_459D07
0x459C03: cmp     byte ptr [esp+0A0h+var_84+3], 5Bh ; '['
0x459C08: jnb     short loc_459C82
0x459C0A: test    al, 2
0x459C0C: jz      short loc_459C5D
0x459C0E: test    al, 4
0x459C10: jz      short loc_459C5D
0x459C12: mov     ecx, ds:0B33B00h
0x459C18: mov     eax, [ecx+14h]
0x459C1B: mov     esi, [eax+4]
0x459C1E: mov     edx, [eax]
0x459C20: mov     [esp+0A0h+var_80], esi
0x459C24: mov     esi, [eax+8]
0x459C27: add     eax, 0Ch
0x459C2A: mov     [ecx+14h], eax
0x459C2D: push    edx
0x459C2E: mov     ecx, ebp
0x459C30: mov     [esp+0A4h+var_7C], esi
0x459C34: call    sub_459950
0x459C39: cmp     eax, ebx
0x459C3B: jnz     loc_459EA5
0x459C41: mov     ecx, [esp+0A0h+var_8C]
0x459C45: push    1
0x459C47: push    ecx
0x459C48: mov     ecx, [ebp+0]
0x459C4B: call    sub_452DF0
0x459C50: jmp     loc_459EA5
0x459C55: mov     eax, [esi+eax*4]
0x459C58: jmp     loc_459B94
0x459C5D: mov     ecx, ds:0B33B00h
0x459C63: mov     eax, [ecx+14h]
0x459C66: mov     dx, [eax]
0x459C69: add     eax, 2
0x459C6C: mov     [ecx+14h], eax
0x459C6F: mov     word ptr [esp+0A0h+var_74], dx
0x459C74: mov     eax, [esp+0A0h+var_74]
0x459C78: push    eax
0x459C79: mov     ecx, ebp
0x459C7B: call    sub_459990
0x459C80: jmp     short loc_459C39
0x459C82: test    eax, 4000000h
0x459C87: jz      short loc_459CBE
0x459C89: mov     ecx, ds:0B33B00h
0x459C8F: mov     eax, [ecx+14h]
0x459C92: mov     edx, [eax]
0x459C94: add     eax, 4
0x459C97: mov     [ecx+14h], eax
0x459C9A: push    edx
0x459C9B: mov     ecx, ebp
0x459C9D: call    sub_459990
0x459CA2: cmp     eax, ebx
0x459CA4: jnz     loc_459EA5
0x459CAA: mov     edx, [esp+0A0h+var_8C]
0x459CAE: mov     ecx, [ebp+0]
0x459CB1: push    1
0x459CB3: push    edx
0x459CB4: call    sub_452DF0
0x459CB9: jmp     loc_459EA5
0x459CBE: test    eax, 2000000h
0x459CC3: jz      loc_459EA5
0x459CC9: mov     ecx, ds:0B33B00h
0x459CCF: mov     eax, [ecx+14h]
0x459CD2: mov     edx, [eax]
0x459CD4: mov     si, [eax+4]
0x459CD8: add     eax, 6
0x459CDB: mov     [ecx+14h], eax
0x459CDE: push    edx
0x459CDF: mov     ecx, ebp
0x459CE1: mov     word ptr [esp+0A4h+var_80], si
0x459CE6: call    sub_459990
0x459CEB: cmp     eax, ebx
0x459CED: jnz     loc_459EA5
0x459CF3: mov     eax, [esp+0A0h+var_8C]
0x459CF7: mov     ecx, [ebp+0]
0x459CFA: push    1
0x459CFC: push    eax
0x459CFD: call    sub_452DF0
0x459D02: jmp     loc_459EA5
0x459D07: cmp     cl, 31h ; '1'
0x459D0A: jz      short loc_459D1A
0x459D0C: cmp     cl, 32h ; '2'
0x459D0F: jz      short loc_459D1A
0x459D11: cmp     cl, 33h ; '3'
0x459D14: jnz     loc_459EA5
0x459D1A: xor     esi, esi
0x459D1C: test    al, 2
0x459D1E: jz      short loc_459D45
0x459D20: mov     edi, ds:0B33B00h
0x459D26: mov     esi, [edi+14h]
0x459D29: push    24h ; '$'; Size
0x459D2B: lea     ecx, [esp+0A4h+Dst]
0x459D2F: push    esi; Src
0x459D30: push    ecx; Dst
0x459D31: call    _memcpy
0x459D36: add     esp, 0Ch
0x459D39: add     esi, 24h ; '$'
0x459D3C: mov     [edi+14h], esi
0x459D3F: mov     esi, [esp+0A0h+var_48]
0x459D43: jmp     short loc_459DA9
0x459D45: test    al, 0Ch
0x459D47: jz      short loc_459D91
0x459D49: test    eax, eax
0x459D4B: mov     edi, ds:0B33B00h
0x459D51: mov     esi, [edi+14h]
0x459D54: jns     short loc_459D75
0x459D56: push    2Ch ; ','; Size
0x459D58: lea     edx, [esp+0A4h+var_2C]
0x459D5C: push    esi; Src
0x459D5D: push    edx; Dst
0x459D5E: call    _memcpy
0x459D63: add     esp, 0Ch
0x459D66: add     esi, 2Ch ; ','
0x459D69: mov     [edi+14h], esi
0x459D6C: mov     esi, [esp+0A0h+var_1C]
0x459D73: jmp     short loc_459DA9
0x459D75: push    1Ch; Size
0x459D77: lea     eax, [esp+0A4h+var_6C]
0x459D7B: push    esi; Src
0x459D7C: push    eax; Dst
0x459D7D: call    _memcpy
0x459D82: add     esp, 0Ch
0x459D85: add     esi, 1Ch
0x459D88: mov     [edi+14h], esi
0x459D8B: mov     esi, [esp+0A0h+var_6C]
0x459D8F: jmp     short loc_459DA9
0x459D91: test    eax, offset loc_800000
0x459D96: jz      short loc_459DA9
0x459D98: mov     ecx, ds:0B33B00h
0x459D9E: mov     eax, [ecx+14h]
0x459DA1: mov     esi, [eax]
0x459DA3: add     eax, 4
0x459DA6: mov     [ecx+14h], eax
0x459DA9: mov     ecx, ds:0B33A98h
0x459DAF: push    esi; _DWORD
0x459DB0: call    TESDataHandler_IsFormIDCreated?
0x459DB5: test    al, al
0x459DB7: jnz     short loc_459DCB
0x459DB9: mov     eax, [ebp+74h]
0x459DBC: cmp     esi, [eax+0Ch]
0x459DBF: jbe     short loc_459DC5
0x459DC1: xor     esi, esi
0x459DC3: jmp     short loc_459DCB
0x459DC5: mov     ecx, [eax+4]
0x459DC8: mov     esi, [ecx+esi*4]
0x459DCB: cmp     esi, ebx
0x459DCD: jnz     loc_459EA5
0x459DD3: mov     edx, ds:0B33B00h
0x459DD9: mov     eax, [edx+18h]
0x459DDC: mov     esi, [ebp+0]
0x459DDF: mov     ebx, [esp+0A0h+var_8C]
0x459DE3: shr     eax, 0Ch
0x459DE6: test    al, 1
0x459DE8: jnz     short loc_459E2A
0x459DEA: lea     ecx, [esp+0A0h+var_84]
0x459DEE: push    ecx
0x459DEF: push    ebx
0x459DF0: mov     ecx, esi
0x459DF2: mov     [esp+0A8h+var_84], 0
0x459DFA: call    NiTMap_GetAt
0x459DFF: mov     edi, [esp+0A0h+var_84]
0x459E03: test    edi, edi
0x459E05: jz      short loc_459E2A
0x459E07: push    ebx
0x459E08: mov     ecx, esi
0x459E0A: call    NiTMap_RemoveAt
0x459E0F: mov     eax, [edi+4]
0x459E12: test    eax, eax
0x459E14: jz      short loc_459E21
0x459E16: push    eax; void *
0x459E17: mov     ecx, offset FormHeap
0x459E1C: call    MemoryHeap_Free_checked
0x459E21: push    edi
0x459E22: call    FormHeapFree
0x459E27: add     esp, 4
0x459E2A: cmp     [esp+0A0h+arg_4], 0
0x459E32: jz      short loc_459E59
0x459E34: mov     eax, [esp+0A0h+arg_0]
0x459E3B: mov     ecx, [ebp+8]
0x459E3E: lea     edx, [esp+0A0h+var_70]
0x459E42: push    edx
0x459E43: push    eax
0x459E44: call    NiTMap_GetAt
0x459E49: test    al, al
0x459E4B: jz      short loc_459E99
0x459E4D: mov     ecx, [esp+0A0h+var_70]
0x459E51: push    ebx
0x459E52: call    BSSimpleList_Remove
0x459E57: jmp     short loc_459E99
0x459E59: mov     edx, [esp+0A0h+arg_0]
0x459E60: lea     ecx, [esp+0A0h+var_88]
0x459E64: push    ecx
0x459E65: mov     ecx, [ebp+0Ch]
0x459E68: push    edx
0x459E69: call    NiTMap_GetAt
0x459E6E: test    al, al
0x459E70: jz      short loc_459E99
0x459E72: mov     ecx, [esp+0A0h+var_88]
0x459E76: test    ecx, ecx
0x459E78: mov     eax, ecx
0x459E7A: jz      short loc_459E99
0x459E7C: lea     esp, [esp+0]
0x459E80: mov     edx, [eax]
0x459E82: test    edx, edx
0x459E84: jz      short loc_459E8A
0x459E86: cmp     [edx], ebx
0x459E88: jz      short loc_459E93
0x459E8A: mov     eax, [eax+4]
0x459E8D: test    eax, eax
0x459E8F: jnz     short loc_459E80
0x459E91: jmp     short loc_459E99
0x459E93: push    edx
0x459E94: call    BSSimpleList_Remove
0x459E99: add     [esp+0A0h+var_90], 1
0x459E9E: mov     ebx, [esp+0A0h+arg_0]
0x459EA5: xor     edi, edi
0x459EA7: mov     [ebp+14h], edi
0x459EAA: cmp     [esp+0A0h+var_78], edi
0x459EAE: jnz     loc_459BA0
0x459EB4: cmp     [esp+0A0h+arg_4], 0
0x459EBC: jz      short loc_459EE8
0x459EBE: mov     ecx, [ebp+8]
0x459EC1: lea     eax, [esp+0A0h+var_88]
0x459EC5: push    eax
0x459EC6: push    ebx
0x459EC7: call    NiTMap_GetAt
0x459ECC: test    al, al
0x459ECE: jz      short loc_459F19
0x459ED0: mov     esi, [esp+0A0h+var_88]
0x459ED4: cmp     [esi+4], edi
0x459ED7: jnz     short loc_459F19
0x459ED9: cmp     [esi], edi
0x459EDB: jnz     short loc_459F19
0x459EDD: mov     ecx, [ebp+8]
0x459EE0: push    ebx
0x459EE1: call    NiTMap_RemoveAt
0x459EE6: jmp     short loc_459F10
0x459EE8: lea     ecx, [esp+0A0h+var_88]
0x459EEC: push    ecx
0x459EED: mov     ecx, [ebp+0Ch]
0x459EF0: push    ebx
0x459EF1: call    NiTMap_GetAt
0x459EF6: test    al, al
0x459EF8: jz      short loc_459F19
0x459EFA: mov     esi, [esp+0A0h+var_88]
0x459EFE: cmp     [esi+4], edi
0x459F01: jnz     short loc_459F19
0x459F03: cmp     [esi], edi
0x459F05: jnz     short loc_459F19
0x459F07: mov     ecx, [ebp+0Ch]
0x459F0A: push    ebx
0x459F0B: call    NiTMap_RemoveAt
0x459F10: push    esi
0x459F11: call    FormHeapFree
0x459F16: add     esp, 4
0x459F19: mov     eax, [esp+0A0h+var_90]
0x459F1D: pop     edi
0x459F1E: pop     esi
0x459F1F: pop     ebp
0x459F20: pop     ebx
0x459F21: add     esp, 90h
0x459F27: retn    8

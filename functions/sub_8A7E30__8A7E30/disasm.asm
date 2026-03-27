0x8A7E30: sub     esp, 0Ch
0x8A7E33: push    ebx
0x8A7E34: push    esi
0x8A7E35: mov     esi, [esp+14h+arg_0]
0x8A7E39: push    edi
0x8A7E3A: push    esi
0x8A7E3B: mov     ebx, ecx
0x8A7E3D: call    sub_88BF40
0x8A7E42: mov     eax, ds:0BA7DA4h
0x8A7E47: push    eax; ArgList
0x8A7E48: call    TESOutput_PrintString
0x8A7E4D: movzx   edi, word ptr [esi+0Ah]
0x8A7E51: movzx   ecx, word ptr [esi+8]
0x8A7E55: add     esp, 4
0x8A7E58: cmp     edi, ecx
0x8A7E5A: mov     [esp+18h+arg_0], eax
0x8A7E5E: jb      short loc_8A7E6E
0x8A7E60: movzx   edx, word ptr [esi+0Eh]
0x8A7E64: add     edx, edi
0x8A7E66: push    edx
0x8A7E67: mov     ecx, esi
0x8A7E69: call    NiTArray_SetSize
0x8A7E6E: lea     eax, [esp+18h+arg_0]
0x8A7E72: push    eax
0x8A7E73: push    edi
0x8A7E74: mov     ecx, esi
0x8A7E76: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A7E7B: lea     ecx, [ebx+80h]
0x8A7E81: push    ecx
0x8A7E82: lea     edx, [esp+1Ch+var_C]
0x8A7E86: push    edx
0x8A7E87: call    sub_43F3E0
0x8A7E8C: add     esp, 8
0x8A7E8F: push    offset aWorldtotalsize; "WorldTotalSize"
0x8A7E94: lea     ecx, [esp+1Ch+var_C]
0x8A7E98: call    sub_707280
0x8A7E9D: movzx   edi, word ptr [esi+0Ah]
0x8A7EA1: mov     [esp+18h+arg_0], eax
0x8A7EA5: movzx   eax, word ptr [esi+8]
0x8A7EA9: cmp     edi, eax
0x8A7EAB: jb      short loc_8A7EBB
0x8A7EAD: movzx   ecx, word ptr [esi+0Eh]
0x8A7EB1: add     ecx, edi
0x8A7EB3: push    ecx
0x8A7EB4: mov     ecx, esi
0x8A7EB6: call    NiTArray_SetSize
0x8A7EBB: lea     edx, [esp+18h+arg_0]
0x8A7EBF: push    edx
0x8A7EC0: push    edi
0x8A7EC1: mov     ecx, esi
0x8A7EC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A7EC8: add     ebx, 90h
0x8A7ECE: lea     eax, [esp+18h+var_C]
0x8A7ED2: push    ebx
0x8A7ED3: push    eax
0x8A7ED4: call    sub_43F3E0
0x8A7ED9: add     esp, 8
0x8A7EDC: push    offset aBordersize; "BorderSize"
0x8A7EE1: lea     ecx, [esp+1Ch+var_C]
0x8A7EE5: call    sub_707280
0x8A7EEA: movzx   edi, word ptr [esi+0Ah]
0x8A7EEE: movzx   ecx, word ptr [esi+8]
0x8A7EF2: cmp     edi, ecx
0x8A7EF4: mov     [esp+18h+arg_0], eax
0x8A7EF8: jb      short loc_8A7F08
0x8A7EFA: movzx   edx, word ptr [esi+0Eh]
0x8A7EFE: add     edx, edi
0x8A7F00: push    edx
0x8A7F01: mov     ecx, esi
0x8A7F03: call    NiTArray_SetSize
0x8A7F08: lea     eax, [esp+18h+arg_0]
0x8A7F0C: push    eax
0x8A7F0D: push    edi
0x8A7F0E: mov     ecx, esi
0x8A7F10: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A7F15: pop     edi
0x8A7F16: pop     esi
0x8A7F17: pop     ebx
0x8A7F18: add     esp, 0Ch
0x8A7F1B: retn    4

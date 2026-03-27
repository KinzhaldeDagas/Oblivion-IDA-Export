0x4A8B10: push    ecx
0x4A8B11: push    ebx
0x4A8B12: push    esi
0x4A8B13: push    edi
0x4A8B14: push    offset aInisettings; "INISettings"
0x4A8B19: mov     ebx, ecx
0x4A8B1B: call    TESOutput_PrintString
0x4A8B20: mov     edi, [esp+14h+arg_0]
0x4A8B24: movzx   esi, word ptr [edi+0Ah]
0x4A8B28: mov     [esp+14h+var_4], eax
0x4A8B2C: movzx   eax, word ptr [edi+8]
0x4A8B30: add     esp, 4
0x4A8B33: cmp     esi, eax
0x4A8B35: jb      short loc_4A8B45
0x4A8B37: movzx   ecx, word ptr [edi+0Eh]
0x4A8B3B: add     ecx, esi
0x4A8B3D: push    ecx
0x4A8B3E: mov     ecx, edi
0x4A8B40: call    NiTArray_SetSize
0x4A8B45: lea     edx, [esp+10h+var_4]
0x4A8B49: push    edx
0x4A8B4A: push    esi
0x4A8B4B: mov     ecx, edi
0x4A8B4D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A8B52: lea     esi, [ebx+10Ch]
0x4A8B58: xor     ebx, ebx
0x4A8B5A: test    esi, esi
0x4A8B5C: jz      short loc_4A8B72
0x4A8B5E: mov     edi, edi
0x4A8B60: mov     ecx, [esi]
0x4A8B62: push    edi
0x4A8B63: call    Setting_BuildOutputArray
0x4A8B68: mov     esi, [esi+4]
0x4A8B6B: add     ebx, 1
0x4A8B6E: test    esi, esi
0x4A8B70: jnz     short loc_4A8B60
0x4A8B72: push    ebx; int
0x4A8B73: push    offset aTotalInisettin; "Total INISettings"
0x4A8B78: call    TESOutput_PrintLabeledUnsignedInt
0x4A8B7D: movzx   esi, word ptr [edi+0Ah]
0x4A8B81: mov     [esp+18h+arg_0], eax
0x4A8B85: movzx   eax, word ptr [edi+8]
0x4A8B89: add     esp, 8
0x4A8B8C: cmp     esi, eax
0x4A8B8E: jb      short loc_4A8B9E
0x4A8B90: movzx   ecx, word ptr [edi+0Eh]
0x4A8B94: add     ecx, esi
0x4A8B96: push    ecx
0x4A8B97: mov     ecx, edi
0x4A8B99: call    NiTArray_SetSize
0x4A8B9E: lea     edx, [esp+10h+arg_0]
0x4A8BA2: push    edx
0x4A8BA3: push    esi
0x4A8BA4: mov     ecx, edi
0x4A8BA6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A8BAB: pop     edi
0x4A8BAC: pop     esi
0x4A8BAD: mov     eax, ebx
0x4A8BAF: pop     ebx
0x4A8BB0: pop     ecx
0x4A8BB1: retn    4

0x75EAA0: push    ebx
0x75EAA1: push    esi
0x75EAA2: mov     esi, [esp+8+arg_0]
0x75EAA6: push    edi
0x75EAA7: push    esi
0x75EAA8: mov     edi, ecx
0x75EAAA: call    sub_752EC0
0x75EAAF: mov     eax, ds:0B41E68h
0x75EAB4: push    eax; ArgList
0x75EAB5: call    TESOutput_PrintString
0x75EABA: movzx   ebx, word ptr [esi+0Ah]
0x75EABE: movzx   ecx, word ptr [esi+8]
0x75EAC2: add     esp, 4
0x75EAC5: cmp     ebx, ecx
0x75EAC7: mov     [esp+0Ch+arg_0], eax
0x75EACB: jb      short loc_75EADB
0x75EACD: movzx   edx, word ptr [esi+0Eh]
0x75EAD1: add     edx, ebx
0x75EAD3: push    edx
0x75EAD4: mov     ecx, esi
0x75EAD6: call    NiTArray_SetSize
0x75EADB: lea     eax, [esp+0Ch+arg_0]
0x75EADF: push    eax
0x75EAE0: push    ebx
0x75EAE1: mov     ecx, esi
0x75EAE3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75EAE8: mov     eax, [edi+18h]
0x75EAEB: test    eax, eax
0x75EAED: jz      short loc_75EAF4
0x75EAEF: mov     eax, [eax+8]
0x75EAF2: jmp     short loc_75EAF9
0x75EAF4: mov     eax, offset aNone; "None"
0x75EAF9: push    eax; int
0x75EAFA: push    offset aFieldObject; "Field Object"
0x75EAFF: call    TESOutput_PrintLabeledString
0x75EB04: movzx   ebx, word ptr [esi+0Ah]
0x75EB08: movzx   ecx, word ptr [esi+8]
0x75EB0C: add     esp, 8
0x75EB0F: cmp     ebx, ecx
0x75EB11: mov     [esp+0Ch+arg_0], eax
0x75EB15: jb      short loc_75EB25
0x75EB17: movzx   edx, word ptr [esi+0Eh]
0x75EB1B: add     edx, ebx
0x75EB1D: push    edx
0x75EB1E: mov     ecx, esi
0x75EB20: call    NiTArray_SetSize
0x75EB25: lea     eax, [esp+0Ch+arg_0]
0x75EB29: push    eax
0x75EB2A: push    ebx
0x75EB2B: mov     ecx, esi
0x75EB2D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75EB32: fld     dword ptr [edi+1Ch]
0x75EB35: push    ecx
0x75EB36: fstp    [esp+10h+var_10]; float
0x75EB39: push    offset aMagnitude; "Magnitude"
0x75EB3E: call    TESOutput_PrintLabeledFloat
0x75EB43: movzx   ebx, word ptr [esi+0Ah]
0x75EB47: movzx   ecx, word ptr [esi+8]
0x75EB4B: add     esp, 8
0x75EB4E: cmp     ebx, ecx
0x75EB50: mov     [esp+0Ch+arg_0], eax
0x75EB54: jb      short loc_75EB64
0x75EB56: movzx   edx, word ptr [esi+0Eh]
0x75EB5A: add     edx, ebx
0x75EB5C: push    edx
0x75EB5D: mov     ecx, esi
0x75EB5F: call    NiTArray_SetSize
0x75EB64: lea     eax, [esp+0Ch+arg_0]
0x75EB68: push    eax
0x75EB69: push    ebx
0x75EB6A: mov     ecx, esi
0x75EB6C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75EB71: fld     dword ptr [edi+20h]
0x75EB74: push    ecx
0x75EB75: fstp    [esp+10h+var_10]; float
0x75EB78: push    offset aAttenuation; "Attenuation"
0x75EB7D: call    TESOutput_PrintLabeledFloat
0x75EB82: movzx   ebx, word ptr [esi+0Ah]
0x75EB86: movzx   ecx, word ptr [esi+8]
0x75EB8A: add     esp, 8
0x75EB8D: cmp     ebx, ecx
0x75EB8F: mov     [esp+0Ch+arg_0], eax
0x75EB93: jb      short loc_75EBA3
0x75EB95: movzx   edx, word ptr [esi+0Eh]
0x75EB99: add     edx, ebx
0x75EB9B: push    edx
0x75EB9C: mov     ecx, esi
0x75EB9E: call    NiTArray_SetSize
0x75EBA3: lea     eax, [esp+0Ch+arg_0]
0x75EBA7: push    eax
0x75EBA8: push    ebx
0x75EBA9: mov     ecx, esi
0x75EBAB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75EBB0: movzx   ecx, byte ptr [edi+24h]
0x75EBB4: push    ecx; char
0x75EBB5: push    offset aUseMaxDistance; "Use Max Distance"
0x75EBBA: call    TESOutput_PrintLabeledBool
0x75EBBF: movzx   ebx, word ptr [esi+0Ah]
0x75EBC3: movzx   edx, word ptr [esi+8]
0x75EBC7: add     esp, 8
0x75EBCA: cmp     ebx, edx
0x75EBCC: mov     [esp+0Ch+arg_0], eax
0x75EBD0: jb      short loc_75EBE0
0x75EBD2: movzx   eax, word ptr [esi+0Eh]
0x75EBD6: add     eax, ebx
0x75EBD8: push    eax
0x75EBD9: mov     ecx, esi
0x75EBDB: call    NiTArray_SetSize
0x75EBE0: lea     ecx, [esp+0Ch+arg_0]
0x75EBE4: push    ecx
0x75EBE5: push    ebx
0x75EBE6: mov     ecx, esi
0x75EBE8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75EBED: fld     dword ptr [edi+28h]
0x75EBF0: push    ecx
0x75EBF1: fstp    [esp+10h+var_10]; float
0x75EBF4: push    offset aMaxDistance; "Max Distance"
0x75EBF9: call    TESOutput_PrintLabeledFloat
0x75EBFE: movzx   edi, word ptr [esi+0Ah]
0x75EC02: movzx   edx, word ptr [esi+8]
0x75EC06: add     esp, 8
0x75EC09: cmp     edi, edx
0x75EC0B: mov     [esp+0Ch+arg_0], eax
0x75EC0F: jb      short loc_75EC1F
0x75EC11: movzx   eax, word ptr [esi+0Eh]
0x75EC15: add     eax, edi
0x75EC17: push    eax
0x75EC18: mov     ecx, esi
0x75EC1A: call    NiTArray_SetSize
0x75EC1F: lea     ecx, [esp+0Ch+arg_0]
0x75EC23: push    ecx
0x75EC24: push    edi
0x75EC25: mov     ecx, esi
0x75EC27: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75EC2C: pop     edi
0x75EC2D: pop     esi
0x75EC2E: pop     ebx
0x75EC2F: retn    4

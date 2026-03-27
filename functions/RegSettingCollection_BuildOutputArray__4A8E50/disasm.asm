0x4A8E50: push    ecx
0x4A8E51: push    ebx
0x4A8E52: push    esi
0x4A8E53: push    edi
0x4A8E54: push    offset aRegsettings; "RegSettings"
0x4A8E59: mov     ebx, ecx
0x4A8E5B: call    TESOutput_PrintString
0x4A8E60: mov     edi, [esp+14h+arg_0]
0x4A8E64: movzx   esi, word ptr [edi+0Ah]
0x4A8E68: mov     [esp+14h+var_4], eax
0x4A8E6C: movzx   eax, word ptr [edi+8]
0x4A8E70: add     esp, 4
0x4A8E73: cmp     esi, eax
0x4A8E75: jb      short loc_4A8E85
0x4A8E77: movzx   ecx, word ptr [edi+0Eh]
0x4A8E7B: add     ecx, esi
0x4A8E7D: push    ecx
0x4A8E7E: mov     ecx, edi
0x4A8E80: call    NiTArray_SetSize
0x4A8E85: lea     edx, [esp+10h+var_4]
0x4A8E89: push    edx
0x4A8E8A: push    esi
0x4A8E8B: mov     ecx, edi
0x4A8E8D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A8E92: lea     esi, [ebx+10Ch]
0x4A8E98: xor     ebx, ebx
0x4A8E9A: test    esi, esi
0x4A8E9C: jz      short loc_4A8EB2
0x4A8E9E: mov     edi, edi
0x4A8EA0: mov     ecx, [esi]
0x4A8EA2: push    edi
0x4A8EA3: call    Setting_BuildOutputArray
0x4A8EA8: mov     esi, [esi+4]
0x4A8EAB: add     ebx, 1
0x4A8EAE: test    esi, esi
0x4A8EB0: jnz     short loc_4A8EA0
0x4A8EB2: push    ebx; int
0x4A8EB3: push    offset aTotalRegsettin; "Total RegSettings"
0x4A8EB8: call    TESOutput_PrintLabeledUnsignedInt
0x4A8EBD: movzx   esi, word ptr [edi+0Ah]
0x4A8EC1: mov     [esp+18h+arg_0], eax
0x4A8EC5: movzx   eax, word ptr [edi+8]
0x4A8EC9: add     esp, 8
0x4A8ECC: cmp     esi, eax
0x4A8ECE: jb      short loc_4A8EDE
0x4A8ED0: movzx   ecx, word ptr [edi+0Eh]
0x4A8ED4: add     ecx, esi
0x4A8ED6: push    ecx
0x4A8ED7: mov     ecx, edi
0x4A8ED9: call    NiTArray_SetSize
0x4A8EDE: lea     edx, [esp+10h+arg_0]
0x4A8EE2: push    edx
0x4A8EE3: push    esi
0x4A8EE4: mov     ecx, edi
0x4A8EE6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A8EEB: pop     edi
0x4A8EEC: pop     esi
0x4A8EED: mov     eax, ebx
0x4A8EEF: pop     ebx
0x4A8EF0: pop     ecx
0x4A8EF1: retn    4

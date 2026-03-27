0x752EC0: push    ebx
0x752EC1: push    esi
0x752EC2: mov     esi, [esp+8+a2]
0x752EC6: push    edi
0x752EC7: push    esi; a2
0x752EC8: mov     edi, ecx
0x752ECA: call    sub_7009A0
0x752ECF: mov     eax, ds:0B40D08h
0x752ED4: push    eax; ArgList
0x752ED5: call    TESOutput_PrintString
0x752EDA: movzx   ebx, word ptr [esi+0Ah]
0x752EDE: movzx   ecx, word ptr [esi+8]
0x752EE2: add     esp, 4
0x752EE5: cmp     ebx, ecx
0x752EE7: mov     [esp+0Ch+a2], eax
0x752EEB: jb      short loc_752EFB
0x752EED: movzx   edx, word ptr [esi+0Eh]
0x752EF1: add     edx, ebx
0x752EF3: push    edx
0x752EF4: mov     ecx, esi
0x752EF6: call    NiTArray_SetSize
0x752EFB: lea     eax, [esp+0Ch+a2]
0x752EFF: push    eax
0x752F00: push    ebx
0x752F01: mov     ecx, esi
0x752F03: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752F08: mov     ecx, [edi+8]
0x752F0B: push    ecx; int
0x752F0C: push    offset aName; "Name"
0x752F11: call    TESOutput_PrintLabeledString
0x752F16: movzx   ebx, word ptr [esi+0Ah]
0x752F1A: movzx   edx, word ptr [esi+8]
0x752F1E: add     esp, 8
0x752F21: cmp     ebx, edx
0x752F23: mov     [esp+0Ch+a2], eax
0x752F27: jb      short loc_752F37
0x752F29: movzx   eax, word ptr [esi+0Eh]
0x752F2D: add     eax, ebx
0x752F2F: push    eax
0x752F30: mov     ecx, esi
0x752F32: call    NiTArray_SetSize
0x752F37: lea     ecx, [esp+0Ch+a2]
0x752F3B: push    ecx
0x752F3C: push    ebx
0x752F3D: mov     ecx, esi
0x752F3F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752F44: mov     edx, [edi+0Ch]
0x752F47: push    edx; int
0x752F48: push    offset aOrder; "Order"
0x752F4D: call    TESOutput_PrintLabeledUnsignedInt
0x752F52: movzx   ebx, word ptr [esi+0Ah]
0x752F56: mov     [esp+14h+a2], eax
0x752F5A: movzx   eax, word ptr [esi+8]
0x752F5E: add     esp, 8
0x752F61: cmp     ebx, eax
0x752F63: jb      short loc_752F73
0x752F65: movzx   ecx, word ptr [esi+0Eh]
0x752F69: add     ecx, ebx
0x752F6B: push    ecx
0x752F6C: mov     ecx, esi
0x752F6E: call    NiTArray_SetSize
0x752F73: lea     edx, [esp+0Ch+a2]
0x752F77: push    edx
0x752F78: push    ebx
0x752F79: mov     ecx, esi
0x752F7B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752F80: movzx   eax, byte ptr [edi+14h]
0x752F84: push    eax; char
0x752F85: push    offset aActive; "Active"
0x752F8A: call    TESOutput_PrintLabeledBool
0x752F8F: movzx   edi, word ptr [esi+0Ah]
0x752F93: movzx   ecx, word ptr [esi+8]
0x752F97: add     esp, 8
0x752F9A: cmp     edi, ecx
0x752F9C: mov     [esp+0Ch+a2], eax
0x752FA0: jb      short loc_752FB0
0x752FA2: movzx   edx, word ptr [esi+0Eh]
0x752FA6: add     edx, edi
0x752FA8: push    edx
0x752FA9: mov     ecx, esi
0x752FAB: call    NiTArray_SetSize
0x752FB0: lea     eax, [esp+0Ch+a2]
0x752FB4: push    eax
0x752FB5: push    edi
0x752FB6: mov     ecx, esi
0x752FB8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x752FBD: pop     edi
0x752FBE: pop     esi
0x752FBF: pop     ebx
0x752FC0: retn    4

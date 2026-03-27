0x706B30: push    ebx
0x706B31: push    esi
0x706B32: mov     esi, dword ptr [esp+8+arg_0]
0x706B36: push    edi
0x706B37: push    esi
0x706B38: mov     ebx, ecx
0x706B3A: call    sub_700B10
0x706B3F: mov     eax, ds:0B3F988h
0x706B44: push    eax; ArgList
0x706B45: call    TESOutput_PrintString
0x706B4A: movzx   edi, word ptr [esi+0Ah]
0x706B4E: movzx   ecx, word ptr [esi+8]
0x706B52: add     esp, 4
0x706B55: cmp     edi, ecx
0x706B57: mov     dword ptr [esp+0Ch+arg_0], eax
0x706B5B: jb      short loc_706B6B
0x706B5D: movzx   edx, word ptr [esi+0Eh]
0x706B61: add     edx, edi
0x706B63: push    edx
0x706B64: mov     ecx, esi
0x706B66: call    NiTArray_SetSize
0x706B6B: lea     eax, [esp+0Ch+arg_0]
0x706B6F: push    eax
0x706B70: push    edi
0x706B71: mov     ecx, esi
0x706B73: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x706B78: mov     cl, [ebx+18h]
0x706B7B: and     cl, 1
0x706B7E: mov     [esp+0Ch+arg_0], cl
0x706B82: mov     edx, dword ptr [esp+0Ch+arg_0]
0x706B86: push    edx; char
0x706B87: push    offset aM_bwireframe; "m_bWireframe"
0x706B8C: call    TESOutput_PrintLabeledBool
0x706B91: movzx   edi, word ptr [esi+0Ah]
0x706B95: mov     dword ptr [esp+14h+arg_0], eax
0x706B99: movzx   eax, word ptr [esi+8]
0x706B9D: add     esp, 8
0x706BA0: cmp     edi, eax
0x706BA2: jb      short loc_706BB2
0x706BA4: movzx   ecx, word ptr [esi+0Eh]
0x706BA8: add     ecx, edi
0x706BAA: push    ecx
0x706BAB: mov     ecx, esi
0x706BAD: call    NiTArray_SetSize
0x706BB2: lea     edx, [esp+0Ch+arg_0]
0x706BB6: push    edx
0x706BB7: push    edi
0x706BB8: mov     ecx, esi
0x706BBA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x706BBF: pop     edi
0x706BC0: pop     esi
0x706BC1: pop     ebx
0x706BC2: retn    4

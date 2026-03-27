0x4B35B0: push    ecx
0x4B35B1: mov     eax, ds:0B35ACCh
0x4B35B6: push    ebx
0x4B35B7: push    esi
0x4B35B8: push    edi
0x4B35B9: push    eax; ArgList
0x4B35BA: mov     ebx, ecx
0x4B35BC: call    TESOutput_PrintString
0x4B35C1: mov     esi, [esp+14h+arg_0]
0x4B35C5: movzx   edi, word ptr [esi+0Ah]
0x4B35C9: movzx   ecx, word ptr [esi+8]
0x4B35CD: add     esp, 4
0x4B35D0: cmp     edi, ecx
0x4B35D2: mov     [esp+10h+var_4], eax
0x4B35D6: jb      short loc_4B35E6
0x4B35D8: movzx   edx, word ptr [esi+0Eh]
0x4B35DC: add     edx, edi
0x4B35DE: push    edx
0x4B35DF: mov     ecx, esi
0x4B35E1: call    NiTArray_SetSize
0x4B35E6: lea     eax, [esp+10h+var_4]
0x4B35EA: push    eax
0x4B35EB: push    edi
0x4B35EC: mov     ecx, esi
0x4B35EE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4B35F3: mov     eax, [ebx+0Ch]
0x4B35F6: push    eax; int
0x4B35F7: push    offset aAttachedRef; "Attached Ref"
0x4B35FC: call    TESOutput_PrintLabeledPointer
0x4B3601: movzx   edi, word ptr [esi+0Ah]
0x4B3605: movzx   ecx, word ptr [esi+8]
0x4B3609: add     esp, 8
0x4B360C: cmp     edi, ecx
0x4B360E: mov     [esp+10h+arg_0], eax
0x4B3612: jb      short loc_4B3622
0x4B3614: movzx   edx, word ptr [esi+0Eh]
0x4B3618: add     edx, edi
0x4B361A: push    edx
0x4B361B: mov     ecx, esi
0x4B361D: call    NiTArray_SetSize
0x4B3622: lea     eax, [esp+10h+arg_0]
0x4B3626: push    eax
0x4B3627: push    edi
0x4B3628: mov     ecx, esi
0x4B362A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4B362F: pop     edi
0x4B3630: pop     esi
0x4B3631: pop     ebx
0x4B3632: pop     ecx
0x4B3633: retn    4

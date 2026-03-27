0x7212C0: push    ebx
0x7212C1: push    esi
0x7212C2: mov     esi, [esp+8+arg_0]
0x7212C6: push    edi
0x7212C7: push    esi
0x7212C8: mov     ebx, ecx
0x7212CA: call    sub_721730
0x7212CF: mov     eax, ds:0B3FD3Ch
0x7212D4: push    eax; ArgList
0x7212D5: call    TESOutput_PrintString
0x7212DA: movzx   edi, word ptr [esi+0Ah]
0x7212DE: movzx   ecx, word ptr [esi+8]
0x7212E2: add     esp, 4
0x7212E5: cmp     edi, ecx
0x7212E7: mov     [esp+0Ch+arg_0], eax
0x7212EB: jb      short loc_7212FB
0x7212ED: movzx   edx, word ptr [esi+0Eh]
0x7212F1: add     edx, edi
0x7212F3: push    edx
0x7212F4: mov     ecx, esi
0x7212F6: call    NiTArray_SetSize
0x7212FB: lea     eax, [esp+0Ch+arg_0]
0x7212FF: push    eax
0x721300: push    edi
0x721301: mov     ecx, esi
0x721303: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x721308: fld     dword ptr [ebx+0Ch]
0x72130B: push    ecx
0x72130C: fstp    [esp+10h+var_10]; float
0x72130F: push    offset aM_fvalue; "m_fValue"
0x721314: call    TESOutput_PrintLabeledFloat
0x721319: movzx   edi, word ptr [esi+0Ah]
0x72131D: movzx   ecx, word ptr [esi+8]
0x721321: add     esp, 8
0x721324: cmp     edi, ecx
0x721326: mov     [esp+0Ch+arg_0], eax
0x72132A: jb      short loc_72133A
0x72132C: movzx   edx, word ptr [esi+0Eh]
0x721330: add     edx, edi
0x721332: push    edx
0x721333: mov     ecx, esi
0x721335: call    NiTArray_SetSize
0x72133A: lea     eax, [esp+0Ch+arg_0]
0x72133E: push    eax
0x72133F: push    edi
0x721340: mov     ecx, esi
0x721342: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x721347: pop     edi
0x721348: pop     esi
0x721349: pop     ebx
0x72134A: retn    4

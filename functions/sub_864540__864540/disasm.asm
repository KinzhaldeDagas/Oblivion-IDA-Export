0x864540: push    ebx
0x864541: push    esi
0x864542: mov     esi, [esp+8+arg_0]
0x864546: push    edi
0x864547: push    esi
0x864548: mov     edi, ecx
0x86454A: call    sub_719C60
0x86454F: push    offset aPlocalbound; "pLocalBound"
0x864554: lea     ecx, [edi+0C4h]
0x86455A: call    sub_72A040
0x86455F: movzx   ebx, word ptr [esi+0Ah]
0x864563: mov     [esp+0Ch+arg_0], eax
0x864567: movzx   eax, word ptr [esi+8]
0x86456B: cmp     ebx, eax
0x86456D: jb      short loc_86457D
0x86456F: movzx   ecx, word ptr [esi+0Eh]
0x864573: add     ecx, ebx
0x864575: push    ecx
0x864576: mov     ecx, esi
0x864578: call    NiTArray_SetSize
0x86457D: lea     edx, [esp+0Ch+arg_0]
0x864581: push    edx
0x864582: push    ebx
0x864583: mov     ecx, esi
0x864585: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x86458A: movzx   eax, word ptr [edi+0C0h]
0x864591: push    eax; __int16
0x864592: push    offset aInstanceCount; "instance count"
0x864597: call    TESOutput_PrintLabeledUnsignedShort
0x86459C: movzx   edi, word ptr [esi+0Ah]
0x8645A0: movzx   ecx, word ptr [esi+8]
0x8645A4: add     esp, 8
0x8645A7: cmp     edi, ecx
0x8645A9: mov     [esp+0Ch+arg_0], eax
0x8645AD: jb      short loc_8645BD
0x8645AF: movzx   edx, word ptr [esi+0Eh]
0x8645B3: add     edx, edi
0x8645B5: push    edx
0x8645B6: mov     ecx, esi
0x8645B8: call    NiTArray_SetSize
0x8645BD: lea     eax, [esp+0Ch+arg_0]
0x8645C1: push    eax
0x8645C2: push    edi
0x8645C3: mov     ecx, esi
0x8645C5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8645CA: pop     edi
0x8645CB: pop     esi
0x8645CC: pop     ebx
0x8645CD: retn    4

0x8646C0: push    ebx
0x8646C1: push    esi
0x8646C2: mov     esi, [esp+8+arg_0]
0x8646C6: push    edi
0x8646C7: push    esi
0x8646C8: mov     edi, ecx
0x8646CA: call    sub_717790
0x8646CF: push    offset aPlocalbound; "pLocalBound"
0x8646D4: lea     ecx, [edi+0C4h]
0x8646DA: call    sub_72A040
0x8646DF: movzx   ebx, word ptr [esi+0Ah]
0x8646E3: mov     [esp+0Ch+arg_0], eax
0x8646E7: movzx   eax, word ptr [esi+8]
0x8646EB: cmp     ebx, eax
0x8646ED: jb      short loc_8646FD
0x8646EF: movzx   ecx, word ptr [esi+0Eh]
0x8646F3: add     ecx, ebx
0x8646F5: push    ecx
0x8646F6: mov     ecx, esi
0x8646F8: call    NiTArray_SetSize
0x8646FD: lea     edx, [esp+0Ch+arg_0]
0x864701: push    edx
0x864702: push    ebx
0x864703: mov     ecx, esi
0x864705: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x86470A: movzx   eax, word ptr [edi+0C0h]
0x864711: push    eax; __int16
0x864712: push    offset aInstanceCount; "instance count"
0x864717: call    TESOutput_PrintLabeledUnsignedShort
0x86471C: movzx   edi, word ptr [esi+0Ah]
0x864720: movzx   ecx, word ptr [esi+8]
0x864724: add     esp, 8
0x864727: cmp     edi, ecx
0x864729: mov     [esp+0Ch+arg_0], eax
0x86472D: jb      short loc_86473D
0x86472F: movzx   edx, word ptr [esi+0Eh]
0x864733: add     edx, edi
0x864735: push    edx
0x864736: mov     ecx, esi
0x864738: call    NiTArray_SetSize
0x86473D: lea     eax, [esp+0Ch+arg_0]
0x864741: push    eax
0x864742: push    edi
0x864743: mov     ecx, esi
0x864745: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x86474A: pop     edi
0x86474B: pop     esi
0x86474C: pop     ebx
0x86474D: retn    4

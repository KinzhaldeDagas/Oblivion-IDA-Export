0x6EB8C0: push    ebx
0x6EB8C1: push    esi
0x6EB8C2: mov     esi, [esp+8+arg_0]
0x6EB8C6: push    edi
0x6EB8C7: push    esi
0x6EB8C8: mov     ebx, ecx
0x6EB8CA: call    sub_6CDDB0
0x6EB8CF: mov     eax, ds:0B3EA50h
0x6EB8D4: push    eax; ArgList
0x6EB8D5: call    TESOutput_PrintString
0x6EB8DA: movzx   edi, word ptr [esi+0Ah]
0x6EB8DE: movzx   ecx, word ptr [esi+8]
0x6EB8E2: add     esp, 4
0x6EB8E5: cmp     edi, ecx
0x6EB8E7: mov     [esp+0Ch+arg_0], eax
0x6EB8EB: jb      short loc_6EB8FB
0x6EB8ED: movzx   edx, word ptr [esi+0Eh]
0x6EB8F1: add     edx, edi
0x6EB8F3: push    edx
0x6EB8F4: mov     ecx, esi
0x6EB8F6: call    NiTArray_SetSize
0x6EB8FB: lea     eax, [esp+0Ch+arg_0]
0x6EB8FF: push    eax
0x6EB900: push    edi
0x6EB901: mov     ecx, esi
0x6EB903: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EB908: movzx   ecx, byte ptr [ebx+30h]
0x6EB90C: push    ecx; char
0x6EB90D: push    offset aM_bboolvalue; "m_bBoolValue"
0x6EB912: call    sub_70FA00
0x6EB917: movzx   edi, word ptr [esi+0Ah]
0x6EB91B: movzx   edx, word ptr [esi+8]
0x6EB91F: add     esp, 8
0x6EB922: cmp     edi, edx
0x6EB924: mov     [esp+0Ch+arg_0], eax
0x6EB928: jb      short loc_6EB938
0x6EB92A: movzx   eax, word ptr [esi+0Eh]
0x6EB92E: add     eax, edi
0x6EB930: push    eax
0x6EB931: mov     ecx, esi
0x6EB933: call    NiTArray_SetSize
0x6EB938: lea     ecx, [esp+0Ch+arg_0]
0x6EB93C: push    ecx
0x6EB93D: push    edi
0x6EB93E: mov     ecx, esi
0x6EB940: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EB945: pop     edi
0x6EB946: pop     esi
0x6EB947: pop     ebx
0x6EB948: retn    4

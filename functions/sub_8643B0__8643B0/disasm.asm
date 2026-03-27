0x8643B0: push    esi
0x8643B1: mov     esi, [esp+4+arg_0]
0x8643B5: push    edi
0x8643B6: push    esi
0x8643B7: call    sub_7D9890
0x8643BC: mov     eax, ds:0B478A0h
0x8643C1: push    eax; ArgList
0x8643C2: call    TESOutput_PrintString
0x8643C7: movzx   edi, word ptr [esi+0Ah]
0x8643CB: movzx   ecx, word ptr [esi+8]
0x8643CF: add     esp, 4
0x8643D2: cmp     edi, ecx
0x8643D4: mov     [esp+8+arg_0], eax
0x8643D8: jb      short loc_8643E8
0x8643DA: movzx   edx, word ptr [esi+0Eh]
0x8643DE: add     edx, edi
0x8643E0: push    edx
0x8643E1: mov     ecx, esi
0x8643E3: call    NiTArray_SetSize
0x8643E8: lea     eax, [esp+8+arg_0]
0x8643EC: push    eax
0x8643ED: push    edi
0x8643EE: mov     ecx, esi
0x8643F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8643F5: pop     edi
0x8643F6: pop     esi
0x8643F7: retn    4

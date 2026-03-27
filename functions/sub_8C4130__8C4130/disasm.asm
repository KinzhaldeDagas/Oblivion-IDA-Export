0x8C4130: push    esi
0x8C4131: mov     esi, [esp+4+arg_0]
0x8C4135: push    edi
0x8C4136: push    esi
0x8C4137: call    sub_8AEAC0
0x8C413C: mov     eax, ds:0BA8104h
0x8C4141: push    eax; ArgList
0x8C4142: call    TESOutput_PrintString
0x8C4147: movzx   edi, word ptr [esi+0Ah]
0x8C414B: movzx   ecx, word ptr [esi+8]
0x8C414F: add     esp, 4
0x8C4152: cmp     edi, ecx
0x8C4154: mov     [esp+8+arg_0], eax
0x8C4158: jb      short loc_8C4168
0x8C415A: movzx   edx, word ptr [esi+0Eh]
0x8C415E: add     edx, edi
0x8C4160: push    edx
0x8C4161: mov     ecx, esi
0x8C4163: call    NiTArray_SetSize
0x8C4168: lea     eax, [esp+8+arg_0]
0x8C416C: push    eax
0x8C416D: push    edi
0x8C416E: mov     ecx, esi
0x8C4170: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C4175: pop     edi
0x8C4176: pop     esi
0x8C4177: retn    4

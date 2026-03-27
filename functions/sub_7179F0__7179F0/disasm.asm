0x7179F0: push    esi
0x7179F1: mov     esi, [esp+4+arg_0]
0x7179F5: push    edi
0x7179F6: push    esi
0x7179F7: call    sub_723620
0x7179FC: mov     eax, ds:0B3FCDCh
0x717A01: push    eax; ArgList
0x717A02: call    TESOutput_PrintString
0x717A07: movzx   edi, word ptr [esi+0Ah]
0x717A0B: movzx   ecx, word ptr [esi+8]
0x717A0F: add     esp, 4
0x717A12: cmp     edi, ecx
0x717A14: mov     [esp+8+arg_0], eax
0x717A18: jb      short loc_717A28
0x717A1A: movzx   edx, word ptr [esi+0Eh]
0x717A1E: add     edx, edi
0x717A20: push    edx
0x717A21: mov     ecx, esi
0x717A23: call    NiTArray_SetSize
0x717A28: lea     eax, [esp+8+arg_0]
0x717A2C: push    eax
0x717A2D: push    edi
0x717A2E: mov     ecx, esi
0x717A30: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x717A35: pop     edi
0x717A36: pop     esi
0x717A37: retn    4

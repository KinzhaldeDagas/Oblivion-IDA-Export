0x8A0180: push    esi
0x8A0181: mov     esi, [esp+4+arg_0]
0x8A0185: push    edi
0x8A0186: push    esi
0x8A0187: call    sub_89DA00
0x8A018C: mov     eax, ds:0BA7D44h
0x8A0191: push    eax; ArgList
0x8A0192: call    TESOutput_PrintString
0x8A0197: movzx   edi, word ptr [esi+0Ah]
0x8A019B: movzx   ecx, word ptr [esi+8]
0x8A019F: add     esp, 4
0x8A01A2: cmp     edi, ecx
0x8A01A4: mov     [esp+8+arg_0], eax
0x8A01A8: jb      short loc_8A01B8
0x8A01AA: movzx   edx, word ptr [esi+0Eh]
0x8A01AE: add     edx, edi
0x8A01B0: push    edx
0x8A01B1: mov     ecx, esi
0x8A01B3: call    NiTArray_SetSize
0x8A01B8: lea     eax, [esp+8+arg_0]
0x8A01BC: push    eax
0x8A01BD: push    edi
0x8A01BE: mov     ecx, esi
0x8A01C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A01C5: pop     edi
0x8A01C6: pop     esi
0x8A01C7: retn    4

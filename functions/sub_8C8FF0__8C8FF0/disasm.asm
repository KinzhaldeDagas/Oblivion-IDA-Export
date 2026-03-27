0x8C8FF0: push    esi
0x8C8FF1: mov     esi, [esp+4+arg_0]
0x8C8FF5: push    edi
0x8C8FF6: push    esi
0x8C8FF7: call    sub_8AEAC0
0x8C8FFC: mov     eax, ds:0BA8150h
0x8C9001: push    eax; ArgList
0x8C9002: call    TESOutput_PrintString
0x8C9007: movzx   edi, word ptr [esi+0Ah]
0x8C900B: movzx   ecx, word ptr [esi+8]
0x8C900F: add     esp, 4
0x8C9012: cmp     edi, ecx
0x8C9014: mov     [esp+8+arg_0], eax
0x8C9018: jb      short loc_8C9028
0x8C901A: movzx   edx, word ptr [esi+0Eh]
0x8C901E: add     edx, edi
0x8C9020: push    edx
0x8C9021: mov     ecx, esi
0x8C9023: call    NiTArray_SetSize
0x8C9028: lea     eax, [esp+8+arg_0]
0x8C902C: push    eax
0x8C902D: push    edi
0x8C902E: mov     ecx, esi
0x8C9030: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C9035: pop     edi
0x8C9036: pop     esi
0x8C9037: retn    4

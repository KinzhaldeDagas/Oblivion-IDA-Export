0x757AE0: push    esi
0x757AE1: mov     esi, [esp+4+arg_0]
0x757AE5: push    edi
0x757AE6: push    esi
0x757AE7: call    sub_75F730
0x757AEC: mov     eax, ds:0B4140Ch
0x757AF1: push    eax; ArgList
0x757AF2: call    TESOutput_PrintString
0x757AF7: movzx   edi, word ptr [esi+0Ah]
0x757AFB: movzx   ecx, word ptr [esi+8]
0x757AFF: add     esp, 4
0x757B02: cmp     edi, ecx
0x757B04: mov     [esp+8+arg_0], eax
0x757B08: jb      short loc_757B18
0x757B0A: movzx   edx, word ptr [esi+0Eh]
0x757B0E: add     edx, edi
0x757B10: push    edx
0x757B11: mov     ecx, esi
0x757B13: call    NiTArray_SetSize
0x757B18: lea     eax, [esp+8+arg_0]
0x757B1C: push    eax
0x757B1D: push    edi
0x757B1E: mov     ecx, esi
0x757B20: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757B25: pop     edi
0x757B26: pop     esi
0x757B27: retn    4
